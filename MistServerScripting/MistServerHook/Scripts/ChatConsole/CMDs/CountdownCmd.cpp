#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace CountdownCmd
{
	void CountdownCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		if (args == nullptr) return;

		uint16 argLen;
		const wchar_t* argPtr;

		//get params
		wchar_t buff1[256];
		argPtr = Util::getArg(args, 1, &argLen);
		if (argPtr == nullptr) return;
		_snwprintf_s(buff1, argLen, argPtr);
		float duration = (float)(_wtof(buff1));
		if (duration <= 0.0f || duration > 172800) return;

		wchar_t buff2[256];
		argPtr = Util::getArg(args, 2, &argLen);
		if (argPtr == nullptr) return;
		_snwprintf_s(buff2, argLen+1, argPtr);
		FString title = FString(buff2);

		wchar_t buff3[256];
		argPtr = Util::getArg(args, 3, &argLen);
		if (argPtr == nullptr) return;
		_snwprintf_s(buff3, wcslen(argPtr)+1, argPtr);
		FString text = FString(buff3);

		FString id = FString(L"my countdown");

		FMistHudCountdownOptions options = { FText(title), FText(text), duration, duration, false, false };

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
			AMistOasisPlayerController_ClientAddHudCountdown(MistPlayerController, id, options);
		}

	}


	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"countdown", CountdownCmdFn, L"[duration] [title] [message] - Create a countdown for all the players");
	}


}