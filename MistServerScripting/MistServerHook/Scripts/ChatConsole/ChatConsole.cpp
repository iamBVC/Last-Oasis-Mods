#include "ChatConsole.h"
#include "Core/Config.h"
#include "Core/Util.h"
#include <vector>
#include <string>
#include <stdio.h>
#include "Core/SQL_Utils.h"

using namespace std;
using namespace Util;
using namespace SQL_Utils;

extern FDateTime* date;


namespace ChatConsole
{
	vector<Command> Commands;

	int32 IsFilterEnabled = 0;
	int32 logBlocked = 0;
	vector<FName> Blocked;


	void RegisterCommand(const Command& command)
	{
		if (Commands.size() == 0)
		{
			Commands.push_back(command);
			return;
		}

		if (find(Commands.begin(), Commands.end(), command) != Commands.end())
		{
			Error(L"[ChatConsole] RegisterCommand: %s already exists", command.Cmd);
			return;
		}

		Commands.insert(upper_bound(Commands.begin(), Commands.end(), command), command);
	}



	bool ConsumeCommand(AMistOasisPlayerController* player, const wchar_t* cmd, const wchar_t* args)
	{
		auto consumed = false;

		auto command = find(Commands.begin(), Commands.end(), cmd);
		if (command != Commands.end())
		{
			auto pawn = APlayerController_GetPawnOrSpectator(player);
			auto state = static_cast<AMistOasisPlayerState*>(APawn_GetPlayerState(pawn));

			if (state->Tier >= command->MinTier)
			{
				consumed = true;
				command->Handler(player, args);
			}
		}

		return consumed;
	}



	bool CmdHandler(UMistPlayerMessengerComponent* self, const FString& msg)
	{
		if (msg.Count > 2 && msg.Data[0] == L'/')
		{
			const auto cmd = &msg.Data[1];
			wchar_t* args = nullptr;

			for (auto i = 1; i < msg.Count - 1; i++)
			{
				if (msg.Data[i] == L' ')
				{
					msg.Data[i] = 0;
					args = &msg.Data[i + 1];
					if (args[0] == 0) args = nullptr;
					break;
				}
			}

			auto player = static_cast<AMistOasisPlayerController*>(self->OuterPrivate);
			return ConsumeCommand(player, cmd, args);
		}

		return false;
	}



	void lowercaseWords(wchar_t* msg) {
		if (msg == nullptr) return;

		for (auto i = 0; i < wcslen(msg); i++) {
			if (msg[i] >= L'A' && msg[i] <= L'Z') {
				msg[i] += 32;
			}
		}
	}


	//return true if contain a bad word
	bool filterBadWords(const FString& msg) {

		if (msg.c_str() == nullptr) return false;

		bool hasBadWords = false;

		static wchar_t message[1024];
		if (wcslen(msg.c_str()) + 1 >= 1024) return false;
		swprintf_s(message, msg.c_str());
		lowercaseWords(message);

		//for all the words in the blocked list
		for (auto i = 0; i < Blocked.size(); i++) {
			//cycle through all the bad words and filter them
			if (wcsstr(message, Blocked[i].c_str()) != nullptr) {
				hasBadWords = true;
				break;
			}
		}


		return hasBadWords;

	}




	bool isPlayerMuted(AMistOasisPlayerController* player) {

		do {

			bool ret;
			static wchar_t query[256];

			ret = SQL_Connect();
			if (!ret) return false;

			swprintf_s(query, L"SELECT * FROM muted WHERE name='%s'", player->PlayerState->PlayerNamePrivate.c_str());
			ret = SQL_execQuery(query);
			if (!ret) break;

			if (!SQL_Fetch()) break;

			int64 endDate = 0;

			SQL_GetData(2, &endDate, sqlInt, sizeof(endDate));

			if (endDate > date->Ticks) {
				SQL_Disconnect();
				return true;
			}

		} while (false);

		SQL_Disconnect();

		return false;
	}





