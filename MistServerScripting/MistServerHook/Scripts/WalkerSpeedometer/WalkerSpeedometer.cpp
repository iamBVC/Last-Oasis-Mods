#include "Core/Config.h"
#include "Core/Util.h"


using namespace std;

namespace WalkerSpeedometer
{

	int32 IsEnabled = 0;



	OnEngineInit(Init)
	{
		Config::RegisterVariable(L"WalkerSpeedometer.IsEnabled", IsEnabled, false);
		Config::LoadIniSection(L"ScriptHook", L"WalkerSpeedometer");
		//TODO		add Hook script fn to world tick fn
	}



	void WalkerSpeedometerFn(UWorld* world, int level, float delta) {

		static float timer = 0;

		if (level <= 2) {

			timer += delta;

			if (timer >= 0.25f) {

				timer = 0.0f;
				TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
				UWorld_GetPlayerControllerIterator(world, &it);

				for (uint8_t i = 0; i < it.Array->Count; i++) {

					auto controllerPtr = it.Array->Data[i].Get();
					auto playerPtr = AController_GetPawnPlayer(controllerPtr);
					if (playerPtr == nullptr) continue;
					auto MistPlayerController = playerPtr->PossessedByPlayerController;
					auto isOnWalker = AMistPlayer_IsManningWalker(playerPtr);
					if (!isOnWalker) continue;
					auto walkerPtr = AMistPlayer_GetWalker(playerPtr);
					auto walkerSpeed = AMistWalker_GetCurrentSpeed(walkerPtr);

					wchar_t buff[16];
					swprintf_s(buff, L"%.0f km/h", walkerSpeed * 3.6f / 100.0f);

					FString text = FString(L"Walker speed");
					FString title = FString(buff);
					FString id = FString(L"speed");
					FMistHudCountdownOptions options = { FText(title), FText(text), 1.0f, 1.0f, false, false };

					AMistOasisPlayerController_ClientAddHudCountdown(MistPlayerController, id, options);

				}

			}

		}


	}




}