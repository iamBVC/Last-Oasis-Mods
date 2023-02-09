#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace PopCmd
{

	void PopCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		auto gamemode = AActor_GetGameMode(caller);
		if (gamemode == nullptr) return;

		auto pop = AGameMode_GetNumPlayers(gamemode);

		if (pop == 1) {

			Util::ClientAddMsg(caller, L"You are alone");

		}
		else {

			wchar_t buff[32];
			swprintf_s(buff, L"%i players online", pop);
			Util::ClientAddMsg(caller, buff);

		}

	}

	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Default, L"pop", PopCmdFn, L"- Print the total number of online players");
	}

}