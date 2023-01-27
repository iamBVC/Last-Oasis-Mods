/*
*
* Declare or include initialization callbacks
*
*/

#include "Hooks/NativeHooks.h"

#include "Console/Console.h"
#include "DuelSystem/DuelSystem.h"
#include "DumpBackend/DumpBackend.h"
#include "Leaderboard/Leaderboard.h"
#include "LoginInfo/LoginInfo.h"
#include "ServerInfoLog/ServerInfoLog.h"
#include "SoftClanCap/SoftClanCap.h"
#include "WalkerSpeedometer/WalkerSpeedometer.h"




/*
* InitPlugins is called synchronously after UEngine::Init
*/
void InitPlugins(){

//	MyNativeHooksInit();

	GConsole.Init();
//	DuelSystemInit(); //work in progress
//	DumpBackendInit();
//	Leaderboard.Init();
	LoginInfoInit();
	ServerInfoLogInit();
	SoftClanCapInit();
//	WalkerSpeedometerInit();

}