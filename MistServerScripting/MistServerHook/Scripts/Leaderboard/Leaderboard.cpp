#include "Core/Config.h"
#include "Core/Util.h"
#include "Core/SQL_Utils.h"
#include "../ChatConsole/ChatConsole.h"


using namespace ChatConsole;
using namespace Config;
using namespace Util;
using namespace std;
using namespace SQL_Utils;



namespace LeaderboardScript
{

	int32 IsEnabled = 0;



	float getPlayerPoints(const wchar_t* playerName) {

		bool ret;

		ret = SQL_Connect();
		if (!ret) return -1.0f;

		wchar_t query[256];
		swprintf_s(query, L"SELECT * FROM leaderboard WHERE name = '%s'", playerName);

		ret = SQL_execQuery(query);
		if (!ret) return -1.0f;

		if (SQL_Fetch()) {
			float points;
			SQL_GetData(2, &points, sqlFloat, sizeof(points));
			return points;
		}

		return -1.0f;
	}



	bool addPlayerDB(const wchar_t* playerName) {

		bool ret;

		ret = SQL_Connect();
		if (!ret) return false;

		wchar_t query[256];
		swprintf_s(query, L"INSERT INTO leaderboard VALUES ('%s','100');", playerName);

		ret = SQL_execQuery(query);
		if (!ret) return false;

		return true;
	}




	void MyPointsCmdFn(AMistOasisPlayerController* caller, const wchar_t* args)
	{
		auto playerPtr = AController_GetPawnPlayer(caller);
		if (playerPtr == nullptr) return;

		bool ret;

		ret = SQL_Connect();
		if (!ret) {
			Util::ClientAddRedMsg(caller, L"MySQL Error");
			return;
		}

		wchar_t query[256];
		swprintf_s(query, L"SELECT * FROM leaderboard WHERE name = '%s'", playerPtr->PlayerState->PlayerNamePrivate.c_str());

		ret = SQL_execQuery(query);
		if (!ret) return;

		float points = 100.0f;
		if (SQL_Fetch()) {
			SQL_GetData(2, &points, sqlFloat, sizeof(points));
		}
		else {
			addPlayerDB(playerPtr->PlayerState->PlayerNamePrivate.c_str());
		}


		wchar_t textBuff[64];
		swprintf_s(textBuff, L"You have %.0f points", points);
		Util::ClientAddMsg(caller, textBuff);
	}


	void KillEventHandler(AMistCharacter* self, EMistKillReason reason, AMistCharacter* killer) {

		//get players data
		auto victimState = APawn_GetPlayerStateMist(self);
		auto victimController = APawn_GetControllerMist(self);

		if (self->KnockoutInstigator == nullptr) return;

		AMistOasisPlayerState* killerState = APawn_GetPlayerStateMist(self->KnockoutInstigator);
		AMistOasisPlayerController* killerController = APawn_GetControllerMist(self->KnockoutInstigator);

		//check if they are valid characters
		if (victimState == nullptr || killerState == nullptr) return;

		bool condition = true;
		condition &= (victimState != killerState); //it's not a suicide
		condition &= (victimState->bOnline && killerState->bOnline); //both online
		condition &= (reason == EMistKillReason::Weapon); //killed with a weapon
		condition &= (victimState->Clan.ID != killerState->Clan.ID) || (victimState->Clan.ID == 0) || (killerState->Clan.ID == 0); //from different clans, or solo players

		if (condition) {

			wchar_t query[256];
			bool ret;
			

			swprintf_s(query, L"SELECT * FROM leaderboard WHERE name = '%s'", victimState->PlayerNamePrivate.c_str());
			ret = SQL_execQuery(query);
			if (!ret) return;
			if (!SQL_Fetch()) {
				addPlayerDB(victimState->PlayerNamePrivate.c_str());
				ret = SQL_execQuery(query);
				if (!ret) return;
				if (!SQL_Fetch()) return;
			}
			float victimPoints;
			SQL_GetData(2, &victimPoints, sqlFloat, sizeof(victimPoints));
			swprintf_s(query, L"UPDATE leaderboard SET points=%.0f WHERE name='%s'", victimPoints * 0.88f, victimState->PlayerNamePrivate.c_str());
			ret = SQL_execQuery(query);
			if (!ret) return;



			swprintf_s(query, L"SELECT * FROM leaderboard WHERE name = '%s'", killerState->PlayerNamePrivate.c_str());
			ret = SQL_execQuery(query);
			if (!ret) return;
			if (!SQL_Fetch()) {
				addPlayerDB(killerState->PlayerNamePrivate.c_str());
				ret = SQL_execQuery(query);
				if (!ret) return;
				if (!SQL_Fetch()) return;
			}
			float killerPoints;
			SQL_GetData(2, &killerPoints, sqlFloat, sizeof(killerPoints));
			swprintf_s(query, L"UPDATE leaderboard SET points=%.0f WHERE name='%s'", killerPoints + (victimPoints * 0.1f), killerState->PlayerNamePrivate.c_str());
			ret = SQL_execQuery(query);
			if (!ret) return;


			//send info
			if (victimController != nullptr) {
				wchar_t textBuff[256];
				swprintf_s(textBuff, L"-%.0f points", victimPoints * 0.12f);
				Util::ClientAddRedMsg(victimController, textBuff);
			}

			if (killerController != nullptr) {
				wchar_t textBuff[256];
				swprintf_s(textBuff, L"+%.0f points", victimPoints * 0.1f);
				Util::ClientAddRedMsg(killerController, textBuff);
			}


		}

		return;
	}





