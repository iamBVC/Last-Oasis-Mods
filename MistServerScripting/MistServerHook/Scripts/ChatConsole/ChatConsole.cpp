#include "ChatConsole.h"
#include "Core/Util.h"
#include "vector"

using namespace std;
using namespace Util;

namespace ChatConsole
{
	vector<Command> Commands;



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
			return !ConsumeCommand(player, cmd, args);
		}

		return true;
	}



	Hook("?ServerMapChat_Implementation@UMistPlayerMessengerComponent@@UEAAXAEBVFString@@@Z",
		bool, ServerMapChat, UMistPlayerMessengerComponent* self, const FString& msg)
	{
		wchar_t buff[512];
		swprintf_s(buff, L"%s : %s", ((AMistOasisPlayerController*)(self->OuterPrivate))->PlayerState->PlayerNamePrivate.c_str(), msg.c_str());
		Util::logOnFile(((AMistOasisPlayerController*)(self->OuterPrivate)), "chat", buff);

		auto status = CmdHandler(self, msg);
		if(status) return OrigServerMapChat(self, msg);
		return true;
	}



	void HelpCmd(AMistOasisPlayerController* player, const wchar_t* args)
	{
		auto pawn = APlayerController_GetPawnOrSpectator(player);
		auto state = static_cast<AMistOasisPlayerState*>(APawn_GetPlayerState(pawn));

		auto len = 0x100 * (Commands.size() + 1);
		auto buff = new wchar_t[len];
		wchar_t* ptr = buff;

		wchar_t header[] = L"Available commands:\n";
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
		RegisterCommand(EMistAccountTier::Trusted, L"help", HelpCmd, L"[command] - Display this message");
	}
}