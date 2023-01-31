#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace NotifyCmd
{

	void NotifyCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		if (args == nullptr) return;


		//get params

		uint16 dataIdLen;
		const wchar_t* dataId = Util::getArg(args, 1, &dataIdLen);
		if (dataId == nullptr) return;
		wchar_t idBuff[32];
		_snwprintf_s(idBuff, dataIdLen, dataId);

		uint16 dataTextLen;
		const wchar_t* dataText = Util::getArg(args, 2, &dataTextLen);
		if (dataText == nullptr) return;

		FName id = FName(idBuff);
		FString str = FString(dataText);
		FText text = FText(str);

		//broadcast message
		auto worldPtr = UObject_GetWorld(caller);
		TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
		UWorld_GetPlayerControllerIterator(worldPtr, &it);
		for (auto i = 0; i < it.Array->Count; i++) {
			auto controllerPtr = it.Array->Data[i].Get();
			if (controllerPtr == nullptr) continue;
			auto playerPtr = AController_GetPawnPlayer(controllerPtr);
			if (playerPtr == nullptr) continue;
			auto MistPlayerController = playerPtr->PossessedByPlayerController;
			if (MistPlayerController == nullptr) continue;
			AMistOasisPlayerController_ClientAddHudLog(MistPlayerController, id, text);
		}

		//possible ID = info, error, warning, grappling_hook_broken, player_inventory_full, player_murdered
		//each one will print a different icon
	}

	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"notify", NotifyCmdFn, L"[icon] [msg] - Create a notification message with custom icon");
	}

}

