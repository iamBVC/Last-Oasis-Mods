#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;


namespace PlayerInfoCmd
{


	void PlayerInfoCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {


		if (args == nullptr || args == L"") return;

		auto worldPtr = UObject_GetWorld(caller);
		auto playersArray = &worldPtr->GameState->PlayerArray;

		for (uint8_t i = 0; i < playersArray->Count; i++) {

			auto playerState = playersArray->Data[i];
			if (playerState == nullptr) continue;

			wchar_t playerName[64];
			swprintf_s(playerName, L"%s", playerState->PlayerNamePrivate.c_str()); //PLAYER NAME

			if (wcscmp(args, playerName) == 0) {

				static wchar_t buff[1024];

				auto playerStateMist = APawn_GetPlayerStateMist(playerState->PawnPrivate);
				if (playerStateMist == nullptr) return;

				swprintf_s(buff, L"Player info:\n");

				swprintf_s(buff, L"%sAccount Name: %s\n", buff, playerStateMist->AccountName.c_str());
				swprintf_s(buff, L"%sCharacter ID: %lli\n", buff, playerStateMist->CharacterId);

				swprintf_s(buff, L"%sClan Name: %s\n", buff, playerStateMist->Clan.Name.c_str());
				swprintf_s(buff, L"%sClan ID: %lli\n", buff, playerStateMist->Clan.ID);

				swprintf_s(buff, L"%sLevel: %i\n", buff, playerStateMist->Level);
				swprintf_s(buff, L"%sExp: %llu\n", buff, playerStateMist->Experience);
				swprintf_s(buff, L"%sMoney: %llu\n", buff, playerStateMist->Money);
				swprintf_s(buff, L"%sFlobs: %llu\n", buff, playerStateMist->IntermediateCurrency);

				swprintf_s(buff, L"%sAvailable Stat Points: %u\n", buff, playerStateMist->StatPoints);
				swprintf_s(buff, L"%sStat Health: %i\n", buff, playerStateMist->StatLevels[0]);
				swprintf_s(buff, L"%sStat Damage: %i\n", buff, playerStateMist->StatLevels[1]);
				swprintf_s(buff, L"%sStat Mobility: %i\n", buff, playerStateMist->StatLevels[2]);
				swprintf_s(buff, L"%sStat Stamina: %i\n", buff, playerStateMist->StatLevels[3]);
				//swprintf_s(buff, L"%sStat 4: %i\n", buff, playerState->StatLevels[4]);
				//swprintf_s(buff, L"%sStat 5: %i\n", buff, playerState->StatLevels[5]);

				//swprintf_s(buff, L"%sHealth = %.0f/%.0f\n", buff, playerPtr->HealthComponent->Health, playerPtr->HealthComponent->MaxHealth);

				//swprintf_s(buff, L"%sFlotilla Rank: %i\n", buff, playerStateMist->FlotillaRank);
				//swprintf_s(buff, L"%sFlotilla Reputation: %i\n", buff, playerStateMist->FlotillaReputation);

				swprintf_s(buff, L"%sLocal FreeBuild: %u\n", buff, playerStateMist->bLocalFreeBuilding);
				swprintf_s(buff, L"%sAdmin: %u\n", buff, playerStateMist->Tier);

				if (playerStateMist->AccountPlatform == EMistGamePlatform::Unknown) {
					swprintf_s(buff, L"%sPlatform: Unknown\n", buff);
				}
				else if (playerStateMist->AccountPlatform == EMistGamePlatform::Xbox) {
					swprintf_s(buff, L"%sPlatform: Xbox\n", buff);
				}
				else if (playerStateMist->AccountPlatform == EMistGamePlatform::Pc) {
					swprintf_s(buff, L"%sPlatform: PC\n", buff);
				}
				else if (playerStateMist->AccountPlatform == EMistGamePlatform::Cross) {
					swprintf_s(buff, L"%sPlatform: Cross\n", buff);
				}

				/*
				swprintf_s(buff, L"%sManning: ", buff);
				if (playerPtr->MannedComponent == nullptr) {
					swprintf_s(buff, L"%sNothing\n", buff);
				}
				else {
					swprintf_s(buff, L"%s%s\n", buff, playerPtr->MannedComponent->NamePrivate.c_str());
				}
				

				swprintf_s(buff, L"%sRace/Sex: %.0f\n", buff, playerStateMist->CharacterCustomization.Values[0]);
				//swprintf_s(buff, L"%sCustom 1: %.0f\n", buff, playerState->CharacterCustomization.Values[1]);
				swprintf_s(buff, L"%sHair style: %.0f\n", buff, playerStateMist->CharacterCustomization.Values[2]);
				swprintf_s(buff, L"%sBeard style: %.0f\n", buff, playerStateMist->CharacterCustomization.Values[3]);
				swprintf_s(buff, L"%sHair Color: %.0f\n", buff, playerStateMist->CharacterCustomization.Values[4]);
				swprintf_s(buff, L"%sEye Color: %.0f\n", buff, playerStateMist->CharacterCustomization.Values[5]);
				swprintf_s(buff, L"%sPants Color: %.0f\n", buff, playerStateMist->CharacterCustomization.Values[6]);
				swprintf_s(buff, L"%sBody Scars: %.0f\n", buff, playerStateMist->CharacterCustomization.Values[7]);
				swprintf_s(buff, L"%sFace Scars: %.0f\n", buff, playerStateMist->CharacterCustomization.Values[8]);

				*/


				FString str = FString(buff);
				FMistHudMessageOptions message = { FText(str), 60.0f, true, true };

				AMistOasisPlayerController_ClientAddHudMessage(caller, message);

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