#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace RenameWalkerCmd
{

	void RenameWalkerCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		auto playerPtr = AController_GetPawnPlayer(caller);
		auto walkerPtr = AMistPlayer_GetWalker(playerPtr);
		auto isOnWalker = AMistPlayer_IsManningWalker(playerPtr);

		if (!isOnWalker) return;
		if (args == NULL) return;

		auto str = FString(args);
		AMistWalker_SetCustomName(walkerPtr, &str);

	}

	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"renamewalker", RenameWalkerCmdFn, L"[name] - Renames the walker you are currently driving");
	}

}