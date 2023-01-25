#include "DuelSystemUtils.h"

#include <time.h>  
#include <random>


// DATA DECLARATION ----------------------------------------------------

DuelSystemManager_s DuelSystemManager;

DuelSystemArena_t DuelSystemArena[arenaCount]{ //list of closed arenas built in the map
	{L"Desert Arena",	{-133154, 374477, -47457},	{-131531, 376441, -47457},	1},
	{L"Lake Arena",		{21314, -306835, -61161},	{24973, -305299, -61153},	1},
	{L"Hill Arena",		{247302, 216041, -30067},	{244398, 217599, -30635},	1},
};

//----------------------------------------------------------------------





// UTILITY FUNCTIONS ---------------------------------------------------


AMistPlayer* getPlayerPtr(UWorld* world, const wchar_t* name) {

	TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
	UWorld_GetPlayerControllerIterator(world, &it);

	for (auto i = 0; i < it.Array->Count; i++) {
		auto playerPtr = AController_GetPawnPlayer(it.Array->Data[i].Get());
		if (playerPtr == nullptr) continue;
		if (playerPtr->PlayerState == nullptr) continue;
		if (wcscmp(playerPtr->PlayerState->PlayerNamePrivate.c_str(), name) == 0) return playerPtr;
	}

	return nullptr;
}


void setPlayerInvulnerability(UWorld* world, const wchar_t* name, bool value) {
	auto playerPtr = getPlayerPtr(world, name);
	if (playerPtr == nullptr) return;
	auto MistPlayerState = APawn_GetPlayerStateMist(playerPtr);
	if (MistPlayerState == nullptr) return;
	MistPlayerState->bInvulnerable = value;
}


void setTeamsInvulnerability(UWorld* world, DuelSystemMatch_t* Match, bool value) {

	for (auto i = 0; i < Match->Team1.size(); i++) {
		auto playerPtr = getPlayerPtr(world, Match->Team1[i].name);
		if (playerPtr == nullptr) continue;
		setPlayerInvulnerability(world, Match->Team1[i].name, value);
	}

	for (auto i = 0; i < Match->Team2.size(); i++) {
		auto playerPtr = getPlayerPtr(world, Match->Team2[i].name);
		if (playerPtr == nullptr) continue;
		setPlayerInvulnerability(world, Match->Team2[i].name, value);
	}

}


EPlayerState* getPlayerState(const wchar_t* name) {
	for (int i = 0; i < DuelSystemManager.states.size(); i++) {
		if (wcscmp(DuelSystemManager.states[i].name, name) == 0) {
			return &(DuelSystemManager.states[i].state);
		}
	}
	return nullptr;
}

DuelSystemPlayerState_t* getPlayerStatePtr(const wchar_t* name) {
	for (int i = 0; i < DuelSystemManager.states.size(); i++) {
		if (wcscmp(DuelSystemManager.states[i].name, name) == 0) {
			return &DuelSystemManager.states[i];
		}
	}
	return nullptr;
}


void addPlayerState(const wchar_t* name)
{
	auto statePtr = getPlayerStatePtr(name);
	if (statePtr == nullptr) {
		DuelSystemManager.states.push_back({});
		auto newState = &(DuelSystemManager.states.back());
		swprintf_s(newState->name, name);
		newState->state = EPlayerState::Free;
		newState->HUB = nullptr;
		newState->match = nullptr;
		newState->team = nullptr;
		newState->oldLocation.X = 0.0f;
		newState->oldLocation.Y = 0.0f;
		newState->oldLocation.Z = 0.0f;
		newState->points = 0.0f;
	}
}


EPlayerDead* getPlayerDeadState(const wchar_t* name) {

	for (int i = 0; i < DuelSystemManager.matches.size(); i++) {

		for (int j = 0; j < DuelSystemManager.matches[i].Team1.size(); j++) {
			if (wcscmp(DuelSystemManager.matches[i].Team1[j].name, name) == 0) {
				return &(DuelSystemManager.matches[i].Team1[j].isDead);
			}
		}

		for (int j = 0; j < DuelSystemManager.matches[i].Team2.size(); j++) {
			if (wcscmp(DuelSystemManager.matches[i].Team2[j].name, name) == 0) {
				return &(DuelSystemManager.matches[i].Team2[j].isDead);
			}
		}

	}

	return nullptr;
}


