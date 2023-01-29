#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;




namespace BroadcastCmd
{
	void BroadcastCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		if (!args) return;

		ForEachPlayer(caller, [args](AMistOasisPlayerController* player) {
			ClientAddMsg(player, args);
			});

	}

	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"broadcast", BroadcastCmdFn, L"[msg] - Broadcast a message");
	}

}