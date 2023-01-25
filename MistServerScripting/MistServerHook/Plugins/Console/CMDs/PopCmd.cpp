#include "PopCmd.h"




void PopCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

	auto gamemode = AActor_GetGameMode(caller);
	auto pop = AGameMode_GetNumPlayers(gamemode);

	if (pop == 1) {

		Util::ClientAddMsg(caller, L"You are alone");

	}else{

		wchar_t buff[32];
		swprintf_s(buff, L"%i players online", pop);
		Util::ClientAddMsg(caller, buff);

	}

}

