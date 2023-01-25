// BlueprintGeneratedClass Player.Player_C
// Size: 0x1128 (Inherited: 0xe00)
struct APlayer_C : AMistPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe00(0x08)
	struct UCapsuleComponent* Interact; // 0xe08(0x08)
	struct USceneComponent* RightOffset; // 0xe10(0x08)
	struct USceneComponent* LeftOffset; // 0xe18(0x08)
	struct UReactiveMaterialControllerComponent_C* ReactiveMaterialControllerComponent; // 0xe20(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2DReactive; // 0xe28(0x08)
	struct UFXManagerComponent_C* FXManagerComponent; // 0xe30(0x08)
	struct UMistDeviceLightningComponent* MistDeviceLightning; // 0xe38(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2DBaseColor; // 0xe40(0x08)
	struct UBP_LandscapeCapture_C* BP_LandscapeCapture; // 0xe48(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0xe50(0x08)
	struct UMistSpawnWindBySpeed* MistSpawnWindBySpeed; // 0xe58(0x08)
	struct USpawnParticleComponent_C* SpawnParticleAroundComponent; // 0xe60(0x08)
	struct UAudioAmbientComponent_C* AudioAmbientComponent; // 0xe68(0x08)
	struct UMistCraftingStationComponent* CraftingStation; // 0xe70(0x08)
	struct UParticleSystemComponent* DrugEffect; // 0xe78(0x08)
	struct UMistCameraShakeComponent_C* MistCameraShakeComponent; // 0xe80(0x08)
	struct UPostProcessControler_C* PostProcessControler; // 0xe88(0x08)
	struct UPostProcessComponent* PostProcessStack; // 0xe90(0x08)
	struct UMistFootprintComponent* MistFootprintSmallStep; // 0xe98(0x08)
	struct UMistFootprintComponent* MistFootprintJump; // 0xea0(0x08)
	struct UMistFootprintComponent* MistFootprintSprint; // 0xea8(0x08)
	struct UMistFootprintComponent* MistFootprintNormal; // 0xeb0(0x08)
	struct UMistPlayerMapIconProviderComponent* MistPlayerMapIconProvider; // 0xeb8(0x08)
	struct UAudioComponent* VO3DComponent; // 0xec0(0x08)
	struct UAudioComponent* Consumable; // 0xec8(0x08)
	struct UAudioComponent* Harvestable; // 0xed0(0x08)
	struct UAudioComponent* Footstep; // 0xed8(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0xee0(0x08)
	struct UMapViewComponent* MapView; // 0xee8(0x08)
	struct UMeleeCombatComponent_C* MeleeCombatComponent; // 0xef0(0x08)
	float SelectionChangedTimeline_OpacityMultiply_EA73E1D0463A92853BB32E83B94C823C; // 0xef8(0x04)
	enum class ETimelineDirection SelectionChangedTimeline__Direction_EA73E1D0463A92853BB32E83B94C823C; // 0xefc(0x01)
	char pad_EFD[0x3]; // 0xefd(0x03)
	struct UTimelineComponent* SelectionChangedTimeline; // 0xf00(0x08)
	enum class ETimelineDirection VibratoTimeline__Direction_63ED54B343EC9A7B6E8B27AA319E2F6A; // 0xf08(0x01)
	char pad_F09[0x7]; // 0xf09(0x07)
	struct UTimelineComponent* VibratoTimeline; // 0xf10(0x08)
	float DefaultSpeedWalk; // 0xf18(0x04)
	float DefaultSpeedSprint; // 0xf1c(0x04)
	float DefaultSpeedCrouch; // 0xf20(0x04)
	float OldElevation; // 0xf24(0x04)
	int32_t FootstepSFX; // 0xf28(0x04)
	int32_t HarvestSFX; // 0xf2c(0x04)
	float NormalizedPlayerSpeed; // 0xf30(0x04)
	char pad_F34[0x4]; // 0xf34(0x04)
	struct UAudioComponent* WindFastMovement; // 0xf38(0x08)
	bool WindFastMovementActive; // 0xf40(0x01)
	char pad_F41[0x3]; // 0xf41(0x03)
	int32_t HitDamage; // 0xf44(0x04)
	struct UAudioComponent* SprintEffort; // 0xf48(0x08)
	bool SprintActive; // 0xf50(0x01)
	char pad_F51[0x7]; // 0xf51(0x07)
	struct UAudioComponent* Downed; // 0xf58(0x08)
	struct UAudioComponent* Revive; // 0xf60(0x08)
	struct UAudioComponent* ThirstDamage; // 0xf68(0x08)
	bool WingSuitEquipped; // 0xf70(0x01)
	bool IsFlying; // 0xf71(0x01)
	char pad_F72[0x6]; // 0xf72(0x06)
	struct UAudioComponent* VONoStamina; // 0xf78(0x08)
	struct UAudioComponent* VOSpecialDamage; // 0xf80(0x08)
	bool StepLeftFired; // 0xf88(0x01)
	bool StepRightFired; // 0xf89(0x01)
	char pad_F8A[0x6]; // 0xf8a(0x06)
	struct UAudioComponent* DownedBreath; // 0xf90(0x08)
	struct FVector Bounds Min; // 0xf98(0x0c)
	struct FVector Bounds Size; // 0xfa4(0x0c)
	int32_t TimerValue; // 0xfb0(0x04)
	bool LoopTimer; // 0xfb4(0x01)
	char pad_FB5[0x3]; // 0xfb5(0x03)
	int32_t GroundMaterial; // 0xfb8(0x04)
	char pad_FBC[0x4]; // 0xfbc(0x04)
	struct USceneComponent* ParticleSystem; // 0xfc0(0x08)
	float ActHealth_71; // 0xfc8(0x04)
	float ActHealth_31; // 0xfcc(0x04)
	float ActHealth_11; // 0xfd0(0x04)
	char pad_FD4[0x4]; // 0xfd4(0x04)
	struct UAudioComponent* ArmorFoleyFalling; // 0xfd8(0x08)
	bool IsFalling; // 0xfe0(0x01)
	char pad_FE1[0x3]; // 0xfe1(0x03)
	float SlingTension; // 0xfe4(0x04)
	bool PlayerInSling; // 0xfe8(0x01)
	char pad_FE9[0x7]; // 0xfe9(0x07)
	struct UAudioComponent* VOThirst; // 0xff0(0x08)
	struct FTimerHandle TimerRipples; // 0xff8(0x08)
	float WaterRippleParticle; // 0x1000(0x04)
	float TimeBetweenParticleIsSpawned; // 0x1004(0x04)
	bool StaminaLevelIsZero; // 0x1008(0x01)
	char pad_1009[0x7]; // 0x1009(0x07)
	struct UAudioComponent* MusicTravelTheme; // 0x1010(0x08)
	struct UAudioComponent* VOAttack; // 0x1018(0x08)
	float FallingTime; // 0x1020(0x04)
	char pad_1024[0x4]; // 0x1024(0x04)
	struct UMistPlayerSFXSet* VOType; // 0x1028(0x08)
	struct UAudioComponent* VOSelfDmg; // 0x1030(0x08)
	float StaminaPercentage; // 0x1038(0x04)
	char pad_103C[0x4]; // 0x103c(0x04)
	struct UAudioComponent* VOReceiveHitDmg; // 0x1040(0x08)
	int32_t VOAttackType; // 0x1048(0x04)
	struct FVector StepPosition; // 0x104c(0x0c)
	struct UAudioComponent* VOPullUp; // 0x1058(0x08)
	struct UAudioComponent* SpokenVOIdle; // 0x1060(0x08)
	float VibratoDuration; // 0x1068(0x04)
	float FastWindMinSpeed; // 0x106c(0x04)
	struct UGrapplingHookBase_C* GrapplingHook; // 0x1070(0x08)
	struct UAudioComponent* VONoStaminaEffort; // 0x1078(0x08)
	struct UAudioComponent* BlockEffort; // 0x1080(0x08)
	bool bJumping; // 0x1088(0x01)
	char pad_1089[0x3]; // 0x1089(0x03)
	struct FName ParticleOriginSocketName; // 0x108c(0x08)
	char pad_1094[0x4]; // 0x1094(0x04)
	struct USkeletalMeshComponent* WingSuitMesh; // 0x1098(0x08)
	struct UMaterialInstanceDynamic* WingSuitDMI; // 0x10a0(0x08)
	float FlyTime; // 0x10a8(0x04)
	char pad_10AC[0x4]; // 0x10ac(0x04)
	struct UParticleSystemComponent* WaterRipple; // 0x10b0(0x08)
	bool bUseHighQualityRipples; // 0x10b8(0x01)
	char pad_10B9[0x7]; // 0x10b9(0x07)
	struct UParticleSystemComponent* MaterialMoveReact; // 0x10c0(0x08)
	bool bUseGrassDisplace; // 0x10c8(0x01)
	char pad_10C9[0x7]; // 0x10c9(0x07)
	struct APlayerController* PlayerController; // 0x10d0(0x08)
	struct FMulticastInlineDelegate StartSteeringWalkerDispatcher; // 0x10d8(0x10)
	struct FMulticastInlineDelegate StopSteeringWalkerDispatcher; // 0x10e8(0x10)
	bool bAllowHighQualityEffects; // 0x10f8(0x01)
	char pad_10F9[0x7]; // 0x10f9(0x07)
	struct FMulticastInlineDelegate PossessedDispatcher; // 0x1100(0x10)
	struct FMulticastInlineDelegate UnpossessedDispatcher; // 0x1110(0x10)
	struct UAudioComponent* SkinBurnStart; // 0x1120(0x08)

	void SetLavaStepPitch(float& Pitch); // Function Player.Player_C.SetLavaStepPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetNormalizedSpeed(float MinRange, float& NormalizedSpeed); // Function Player.Player_C.GetNormalizedSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void IsGrapplingHookActive(bool& IsGrappling); // Function Player.Player_C.IsGrapplingHookActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetVOBasedOnPowerAlpha(int32_t& VOAttackType); // Function Player.Player_C.SetVOBasedOnPowerAlpha // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void JumpUpOnSurface(); // Function Player.Player_C.JumpUpOnSurface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void VOStamina(float CurrentStamina); // Function Player.Player_C.VOStamina // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CanPlayStepSound(struct UCharacterMovementComponent* CharacterMovement, bool& CanPlayStepSound); // Function Player.Player_C.CanPlayStepSound // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x163f1c0
	void DMGThirstVO(); // Function Player.Player_C.DMGThirstVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioArmorFalling(enum class EMovementMode Selection); // Function Player.Player_C.AudioArmorFalling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioArmorFoley(int32_t SoundType, float Volume); // Function Player.Player_C.AudioArmorFoley // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioFadeOut(struct UAudioComponent* Audio Component, float Duration); // Function Player.Player_C.AudioFadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioAttacksVO(struct USoundCue* NewParam, float ArmorFoleyVolume, bool IsMeleeAttack); // Function Player.Player_C.AudioAttacksVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioDownedState(); // Function Player.Player_C.AudioDownedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioWindFastMovement(); // Function Player.Player_C.AudioWindFastMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioSetFalseStepFiredRight(); // Function Player.Player_C.AudioSetFalseStepFiredRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StepDefinerRight(int32_t StepType, float VolumeMultiplier, float NotifyVolumeMultiplier); // Function Player.Player_C.StepDefinerRight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioSetFalseStepFiredLeft(); // Function Player.Player_C.AudioSetFalseStepFiredLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DMGSpecial(struct USoundCue* VO); // Function Player.Player_C.DMGSpecial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioPullUp(struct USoundCue* VOPullUp, float Volume); // Function Player.Player_C.AudioPullUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioHandleWooshNotify(struct USoundCue* BluntSound, struct USoundCue* CutSound, struct USoundCue* PierceSound, struct USoundCue* UnarmedSound, float VolumeMultiplier, float PitchMultiplier); // Function Player.Player_C.AudioHandleWooshNotify // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void WeaponHandlingSFX(struct UObject* ItemType); // Function Player.Player_C.WeaponHandlingSFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DMGThirst(struct UMistPlayerThirstComponent* Sender, float Thirst); // Function Player.Player_C.DMGThirst // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void HitDamageSet(float PercentageOfHealthLost, float Treshold1, float Treshold2, float Treshold3, int32_t& HitDamage); // Function Player.Player_C.HitDamageSet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StepDefinerLeft(int32_t StepType, float VolumeMultiplier, float NotifyVolumeMultiplier); // Function Player.Player_C.StepDefinerLeft // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ConsumeSFXItemType(int32_t ItemType); // Function Player.Player_C.ConsumeSFXItemType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void HarvestSFXItemType(int32_t ItemType); // Function Player.Player_C.HarvestSFXItemType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UserConstructionScript(); // Function Player.Player_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void VibratoTimeline__FinishedFunc(); // Function Player.Player_C.VibratoTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void VibratoTimeline__UpdateFunc(); // Function Player.Player_C.VibratoTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void VibratoTimeline__NewTrack_1__EventFunc(); // Function Player.Player_C.VibratoTimeline__NewTrack_1__EventFunc // (BlueprintEvent) // @ game+0x163f1c0
	void VibratoTimeline__NewTrack_0__EventFunc(); // Function Player.Player_C.VibratoTimeline__NewTrack_0__EventFunc // (BlueprintEvent) // @ game+0x163f1c0
	void SelectionChangedTimeline__FinishedFunc(); // Function Player.Player_C.SelectionChangedTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void SelectionChangedTimeline__UpdateFunc(); // Function Player.Player_C.SelectionChangedTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void LandEffects(); // Function Player.Player_C.LandEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void FootstepEffects(struct FName NotifyName); // Function Player.Player_C.FootstepEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void JumpEffects(); // Function Player.Player_C.JumpEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetUpReactiveMaterial(); // Function Player.Player_C.SetUpReactiveMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_9_HealthChangedEvent__DelegateSignature(struct UMistHealthComponent* Sender, float PrevHealth, float NewHealth); // Function Player.Player_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_9_HealthChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function Player.Player_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function Player.Player_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveStateChanged(enum class EMistCharacterState PrevState, enum class EMistCharacterState NewState); // Function Player.Player_C.ReceiveStateChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveSetupNewCharacter(); // Function Player.Player_C.ReceiveSetupNewCharacter // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function Player.Player_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastAnyDamage(struct UDamageType* Damage Type, float Damage); // Function Player.Player_C.MulticastAnyDamage // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_3_ItemUsedEvent__DelegateSignature(int32_t SoundId, struct UMistItemTemplate* ItemTemplate, int32_t Count); // Function Player.Player_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_3_ItemUsedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_2_ItemEvent__DelegateSignature(int32_t SoundId, struct UMistItemTemplate* ItemTemplate, int32_t Count); // Function Player.Player_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_2_ItemEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void MulticastOnItemAdded(int32_t SoundId); // Function Player.Player_C.MulticastOnItemAdded // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function Player.Player_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_5_HandsSlotUpdateEvent__DelegateSignature(struct UMistEquipmentComponent* Sender, enum class EEquipmentHand Slot); // Function Player.Player_C.BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_5_HandsSlotUpdateEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void CheckSprinting(); // Function Player.Player_C.CheckSprinting // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__ThirstComponent_K2Node_ComponentBoundEvent_6_ThirstChangedEvent__DelegateSignature(struct UMistPlayerThirstComponent* Sender, float Thirst, float PrevThirst); // Function Player.Player_C.BndEvt__ThirstComponent_K2Node_ComponentBoundEvent_6_ThirstChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__StaminaComponent_K2Node_ComponentBoundEvent_7_StaminaChangedEvent__DelegateSignature(struct UMistPlayerStaminaComponent* Sender, float PrevStamina, float NewStamina); // Function Player.Player_C.BndEvt__StaminaComponent_K2Node_ComponentBoundEvent_7_StaminaChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__VoipTalker_K2Node_ComponentBoundEvent_8_VoipTalkingBegin__DelegateSignature(); // Function Player.Player_C.BndEvt__VoipTalker_K2Node_ComponentBoundEvent_8_VoipTalkingBegin__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_13_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function Player.Player_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_13_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveLeveledUp(int32_t Level); // Function Player.Player_C.ReceiveLeveledUp // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void MulticastReviveBegin(); // Function Player.Player_C.MulticastReviveBegin // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastReviveEnd(bool Canceled); // Function Player.Player_C.MulticastReviveEnd // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function Player.Player_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnLanded(struct FHitResult& Hit); // Function Player.Player_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ClientAnyDamage(struct AActor* CauseActor); // Function Player.Player_C.ClientAnyDamage // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__ReviveInteractableComponent_K2Node_ComponentBoundEvent_9_MistInteractableEvent__DelegateSignature(struct UMistInteractableComponent* Sender, struct FMistInteraction& Interaction); // Function Player.Player_C.BndEvt__ReviveInteractableComponent_K2Node_ComponentBoundEvent_9_MistInteractableEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__ReviveInteractableComponent_K2Node_ComponentBoundEvent_10_MistInteractableEndEvent__DelegateSignature(struct UMistInteractableComponent* Sender, struct FMistInteraction& Interaction, bool bCanceled); // Function Player.Player_C.BndEvt__ReviveInteractableComponent_K2Node_ComponentBoundEvent_10_MistInteractableEndEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__VitaminUserComponent_K2Node_ComponentBoundEvent_1_VitaminActivatedEvent__DelegateSignature(struct UMistVitaminItemTemplate* VitaminTemplate); // Function Player.Player_C.BndEvt__VitaminUserComponent_K2Node_ComponentBoundEvent_1_VitaminActivatedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ClientVitaminActivation(struct UMistVitaminItemTemplate* VitaminTemplate); // Function Player.Player_C.ClientVitaminActivation // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_0_EquipmentBrokeEvent__DelegateSignature(); // Function Player.Player_C.BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_0_EquipmentBrokeEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void OnEquipmentBrokeMulticast(); // Function Player.Player_C.OnEquipmentBrokeMulticast // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpokenVO(); // Function Player.Player_C.SpokenVO // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastOnLanded(); // Function Player.Player_C.MulticastOnLanded // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Vibrato(); // Function Player.Player_C.Vibrato // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void VibratoStop(); // Function Player.Player_C.VibratoStop // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MeleeHitReceived(struct FMeleeHitInfo HitInfo); // Function Player.Player_C.MeleeHitReceived // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastMeleeHitReceived(); // Function Player.Player_C.MulticastMeleeHitReceived // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnSelectionChanged(struct AActor* Actor, struct UActorComponent* Component, int32_t InstanceIndex); // Function Player.Player_C.OnSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnCombatActionChanged(enum class ECombatAction PrevAction, enum class ECombatAction NewAction); // Function Player.Player_C.OnCombatActionChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_4_EquipmentSlotUpdateEvent__DelegateSignature(struct UMistEquipmentComponent* Sender, enum class EEquipmentSlot Slot); // Function Player.Player_C.BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_4_EquipmentSlotUpdateEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceivePossessed(struct AController* NewController); // Function Player.Player_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveUnpossessed(struct AController* OldController); // Function Player.Player_C.ReceiveUnpossessed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void MovementModeChangedDelegate_Event_1(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function Player.Player_C.MovementModeChangedDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnJumped(); // Function Player.Player_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_Player(int32_t EntryPoint); // Function Player.Player_C.ExecuteUbergraph_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
	void UnpossessedDispatcher__DelegateSignature(struct APlayerController* OldPlayerController); // Function Player.Player_C.UnpossessedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void PossessedDispatcher__DelegateSignature(struct APlayerController* NewPlayerController); // Function Player.Player_C.PossessedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StopSteeringWalkerDispatcher__DelegateSignature(); // Function Player.Player_C.StopSteeringWalkerDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StartSteeringWalkerDispatcher__DelegateSignature(struct AMistWalker* Walker); // Function Player.Player_C.StartSteeringWalkerDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
};

