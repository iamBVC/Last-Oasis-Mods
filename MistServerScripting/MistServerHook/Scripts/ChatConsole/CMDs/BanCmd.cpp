#include "../ChatConsole.h"
#include "Core/Core.h"
#include "Core/Util.h"
#include "Core/SQL_Utils.h"


using namespace std;
using namespace ChatConsole;
using namespace Util;
using namespace SQL_Utils;


extern FDateTime* date;


namespace BanCmd
{
	OnEngineInit(Init)
	{

		RegisterCommand(EMistAccountTier::Trusted, L"ban", [](AMistOasisPlayerController* caller, auto args)
			{

				//get params
				uint16 bufIDlen = 0;
				const wchar_t* bufID = Util::getArg(args, 1, &bufIDlen);
				if (bufID == nullptr) return;
				int64 playerID = _wtoi64(bufID);

				uint16 bufDurationLen = 0;
				const wchar_t* bufDuration = Util::getArg(args, 2, &bufDurationLen);
				if (bufDuration == nullptr) return;
				int banDuration = _wtoi(bufDuration);

				uint16 bufReasonLen = 0;
				const wchar_t* bufReason = Util::getArg(args, 3, &bufReasonLen);
				if (bufReason == nullptr) return;

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

							swprintf_s(query, L"INSERT INTO banned VALUES ('%s','0','');", playerStateMist->PlayerNamePrivate.c_str());
							SQL_execQuery(query);

							swprintf_s(query, L"UPDATE banned SET date='%lli' WHERE name='%s'", date->Ticks + (banDuration * ETimespan::TicksPerHour), playerStateMist->PlayerNamePrivate.c_str());
							SQL_execQuery(query);

							swprintf_s(query, L"UPDATE banned SET reason='%s' WHERE name='%s'", bufReason, playerStateMist->PlayerNamePrivate.c_str());
							SQL_execQuery(query);
							
							swprintf_s(query, L"Successfully banned player %s", playerStateMist->PlayerNamePrivate.c_str());
							ClientAddRedMsg(caller, query);

							auto playerController = APawn_GetControllerMist(playerState->PawnPrivate);
							if (playerController == nullptr) break;

							auto reason = FText(L"Banned by an in-game admin");
							AGameSession_BanPlayer(gameSession, playerController, &reason);

						} while (false);

						SQL_Disconnect();

						return;
					}
				}

			}, L"<ID> <hours> <reason> - ban a player");



		RegisterCommand(EMistAccountTier::Trusted, L"unban", [](AMistOasisPlayerController* caller, auto args)
			{

				//get params
				uint16 bufIDlen = 0;
				const wchar_t* bufID = Util::getArg(args, 1, &bufIDlen);
				if (bufID == nullptr) return;
				int64 playerID = _wtoi64(bufID);

				uint16 bufDurationLen = 0;
				const wchar_t* bufDuration = Util::getArg(args, 2, &bufDurationLen);
				if (bufDuration == nullptr) return;
				int banDuration = _wtoi(bufDuration);

				uint16 bufReasonLen = 0;
				const wchar_t* bufReason = Util::getArg(args, 3, &bufReasonLen);
				if (bufReason == nullptr) return;

				auto world = UObject_GetWorld(caller);
				auto gameSession = world->AuthorityGameMode->GameSession;
				auto playersArray = &world->GameState->PlayerArray;


				for (uint8_t i = 0; i < playersArray->Count; i++) {

					auto playerState = playersArray->Data[i];
					if (playerState == nullptr) continue;

					auto playerStateMist = APawn_GetPlayerStateMist(playerState->PawnPrivate);
					if (playerStateMist == nullptr) continue;

					if (playerID == playerStateMist->CharacterId) {

						bool ret;
						wchar_t query[256];

						ret = SQL_Connect();
						if (!ret) return;

						swprintf_s(query, L"UPDATE banned SET date='0' WHERE name='%s'", playerStateMist->PlayerNamePrivate.c_str());
						SQL_execQuery(query);

						swprintf_s(query, L"UPDATE banned SET reason='' WHERE name='%s'", playerStateMist->PlayerNamePrivate.c_str());
						SQL_execQuery(query);

						SQL_Disconnect();

						return;
					}
				}
				
			}, L"<ID> - unban a player");




	}




	Hook("?HandleStartingNewPlayer_Implementation@AMistOasisGameMode@@UEAAXPEAVAPlayerController@@@Z", void, HandleStartingNewPlayer, AMistOasisGameMode* gamemode, APlayerController* player)
	{
		OrigHandleStartingNewPlayer(gamemode, player);

		do {

			bool ret;
			static wchar_t query[256];

			ret = SQL_Connect();
			if (!ret) return;

			swprintf_s(query, L"SELECT * FROM banned WHERE name='%s'", player->PlayerState->PlayerNamePrivate.c_str());
			ret = SQL_execQuery(query);
			if (!ret) break;

			if (!SQL_Fetch()) break;

			static char reason[256] = {};
			int64 endDate = 0;

			SQL_GetData(2, &endDate, sqlInt, sizeof(endDate));
			SQL_GetData(3, &reason, sqlChar, sizeof(reason));

			if (endDate < date->Ticks) {
				break;
			}

			static wchar_t reasonW[256] = {};
			swprintf_s(reasonW, L"Banned %llih %llim for:\n%S ",
				(endDate - date->Ticks) / ETimespan::TicksPerHour, ((endDate - date->Ticks) / ETimespan::TicksPerMinute) % 60, reason);

			auto reasonText = FText(reasonW);

			auto world = UObject_GetWorld(player);
			auto gameSession = world->AuthorityGameMode->GameSession;
			AGameSession_BanPlayer(gameSession, player, &reasonText);


		} while (false);

		SQL_Disconnect();

	}



}