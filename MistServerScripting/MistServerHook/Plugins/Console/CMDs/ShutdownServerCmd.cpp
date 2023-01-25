#include "ShutdownServerCmd.h"




void ShutdownServerCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

	auto mistgamemode = AActor_GetMistGameMode(caller);

	AMistOasisGameMode_StartShutdown(mistgamemode);

}

