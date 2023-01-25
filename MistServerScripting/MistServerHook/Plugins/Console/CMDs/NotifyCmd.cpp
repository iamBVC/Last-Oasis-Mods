#include "NotifyCmd.h"



void NotifyCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

	if (args == nullptr) return;


	//get params

	uint16 dataIdLen;
	const wchar_t* dataId = Util::getArg(args, 1, &dataIdLen);
	wchar_t idBuff[32];
	_snwprintf_s(idBuff, dataIdLen, dataId);

	uint16 dataTextLen;
	const wchar_t* dataText = Util::getArg(args, 2, &dataTextLen);
	wchar_t textBuff[256];
	_snwprintf_s(textBuff, wcslen(dataText), dataText);

	FName id = FName(idBuff);
	FString str = FString(textBuff);
	FText text = FText(str);

	//broadcast message
	auto worldPtr = UObject_GetWorld(caller);
	TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
	UWorld_GetPlayerControllerIterator(worldPtr, &it);
	for (auto i = 0; i < it.Array->Count; i++) {
		auto controllerPtr = it.Array->Data[i].Get();
		auto playerPtr = AController_GetPawnPlayer(controllerPtr);
		auto MistPlayerController = playerPtr->PossessedByPlayerController;
		AMistOasisPlayerController_ClientAddHudLog(MistPlayerController, id, text);
	}


	//possible ID = info, error, warning, grappling_hook_broken, player_inventory_full, player_murdered
	//each one will print a different icon


}

