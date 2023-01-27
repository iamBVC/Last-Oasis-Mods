#pragma once
#include "MistServer/Mist_classes.h"
#include "../UnrealEngine/Types.h"



extern UMistWorldEventsManager* (*FMistWorldUtils_GetWorldEventsManager)(UObject* self);
extern FText (*FText_FromName)(FName* name);
extern FText* (*FText_GetEmpty)();

extern void (*FName_New)(FName* self, const wchar_t* str, EFindName e);
extern void (*FName_FName)(FName* self, const wchar_t* str, EFindName e);
extern void* (*FName_ToString)(FName* self, void* str);
extern void* (*FText_FromString)(FText* self, FString&& str);
extern void* (*FText_Destructor)(void* self);

extern void (*FMemory_Free)(void* p);
extern void (*FMsg_Logf_InternalImpl)(char* a0, int a1, FName* source, ELogVerbosity level, const wchar_t* format, ...);
extern void* (*FWeakObjectPtr_Get)(void* self);
extern int (*TArrayFString_AddUniqueImpl)(TArray<FString>* self, const FString& str);

extern UWorld* (*UObject_GetWorld)(UObject* self);
extern int (*UWorld_GetActorCount)(UWorld* self);
extern void (*UWorld_GetPlayerControllerIterator)(UWorld* self, TIndexedIterator<TWeakObjectPtr<APlayerController>>* it);

extern ULocalPlayer* (*UWorld_GetFirstLocalPlayerFromController)(UWorld* self);
extern void* (*UWorld_GetControllerIterator)(UWorld* self, void* it);
extern void* (*UWorld_GetPersistentLevelScriptActor)(UWorld* self);
extern AWorldSettings* (*UWorld_GetWorldSettings)(UWorld* self, bool value1, bool value2);

extern AMistCharacter* (*AController_GetPawnCharacter)(AController* self);
extern AMistHumanoidMob* (*AController_GetPawnMob)(AController* self);
extern AMistPlayer* (*AController_GetPawnPlayer)(AController* self);
extern bool (*AController_TeleportTo)(AController* self, const FVector* location, const FRotator* rotation, bool bool1, bool bool2);

extern int (*AGameMode_GetNumPlayers)(AGameMode* self);
extern void (*AGameMode_RestartGame)(AGameMode* self);
extern void (*AGameMode_Say)(AGameMode* self, const FString& text);
extern void (*AGameMode_SendPlayer)(AGameMode* self, APlayerController* controllerPtr, const FString& text);

extern bool(*AMistCharacter_AddItemOfClass)(UMistItemTemplate* itemPtr, int amount, UMistContainerComponent* containerPtr);
extern float (*AMistCharacter_GetCarriedWeight)(AMistCharacter* self);
extern int64(*AMistCharacter_GetClanId)(AMistCharacter* self);
extern int (*AMistCharacter_GetItemCountOfClass)(UMistItemTemplate* itemPtr, UMistContainerComponent* containerPtr);
extern float (*AMistCharacter_GetMaxHealth)(AMistCharacter* self, int value);
extern AMistCharacter* (*AMistCharacter_GetPrivateStaticClass)(AMistCharacter* self);
extern AMistWalker* (*AMistCharacter_GetWalker)(AMistCharacter* self);
extern float (*AMistCharacter_GetWeight)(AMistCharacter* self, int value);
extern bool (*AMistCharacter_IsGrappled)(AMistCharacter* self);
extern void (*AMistCharacter_RemoveItemOfClass)(UMistItemTemplate* itemPtr, int amount, UMistContainerComponent* containerPtr);

extern void(*AMistOasisGameMode_StartShutdown)(AMistOasisGameMode* self);

extern void (*AMistOasisPlayerController_ClientRemoveHudCountdown)(AMistOasisPlayerController* self, const FString& id);
extern void (*AMistOasisPlayerController_ClientAddHudCountdown)(AMistOasisPlayerController* self, const FString& id, const FMistHudCountdownOptions& options);
extern void (*AMistOasisPlayerController_ClientAddHudLog)(AMistOasisPlayerController* self, const FName& id, const FText& text);
extern void (*AMistOasisPlayerController_ClientAddHudMessage)(AMistOasisPlayerController* self, const FMistHudMessageOptions& options);

