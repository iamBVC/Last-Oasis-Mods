#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace PlayerInfoCmd
{


	void PlayerInfoCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {


		if (args == nullptr || args == L"") return;

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

				wchar_t buff[1024];

				auto pawnPtr = APlayerController_GetPawnOrSpectator(controllerPtr);
				if (pawnPtr == nullptr) return;
				auto playerState = APawn_GetPlayerStateMist(pawnPtr);
				if (playerState == nullptr) return;

				swprintf_s(buff, L"Player info:\n");

				swprintf_s(buff, L"%sAccount Name: %s\n", buff, playerState->AccountName.c_str());
				swprintf_s(buff, L"%sCharacter ID: %lli\n", buff, playerState->CharacterId);

				swprintf_s(buff, L"%sClan Name: %s\n", buff, playerState->Clan.Name.c_str());
				swprintf_s(buff, L"%sClan ID: %lli\n", buff, playerState->Clan.ID);

				swprintf_s(buff, L"%sLevel: %i\n", buff, playerState->Level);
				swprintf_s(buff, L"%sExp: %llu\n", buff, playerState->Experience);
				swprintf_s(buff, L"%sMoney: %llu\n", buff, playerState->Money);
				swprintf_s(buff, L"%sFlobs: %llu\n", buff, playerState->IntermediateCurrency);

				swprintf_s(buff, L"%sAvailable Stat Points: %u\n", buff, playerState->StatPoints);
				swprintf_s(buff, L"%sStat Health: %i\n", buff, playerState->StatLevels[0]);
				swprintf_s(buff, L"%sStat Damage: %i\n", buff, playerState->StatLevels[1]);
				swprintf_s(buff, L"%sStat Mobility: %i\n", buff, playerState->StatLevels[2]);
				swprintf_s(buff, L"%sStat Stamina: %i\n", buff, playerState->StatLevels[3]);
				//			swprintf_s(buff, L"%sStat 4: %i\n", buff, playerState->StatLevels[4]);
				//			swprintf_s(buff, L"%sStat 5: %i\n", buff, playerState->StatLevels[5]);

				swprintf_s(buff, L"%sHealth = %.0f/%.0f\n", buff, playerPtr->HealthComponent->Health, playerPtr->HealthComponent->MaxHealth);

				swprintf_s(buff, L"%sFlotilla Rank: %i\n", buff, playerState->FlotillaRank);
				swprintf_s(buff, L"%sFlotilla Reputation: %i\n", buff, playerState->FlotillaReputation);

				swprintf_s(buff, L"%sLocal FreeBuild: %u\n", buff, playerState->bLocalFreeBuilding);
				swprintf_s(buff, L"%sAdmin: %u\n", buff, playerState->Tier);

				if (playerState->AccountPlatform == EMistGamePlatform::Unknown) {
					swprintf_s(buff, L"%sPlatform: Unknown\n", buff);
				}
				else if (playerState->AccountPlatform == EMistGamePlatform::Xbox) {
					swprintf_s(buff, L"%sPlatform: Xbox\n", buff);
				}
				else if (playerState->AccountPlatform == EMistGamePlatform::Pc) {
					swprintf_s(buff, L"%sPlatform: PC\n", buff);
				}
				else if (playerState->AccountPlatform == EMistGamePlatform::Cross) {
					swprintf_s(buff, L"%sPlatform: Cross\n", buff);
				}

				swprintf_s(buff, L"%sManning: ", buff);
				if (playerPtr->MannedComponent == nullptr) {
					swprintf_s(buff, L"%sNothing\n", buff);
				}
				else {
					swprintf_s(buff, L"%s%s\n", buff, playerPtr->MannedComponent->NamePrivate.c_str());
				}


				swprintf_s(buff, L"%sRace/Sex: %.0f\n", buff, playerState->CharacterCustomization.Values[0]);
				//			swprintf_s(buff, L"%sCustom 1: %.0f\n", buff, playerState->CharacterCustomization.Values[1]);
				swprintf_s(buff, L"%sHair style: %.0f\n", buff, playerState->CharacterCustomization.Values[2]);
				swprintf_s(buff, L"%sBeard style: %.0f\n", buff, playerState->CharacterCustomization.Values[3]);
				swprintf_s(buff, L"%sHair Color: %.0f\n", buff, playerState->CharacterCustomization.Values[4]);
				swprintf_s(buff, L"%sEye Color: %.0f\n", buff, playerState->CharacterCustomization.Values[5]);
				swprintf_s(buff, L"%sPants Color: %.0f\n", buff, playerState->CharacterCustomization.Values[6]);
				swprintf_s(buff, L"%sBody Scars: %.0f\n", buff, playerState->CharacterCustomization.Values[7]);
				swprintf_s(buff, L"%sFace Scars: %.0f\n", buff, playerState->CharacterCustomization.Values[8]);


				FString str = FString(buff);
				FMistHudMessageOptions message = { FText(str), 30.0f, true, true };

				auto MistPlayerController = playerPtr->PossessedByPlayerController;
				if (MistPlayerController == nullptr) return;

				AMistOasisPlayerController_ClientAddHudMessage(MistPlayerController, message);

				return;
			}

		}

		Util::ClientAddMsg(caller, L"No online players found with this name");

	}



	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"playerinfo", PlayerInfoCmdFn, L"[name] - Print all the info of a player");
	}

}