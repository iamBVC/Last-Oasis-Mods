#include "CountdownCmd.h"



void CountdownCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

	uint16 argLen;
	const wchar_t* argPtr;

	//get params
	wchar_t buff1[256];
	argPtr = Util::getArg(args, 1, &argLen);
	_snwprintf_s(buff1, argLen, argPtr);
	float duration = (float)(_wtof(buff1));

	wchar_t buff2[256];
	argPtr = Util::getArg(args, 2, &argLen);
	_snwprintf_s(buff2, argLen, argPtr);
	FString title = FString(buff2);

	wchar_t buff3[256];
	argPtr = Util::getArg(args, 3, &argLen);
	swprintf_s(buff3, argPtr);
	FString text = FString(buff3);

	FString id = FString(L"my countdown");

	FMistHudCountdownOptions options = { FText(title), FText(text), duration, duration, false, false };

	//broadcast message
	auto worldPtr = UObject_GetWorld(caller);
	TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
	UWorld_GetPlayerControllerIterator(worldPtr, &it);
	for (auto i = 0; i < it.Array->Count; i++) {
		auto controllerPtr = it.Array->Data[i].Get();
		auto playerPtr = AController_GetPawnPlayer(controllerPtr);
		auto MistPlayerController = playerPtr->PossessedByPlayerController;
		AMistOasisPlayerController_ClientAddHudCountdown(MistPlayerController, id, options);
	}

}

