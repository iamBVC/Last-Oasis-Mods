#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace SetWalkerParamCmd
{


	void SetWalkerParamCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

		if (args == nullptr) return;

		auto playerPtr = AController_GetPawnPlayer(caller);
		auto walkerPtr = AMistPlayer_GetWalker(playerPtr);
		auto isOnWalker = AMistPlayer_IsManningWalker(playerPtr);

		if (!isOnWalker) return;

		//get params
		uint16 dataNameLen;
		const wchar_t* dataName = Util::getArg(args, 1, &dataNameLen);
		uint16 dataValueLen;
		const wchar_t* dataValue = Util::getArg(args, 2, &dataValueLen);



		if (wcsncmp(dataName, L"health", dataNameLen) == 0) walkerPtr->Health = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"stage", dataNameLen) == 0) walkerPtr->WalkerStage = (int32_t)(_wtoi(dataValue));

		if (wcsncmp(dataName, L"sand", dataNameLen) == 0) walkerPtr->SandinessLevel = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"maxheight", dataNameLen) == 0) walkerPtr->MaxHeightForFoliageDestruction = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"foliagedamage", dataNameLen) == 0) walkerPtr->FoliageBaseDamage = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"rpm", dataNameLen) == 0) walkerPtr->VehicleMovement->EngineSetup.MaxRPM = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"mass", dataNameLen) == 0) walkerPtr->VehicleMovement->Mass = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"gravity", dataNameLen) == 0) walkerPtr->VehicleMovement->AdditionalGravity = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"massmult", dataNameLen) == 0) walkerPtr->VehicleMovement->AttachedMassMultiplier = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"weightmin", dataNameLen) == 0) walkerPtr->VehicleMovement->AttachedWeightMinPenalty = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"weightmax", dataNameLen) == 0) walkerPtr->VehicleMovement->AttachedWeightMaxPenalty = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"finalratio", dataNameLen) == 0) walkerPtr->VehicleMovement->TransmissionSetup.FinalRatio = (float)(_wtof(dataValue));

		if (wcsncmp(dataName, L"walkertype", dataNameLen) == 0) walkerPtr->WalkerType = (EMistWalkerType)(_wtoi(dataValue));

	}


	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"setwalkerparam", SetWalkerParamCmdFn, L"change a parameter of the walker you are driving");
	}

}