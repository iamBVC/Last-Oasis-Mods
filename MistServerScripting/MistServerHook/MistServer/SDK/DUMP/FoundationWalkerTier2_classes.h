// BlueprintGeneratedClass FoundationWalkerTier2.FoundationWalkerTier2_C
// Size: 0x1140 (Inherited: 0xf38)
struct AFoundationWalkerTier2_C : AMistWalker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf38(0x08)
	struct UStaticMeshComponent* SM_FoundationWalkerTier2_Merged; // 0xf40(0x08)
	struct UStaticMeshComponent* SM_FoundationWalkerTier2_Collision_PlayerOnly; // 0xf48(0x08)
	struct UStaticMeshComponent* SM_FoundationWalkerTier2_Collision_NoBuilding; // 0xf50(0x08)
	struct USceneComponent* Attach; // 0xf58(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0xf60(0x08)
	struct UBoxComponent* Drive; // 0xf68(0x08)
	struct USceneComponent* Detach; // 0xf70(0x08)
	struct UPlayerCameraSpringArm_C* SpringArm; // 0xf78(0x08)
	struct UMistSkeletalMeshComponent* SK_DinghyWalkerRudder; // 0xf80(0x08)
	struct UMistDoorInteractableComponent* DoorInteractable1; // 0xf88(0x08)
	struct UBoxComponent* Box2; // 0xf90(0x08)
	struct UCapsuleComponent* InteractionBlock; // 0xf98(0x08)
	struct USceneComponent* PackingSoundAttach; // 0xfa0(0x08)
	struct UCameraComponent* Camera; // 0xfa8(0x08)
	struct USceneComponent* RightOffset; // 0xfb0(0x08)
	struct USceneComponent* LeftOffset; // 0xfb8(0x08)
	struct UMistInteractableComponent* DriveInteractable; // 0xfc0(0x08)
	struct UMistMannedWalkerControlComponent* MistMannedWalkerControl; // 0xfc8(0x08)
	struct UStaticMeshComponent* Deck; // 0xfd0(0x08)
	struct UMistDoorInteractableComponent* DoorInteractable; // 0xfd8(0x08)
	struct UBoxComponent* Box; // 0xfe0(0x08)
	struct UStaticMeshComponent* Pack; // 0xfe8(0x08)
	struct UStaticMeshComponent* door; // 0xff0(0x08)
	struct UStaticMeshComponent* Door2; // 0xff8(0x08)
	struct USceneComponent* Scene; // 0x1000(0x08)
	struct UWalkerSparePartsCraftingStation_C* WalkerSparePartsCraftingStation; // 0x1008(0x08)
	struct UMistWalkerSprintTorqueComponent* MistWalkerSprintTorque; // 0x1010(0x08)
	struct UWalkerWaterContainer_C* WalkerWaterContainer; // 0x1018(0x08)
	struct UWalkerCargoContainer_C* WalkerCargoContainer; // 0x1020(0x08)
	struct UWalkerHatchContainer_C* WalkerHatchContainer; // 0x1028(0x08)
	struct UTorqueContainerComponent_C* TorqueContainer; // 0x1030(0x08)
	struct UMistInteractableInventoryComponent* HatchInteractableInventory; // 0x1038(0x08)
	struct UAudioComponent* WaterLoop; // 0x1040(0x08)
	struct UMistWalkerPartSocketComponent* LeftLegSocket; // 0x1048(0x08)
	struct UMistWalkerPartSocketComponent* RightLegSocket; // 0x1050(0x08)
	struct UMistPackingInteractableComponent* MistPackingInteractable; // 0x1058(0x08)
	struct UMistPackingComponent* MistPacking; // 0x1060(0x08)
	struct UWalkerCollisionSoundComponent_C* WalkerCollisionSoundComponent; // 0x1068(0x08)
	struct UAudioComponent* InteriorSoundSocket4; // 0x1070(0x08)
	struct UAudioComponent* InteriorSoundSocket3; // 0x1078(0x08)
	struct UAudioComponent* InteriorSoundSocket2; // 0x1080(0x08)
	struct UAudioComponent* InteriorSoundSocket1; // 0x1088(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x1090(0x08)
	struct UWalkerSoundComponent_C* WalkerSoundComponent; // 0x1098(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x10a0(0x08)
	float NormalizedRPM_L; // 0x10a8(0x04)
	float NormalizedRPM_R; // 0x10ac(0x04)
	int32_t PrevGroupR; // 0x10b0(0x04)
	int32_t CurrentGroup R; // 0x10b4(0x04)
	struct UAudioComponent* Walker180A; // 0x10b8(0x08)
	struct UAudioComponent* Walker220A; // 0x10c0(0x08)
	struct UAudioComponent* Walker260A; // 0x10c8(0x08)
	struct UAudioComponent* Walker300A; // 0x10d0(0x08)
	int32_t PrevGroupL; // 0x10d8(0x04)
	int32_t CurrentGroupL; // 0x10dc(0x04)
	struct UAudioComponent* Walker180B; // 0x10e0(0x08)
	struct UAudioComponent* Walker220B; // 0x10e8(0x08)
	struct UAudioComponent* Walker260B; // 0x10f0(0x08)
	struct UAudioComponent* Walker300B; // 0x10f8(0x08)
	float GearShiftVolume; // 0x1100(0x04)
	float NormalizedWalkerSpeed; // 0x1104(0x04)
	float LegsSpeed; // 0x1108(0x04)
	bool IsInside; // 0x110c(0x01)
	char pad_110D[0x3]; // 0x110d(0x03)
	float CurrentTilt; // 0x1110(0x04)
	float PrevTilt; // 0x1114(0x04)
	struct USkeletalMeshComponent* Mesh Component; // 0x1118(0x08)
	struct UAudioComponent* WalkerInWaterLoop; // 0x1120(0x08)
	bool Walker Start Moving SFX Fired; // 0x1128(0x01)
	bool HullBroke; // 0x1129(0x01)
	char pad_112A[0x2]; // 0x112a(0x02)
	float TimeInAir; // 0x112c(0x04)
	bool ListenerIsInRange; // 0x1130(0x01)
	char pad_1131[0x7]; // 0x1131(0x07)
	struct UAudioComponent* PackingSound; // 0x1138(0x08)

	void HowLongIsInAir(); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.HowLongIsInAir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnLegSoundNotify(struct USceneComponent* Mesh); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.OnLegSoundNotify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupL(float RPM L, int32_t& RPM Group L); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.SetRPMGroupL // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupR(float RPM R, int32_t& RPM Group R); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.SetRPMGroupR // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_2_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_2_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_4_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_4_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void CheckForTilt(); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.CheckForTilt // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void CheckingWater(); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.CheckingWater // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerDamage(float PrevHealth, float NewHealth, float MaximumHealth); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.OnWalkerDamage // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfIsInAir(); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.CheckIfIsInAir // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfListenerIsInRange(); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.CheckIfListenerIsInRange // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistPacking_K2Node_ComponentBoundEvent_0_PackingStateChangedEvent__DelegateSignature(struct UMistPackingComponent* PackingComponent); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.BndEvt__MistPacking_K2Node_ComponentBoundEvent_0_PackingStateChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void PackingSounds(); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.PackingSounds // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_FoundationWalkerTier2(int32_t EntryPoint); // Function FoundationWalkerTier2.FoundationWalkerTier2_C.ExecuteUbergraph_FoundationWalkerTier2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

