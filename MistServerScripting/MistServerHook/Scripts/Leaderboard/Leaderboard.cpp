#include "Core/Config.h"
#include "Core/Util.h"
#include <stdio.h>


using namespace std;

namespace LeaderboardScript
{

	typedef struct {
		wchar_t playerName[32];
		float points;
	}leaderboardDB_t;

	leaderboardDB_t* leaderboardDB = nullptr;
	uint64 dbSize = 0;
	int32 IsEnabled = 0;



	leaderboardDB_t* getPlayerData(const wchar_t* playerName) {

		if (dbSize == 0 || leaderboardDB == nullptr) return nullptr;

		uint64 playerCount = dbSize / sizeof(leaderboardDB_t);

		for (uint32 i = 0; i < playerCount; i++) {
			if (wcscmp(leaderboardDB[i].playerName, playerName) == 0) return (&leaderboardDB[i]);
		}

		return nullptr;
	}



	bool addPlayerDB(const wchar_t* playerName, leaderboardDB_t** newDataPtr) {


		leaderboardDB_t* tempDB = (leaderboardDB_t*)malloc(dbSize + sizeof(leaderboardDB_t));

		if (tempDB == nullptr) return false;

		uint64 count = dbSize / sizeof(leaderboardDB_t);

		if (dbSize > 0) memcpy(tempDB, leaderboardDB, dbSize);

		swprintf_s(tempDB[count].playerName, playerName);
		tempDB[count].points = 100.0f;
		*newDataPtr = &tempDB[count];

		if (leaderboardDB != nullptr) free(leaderboardDB);
		leaderboardDB = tempDB;

		dbSize += sizeof(leaderboardDB_t);

		return true;
	}




	void MyPointsCmdFn(AMistOasisPlayerController* caller, const wchar_t* args)
	{
		auto playerPtr = AController_GetPawnPlayer(caller);

		if (playerPtr == nullptr) return;

		leaderboardDB_t* playerData = getPlayerData(playerPtr->PlayerState->PlayerNamePrivate.c_str());

		if (playerData == nullptr) {
			addPlayerDB(playerPtr->PlayerState->PlayerNamePrivate.c_str(), &playerData);
		}

		wchar_t textBuff[64];
		swprintf_s(textBuff, L"You have %.0f points", playerData->points);
		Util::ClientAddMsg(caller, textBuff);
	}




	void SetPointsCmdFn(AMistOasisPlayerController* caller, const wchar_t* args)
	{

		if (args == nullptr) return;

		uint16 dataValueLen;
		const wchar_t* dataValue = Util::getArg(args, 1, &dataValueLen);

		uint16 dataNameLen;
		const wchar_t* dataName = Util::getArg(args, 2, &dataNameLen);

		if (dataValueLen == 0 || dataNameLen == 0 || dataValue == dataName || dataValue == nullptr || dataName == nullptr) return;

		leaderboardDB_t* playerData = getPlayerData(dataName);

		if (playerData == nullptr) {
			addPlayerDB(dataName, &playerData);
		}

		playerData->points = (float)(_wtof(dataValue));

		wchar_t textBuff[64];
		swprintf_s(textBuff, L"%s now has %.0f points", dataName, playerData->points);
		Util::ClientAddMsg(caller, textBuff);

		bool status = Util::saveOnFile("leaderboard.bin", dbSize, leaderboardDB);
		if (!status) Warning(L"Can't save Leaderboard DB");
	}




	void LeaderboardCmdFn(AMistOasisPlayerController* caller, const wchar_t* args)
	{

		uint64 numPlayers = dbSize / sizeof(leaderboardDB_t);
		const uint8 listSize = 5;
		leaderboardDB_t topList[listSize];
		memset(topList, 0, listSize * sizeof(leaderboardDB_t));

		//fill top 5 list
		for (uint8 i = 0; i < numPlayers; i++)
		{
			for (uint8 j = 0; j < listSize; j++)
			{
				if (leaderboardDB[i].points >= topList[j].points) {
					memcpy(&topList[j + 1], &topList[j], (listSize - j - 1) * sizeof(leaderboardDB_t));
					topList[j].points = leaderboardDB[i].points;
					swprintf_s(topList[j].playerName, leaderboardDB[i].playerName);
					break;
				}
			}
		}

		wchar_t textBuff[256];
		swprintf_s(textBuff, L"Top %u\n\n", listSize);
		for (uint8 i = 0; i < listSize; i++)
		{
			if (wcslen(topList[i].playerName) > 0) {
				swprintf_s(textBuff, L"%s%s", textBuff, topList[i].playerName);
				for (size_t j = wcslen(topList[i].playerName); j < 40; j++) swprintf_s(textBuff, L"%s ", textBuff);
				swprintf_s(textBuff, L"%s %5.0f\n", textBuff, topList[i].points);
			}
		}
		FString str = FString(textBuff);
		FMistHudMessageOptions message = { FText(str), 30.0f, true, true };

		AMistOasisPlayerController_ClientAddHudMessage(caller, message);
	}