uint8 getPlayerTeam(DuelSystemMatch_t* Match, const wchar_t* name) {

	for (int i = 0; i < Match->Team1.size(); i++) {
		if (wcscmp(Match->Team1[i].name, name) == 0) return 1;
	}
	for (int i = 0; i < Match->Team2.size(); i++) {
		if (wcscmp(Match->Team2[i].name, name) == 0) return 2;
	}

	return 0;
}


void givePointsPlayer(const wchar_t* name, float points) {
	auto statePtr = getPlayerStatePtr(name);
	if (statePtr == nullptr) return;
	statePtr->points += points;
}


void givePointsTeam(std::vector<DuelSystemTeam_t>& team, float points) {
	for (uint8 i = 0; i < team.size(); i++) {
		givePointsPlayer(team[i].name, points);
	}
}


bool isTeamDead(std::vector<DuelSystemTeam_t>& team) {

	for (int i = 0; i < team.size(); i++) {
		if (team[i].isDead == EPlayerDead::Alive) return false;
	}

	return true;
}

void savePlayerLocation(AMistOasisPlayerController* caller) {
	auto statePtr = getPlayerStatePtr(caller->PlayerState->PlayerNamePrivate.c_str());
	if (statePtr == nullptr) return;
	statePtr->oldLocation.X = caller->PlayerCharacter->CharacterMovement->LastUpdateLocation.X;
	statePtr->oldLocation.Y = caller->PlayerCharacter->CharacterMovement->LastUpdateLocation.Y;
	statePtr->oldLocation.Z = caller->PlayerCharacter->CharacterMovement->LastUpdateLocation.Z;
}



void teleportTeams(UWorld* world, DuelSystemMatch_t* Match) {

	FRotator rotation = { 0, 0, 0 };

	for (auto i = 0; i < Match->Team1.size(); i++) {
		auto playerPtr = getPlayerPtr(world, Match->Team1[i].name);
		if (playerPtr == nullptr) continue;
		UMistHealthComponent_SetHealth(playerPtr->HealthComponent, playerPtr->HealthComponent->MaxHealth);
		AActor_K2_TeleportTo(playerPtr, Match->arenaUsed->Team1Spawn, rotation);
	}

	for (auto i = 0; i < Match->Team2.size(); i++) {
		auto playerPtr = getPlayerPtr(world, Match->Team2[i].name);
		if (playerPtr == nullptr) continue;
		UMistHealthComponent_SetHealth(playerPtr->HealthComponent, playerPtr->HealthComponent->MaxHealth);
		AActor_K2_TeleportTo(playerPtr, Match->arenaUsed->Team2Spawn, rotation);
	}

}


void teleportBackTeams(UWorld* world, DuelSystemMatch_t* Match) {

	FRotator rotation = { 0, 0, 0 };

	for (auto i = 0; i < Match->Team1.size(); i++) {
		auto playerPtr = getPlayerPtr(world, Match->Team1[i].name);
		if (playerPtr == nullptr) continue;
		auto statePtr = getPlayerStatePtr(Match->Team1[i].name);
		if (statePtr == nullptr) continue;
		UMistHealthComponent_SetHealth(playerPtr->HealthComponent, playerPtr->HealthComponent->MaxHealth);
		AActor_K2_TeleportTo(playerPtr, statePtr->oldLocation, rotation);
	}

	for (auto i = 0; i < Match->Team2.size(); i++) {
		auto playerPtr = getPlayerPtr(world, Match->Team2[i].name);
		if (playerPtr == nullptr) continue;
		auto statePtr = getPlayerStatePtr(Match->Team2[i].name);
		if (statePtr == nullptr) continue;
		AMistPlayer_InternalRevive(playerPtr, playerPtr);
		UMistHealthComponent_SetHealth(playerPtr->HealthComponent, playerPtr->HealthComponent->MaxHealth);
		AActor_K2_TeleportTo(playerPtr, statePtr->oldLocation, rotation);
	}

}



void sendLobbyMessage(UWorld* world, DuelSystemHUB_t* HUB, const wchar_t* msg)
{
	for (auto i = 0; i < HUB->currentPlayers.size(); i++) {
		auto playerPtr = getPlayerPtr(world, HUB->currentPlayers[i]);
		if (playerPtr == nullptr) continue;
		auto MistPlayerController = APawn_GetControllerMist(playerPtr);
		if (MistPlayerController == nullptr) continue;
		Util::ClientAddMsg(MistPlayerController, msg);
	}
}



