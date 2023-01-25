#pragma once

#include "Util.h"


class Leaderboard_c
{
public:
	void Init();

};

extern Leaderboard_c Leaderboard;

void LeaderboardCmdFn(AMistOasisPlayerController* caller, const wchar_t* args);
void MyPointsCmdFn(AMistOasisPlayerController* caller, const wchar_t* args);
void SetPointsCmdFn(AMistOasisPlayerController* caller, const wchar_t* args);