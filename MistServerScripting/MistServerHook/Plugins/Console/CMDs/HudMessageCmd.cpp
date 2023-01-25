#include "HudMessageCmd.h"



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
		auto playerPtr = AController_GetPawnPlayer(controllerPtr);
		auto MistPlayerController = playerPtr->PossessedByPlayerController;
		AMistOasisPlayerController_ClientAddHudMessage(MistPlayerController, message);
	}



}

