#include "DuelSystemCmds.h"

#include "DuelSystemUtils.h"

//TODO FIX THIS

// COMMANDS ----------------------------------------------------------------------------------


void DuelSystemCreateMatchCmd(AMistOasisPlayerController* caller, const wchar_t* args) {

	if (caller == nullptr) return;

	if (DuelSystemManager.HUBs.size() >= arenaCount) {
		Util::ClientAddRedMsg(caller, L"Can't create new matches. No space available.");
		return;
	}

	if (args == nullptr) return;
	if (wcslen(args) > 1) return;
	uint8 TeamSize = (uint8)(_wtoi(args));
	if (TeamSize < 1 || TeamSize > 5) {
		Util::ClientAddRedMsg(caller, L"Select a Team size between 1 and 5");
		return;
	}

	addPlayerState(caller->PlayerState->PlayerNamePrivate.c_str());
	auto statePtr = getPlayerStatePtr(caller->PlayerState->PlayerNamePrivate.c_str());

	if (statePtr->state != EPlayerState::Free) {
		Util::ClientAddRedMsg(caller, L"You are already in a match lobby");
		return;
	}

	statePtr->state = EPlayerState::inLobby;
	savePlayerLocation(caller);

	DuelSystemManager.HUBs.push_back({});

	auto newHUB = &(DuelSystemManager.HUBs.back());
	newHUB->targetNumber = TeamSize * 2;
	newHUB->timer = lobbyTimer;
	newHUB->currentPlayers.push_back(caller->PlayerState->PlayerNamePrivate.c_str());
	statePtr->HUB = newHUB;

	wchar_t buff[128];
	swprintf_s(buff, L"%s created a %uvs%u match lobby. Join with /joinmatch", statePtr->name, TeamSize, TeamSize);

	auto worldPtr = AActor_GetWorld(caller);
	TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
	UWorld_GetPlayerControllerIterator(worldPtr, &it);
	//for each player in the world
	for (auto i = 0; i < it.Array->Count; i++) {
		auto playerPtr = AController_GetPawnPlayer(it.Array->Data[i].Get());
		Util::ClientAddMsg(APawn_GetControllerMist(playerPtr), buff);
	}
}


void DuelSystemAutoJoinCmd(AMistOasisPlayerController* caller, const wchar_t* args) {

	if (DuelSystemManager.HUBs.size() == 0) {
		Util::ClientAddRedMsg(caller, L"No match found");
		return;
	}

	if (DuelSystemManager.HUBs[0].currentPlayers.size() == DuelSystemManager.HUBs[0].targetNumber) {
		Util::ClientAddRedMsg(caller, L"Something went wrong, try again.");
		return;
	}

	addPlayerState(caller->PlayerState->PlayerNamePrivate.c_str());
	auto statePtr = getPlayerStatePtr(caller->PlayerState->PlayerNamePrivate.c_str());

	if (statePtr->state != EPlayerState::Free) {
		Util::ClientAddRedMsg(caller, L"You are already in a match lobby");
		return;
	}

	statePtr->state = EPlayerState::inLobby;
	savePlayerLocation(caller);

	statePtr->HUB = &DuelSystemManager.HUBs[0];
	DuelSystemManager.HUBs[0].currentPlayers.push_back(caller->PlayerState->PlayerNamePrivate.c_str());

	wchar_t buff[128];
	swprintf_s(buff, L"%s joined the match lobby.\n%llu/%u", caller->PlayerState->PlayerNamePrivate.c_str(), DuelSystemManager.HUBs[0].currentPlayers.size(), DuelSystemManager.HUBs[0].targetNumber);
	auto worldPtr = AActor_GetWorld(caller);
	sendLobbyMessage(worldPtr, &DuelSystemManager.HUBs[0], buff);
}



void DuelSystemPointsCmd(AMistOasisPlayerController* caller, const wchar_t* args) {
	auto statePtr = getPlayerStatePtr(caller->PlayerState->PlayerNamePrivate.c_str());
	if (statePtr == nullptr) {
		addPlayerState(caller->PlayerState->PlayerNamePrivate.c_str());
		statePtr = getPlayerStatePtr(caller->PlayerState->PlayerNamePrivate.c_str());
	}
	wchar_t buff[64];
	swprintf_s(buff, L"You have %.0f points.", statePtr->points);
	Util::ClientAddMsg(caller, buff);
}

//---------------------------------------------------------------------------------------------