	Hook("?ServerMapChat_Implementation@UMistPlayerMessengerComponent@@UEAAXAEBVFString@@@Z",
		bool, ServerMapChat, UMistPlayerMessengerComponent* self, const FString& msg)
	{
		static wchar_t buff[512];
		swprintf_s(buff, L"%s : %s", ((AMistOasisPlayerController*)(self->OuterPrivate))->PlayerState->PlayerNamePrivate.c_str(), msg.c_str());
		Util::logOnFile(((AMistOasisPlayerController*)(self->OuterPrivate)), "chat", buff);

		auto status = CmdHandler(self, msg);
		if (status == false) {

			if (isPlayerMuted((AMistOasisPlayerController*)self->OuterPrivate)) {
				Util::ClientAddRedMsg(((AMistOasisPlayerController*)(self->OuterPrivate)),
					L"You are muted by an admin.\nBe respectful of the community and don't insult anyone.");
				return true;
			}

			if (IsFilterEnabled) {
				status = filterBadWords(msg);
				if (status) {
					Util::ClientAddRedMsg(((AMistOasisPlayerController*)(self->OuterPrivate)),
						L"You can't send this message. Be respectful of the community and don't insult anyone. If there are any problems please make a video and contact our moderators on the discord server.");
					return true;
				}
			}

			return OrigServerMapChat(self, msg);
		}
		return true;
	}





	void HelpCmd(AMistOasisPlayerController* player, const wchar_t* args)
	{
		auto pawn = APlayerController_GetPawnOrSpectator(player);
		auto state = static_cast<AMistOasisPlayerState*>(APawn_GetPlayerState(pawn));

		auto len = 0x100 * (Commands.size() + 1);
		auto buff = new wchar_t[len];
		wchar_t* ptr = buff;

		const wchar_t header[] = L"Available commands:\n";
		memcpy(ptr, header, sizeof(header));
		auto chars = _countof(header) - 1;
		ptr += chars;
		len -= chars;

		for (const auto& registered : Commands)
		{
			if (state->Tier < registered.MinTier)
				continue;

			if (args && _wcsicmp(registered.Cmd, args) != 0)
				continue;

			auto tier = registered.MinTier > EMistAccountTier::Default
				? L"***"
				: L"";

			chars = swprintf_s(ptr, len, L"/%s %s\t%s\n",
				registered.Cmd, registered.Description
					? registered.Description
					: L"- No description available", tier);

			ptr += chars;
			len -= chars;

			if (args)
				break;
		}

		ptr[-1] = L'\0';
		ClientAddMsg(player, buff);
	}



	
	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Default, L"help", HelpCmd, L"[command] - Display this message");

		auto strBlocked = FHeapString();
		Config::RegisterVariable(L"ChatFilter.enabled", IsFilterEnabled, false);
		Config::RegisterVariable(L"ChatFilter.logBlocked", logBlocked, false);
		Config::RegisterVariable(L"ChatFilter.list", strBlocked, false);
		Config::LoadIniSection(L"ScriptHook", L"ChatFilter");
		Util::Tokenize(strBlocked, Blocked);







		RegisterCommand(EMistAccountTier::Trusted, L"mute", [](AMistOasisPlayerController* caller, auto args)
			{

				//get params
				uint16 bufIDlen = 0;
				const wchar_t* bufID = Util::getArg(args, 1, &bufIDlen);
				if (bufID == nullptr) return;
				int64 playerID = _wtoi64(bufID);

				uint16 bufDurationLen = 0;
				const wchar_t* bufDuration = Util::getArg(args, 2, &bufDurationLen);
				if (bufDuration == nullptr) return;
				int muteDuration = _wtoi(bufDuration);

				auto world = UObject_GetWorld(caller);
				auto gameSession = world->AuthorityGameMode->GameSession;
				auto playersArray = &world->GameState->PlayerArray;


				for (uint8_t i = 0; i < playersArray->Count; i++) {

					auto playerState = playersArray->Data[i];
					if (playerState == nullptr) continue;

					auto playerStateMist = APawn_GetPlayerStateMist(playerState->PawnPrivate);
					if (playerStateMist == nullptr) continue;

					if (playerID == playerStateMist->CharacterId) {

						do {

							bool ret;
							wchar_t query[256];

							ret = SQL_Connect();
							if (!ret) return;

							swprintf_s(query, L"INSERT INTO muted VALUES ('%s','0');", playerStateMist->PlayerNamePrivate.c_str());
							SQL_execQuery(query);

							swprintf_s(query, L"UPDATE muted SET date='%lli' WHERE name='%s'", date->Ticks + (muteDuration * ETimespan::TicksPerMinute), playerStateMist->PlayerNamePrivate.c_str());
							SQL_execQuery(query);

							swprintf_s(query, L"Successfully muted player %s", playerStateMist->PlayerNamePrivate.c_str());
							ClientAddRedMsg(caller, query);

							auto playerController = APawn_GetControllerMist(playerState->PawnPrivate);
							if (playerController == nullptr) break;

							ClientAddRedMsg(playerController, L"You have been muted by an admin");

						} while (false);

						SQL_Disconnect();

						return;
					}
				}

			}, L"<ID> <hours> - mute a player");





	}
}