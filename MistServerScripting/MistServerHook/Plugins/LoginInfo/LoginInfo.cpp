#include "LoginInfo.h"

#include "Native/Symbol.h"

#define MOTD L"\
Welcome to the mods/scripts development server!\n\
If you can read this message means our ScriptHook is working :)\n\
Type /help for more info\
"

void LoginInfoFn(APlayerController* self, APawn* pawn) {

	GHooker.OrigFn(LoginInfoFn)(self, pawn);

	//get used data
	if (self == nullptr) return;
	if (pawn == nullptr) return;

	auto gamemode = AActor_GetGameMode(self);
	auto pop = AGameMode_GetNumPlayers(gamemode);
	auto worldPtr = UObject_GetWorld(self);
	TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
	UWorld_GetPlayerControllerIterator(worldPtr, &it);
	auto playercontroller = APawn_GetControllerMist(pawn);

	if (playercontroller == nullptr) return;

	//print MOTD
	Util::ClientAddRedMsg(playercontroller, MOTD);

	//print online players
	wchar_t popBuff[64];
	swprintf_s(popBuff, L"%i players online", pop);
	FString str = FString(popBuff);
	FText text = FText(str);
	FName logid = FName(L"grappling_hook_broken");
	for (auto i = 0; i < it.Array->Count; i++) {
		auto playerPtr = AController_GetPawnPlayer(it.Array->Data[i].Get());
		if (playerPtr == nullptr) continue;
		auto MistPlayerController = playerPtr->PossessedByPlayerController;
		if (MistPlayerController == nullptr) continue;
		AMistOasisPlayerController_ClientAddHudLog(MistPlayerController, logid, text);
	}

	//print who joined the game

	if (playercontroller->PlayerState == nullptr) return;
	FString title = FString(playercontroller->PlayerState->PlayerNamePrivate.c_str());
	FString desc = FString(L"joined the game");
	FMistHudCountdownOptions options = { FText(title), FText(desc), 3.0f, 3.0f, false, false };
	FString countdownid = FString(L"new player");
	for (auto i = 0; i < it.Array->Count; i++) {
		auto playerPtr = AController_GetPawnPlayer(it.Array->Data[i].Get());
		if (playerPtr == nullptr) continue;
		auto MistPlayerController = playerPtr->PossessedByPlayerController;
		if (MistPlayerController == nullptr) continue;
		AMistOasisPlayerController_ClientAddHudCountdown(MistPlayerController, countdownid, options);
	}

}



void LoginInfoInit() {
	GHooker.Add(LoginInfoFn, SYM_9822A762908C572CA0E966FE75DFFD70);
}