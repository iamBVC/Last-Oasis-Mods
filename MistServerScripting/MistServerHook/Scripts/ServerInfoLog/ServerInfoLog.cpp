#include "Core/Core.h"
#include "Core/Util.h"

using namespace std;



Hook("?TakeDamage@AActor@@UEAAMMAEBUFDamageEvent@@AEBUFDamageSource@@@Z",
	float, AActor_TakeDamage, AActor* self, float value, FDamageEvent* event, FDamageSource* source)
{

	auto status = OrigAActor_TakeDamage(self, value, event, source);

	if (status == 0.0f) return status;
	if (source == nullptr) return status;
	if (source->InstigatorController == nullptr) return status;
	if (source->InstigatorController->Character == nullptr) return status;
	if (source->CauserActor == nullptr) return status;

	wchar_t log[256];
	auto character = source->InstigatorController->Character;
	auto location = character->CharacterMovement->LastUpdateLocation;
	auto ownershipTarget = FMistClanUtils_GetOwnershipComponent(self, true);
	auto instigatorState = APawn_GetPlayerStateMist(character);

	if (ownershipTarget == nullptr) return status;
	if (instigatorState == nullptr) return status;

	swprintf_s(log, L"%s (%s) damaged %s with %s owned by %s (%s) at %.0f %.0f %.0f",
		character->PlayerState->PlayerNamePrivate.c_str(),
		instigatorState->Clan.Name.c_str(),
		self->NamePrivate.c_str(), source->CauserActor->NamePrivate.c_str(),
		ownershipTarget->OwnerCharacter.Name.c_str(), ownershipTarget->OwnerClan.Name.c_str(),
		location.X, location.Y, location.Z);

	Util::logOnFile("damage", log);

	return status;

}


Hook("?ServerDisassemble_Implementation@UMistBuildingComponent@@UEAAXPEAVAActor@@H@Z",
	void, UMistBuildingComponent_ServerDisassemble_Implementation, UMistBuildingComponent* self, AActor* actor, int id)
{

	auto location = self->PlayerOwner->CharacterMovement->LastUpdateLocation;
	wchar_t log[256];
	swprintf_s(log, L"%s disassembled %s at %.0f %.0f %.0f", self->PlayerOwner->PlayerState->PlayerNamePrivate.c_str(), actor->NamePrivate.c_str(), location.X, location.Y, location.Z);
	Util::logOnFile("disassemble", log);

	OrigUMistBuildingComponent_ServerDisassemble_Implementation(self, actor, id);
}


Hook("?HandleUnpossessed@AMistPlayer@@QEAAXPEAVAMistOasisPlayerController@@@Z",
	void, AMistPlayer_HandleUnpossessed, AMistPlayer* player, AMistOasisPlayerController* controller)
{

	auto playerState = APawn_GetPlayerStateMist(player);
	auto location = player->CharacterMovement->LastUpdateLocation;
	wchar_t log[256];
	swprintf_s(log, L"%s (%s) [%s] logged off at %.0f %.0f %.0f", playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(), playerState->AccountName.c_str(), location.X, location.Y, location.Z);
	Util::logOnFile("login", log);

	OrigAMistPlayer_HandleUnpossessed(player, controller);
}


Hook("?HandlePossessed@AMistPlayer@@QEAAXPEAVAMistOasisPlayerController@@@Z",
	void, AMistPlayer_HandlePossessed, AMistPlayer* player, AMistOasisPlayerController* controller)
{

	OrigAMistPlayer_HandlePossessed(player, controller);

	auto playerState = APawn_GetPlayerStateMist(player);
	auto location = player->CharacterMovement->LastUpdateLocation;
	wchar_t log[256];
	swprintf_s(log, L"%s (%s) [%s] logged in at %.0f %.0f %.0f", playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(), playerState->AccountName.c_str(), location.X, location.Y, location.Z);
	Util::logOnFile("login", log);

}

Hook("?ClientStartSafeLogOutAttempt@UMistSafeLogOutComponent@@QEAAXMAEBVFString@@@Z",
	void, UMistSafeLogOutComponent_ClientStartSafeLogOutAttempt, UMistSafeLogOutComponent* self, float time, FString* playerName)
{

	auto walker = self->InitialTravelParty.Walker;
	auto playerState = self->PlayerStateOwner;
	wchar_t log[256];
	swprintf_s(log, L"%s (%s) started safelog of \"%s\" (%u) %s owned by %s (%s)",
		playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(),
		walker->CustomName.c_str(), walker->WalkerType, walker->WalkerGuid.c_str(),
		walker->ClanOwnershipComponent->OwnerCharacter.Name.c_str(), walker->ClanOwnershipComponent->OwnerClan.Name.c_str()
	);
	Util::logOnFile("safelog", log);

	OrigUMistSafeLogOutComponent_ClientStartSafeLogOutAttempt(self, time, playerName);
}


Hook("?ClientOpen_Implementation@UMistInventoryComponent@@UEAAXPEAVAActor@@AEBV?$TArray@PEAVUMistContainerComponent@@V?$TSizedDefaultAllocator@$0CA@@@@@@Z",
	void, UMistInventoryComponent_ServerOpen_Implementation, UMistInventoryComponent* self, AActor* actor, TArray<UMistContainerComponent*>& data)
{

	OrigUMistInventoryComponent_ServerOpen_Implementation(self, actor, data);

	auto playerState = APawn_GetPlayerStateMist(self->PlayerOwner);
	if (playerState == nullptr) return;
	auto location = &(self->PlayerOwner->CharacterMovement->LastUpdateLocation);
	auto actorOwnership = FMistClanUtils_GetOwnershipComponent(actor, true);
	if (actorOwnership == nullptr) return;

	wchar_t buff[2048];
	swprintf_s(buff, L"%s (%s) opened %s owned by %s (%s) at %.0f %.0f %.0f containing:\n",
		playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(),
		actor->NamePrivate.c_str(), actorOwnership->OwnerCharacter.Name.c_str(), actorOwnership->OwnerClan.Name.c_str(),
		location->X, location->Y, location->Z);

	for (int32 i = 0; i < data.Count; i++) {
		for (int32 j = 0; j < data.Data[i]->Slots.Count; j++) {
			auto item = &(data.Data[i]->Slots.Data[j]);
			if (item->Count == 0) continue;
			swprintf_s(buff, L"%s\tx%i\tQ%u\t%s\n", buff, item->Count, item->Item.Quality, item->Item.Template->NamePrivate.c_str());
		}
	}

	Util::logOnFile("items", buff);
}

Hook("?ServerSetCheatEnabled_Implementation@UMistCheatingComponent@@UEAAXAEBVFName@@_N@Z",
	void, UMistCheatingComponent_ServerSetCheatEnabled_Implementation, UMistCheatingComponent* self, FName* name, bool value)
{
	auto fnName = name->c_str();
	wchar_t buff[128];
	swprintf_s(buff, L"%s %u", fnName, value);
	Util::logOnFile("commands", buff);

	if (wcscmp(fnName, L"CheatFreeBuilding") == 0) {
		value = false; //disable free building
	}

	OrigUMistCheatingComponent_ServerSetCheatEnabled_Implementation(self, name, value);
}