	OnEngineInit(Init)
	{
		Config::RegisterVariable(L"Leaderboard.IsEnabled", IsEnabled, false);
		Config::LoadIniSection(L"ScriptHook", L"Leaderboard");




		RegisterCommand(EMistAccountTier::Default, L"toplist", [](auto caller, auto args)
			{

				bool ret;

				ret = SQL_Connect();
				if (!ret) return;

				wchar_t query[256];
				swprintf_s(query, L"SELECT * FROM leaderboard ORDER BY points DESC");

				ret = SQL_execQuery(query);
				if (!ret) return;

				//top 5 list
				uint8 listSize = 5;
				wchar_t textBuff[256];
				swprintf_s(textBuff, L"Top %u\n\n", listSize);
				for (uint8 i = 0; i < listSize; i++)
				{
					if (SQL_Fetch()) {
						wchar_t playerName[32];
						float points;
						SQL_GetData(1, &playerName, sqlFloat, sizeof(playerName));
						SQL_GetData(2, &points, sqlFloat, sizeof(points));
						swprintf_s(textBuff, L"%s%s", textBuff, playerName);
						for (size_t j = wcslen(playerName); j < 40; j++) swprintf_s(textBuff, L"%s ", textBuff);
						swprintf_s(textBuff, L"%s %5.0f\n", textBuff, points);
					}
				}
				FString str = FString(textBuff);
				FMistHudMessageOptions message = { FText(str), 30.0f, true, true };

				AMistOasisPlayerController_ClientAddHudMessage(caller, message);

			}, L"- print the top 5 players of leaderboard");




		RegisterCommand(EMistAccountTier::Trusted, L"leaderboard", [](auto caller, auto args)
			{

				if (args == nullptr) return;

				uint16 dataValueLen;
				const wchar_t* dataValue = Util::getArg(args, 1, &dataValueLen);

				uint16 dataNameLen;
				const wchar_t* dataName = Util::getArg(args, 2, &dataNameLen);

				if (dataValueLen == 0 || dataNameLen == 0 || dataValue == dataName || dataValue == nullptr || dataName == nullptr) return;

				bool ret;

				ret = SQL_Connect();
				if (!ret) {
					Util::ClientAddRedMsg(caller, L"MySQL Error");
					return;
				}

				wchar_t query[256];
				swprintf_s(query, L"SELECT * FROM leaderboard WHERE name = '%s'", caller->PlayerState->PlayerNamePrivate.c_str());

				ret = SQL_execQuery(query);
				if (!ret) return;

				float points = (float)(_wtof(dataValue));
				if (!SQL_Fetch()) {
					addPlayerDB(caller->PlayerState->PlayerNamePrivate.c_str());
					ret = SQL_execQuery(query);
					if (!ret) return;
					if (!SQL_Fetch()) return;
				}

				swprintf_s(query, L"UPDATE leaderboard SET points=%.0f WHERE name='%s'", points, caller->PlayerState->PlayerNamePrivate.c_str());

				ret = SQL_execQuery(query);
				if (!ret) return;

				wchar_t textBuff[64];
				swprintf_s(textBuff, L"%s now has %.0f points", dataName, points);
				Util::ClientAddMsg(caller, textBuff);

			}, L"<player name> - set the leaderboard points of a player");

	}




	Hook("?Kill@AMistCharacter@@QEAA_NW4EMistKillReason@@PEAV1@@Z",
		bool, KillEvent, AMistCharacter* victim, EMistKillReason reason, AMistCharacter* killer)
	{
		if (IsEnabled) KillEventHandler(victim, reason, killer);

		return OrigKillEvent(victim, reason, killer);
	}


}