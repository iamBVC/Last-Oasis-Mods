#include "DuelSystem.h"


#include "Native/Symbol.h"
#include "DuelSystemUtils.h"


//TODO FIX THIS


// CALLBACKS ----------------------------------------------------------------------

bool onPlayerDead(AMistCharacter* self, EMistKillReason reason, AMistCharacter* killer) {

	if (self == nullptr || self->PlayerState == nullptr)
		return GHooker.OrigFn(onPlayerDead)(self, reason, killer);

	auto statePtr = getPlayerState(self->PlayerState->PlayerNamePrivate.c_str());

	if ((statePtr != nullptr) && (*statePtr == EPlayerState::inMatch)) {
		auto isDeadPtr = getPlayerDeadState(self->PlayerState->PlayerNamePrivate.c_str());
		*isDeadPtr = EPlayerDead::Dead;
	}

	return GHooker.OrigFn(onPlayerDead)(self, reason, killer);
}




void DuelSystemTick(UWorld* world, int level, float delta) {

	static float secTimer = 0.0f;

	secTimer += delta;

	if (secTimer >= 1.0f) {
		secTimer = 0.0f;


		//for all the existing Matches
		for (int i = 0; i < DuelSystemManager.matches.size(); i++) {

			//decrease match timer
			DuelSystemManager.matches[i].timer -= 1.0f;

			if (DuelSystemManager.matches[i].state == EMatchState::StartDelay) {
				if (DuelSystemManager.matches[i].timer <= 0) {
					setTeamsInvulnerability(world, &DuelSystemManager.matches[i], false);
					DuelSystemManager.matches[i].timer = matchTimer;
					DuelSystemManager.matches[i].state = EMatchState::Started;
					sendMatchMessage(world, &DuelSystemManager.matches[i], L"MATCH STARTED");
					sendMatchCountdown(world, &DuelSystemManager.matches[i], L"TIME LEFT:", matchTimer);
				}
			}

			if (DuelSystemManager.matches[i].state == EMatchState::Started) {

				if (isTeamDead(DuelSystemManager.matches[i].Team1) || isTeamDead(DuelSystemManager.matches[i].Team2)) {
					wchar_t buff[128];
					swprintf_s(buff, L"Match complete. Winner Team receives %.1f points", DuelSystemManager.matches[i].timer);
					sendMatchMessage(world, &DuelSystemManager.matches[i], buff);
					
					//give points
					if (isTeamDead(DuelSystemManager.matches[i].Team1)) {
						givePointsTeam(DuelSystemManager.matches[i].Team1, -DuelSystemManager.matches[i].timer);
						givePointsTeam(DuelSystemManager.matches[i].Team2, DuelSystemManager.matches[i].timer);
					}else{
						givePointsTeam(DuelSystemManager.matches[i].Team1, DuelSystemManager.matches[i].timer);
						givePointsTeam(DuelSystemManager.matches[i].Team2, -DuelSystemManager.matches[i].timer);
					}

					DuelSystemManager.matches[i].state = EMatchState::EndDelay;
					DuelSystemManager.matches[i].timer = delayTimer;
					sendMatchCountdown(world, &DuelSystemManager.matches[i], L"Teleport back in:", delayTimer);
				}

				if (DuelSystemManager.matches[i].timer <= 0) {
					DuelSystemManager.matches[i].state = EMatchState::Ended;
					sendMatchMessage(world, &DuelSystemManager.matches[i], L"MATCH TIMEOUT. No winners.");
				}

			}

			if (DuelSystemManager.matches[i].state == EMatchState::EndDelay) {
				if (DuelSystemManager.matches[i].timer <= 0) {
					DuelSystemManager.matches[i].state = EMatchState::Ended;
				}
			}

			if (DuelSystemManager.matches[i].state == EMatchState::Ended) {
				teleportBackTeams(world, &DuelSystemManager.matches[i]);
				DuelSystemManager.matches[i].arenaUsed->isAvailable = 1;

				for (int j = 0; j < DuelSystemManager.states.size(); j++) {
					auto playerStatePtr = &DuelSystemManager.states[j];
					if (playerStatePtr->match == &DuelSystemManager.matches[i]) {
						playerStatePtr->match = nullptr;
						playerStatePtr->team = nullptr;
						playerStatePtr->HUB = nullptr;
						playerStatePtr->state = EPlayerState::Free;
					}

					
				}

				DuelSystemManager.matches.erase(DuelSystemManager.matches.begin() + i);
				i--;
			}

		}


		//for all the existing HUB
		for (int i = 0; i < DuelSystemManager.HUBs.size(); i++) {

			//decrease lobby timer
			DuelSystemManager.HUBs[i].timer -= 1.0f;


			//create match if lobby is full
			if (DuelSystemManager.HUBs[i].currentPlayers.size() == DuelSystemManager.HUBs[i].targetNumber) {
				DuelSystemManager.HUBs[i].timer = 0.0f;
				DuelSystemManager.HUBs[i].starting = true;
				DuelSystemManager.matches.push_back({});
				auto newMatch = &(DuelSystemManager.matches.back());
				createMatchfromHUB(world, newMatch, &DuelSystemManager.HUBs[i]);
			}


			//delete expired lobby
			if (DuelSystemManager.HUBs[i].timer <= 0.0f) {

				if(DuelSystemManager.HUBs[i].starting == false)
					sendLobbyMessage(world, &DuelSystemManager.HUBs[0], L"Lobby timeout, player count not reached.");

				for (int j = 0; j < DuelSystemManager.HUBs[i].currentPlayers.size(); j++) {
					auto playerStatePtr = getPlayerStatePtr(DuelSystemManager.HUBs[i].currentPlayers[j]);
					if (DuelSystemManager.HUBs[i].starting == false) {
						playerStatePtr->state = EPlayerState::Free;
						playerStatePtr->match = nullptr;
						playerStatePtr->team = nullptr;
					}
					playerStatePtr->HUB = nullptr;
				}
				DuelSystemManager.HUBs.erase(DuelSystemManager.HUBs.begin() + i);
				i--;
			}


		}




	}

}


void DuelSystemInit() {
	funcToTick.push_back(DuelSystemTick);
	GHooker.Add(onPlayerDead, SYM_975F5A61F5A0EBF3DCDFED7143B7EC4F);
}

//----------------------------------------------------------------------