void sendMatchMessage(UWorld* world, DuelSystemMatch_t* Match, const wchar_t* msg)
{
	for (auto i = 0; i < DuelSystemManager.states.size(); i++) {
		if (DuelSystemManager.states[i].match != Match) continue;
		auto playerPtr = getPlayerPtr(world, DuelSystemManager.states[i].name);
		if (playerPtr == nullptr) continue;
		auto MistPlayerController = APawn_GetControllerMist(playerPtr);
		if (MistPlayerController == nullptr) continue;
		Util::ClientAddMsg(MistPlayerController, msg);
	}
}



void sendMatchCountdown(UWorld* world, DuelSystemMatch_t* Match, const wchar_t* msg, float duration)
{
	for (auto i = 0; i < DuelSystemManager.states.size(); i++) {
		if (DuelSystemManager.states[i].match != Match) continue;
		auto playerPtr = getPlayerPtr(world, DuelSystemManager.states[i].name);
		if (playerPtr == nullptr) continue;
		auto MistPlayerController = APawn_GetControllerMist(playerPtr);
		if (MistPlayerController == nullptr) continue;
		FString id = FString(L"duelsystem");
		FMistHudCountdownOptions options = { FText(msg), FText(L""), duration, duration, false, false};
		AMistOasisPlayerController_ClientAddHudCountdown(MistPlayerController, id, options);
	}
}




void createMatchfromHUB(UWorld* world, DuelSystemMatch_t* Match, DuelSystemHUB_t* HUB) {

	Match->timer = delayTimer;
	Match->state = EMatchState::StartDelay;

	while (Match->arenaUsed == nullptr) {
		srand((unsigned)time(NULL));
		uint32 rndID = (uint32)(rand()) % (uint32)(arenaCount);
		if (DuelSystemArena[rndID].isAvailable == 1) {
			Match->arenaUsed = &DuelSystemArena[rndID];
		}

	}

	Match->arenaUsed->isAvailable = 0;

	auto rng = std::default_random_engine{};
	std::shuffle(std::begin(HUB->currentPlayers), std::end(HUB->currentPlayers), rng);

	for (int i = 0; i < HUB->targetNumber / 2; i++) {
		Match->Team1.push_back({});
		auto newTeam = &(Match->Team1.back());
		auto playerStatePtr = getPlayerStatePtr(HUB->currentPlayers[i]);
		playerStatePtr->state = EPlayerState::inMatch;
		playerStatePtr->match = Match;
		playerStatePtr->team = &Match->Team1;
		swprintf_s(newTeam->name, playerStatePtr->name);
		newTeam->isDead = EPlayerDead::Alive;

		auto playerPtr = getPlayerPtr(world, playerStatePtr->name);
		if (playerPtr == nullptr) continue;
		auto MistPlayerState = APawn_GetPlayerStateMist(playerPtr);
		if (MistPlayerState == nullptr) continue;
//		MistPlayerState->Clan.ID = 1;
//		MistPlayerState->Clan.Name = FString(L"Team 1");
	}

	for (int i = HUB->targetNumber / 2; i < HUB->targetNumber; i++) {
		Match->Team2.push_back({});
		auto newTeam = &(Match->Team2.back());
		auto playerStatePtr = getPlayerStatePtr(HUB->currentPlayers[i]);
		playerStatePtr->state = EPlayerState::inMatch;
		playerStatePtr->match = Match;
		playerStatePtr->team = &Match->Team2;
		swprintf_s(newTeam->name, playerStatePtr->name);
		newTeam->isDead = EPlayerDead::Alive;

		auto playerPtr = getPlayerPtr(world, playerStatePtr->name);
		if (playerPtr == nullptr) continue;
		auto MistPlayerState = APawn_GetPlayerStateMist(playerPtr);
		if (MistPlayerState == nullptr) continue;
//		MistPlayerState->Clan.ID = 2;
//		MistPlayerState->Clan.Name = FString(L"Team 2");
	}

	setTeamsInvulnerability(world, Match, true);
	teleportTeams(world, Match);

	wchar_t buff[64];
	swprintf_s(buff, L"Starting match in %.0f seconds", delayTimer);
	sendMatchMessage(world, Match, buff);
	sendMatchCountdown(world, Match, L"Match starts in:", delayTimer);
}

//----------------------------------------------------------------------

