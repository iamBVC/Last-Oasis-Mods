#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace WalkerInfoCmd
{

	void WalkerInfoCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		auto playerPtr = AController_GetPawnPlayer(caller);
		auto walkerPtr = AMistPlayer_GetWalker(playerPtr);
		auto isOnWalker = AMistPlayer_IsManningWalker(playerPtr);

		if (!isOnWalker) return;

		wchar_t buff[1024];

		auto walkerWater = AMistWalker_GetTotalWater(walkerPtr);
		auto walkerMaxWater = AMistWalker_GetMaximumWater(walkerPtr);
		auto walkerSpeed = AMistWalker_GetCurrentSpeed(walkerPtr);

		swprintf_s(buff, L"Walker info:");

		swprintf_s(buff, L"%s\n Name = %s", buff, walkerPtr->CustomName.c_str());
		swprintf_s(buff, L"%s\n Water = %lli/%lli", buff, walkerWater, walkerMaxWater);
		swprintf_s(buff, L"%s\n Speed = %.1f km/h", buff, walkerSpeed * 3.6f / 100.0f);
		swprintf_s(buff, L"%s\n GUID = %s", buff, walkerPtr->WalkerGuid.c_str());
		swprintf_s(buff, L"%s\n Attached Weight = %.1f", buff, walkerPtr->VehicleMovement->AttachedWeight);
		swprintf_s(buff, L"%s\n Ammo Containers = %i", buff, walkerPtr->AmmoContainers.Count);
		swprintf_s(buff, L"%s\n MinSpeedForImpactDamage = %.0f", buff, walkerPtr->MinSpeedForImpactDamage);
		swprintf_s(buff, L"%s\n MinImpactDamage = %.0f", buff, walkerPtr->MinImpactDamage);
		swprintf_s(buff, L"%s\n ImpactDamageMinMultiplier = %.0f", buff, walkerPtr->ImpactDamageMinMultiplier);
		swprintf_s(buff, L"%s\n ImpactDamageMaxMultiplier = %.0f", buff, walkerPtr->ImpactDamageMaxMultiplier);
		swprintf_s(buff, L"%s\n Health = %.0f", buff, walkerPtr->Health);
		swprintf_s(buff, L"%s\n RepairHealth = %.0f", buff, walkerPtr->RepairHealth);
		swprintf_s(buff, L"%s\n WreckageState = %u", buff, walkerPtr->WreckageState);
		swprintf_s(buff, L"%s\n WalkerStage = %i", buff, walkerPtr->WalkerStage);
		swprintf_s(buff, L"%s\n SandinessLevel = %.0f", buff, walkerPtr->SandinessLevel);
		swprintf_s(buff, L"%s\n MaxHeightForFoliageDestruction = %.0f", buff, walkerPtr->MaxHeightForFoliageDestruction);
		swprintf_s(buff, L"%s\n FoliageBaseDamage = %.0f", buff, walkerPtr->FoliageBaseDamage);
		swprintf_s(buff, L"%s\n Max RPM = %.0f", buff, walkerPtr->VehicleMovement->EngineSetup.MaxRPM);
		swprintf_s(buff, L"%s\n Mass = %.1f", buff, walkerPtr->VehicleMovement->Mass);
		swprintf_s(buff, L"%s\n Gravity Mul = %.1f", buff, walkerPtr->VehicleMovement->AdditionalGravity);
		swprintf_s(buff, L"%s\n Mass Mul = %.1f", buff, walkerPtr->VehicleMovement->AttachedMassMultiplier);
		swprintf_s(buff, L"%s\n Min Pen = %.1f", buff, walkerPtr->VehicleMovement->AttachedWeightMinPenalty);
		swprintf_s(buff, L"%s\n Max Pen = %.1f", buff, walkerPtr->VehicleMovement->AttachedWeightMaxPenalty);
		swprintf_s(buff, L"%s\n Final Ratio = %.1f", buff, walkerPtr->VehicleMovement->TransmissionSetup.FinalRatio);
		swprintf_s(buff, L"%s\n Type = %u", buff, (uint8)walkerPtr->WalkerType);

		FString str = FString(buff);
		FMistHudMessageOptions message = { FText(str), 30.0f, true, true };
		auto MistPlayerController = playerPtr->PossessedByPlayerController;
		AMistOasisPlayerController_ClientAddHudMessage(MistPlayerController, message);
	}


	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"walkerinfo", WalkerInfoCmdFn, L"- Print the infos of the walker you are driving");
	}

}