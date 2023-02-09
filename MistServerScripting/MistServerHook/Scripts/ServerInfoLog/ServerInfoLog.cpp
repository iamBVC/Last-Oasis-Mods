#include "Core/Core.h"
#include "Core/Util.h"

using namespace std;



namespace ServerInfoLog
{


	Hook("?ServerDisassemble_Implementation@UMistBuildingComponent@@UEAAXPEAVAActor@@H@Z",
		void, UMistBuildingComponent_ServerDisassemble_Implementation, UMistBuildingComponent* self, AActor* actor, int id)
	{

		if (
			(self != nullptr) &&
			(self->PlayerOwner != nullptr) &&
			(self->PlayerOwner->PlayerState != nullptr) &&
			(self->PlayerOwner->CharacterMovement != nullptr)
			) {
			auto location = self->PlayerOwner->CharacterMovement->LastUpdateLocation;
			static wchar_t log[256] = {};
			swprintf_s(log, L"%s disassembled %s at %.0f %.0f %.0f", self->PlayerOwner->PlayerState->PlayerNamePrivate.c_str(), actor->NamePrivate.c_str(), location.X, location.Y, location.Z);
			Util::logOnFile(actor, "disassemble", log);
		}

		OrigUMistBuildingComponent_ServerDisassemble_Implementation(self, actor, id);
	}


	Hook("?HandleUnpossessed@AMistPlayer@@QEAAXPEAVAMistOasisPlayerController@@@Z",
		void, AMistPlayer_HandleUnpossessed, AMistPlayer* player, AMistOasisPlayerController* controller)
	{

		auto playerState = APawn_GetPlayerStateMist(player);
		if (playerState != nullptr && player->CharacterMovement != nullptr) {
			auto location = player->CharacterMovement->LastUpdateLocation;
			static wchar_t log[256] = {};
			swprintf_s(log, L"%s (%s) [%s] logged off at %.0f %.0f %.0f", playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(), playerState->AccountName.c_str(), location.X, location.Y, location.Z);
			Util::logOnFile(player, "login", log);
		}

		OrigAMistPlayer_HandleUnpossessed(player, controller);
	}


	Hook("?HandlePossessed@AMistPlayer@@QEAAXPEAVAMistOasisPlayerController@@@Z",
		void, AMistPlayer_HandlePossessed, AMistPlayer* player, AMistOasisPlayerController* controller)
	{

		OrigAMistPlayer_HandlePossessed(player, controller);

		auto playerState = APawn_GetPlayerStateMist(player);
		if (playerState == nullptr) return;
		if (player->CharacterMovement == nullptr) return;
		auto location = player->CharacterMovement->LastUpdateLocation;
		static wchar_t log[256] = {};
		swprintf_s(log, L"%s (%s) [%s] logged in at %.0f %.0f %.0f", playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(), playerState->AccountName.c_str(), location.X, location.Y, location.Z);
		Util::logOnFile(player, "login", log);

	}

	Hook("?ClientStartSafeLogOutAttempt@UMistSafeLogOutComponent@@QEAAXMAEBVFString@@@Z",
		void, UMistSafeLogOutComponent_ClientStartSafeLogOutAttempt, UMistSafeLogOutComponent* self, float time, FString* playerName)
	{

		auto walker = self->InitialTravelParty.Walker;
		if (walker != nullptr) {
			auto playerState = self->PlayerStateOwner;
			if (playerState != nullptr) {
				static wchar_t log[256] = {};
				swprintf_s(log, L"%s (%s) started safelog of \"%s\" (%u) %s owned by %s (%s) at %.0f %.0f %.0f",
					playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(),
					walker->CustomName.c_str(), walker->WalkerType, walker->WalkerGuid.c_str(),
					walker->ClanOwnershipComponent->OwnerCharacter.Name.c_str(), walker->ClanOwnershipComponent->OwnerClan.Name.c_str(),
					walker->ReplicatedMovement.Location.X, walker->ReplicatedMovement.Location.Y, walker->ReplicatedMovement.Location.Z
				);
				Util::logOnFile(playerState, "safelog", log);
			}
		}

		OrigUMistSafeLogOutComponent_ClientStartSafeLogOutAttempt(self, time, playerName);
	}


	Hook("?ClientOpen_Implementation@UMistInventoryComponent@@UEAAXPEAVAActor@@AEBV?$TArray@PEAVUMistContainerComponent@@V?$TSizedDefaultAllocator@$0CA@@@@@@Z",
		void, UMistInventoryComponent_ServerOpen_Implementation, UMistInventoryComponent* self, AActor* actor, TArray<UMistContainerComponent*>& data)
	{

		OrigUMistInventoryComponent_ServerOpen_Implementation(self, actor, data);

		if (self == nullptr) return;
		if (actor == nullptr) return;

		if (self->PlayerOwner == nullptr) return;
		auto playerState = APawn_GetPlayerStateMist(self->PlayerOwner);
		if (playerState == nullptr) return;

		if (self->PlayerOwner->CharacterMovement == nullptr) return;
		auto location = &(self->PlayerOwner->CharacterMovement->LastUpdateLocation);
		
		auto actorOwnership = FMistClanUtils_GetOwnershipComponent(actor, true);
		if (actorOwnership == nullptr) return;

		static wchar_t buff[65536] = {};
		swprintf_s(buff, L"%s (%s) opened %s owned by %s (%s) at %.0f %.0f %.0f containing:\n",
			playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(),
			actor->NamePrivate.c_str(), actorOwnership->OwnerCharacter.Name.c_str(), actorOwnership->OwnerClan.Name.c_str(),
			location->X, location->Y, location->Z);

		for (int32 i = 0; i < data.Count; i++) {
			for (int32 j = 0; j < data.Data[i]->Slots.Count; j++) {
				if (wcslen(buff) > 65000) {
					swprintf_s(buff, L"%s\tBUFFER FULL\n", buff);
					break;
				}
				auto item = &(data.Data[i]->Slots.Data[j]);
				if (item == nullptr) continue;
				if (item->Count == 0) continue;
				if (item->Item.Template == nullptr) continue;
				swprintf_s(buff, L"%s\tx%i\tQ%u\t%s\n", buff, item->Count, item->Item.Quality, item->Item.Template->NamePrivate.c_str());
			}
		}

		Util::logOnFile(actor, "items", buff);
	}



}