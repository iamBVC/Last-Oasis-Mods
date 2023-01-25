#include "GiveFlobsCmd.h"



void GiveFlobsCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

	if (args == nullptr || args == L"") return;

	auto pawnPtr = APlayerController_GetPawnOrSpectator(caller);
	auto playerState = APawn_GetPlayerStateMist(pawnPtr);

	auto value = _wtoi(args);

	playerState->IntermediateCurrency += value;

}

