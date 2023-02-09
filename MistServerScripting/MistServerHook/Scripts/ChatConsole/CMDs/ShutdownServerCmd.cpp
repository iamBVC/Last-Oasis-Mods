#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace ShutdownServerCmd
{

	void ShutdownServerCmdFn(AMistOasisPlayerController* caller, const wchar_t* args)
	{
		RequestEngineExit(L"Ingame command shutdown");
	}

	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"shutdown", ShutdownServerCmdFn, L"- Shutdown the server");
	}

}