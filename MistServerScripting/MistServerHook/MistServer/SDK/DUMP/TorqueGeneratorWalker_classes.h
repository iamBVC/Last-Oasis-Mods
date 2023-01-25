// BlueprintGeneratedClass TorqueGeneratorWalker.TorqueGeneratorWalker_C
// Size: 0x1130 (Inherited: 0xf38)
struct ATorqueGeneratorWalker_C : AMistWalker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf38(0x08)
	struct UNiagaraComponent* SteamParticles; // 0xf40(0x08)
	struct UNiagaraComponent* SteamParticles2; // 0xf48(0x08)
	struct UMistSkeletalMeshComponent* Engine; // 0xf50(0x08)
	struct UStaticMeshComponent* SM_TorqueGeneratorWalker_EngineWoodenCollisions; // 0xf58(0x08)
	struct USceneComponent* SoundGearsPlace; // 0xf60(0x08)
	struct USceneComponent* SoundBoxPlace; // 0xf68(0x08)
	struct USceneComponent* SoundEnginePlace; // 0xf70(0x08)
	struct USphereComponent* Box; // 0xf78(0x08)
	struct UCapsuleComponent* EngineCollision; // 0xf80(0x08)
	struct USphereComponent* Pump; // 0xf88(0x08)
	struct UStaticMeshComponent* SM_TorqueGeneratorWalker_EngineCollisions; // 0xf90(0x08)
	struct UMistInteractableComponent* EngineInteractable; // 0xf98(0x08)
	struct UMistTorqueProductionWalkerComponent* MistPumpWalker; // 0xfa0(0x08)
	struct UStaticMeshComponent* SM_LegsAttachment_02; // 0xfa8(0x08)
	struct UStaticMeshComponent* SM_LegsAttachment_03; // 0xfb0(0x08)
	struct USceneComponent* Scene; // 0xfb8(0x08)
	struct UWalkerSparePartsCraftingStation_C* WalkerSparePartsCraftingStation; // 0xfc0(0x08)
	struct UMistWalkerSprintTorqueComponent* MistWalkerSprintTorque; // 0xfc8(0x08)
	struct UWalkerWaterContainer_C* WalkerWaterContainer; // 0xfd0(0x08)
	struct UWalkerCargoContainer_C* WalkerCargoContainer; // 0xfd8(0x08)
	struct UWalkerHatchContainer_C* WalkerHatchContainer; // 0xfe0(0x08)
	struct UTorqueContainerComponent_C* TorqueContainer; // 0xfe8(0x08)
	struct UMistInteractableInventoryComponent* HatchInteractableInventory; // 0xff0(0x08)
	struct UAudioComponent* WaterLoop; // 0xff8(0x08)
	struct UMistWalkerPartSocketComponent* RightWingSocket; // 0x1000(0x08)
	struct UMistWalkerPartSocketComponent* LeftLegSocket; // 0x1008(0x08)
	struct UMistWalkerPartSocketComponent* RightLegSocket; // 0x1010(0x08)
	struct UMistWalkerPartSocketComponent* LeftWingSocket; // 0x1018(0x08)
	struct UStaticMeshComponent* Deck; // 0x1020(0x08)
	struct UMistPackingComponent* MistPacking; // 0x1028(0x08)
	struct UWalkerCollisionSoundComponent_C* WalkerCollisionSoundComponent; // 0x1030(0x08)
	struct UAudioComponent* InteriorSoundSocket4; // 0x1038(0x08)
	struct UAudioComponent* InteriorSoundSocket3; // 0x1040(0x08)
	struct UAudioComponent* InteriorSoundSocket2; // 0x1048(0x08)
	struct UAudioComponent* InteriorSoundSocket1; // 0x1050(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x1058(0x08)
	struct UWalkerSoundComponent_C* WalkerSoundComponent; // 0x1060(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x1068(0x08)
	float NormalizedRPM_L; // 0x1070(0x04)
	float NormalizedRPM_R; // 0x1074(0x04)
	int32_t PrevGroupR; // 0x1078(0x04)
	int32_t CurrentGroup R; // 0x107c(0x04)
	struct UAudioComponent* Walker180A; // 0x1080(0x08)
	struct UAudioComponent* Walker220A; // 0x1088(0x08)
	struct UAudioComponent* Walker260A; // 0x1090(0x08)
	struct UAudioComponent* Walker300A; // 0x1098(0x08)
	int32_t PrevGroupL; // 0x10a0(0x04)
	int32_t CurrentGroupL; // 0x10a4(0x04)
	struct UAudioComponent* Walker180B; // 0x10a8(0x08)
	struct UAudioComponent* Walker220B; // 0x10b0(0x08)
	struct UAudioComponent* Walker260B; // 0x10b8(0x08)
	struct UAudioComponent* Walker300B; // 0x10c0(0x08)
	float GearShiftVolume; // 0x10c8(0x04)
	float NormalizedWalkerSpeed; // 0x10cc(0x04)
	float LegsSpeed; // 0x10d0(0x04)
	bool IsInside; // 0x10d4(0x01)
	char pad_10D5[0x3]; // 0x10d5(0x03)
	float CurrentTilt; // 0x10d8(0x04)
	float PrevTilt; // 0x10dc(0x04)
	struct USkeletalMeshComponent* Mesh Component; // 0x10e0(0x08)
	struct UAudioComponent* WalkerInWaterLoop; // 0x10e8(0x08)
	bool Walker Start Moving SFX Fired; // 0x10f0(0x01)
	bool HullBroke; // 0x10f1(0x01)
	char pad_10F2[0x2]; // 0x10f2(0x02)
	float TimeInAir; // 0x10f4(0x04)
	bool ListenerIsInRange; // 0x10f8(0x01)
	char pad_10F9[0x3]; // 0x10f9(0x03)
	float NormalizedRotationSpeed; // 0x10fc(0x04)
	float Rotation; // 0x1100(0x04)
	char pad_1104[0x4]; // 0x1104(0x04)
	struct UMaterialInstanceDynamic* TransmissionBeltDMI; // 0x1108(0x08)
	float ActorDeltaSeconds; // 0x1110(0x04)
	float MaxRotationSpeed; // 0x1114(0x04)
	struct UAudioComponent* SoundBox; // 0x1118(0x08)
	struct UAudioComponent* SoundGears; // 0x1120(0x08)
	struct UAudioComponent* SoundEngine; // 0x1128(0x08)

	void HowLongIsInAir(); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.HowLongIsInAir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnLegSoundNotify(struct USceneComponent* Mesh); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.OnLegSoundNotify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupL(float RPM L, int32_t& RPM Group L); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.SetRPMGroupL // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupR(float RPM R, int32_t& RPM Group R); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.SetRPMGroupR // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UserConstructionScript(); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_2_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_2_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_4_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_4_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void CheckForTilt(); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.CheckForTilt // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void CheckingWater(); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.CheckingWater // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerDamage(float PrevHealth, float NewHealth, float MaximumHealth); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.OnWalkerDamage // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfIsInAir(); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.CheckIfIsInAir // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfListenerIsInRange(); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.CheckIfListenerIsInRange // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistPumpWalker_K2Node_ComponentBoundEvent_0_PumpWalkerStateChanged__DelegateSignature(enum class EPumpWalkerState NewState); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.BndEvt__MistPumpWalker_K2Node_ComponentBoundEvent_0_PumpWalkerStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void CheckSounds(); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.CheckSounds // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_TorqueGeneratorWalker(int32_t EntryPoint); // Function TorqueGeneratorWalker.TorqueGeneratorWalker_C.ExecuteUbergraph_TorqueGeneratorWalker // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

