#pragma once

#include "Core/Util.h"


// DEFINES -------------------------------------------------------------
#define lobbyTimer	60.0f
#define matchTimer	180.0f
#define delayTimer	15.0f
#define arenaCount	3
//----------------------------------------------------------------------





// STRUCTS -------------------------------------------------------------
enum class EMatchState : uint8 {
	StartDelay,
	Started,
	//	firstRound,
	//	secondRound,
	EndDelay,
	Ended,
};

enum class EPlayerState : uint8 {
	Free,
	inLobby,
	inMatch,
};

enum class EPlayerDead : uint8 {
	Alive,
	Dead,
};

typedef struct {
	const wchar_t* Name;
	FVector Team1Spawn;
	FVector Team2Spawn;
	bool isAvailable;
}DuelSystemArena_t;

struct DuelSystemDB_t {
	int32 playerID;
	float points;
};

typedef struct {
	wchar_t name[32];
	EPlayerDead isDead;
}DuelSystemTeam_t;



typedef struct {
	std::vector<DuelSystemTeam_t> Team1;
	std::vector<DuelSystemTeam_t> Team2;
	EMatchState state;
	DuelSystemArena_t* arenaUsed;
	float timer;
}DuelSystemMatch_t;

typedef struct {
	uint8 targetNumber;
	std::vector<const wchar_t*> currentPlayers;
	float timer;
	bool starting;
}DuelSystemHUB_t;

struct DuelSystemPlayerState_t {
	wchar_t name[32];
	EPlayerState state;
	FVector oldLocation;
	std::vector<DuelSystemTeam_t>* team;
	DuelSystemHUB_t* HUB;
	DuelSystemMatch_t* match;
	float points;
};

struct DuelSystemManager_s {
	std::vector<DuelSystemMatch_t> matches;
	std::vector<DuelSystemHUB_t> HUBs;
	std::vector<DuelSystemPlayerState_t> states;
};
//----------------------------------------------------------------------



extern DuelSystemManager_s DuelSystemManager;
extern DuelSystemArena_t DuelSystemArena[arenaCount];

AMistPlayer* getPlayerPtr(UWorld* world, const wchar_t* name);
void setPlayerInvulnerability(UWorld* world, const wchar_t* name, bool value);
void setTeamsInvulnerability(UWorld * world, DuelSystemMatch_t* Match, bool value);
EPlayerState* getPlayerState(const wchar_t* name);
DuelSystemPlayerState_t* getPlayerStatePtr(const wchar_t* name);
void addPlayerState(const wchar_t* name);
EPlayerDead* getPlayerDeadState(const wchar_t* name);
uint8 getPlayerTeam(DuelSystemMatch_t* Match, const wchar_t* name);
void givePointsPlayer(const wchar_t* name, float points);
void givePointsTeam(std::vector<DuelSystemTeam_t>& team, float points);
bool isTeamDead(std::vector<DuelSystemTeam_t>& team);
void savePlayerLocation(AMistOasisPlayerController* caller);
void teleportTeams(UWorld* world, DuelSystemMatch_t* Match);
void teleportBackTeams(UWorld* world, DuelSystemMatch_t* Match);
void sendLobbyMessage(UWorld* world, DuelSystemHUB_t* HUB, const wchar_t* msg);
void sendMatchMessage(UWorld* world, DuelSystemMatch_t* Match, const wchar_t* msg);
void sendMatchCountdown(UWorld* world, DuelSystemMatch_t* Match, const wchar_t* msg, float duration);
void createMatchfromHUB(UWorld* world, DuelSystemMatch_t* Match, DuelSystemHUB_t* HUB);
