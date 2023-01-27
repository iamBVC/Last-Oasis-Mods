#include "CmdsList.h"

#include "Console.h"
#include <Config.h>


#include "CMDs/HelpCmd.h"
#include "CMDs/PopCmd.h"
#include "CMDs/BroadcastCmd.h"
#include "CMDs/AnnounceCmd.h"
#include "CMDs/RenameWalkerCmd.h"
#include "CMDs/WalkerInfoCmd.h"
#include "CMDs/PlayerInfoCmd.h"
#include "CMDs/GiveFlobsCmd.h"
#include "CMDs/SetWalkerParamCmd.h"
#include "CMDs/KickCmd.h"
#include "CMDs/CountdownCmd.h"
#include "CMDs/NotifyCmd.h"
#include "CMDs/HudMessageCmd.h"
#include "CMDs/ShutdownServerCmd.h"
#include "../Leaderboard/Leaderboard.h"
#include "../DuelSystem/DuelSystemCmds.h"


namespace CmdsList {

	const cmdTypedef LUT[] = {

//				cmdName				CmdFnPtr					adminLevel		nParams	description										example									params

				{L"help",			HelpCmdFn,					1,				1,		L"Prints the help related to the keyword",		L"help <cmdName>",						L"cmdName: name of the command"},
				{L"pop",			PopCmdFn,					1,				0,		L"Get the number of online players in the map",	L"pop",									L""},
				{L"broadcast",		BroadcastCmdFn,				1,				1,		L"Send a red message to all the players",		L"broadcast <msg>",						L"msg: message to send"},
				{L"announce",		AnnounceCmdFn,				1,				1,		L"Send a white message to all the players",		L"announce <msg>",						L"msg: message to send"},
				{L"renamewalker",	RenameWalkerCmdFn,			1,				1,		L"rename the walker you are driving",			L"renamewalker <walkerName>",			L"walkerName: name to set"},
				{L"walkerinfo",		WalkerInfoCmdFn,			1,				1,		L"prints some info of your walker",				L"walkerinfo",							L""},
				{L"playerinfo",		PlayerInfoCmdFn,			1,				1,		L"prints the selected player infos",			L"playerinfo <playername>",				L""},
				{L"giveflobs",		GiveFlobsCmdFn,				1,				1,		L"gives you some flobs",						L"giveflobs <amount>",					L"amount: number of flobs to add"},
				{L"setwalkerparam",	SetWalkerParamCmdFn,		1,				2,		L"set a walker parameter",						L"setwalkerparam <paramname> <value>",	L""},
				{L"kick",			KickCmdFn,					1,				1,		L"kicks a player",								L"kick <playername>",					L""},
				{L"countdown",		CountdownCmdFn,				1,				3,		L"create a countdown message",					L"countdown <duration> <title> <text>",	L""},
				{L"notify",			NotifyCmdFn,				1,				2,		L"create a notify message",						L"notify <id> <text>",					L""},
				{L"hudmessage",		HudMessageCmdFn,			1,				1,		L"create a hud message",						L"hudmessage <text>",					L""},
				{L"shutdown",		ShutdownServerCmdFn,		1,				0,		L"shutdown the server",							L"shutdown",							L""},
//				{L"leaderboard",	LeaderboardCmdFn,			0,				0,		L"print a list of the top players",				L"leaderboard",							L""},
//				{L"mypoints",		MyPointsCmdFn,				0,				0,		L"print the amount of leaderboard points",		L"mypoints",							L""},
//				{L"setpoints",		SetPointsCmdFn,				1,				2,		L"set the amount of leaderboard points",		L"setpoints <amount> <playername>",		L""},
//				{L"creatematch",	DuelSystemCreateMatchCmd,	0,				1,		L"Create the lobby for a new match",			L"creatematch <teamsize>",				L""},
//				{L"joinmatch",		DuelSystemAutoJoinCmd,		0,				0,		L"Join a random lobby",							L"joinmatch",							L""},
//				{L"duelpoints",		DuelSystemPointsCmd,		0,				0,		L"Tells you how many points you have",			L"duelpoints",							L""},
				{NULL,				NULL,						3,				0,		NULL,											NULL,									NULL}	//LIST TERMINATOR
	};



	//returns the admin level of a command
	uint8_t getAdminLevel(const wchar_t* command) {

		uint8 i = 0;
		while (CmdsList::LUT[i].cmdName != NULL) {
			if (wcscmp(CmdsList::LUT[i].cmdName, command) == 0) {
				return CmdsList::LUT[i].adminLevel;
			}
			i++;
		}

		//return 0 if the command is not present so you can always execute it... maybe is added elsewhere
		return 0;
	}



}




