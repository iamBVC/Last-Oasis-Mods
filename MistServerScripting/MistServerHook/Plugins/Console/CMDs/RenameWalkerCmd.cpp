#include "RenameWalkerCmd.h"




void RenameWalkerCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

	auto playerPtr = AController_GetPawnPlayer(caller);
	auto walkerPtr = AMistPlayer_GetWalker(playerPtr);
	auto isOnWalker = AMistPlayer_IsManningWalker(playerPtr);

	if (!isOnWalker) return;
	if (args == NULL) return;

	auto str = FString(args);
	AMistWalker_SetCustomName(walkerPtr, &str);

}

