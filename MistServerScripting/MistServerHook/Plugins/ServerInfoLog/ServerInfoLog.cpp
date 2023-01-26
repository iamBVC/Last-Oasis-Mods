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

	GHooker.OrigFn(onUnpossessed)(player, controller);

	auto playerState = APawn_GetPlayerStateMist(player);
	wchar_t log[256];
	swprintf_s(log, L"%s (%s) [%s] logged in", playerState->PlayerNamePrivate.c_str(), playerState->Clan.Name.c_str(), playerState->AccountName.c_str());
	Util::logOnFile("login", log);

}


void onSafelog(UMistSafeLogOutComponent* self, float time, FString* text) {
	/*
	wchar_t log[256];
	swprintf_s(log, L"%s (%s) started safelog of %s owned by %s (%s)",
		self->InitiatorPlayerState->PlayerNamePrivate.c_str(), self->InitiatorPlayerState->Clan.Name.c_str(),
		walker->PlaceableName.c_str(),
		walker->ClanOwnershipComponent->OwnerCharacter.Name.c_str(), walker->ClanOwnershipComponent->OwnerClan.Name.c_str()
	);
	Util::logOnFile("safelog", log);
	*/
	GHooker.OrigFn(onSafelog)(self, time, text);
}



void ServerInfoLogInit() {
	funcToTick.push_back(ServerInfoLogFn);

	GHooker.Add(onTakeDamage, SYM_972A25AB257FA2646EC86B5597D03DB4); //AActor_TakeDamage

	GHooker.Add(onDisassemble, SYM_011FBC89119E58B85B6FD6D2C48D4FE7); //UMistBuildingComponent_ServerDisassemble_Implementation

	GHooker.Add(onUnpossessed, SYM_B615AD3F050A7A69F733534D424697E8); //AMistPlayer_HandleUnpossessed

	GHooker.Add(onPossessed, SYM_5CCEDC1ED4A21F32B5AB9ADD5CEE962F); //AMistPlayer_HandlePossessed

	GHooker.Add(onSafelog, SYM_B5816A61F71E11DB914B9EAE80E67507); //UMistSafeLogOutComponent_ClientStartSafeLogOutAttempt
	
}