extern void (*AMistPlayer_AwardExperience)(AMistPlayer* self, int amount, bool shared);
extern AMistWalker* (*AMistPlayer_GetWalker)(AMistPlayer* self);
extern bool (*AMistPlayer_IsManningWalker)(AMistPlayer* self);
extern void (*AMistPlayer_StartSprintingAction)(AMistPlayer* self);
extern bool (*AMistPlayer_SpendMoney)(AMistPlayer* self, int amount);
extern float (*AMistPlayer_TakeDamage)(AMistPlayer* self, float damage, FDamageEvent* event, FDamageSource* source);
extern void (*AMistPlayer_InternalRevive)(AMistPlayer* self, AMistCharacter* character);

extern void (*AMistPlayerController_KickPlayer)(AMistPlayerController* self, const FText& reason);

extern void (*AMistLevelActor_GetWeatherSystem)(AMistLevelActor* self);

extern void (*AMistWalker_DestroyWalker)(AMistWalker* self);
extern float (*AMistWalker_GetCurrentSpeed)(AMistWalker* self);
extern float (*AMistWalker_GetHealth)(AMistWalker* self, int index);
extern FString(*AMistWalker_GetHumanReadableName)(AMistWalker* self);
extern float (*AMistWalker_GetMaxHealth)(AMistWalker* self, int index);
extern int64(*AMistWalker_GetMaximumWater)(AMistWalker* self);
extern int64(*AMistWalker_GetTotalWater)(AMistWalker* self);
extern FVector* (*AMistWalker_GetVelocity)(AMistWalker* self);
extern void (*AMistWalker_SetCustomName)(AMistWalker* self, FString* namePtr);
extern float (*AMistWalker_SetHealth)(AMistWalker* self, float health, int index);
extern void (*AMistWalker_SetQuality)(AMistWalker* self, int quality);

extern void (*AMistWeatherSystem_ChangeWeather)(AMistWeatherSystem* self);

extern AGameMode* (*AActor_GetGameMode)(AActor* self);
extern AMistOasisGameMode* (*AActor_GetMistGameMode)(AActor* self);
extern UActorComponent* (*AActor_GetComponentByClass)(AActor* self, UClass* cls);
extern AMistOasisGameState* (*AActor_GetGameState)(AActor* self);
extern float (*AActor_GetActorTimeDilation)(AActor* self);
extern ULevel* (*AActor_GetLevel)(AActor* self);
extern float (*AActor_GetLifeSpan)(AActor* self);
extern UPlayer* (*AActor_GetNetOwningPlayer)(AActor* self);
extern FVector* (*AActor_GetVelocity)(AActor* self);
extern UWorld* (*AActor_GetWorld)(AActor* self);
extern void (*AActor_SetActorRelativeScale3D)(AActor* self);
extern bool (*AActor_K2_TeleportTo)(AActor* self, FVector location, FRotator rotation);
extern void (*AActor_ForceNetUpdate)(AActor* self, bool value);
extern void (*AActor_ReceiveAnyDamage)(AActor* self, float value, UDamageType* type, FDamageSource* source);
extern void (*AActor_ReceivePointDamage)(AActor* self, float value, UDamageType* type, FDamageSource* source, FHitResult* result);
extern void (*AActor_ReceiveRadialDamage)(AActor* self, float value, UDamageType* type, FVector position, FDamageSource* source, FHitResult* result);
extern float (*AActor_TakeDamage)(AActor* self, float value, FDamageEvent* event, FDamageSource* source);
extern UMistGameInstance* (*AActor_GetGameInstance)(AActor* self);

extern APlayerState* (*APawn_GetPlayerState)(APawn* self);
extern AMistOasisPlayerState* (*APawn_GetPlayerStateMist)(APawn* self);
extern AMistOasisPlayerController* (*APawn_GetControllerMist)(APawn* self);
extern APlayerController* (*APawn_GetController)(APawn* self);
extern FVector* (*APawn_GetVelocity)(APawn* self);

