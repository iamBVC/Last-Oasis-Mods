#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace HudMessageCmd
{

	void HudMessageCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		if (args == nullptr) return;

		FString str = FString(args);
		FMistHudMessageOptions message = { FText(str), 30.0f, true, true };

		//broadcast message
		auto worldPtr = UObject_GetWorld(caller);
		TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
		UWorld_GetPlayerControllerIterator(worldPtr, &it);
		for (auto i = 0; i < it.Array->Count; i++) {
			auto controllerPtr = it.Array->Data[i].Get();
			if (controllerPtr == nullptr) return;
			auto playerPtr = AController_GetPawnPlayer(controllerPtr);
			if (playerPtr == nullptr) return;
			auto MistPlayerController = playerPtr->PossessedByPlayerController;
			if (MistPlayerController == nullptr) return;
			AMistOasisPlayerController_ClientAddHudMessage(MistPlayerController, message);
		}

	}


	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"hudmessage", HudMessageCmdFn, L"[msg] - Create a hud message for all the players");
	}

}