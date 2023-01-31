#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace KickCmd
{

	void KickCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		if (args == nullptr) {
			ClientAddMsg(caller, L"write a player name");
			return;
		}

		auto worldPtr = UObject_GetWorld(caller);
		TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
		UWorld_GetPlayerControllerIterator(worldPtr, &it);

		for (uint8_t i = 0; i < it.Array->Count; i++) {

			auto controllerPtr = it.Array->Data[i].Get();
			if (controllerPtr == nullptr) continue;
			auto playerPtr = AController_GetPawnPlayer(controllerPtr);
			if (playerPtr == nullptr) continue;

			wchar_t playerName[32];
			swprintf_s(playerName, L"%s", playerPtr->PlayerState->PlayerNamePrivate.c_str()); //PLAYER NAME
			if (wcscmp(args, playerName) == 0) {

				auto MistPlayerController = playerPtr->PossessedByPlayerController;
				if (MistPlayerController == nullptr) continue;
				FString str = FString(L"You have been kicked from an admin\ntake this as a warning sign");
				FText text = FText(str);
				AMistPlayerController_KickPlayer(MistPlayerController, text);

				return;
			}

		}

		ClientAddMsg(caller, L"No online players found with this name");
	}


	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"kick", KickCmdFn, L"[name] - Kick a player from the server");
	}

}