extern APawn* (*APlayerController_GetPawnOrSpectator)(APlayerController* self);
extern AHUD* (*APlayerController_GetHUD)(APlayerController* self);
extern UPlayer* (*APlayerController_GetNetOwningPlayer)(APlayerController* self);
extern AActor* (*APlayerController_GetViewTarget)(APlayerController* self);
extern void (*APlayerController_SetName)(APlayerController* self, FString* name);
extern void (*APlayerController_SetPawn)(APlayerController* self, APawn* pawn);
extern void (*APlayerController_SetPlayer)(APlayerController* self, UPlayer* player);
extern void (*APlayerController_GetActorEyesViewPoint)(APlayerController* self, FVector* position, FRotator* rotation);

extern FString(*APlayerState_GetHumanReadableName)(APlayerState* self);
extern FString(*APlayerState_GetPlayerName)(APlayerState* self);
extern FString(*APlayerState_GetPlayerNameCustom)(APlayerState* self);
extern FVector(*APlayerState_GetVelocity)(APlayerState* self);
extern void (*APlayerState_RecalculateAvgPing)(APlayerState* self);
extern void (*APlayerState_SetPlayerName)(APlayerState* self, FString* name);
extern void (*APlayerState_SetPlayerNameInternal)(APlayerState* self, FString* name);
extern void (*APlayerState_TeleportTo)(APlayerState* self, FVector* position, bool value1, bool value2);
extern void (*APlayerState_UpdatePing)(APlayerState* self, float ping);

extern bool (*FMistWorldUtils_FindCharacterFloorTeleportSpot)(ACharacter * character, FVector * location, FRotator * rotation);

extern UMistClanOwnershipComponent* (*FMistClanUtils_GetOwnershipComponent)(AActor* self, bool value);

extern FDateTime(*FDateTime_UtcNow)(void);
extern FDateTime(*FDateTime_Now)(void);
extern FString(*FDateTime_ToString)(void);
extern void (*FWindowsPlatformTime_UtcTime)(int* year, int* month, int* dayOfWeek, int* day, int* hour, int* minutes, int* seconds, int* milliseconds);

extern bool (*GetLookAtActor)(AMistPlayer* player, AActor** actorPtr, int* value);

extern bool (*UCharacterMovementComponent_ClientUpdatePositionAfterServerUpdate)(UCharacterMovementComponent* self);
extern bool (*UCharacterMovementComponent_ForcePositionUpdate)(UCharacterMovementComponent* self, float delta);
extern void (*UCharacterMovementComponent_AdjustFloorHeight)(UCharacterMovementComponent* self);
extern void (*UCharacterMovementComponent_UpdateFloorFromAdjustment)(UCharacterMovementComponent* self);

extern void (*UMistBuildingComponent_ServerDisassemble_Implementation)(UMistBuildingComponent* self, AActor* actor, int id);

extern void (*UMistCheatingComponent_LeaveClan)(UMistCheatingComponent* self);
extern void (*UMistCheatingComponent_ServerLeaveClan)(UMistCheatingComponent* self);
extern void (*UMistCheatingComponent_ServerLeaveClan_Implementation)(UMistCheatingComponent* self);
extern void (*UMistCheatingComponent_CreateClan)(UMistCheatingComponent* self, FString* name, int flag, int emblem);
extern void (*UMistCheatingComponent_ServerCreateClan)(UMistCheatingComponent* self, FString* name, int flag, int emblem);
extern void (*UMistCheatingComponent_ServerCreateClan_Implementation)(UMistCheatingComponent* self, FString* name, int flag, int emblem);

extern void (*UMistClanScreen_CreateClan)(UMistClanScreen* self, FString* name, int flag, int emblem);
extern void (*UMistClanScreen_LeaveClan)(UMistClanScreen* self);

extern TArray<UMistItemTemplate*> (*UMistGameInstance_GetAllBlueprintsOfClassItem)(UMistGameInstance* self); //crash

