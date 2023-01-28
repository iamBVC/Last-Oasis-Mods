#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace AnnounceCmd
{

	void AnnounceCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		if (!args) return;

		ForEachPlayer(caller, [args](AMistOasisPlayerController* player) {
			ClientAddRedMsg(player, args);
			});

	}


	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"announce", AnnounceCmdFn, L"announce a message");
	}

}