void RegisterMyCommands() {

	//auto-registration of commands inside the list
	for (uint8 i = 0; CmdsList::LUT[i].cmdName != NULL; i++) {
		GConsole.RegisterCommand(CmdsList::LUT[i].cmdName, CmdsList::LUT[i].CmdFn);
	}

	//---- other commands for development purposes -----------------------------


	/*

	static int woot = 7;
	Config::RegisterVariable(L"gg.Woot", woot, false);
	Config::LoadIniSection(L"ScriptHook", L"Sect");

	GConsole.RegisterCommand(L"woot", [](auto caller, auto args)
	{
		wchar_t str[32];
		swprintf_s(str, L"%i", woot);
		const auto fstr = FString(str);
		const auto ftxt = FText(fstr);
		const auto icon = FName::Find(L"Info");
		AMistOasisPlayerController_ClientAddHudLog(caller, icon, ftxt);
	});

	GConsole.RegisterCommand(L"reload", [](auto caller, auto args)
		{
			Config::LoadIniSection(L"ScriptHook", L"Sect");
		});

	GConsole.RegisterCommand(L"rcon", [](auto caller, auto args)
		{
			if (args) Util::ConsoleCommand(args);
		});



	GConsole.RegisterCommand(L"ping", [](auto caller, auto args)
	{
		auto pawn = APlayerController_GetPawnOrSpectator(caller);
		auto state = APawn_GetPlayerState(pawn);
		wchar_t buff[16];
		swprintf_s(buff, L"Ping: %u", state->Ping);
		Util::ClientAddMsg(caller, buff);
	});

	
	GConsole.RegisterCommand(L"test", [](AMistOasisPlayerController* caller, auto args) {

		wchar_t buff[1024];
		auto gamemode = AActor_GetGameMode(caller);
		auto mistgamemode = AActor_GetMistGameMode(caller);
		auto gamestate = AActor_GetGameState(caller);
		auto playerPtr = AController_GetPawnPlayer(caller);
		auto pawnPtr = APlayerController_GetPawnOrSpectator(caller);
		auto worldPtr = UObject_GetWorld(caller);

		auto walkerPtr = AMistPlayer_GetWalker(playerPtr);
		auto isOnWalker = AMistPlayer_IsManningWalker(playerPtr);
		auto playerState = APawn_GetPlayerStateMist(pawnPtr);

		TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
		UWorld_GetPlayerControllerIterator(worldPtr, &it);


		if (!args) {
			swprintf_s(buff, L"Info:");
			swprintf_s(buff, L"%s\n Players = %i", buff, gamemode->NumPlayers);
			Util::ClientAddMsg(caller, buff);
			return;
		};


		if (wcscmp(args, L"1") == 0) {
			wchar_t data[] = L"CIAO !";
			Util::saveOnFile("database.bin", (wcslen(data)+1) * sizeof(wchar_t), data);
		}


		if (wcscmp(args, L"2") == 0) {
			wchar_t* data;
			uint64 dataRead;
			if (Util::readFile("database.bin", &dataRead, (void**)(&data))) {

				Util::ClientAddMsg(caller, data);

			}
			free(data);
		}


		if (wcscmp(args, L"3") == 0) {
			FVector location = {100000, 150000, 0};
			FRotator rotation = { 0, 90, 0 };

			while (FMistWorldUtils_FindCharacterFloorTeleportSpot(playerPtr, &location, &rotation) == false) {
				location.Z -= 1000;
			}

			AActor_K2_TeleportTo(playerPtr, location, rotation);
		}


		if (wcscmp(args, L"4") == 0) {
			UMistCheatingComponent_LeaveClan(caller->CheatingComponent);
		}
		if (wcscmp(args, L"5") == 0) {
			UMistCheatingComponent_ServerLeaveClan(caller->CheatingComponent);
		}
		if (wcscmp(args, L"6") == 0) {
			UMistCheatingComponent_ServerLeaveClan_Implementation(caller->CheatingComponent);
		}
		
			
		if (wcscmp(args, L"7") == 0) {
			AActor* actorPtr = nullptr;
			int value = 0;
			GetLookAtActor(playerPtr, &actorPtr, &value);
			if (actorPtr == nullptr) return;
			auto targetGameState = AActor_GetGameState(actorPtr);
			if (targetGameState == nullptr) return;
			Util::ClientAddMsg(caller, L"OK");
		}


		if (wcscmp(args, L"8") == 0) {
			



		}

		


	});
	
	*/


}