extern void (*UMistHealthComponent_HandleAnyDamage)(UMistHealthComponent* self, AActor* actor, float damage, UDamageType* damageType, FDamageSource* damageSource);
extern void (*UMistHealthComponent_SetHealth)(UMistHealthComponent* self, float health);

extern UClass* (*UMistPlayerMessengerComponent_StaticClass)();
extern void (*UMistPlayerMessengerComponent_ServerMapChat)(UMistPlayerMessengerComponent* self, FString* text);
extern void (*UMistPlayerMessengerComponent_ClientAddAnnouncementMessage)(UMistPlayerMessengerComponent* self, const FText& text);
extern void (*UMistPlayerMessengerComponent_ClientAddInformationMessage)(UMistPlayerMessengerComponent* self, const FText& text);
extern void (*UMistPlayerMessengerComponent_ClientAddNotificationChatMessage)(UMistPlayerMessengerComponent* self, const EPlayerCharacterNotificationType& type, const FText& text);
extern void (*UMistPlayerMessengerComponent_ClientAddClanChatMessage)(UMistPlayerMessengerComponent* self, const FMistMessageCharacterData& characterData, const FText& text);
extern void (*UMistPlayerMessengerComponent_ClientAddCombatHitMessage)(UMistPlayerMessengerComponent* self, float value1, float value2, bool value3);
extern void (*UMistPlayerMessengerComponent_ClientAddGotExperienceMessage)(UMistPlayerMessengerComponent* self, int amount);
extern void (*UMistPlayerMessengerComponent_ClientAddKillBossMessage)(const FMistMessageCharacterData& data1, const FMistMessageCharacterData& data2, EMistKillReason reason);
extern void (*UMistPlayerMessengerComponent_ClientAddMoneyChangedMessage)(UMistPlayerMessengerComponent* self, int amount);
extern void (*UMistPlayerMessengerComponent_ClientAddReachedLevelMessage)(UMistPlayerMessengerComponent* self, int level);
extern UClass* (*UMistPlayerMessengerComponent_GetPrivateStaticClass)(UMistPlayerMessengerComponent* self);

extern void (*UMistCharacterMovementComponent_TeleportTo)(UMistCharacterMovementComponent* self, const FTransform* location);

extern UClass* (*UMistItemTemplate_GetPrivateStaticClass)(void);

extern void (*UMistWorldEventsManager_AddWorldEventAsteroid)(UMistWorldEventsManager* self);

extern void (*UMistUserGameSettings_SetAnonymizeClans)(UMistUserGameSettings* self, bool value);
extern void (*UMistUserGameSettings_SetAnonymizePlayers)(UMistUserGameSettings* self, bool value);

extern void* (*FCurlHttpRequest_GetURL)(void* self, FString* url);
extern void* (*FCurlHttpRequest_GetVerb)(void* self, FString* verb);
extern int (*FCurlHttpRequest_GetContentLength)(void* self);
extern void* (*FCurlHttpRequest_GetContentType)(void* self, FString* type);
extern TArray<uint8>* (*FCurlHttpRequest_GetContent)(void* self);

extern void* (*FCurlHttpResponse_GetURL)(void* self, FString* url);
extern int (*FCurlHttpResponse_GetContentLength)(void* self);
extern TArray<uint8>* (*FCurlHttpResponse_GetContent)(void* self);

extern void (*ApplyCVarSettingsFromIni)(const TCHAR* InSectionName, const TCHAR* InIniFilename, EConsoleVariableFlags SetBy, bool bAllowCheating);
extern void (*FConsoleManager_CallAllConsoleVariableSinks)(void* self);
extern void* (*FConsoleManager_RegisterConsoleVariableRef_Int)(void* self, const wchar_t* cvar, int& var, const wchar_t* desc, EConsoleVariableFlags flags);
extern void* (*FConsoleManager_RegisterConsoleVariableRef_Float)(void* self, const wchar_t* cvar, float& var, const wchar_t* desc, EConsoleVariableFlags flags);
extern void* (*FConsoleManager_RegisterConsoleVariableRef_FString)(void* self, const wchar_t* cvar, FString& var, const wchar_t* desc, EConsoleVariableFlags flags);