	bool KillEvent(AMistCharacter* self, EMistKillReason reason, AMistCharacter* killer) {

		//get players data
		auto victimState = APawn_GetPlayerStateMist(self);
		auto victimController = APawn_GetControllerMist(self);

		if (self->KnockoutInstigator == nullptr)
			return GHooker.OrigFn(KillEvent)(self, reason, killer);

		AMistOasisPlayerState* killerState = APawn_GetPlayerStateMist(self->KnockoutInstigator);
		AMistOasisPlayerController* killerController = APawn_GetControllerMist(self->KnockoutInstigator);

		if (victimState == nullptr || killerState == nullptr) //check if they are valid characters
			return GHooker.OrigFn(KillEvent)(self, reason, killer);

		bool condition = true;
		//	condition &= (victimState != killerState); //it's not a suicide
		condition &= (victimState->bOnline && killerState->bOnline); //both online
		//	condition &= (reason == EMistKillReason::Weapon); //killed with a weapon
		condition &= (victimState->Clan.ID != killerState->Clan.ID) || (victimState->Clan.ID == 0) || (killerState->Clan.ID == 0); //from different clans, or solo players

		if (condition) {


			//get data pointers in the DB
			leaderboardDB_t* victimData = getPlayerData(victimState->PlayerNamePrivate.c_str());
			leaderboardDB_t* killerData = getPlayerData(killerState->PlayerNamePrivate.c_str());

			//add in the DB new players
			if (victimData == nullptr) addPlayerDB(victimState->PlayerNamePrivate.c_str(), &victimData);
			if (killerData == nullptr) addPlayerDB(killerState->PlayerNamePrivate.c_str(), &killerData);


			//refresh pointers
			victimData = getPlayerData(victimState->PlayerNamePrivate.c_str());
			killerData = getPlayerData(killerState->PlayerNamePrivate.c_str());


			//calc point changes
			float victimChange = victimData->points * 0.12f;
			float killerChange = victimData->points * 0.1f;


			//change points
			victimData->points -= victimChange;
			killerData->points += killerChange;

			if (victimData->points < 0.0f) victimData->points = 0.0f;
			if (killerData->points < 0.0f) killerData->points = 0.0f;


			//send info
			if (victimController != nullptr) {
				wchar_t textBuff[256];
				swprintf_s(textBuff, L"-%.0f points", victimChange);
				Util::ClientAddRedMsg(victimController, textBuff);
			}

			if (killerController != nullptr) {
				wchar_t textBuff[256];
				swprintf_s(textBuff, L"+%.0f points", killerChange);
				Util::ClientAddRedMsg(killerController, textBuff);
			}


			//save DB
			bool status = Util::saveOnFile("leaderboard.bin", dbSize, leaderboardDB);
			if (!status) Warning(L"Can't save Leaderboard DB");
		}

		return GHooker.OrigFn(KillEvent)(self, reason, killer);
	}



	OnEngineInit(Init)
	{
		Config::RegisterVariable(L"Leaderboard.IsEnabled", IsEnabled, false);
		Config::LoadIniSection(L"ScriptHook", L"Leaderboard");


		//Load DB
		bool status = Util::readFile("leaderboard.bin", &dbSize, (void**)(&leaderboardDB));


		if (!status) {
			Warning(L"Leaderboard DB not found. Creating a new one.");
		}


		//hook function
		GHooker.Add(KillEvent, SYM_975F5A61F5A0EBF3DCDFED7143B7EC4F);

		//sort DB for faster transfers
		uint64 numPlayers = dbSize / sizeof(leaderboardDB_t);
		for (uint8 i = 0; i < numPlayers; i++)
		{
			for (uint8 j = 0; j < numPlayers; j++)
			{
				//todo
			}
		}


	}



}