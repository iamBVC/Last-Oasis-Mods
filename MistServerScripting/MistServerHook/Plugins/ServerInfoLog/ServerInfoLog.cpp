#include "ServerInfoLog.h"

#include "Native/Symbol.h"



void ServerInfoLogFn(UWorld* world, int level, float delta) {

	static float timer = 0;
	static float uptime = 0;

	if (level <= 2) {

		timer += delta;
		uptime += delta;

		if (timer >= 60.0f) {
			timer = 0.0f;
			TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
			UWorld_GetPlayerControllerIterator(world, &it);
			Log(L"%s has been active for %.0f minutes", world->NamePrivate.c_str(), roundf(uptime / 60.0f));
			Log(L"%u players online", it.Array->Count);
		}

	}


}




float onTakeDamage(AActor* self, float value, FDamageEvent* event, FDamageSource* source) {

	auto status = GHooker.OrigFn(onTakeDamage)(self, value, event, source);

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



void onDisassemble(UMistBuildingComponent* self, AActor* actor, int id) {

	auto location = self->PlayerOwner->CharacterMovement->LastUpdateLocation;
	wchar_t log[256];
	swprintf_s(log, L"%s disassembled %s at %.0f %.0f %.0f", self->PlayerOwner->PlayerState->PlayerNamePrivate.c_str(), actor->NamePrivate.c_str(), location.X, location.Y, location.Z);
	Util::logOnFile("disassemble", log);

	GHooker.OrigFn(onDisassemble)(self, actor, id);
}



void onUnpossessed(AMistPlayer* player, AMistOasisPlayerController* controller) {

	auto playerState = APawn_GetPlayerStateMist(player);
	auto location = player->CharacterMovement->LastUpdateLocation;
	wchar_t log[256];
	swprintf_s(log, L"%s (%s) [%s] logged off at %.0f %.0f %.0f", playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(), playerState->AccountName.c_str(), location.X, location.Y, location.Z);
	Util::logOnFile("login", log);

	GHooker.OrigFn(onUnpossessed)(player, controller);
}


void onPossessed(AMistPlayer* player, AMistOasisPlayerController* controller) {

	GHooker.OrigFn(onPossessed)(player, controller);

	auto playerState = APawn_GetPlayerStateMist(player);
	auto location = player->CharacterMovement->LastUpdateLocation;
	wchar_t log[256];
	swprintf_s(log, L"%s (%s) [%s] logged in at %.0f %.0f %.0f", playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(), playerState->AccountName.c_str(), location.X, location.Y, location.Z);
	Util::logOnFile("login", log);

}


void onSafelog(UMistSafeLogOutComponent* self, float time, FString* playerName) {
	
	auto walker = self->InitialTravelParty.Walker;
	auto playerState = self->PlayerStateOwner;
	wchar_t log[256];
	swprintf_s(log, L"%s (%s) started safelog of \"%s\" (%u) %s owned by %s (%s)",
		playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(),
		walker->CustomName.c_str(), walker->WalkerType, walker->WalkerGuid.c_str(),
		walker->ClanOwnershipComponent->OwnerCharacter.Name.c_str(), walker->ClanOwnershipComponent->OwnerClan.Name.c_str()
	);
	Util::logOnFile("safelog", log);
	
	GHooker.OrigFn(onSafelog)(self, time, playerName);
}




void MulticastSetCheatValue(AMistOasisGameState* self, FName* name, bool value) {

	auto fnName = name->c_str();

	if (wcscmp(fnName, L"CheatFreeBuilding") == 0) {
		value = false;
		Warning(L"Someone used command %s", fnName);
	}

	GHooker.OrigFn(MulticastSetCheatValue)(self, name, value);

}


/*
int addItem(UMistInventoryComponent* self, FMistItem* item, int amount, FMistInventoryOperationTarget* target, FMistInventoryOperationParams* params) {


	Warning(L"Giving %i %s to %s", amount, item->Template->NamePrivate.c_str(), self->CharacterOwner->PlayerState->PlayerNamePrivate.c_str());

	auto value = GHooker.OrigFn(addItem)(self, item, amount, target, params);
	return value;
}


int64 removeItem(UMistInventoryComponent* self, FMistInventoryOperationSource* source, FMistInventoryOperationParams* params) {

	Warning(L"Removing %i %s from %s", source->NumItems, source->Item.Template->NamePrivate.c_str(), self->CharacterOwner->PlayerState->PlayerNamePrivate.c_str());

	auto value = GHooker.OrigFn(removeItem)(self, source, params);
	return value;
}



void updateContainer(UMistContainerComponent* container, int id1, int id2, FMistContainerSlotUpdateData* data) {

	Warning(L"updateContainer");
	GHooker.OrigFn(updateContainer)(container, id1, id2, data);
	int i = 0;
}

*/


void InventoryOpen(UMistInventoryComponent* self, AActor* actor, TArray<UMistContainerComponent*>& data)
{
	GHooker.OrigFn(InventoryOpen)(self, actor, data);

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
			swprintf_s(buff, L"%s x%i Q%u %s\n", buff, item->Count, item->Item.Quality, item->Item.Template->NamePrivate.c_str());
		}
	}

	Util::logOnFile("items", buff);
}





void ServerInfoLogInit() {
	funcToTick.push_back(ServerInfoLogFn);

	GHooker.Add(onTakeDamage, SYM_972A25AB257FA2646EC86B5597D03DB4); //AActor_TakeDamage

	GHooker.Add(onDisassemble, SYM_011FBC89119E58B85B6FD6D2C48D4FE7); //UMistBuildingComponent_ServerDisassemble_Implementation

	GHooker.Add(onUnpossessed, SYM_B615AD3F050A7A69F733534D424697E8); //AMistPlayer_HandleUnpossessed

	GHooker.Add(onPossessed, SYM_5CCEDC1ED4A21F32B5AB9ADD5CEE962F); //AMistPlayer_HandlePossessed

	GHooker.Add(onSafelog, SYM_B5816A61F71E11DB914B9EAE80E67507); //UMistSafeLogOutComponent_ClientStartSafeLogOutAttempt
	
	GHooker.Add(MulticastSetCheatValue, SYM_FA4027FB4BE097FAAAF0AC1CEE0BC675); //AMistOasisGameState_MulticastSetCheatValue

	
	//GHooker.Add(addItem, SYM_C79C389DD7D5054841361EEE09867623); //UMistInventoryComponent_Add

	//GHooker.Add(removeItem, SYM_5F4009B174CA6865C6F7156CDEFAC4D7); //UMistInventoryComponent_Remove

	//GHooker.Add(updateContainer, SYM_5377B33C7511FF50167EF44D532095B1); //UMistInventoryComponent_ClientUpdateContainer

	GHooker.Add(InventoryOpen, SYM_1654F54D7B6BD353E56543B3BB2F27A9); //UMistInventoryComponent_ServerOpen_Implementation

}
