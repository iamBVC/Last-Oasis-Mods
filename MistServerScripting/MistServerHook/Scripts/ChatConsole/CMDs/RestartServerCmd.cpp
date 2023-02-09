#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace RestartServerCmd
{

	void RestartServerCmdFn(AMistOasisPlayerController* caller, const wchar_t* args)
	{
		auto mistgamemode = AActor_GetMistGameMode(caller);
		if (mistgamemode == nullptr) return;
		AMistOasisGameMode_StartShutdown(mistgamemode, true);
	}

	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"restart", RestartServerCmdFn, L"- Restart the server");
	}

}