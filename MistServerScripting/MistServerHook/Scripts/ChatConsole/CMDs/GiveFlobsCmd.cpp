#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace GiveFlobsCmd
{

	void GiveFlobsCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		if (args == nullptr || args == L"") return;

		auto pawnPtr = APlayerController_GetPawnOrSpectator(caller);
		auto playerState = APawn_GetPlayerStateMist(pawnPtr);

		auto value = _wtoi(args);

		playerState->IntermediateCurrency += value;
	}

	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"giveflobs", GiveFlobsCmdFn, L"gives you flobs");
	}

}