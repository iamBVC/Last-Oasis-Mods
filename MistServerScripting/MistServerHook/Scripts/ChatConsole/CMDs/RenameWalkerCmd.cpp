#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace RenameWalkerCmd
{

	void RenameWalkerCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		if (args == NULL) return;

		auto playerPtr = AController_GetPawnPlayer(caller);
		if (playerPtr == NULL) return;

		auto walkerPtr = AMistPlayer_GetWalker(playerPtr);
		if (walkerPtr == NULL) return;

		auto isOnWalker = AMistPlayer_IsManningWalker(playerPtr);
		if (!isOnWalker) return;
		

		auto str = FString(args);
		AMistWalker_SetCustomName(walkerPtr, &str);

	}

	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"renamewalker", RenameWalkerCmdFn, L"[name] - Renames the walker you are currently driving");
	}

}