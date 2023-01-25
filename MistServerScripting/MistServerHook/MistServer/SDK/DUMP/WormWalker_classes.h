// BlueprintGeneratedClass WormWalker.WormWalker_C
// Size: 0x10c9 (Inherited: 0xf38)
struct AWormWalker_C : AMistWalker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf38(0x08)
	struct UStaticMeshComponent* SM_Wormwalker_IgnorePlacement; // 0xf40(0x08)
	struct UStaticMeshComponent* WormWalkerDestructable_SM_WormwalkerMiddleDeck; // 0xf48(0x08)
	struct UStaticMeshComponent* SM_Wormwalker_Buildable; // 0xf50(0x08)
	struct UStaticMeshComponent* SM_LegsAttachment; // 0xf58(0x08)
	struct UStaticMeshComponent* SM_LegsAttachment1; // 0xf60(0x08)
	struct USceneComponent* Scene; // 0xf68(0x08)
	struct UAudioComponent* InteriorSoundSocket8; // 0xf70(0x08)
	struct UAudioComponent* InteriorSoundSocket7; // 0xf78(0x08)
	struct UAudioComponent* InteriorSoundSocket6; // 0xf80(0x08)
	struct UAudioComponent* InteriorSoundSocket5; // 0xf88(0x08)
	struct UWalkerSparePartsCraftingStation_C* WalkerSparePartsCraftingStation; // 0xf90(0x08)
	struct UTorqueContainerComponent_C* TorqueContainer; // 0xf98(0x08)
	struct UMistWalkerSprintTorqueComponent* MistWalkerSprintTorque; // 0xfa0(0x08)
	struct UMistInteractableInventoryComponent* CargoInteractableInventory; // 0xfa8(0x08)
	struct UWalkerWaterContainer_C* WalkerWaterContainer; // 0xfb0(0x08)
	struct UWalkerCargoContainer_C* WalkerCargoContainer; // 0xfb8(0x08)
	struct UWalkerHatchContainer_C* WalkerHatchContainer; // 0xfc0(0x08)
	struct UAudioComponent* WaterLoop; // 0xfc8(0x08)
	struct UMistWalkerPartSocketComponent* RightWingSocket; // 0xfd0(0x08)
	struct UMistWalkerPartSocketComponent* LeftLegSocket; // 0xfd8(0x08)
	struct UMistWalkerPartSocketComponent* RightLegSocket; // 0xfe0(0x08)
	struct UMistWalkerPartSocketComponent* LeftWingSocket; // 0xfe8(0x08)
	struct UMistPackingInteractableComponent* MistPackingInteractable; // 0xff0(0x08)
	struct UMistPackingComponent* MistPacking; // 0xff8(0x08)
	struct UWalkerCollisionSoundComponent_C* WalkerCollisionSoundComponent; // 0x1000(0x08)
	struct UAudioComponent* InteriorSoundSocket4; // 0x1008(0x08)
	struct UAudioComponent* InteriorSoundSocket3; // 0x1010(0x08)
	struct UAudioComponent* InteriorSoundSocket2; // 0x1018(0x08)
	struct UAudioComponent* InteriorSoundSocket1; // 0x1020(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x1028(0x08)
	struct UWalkerSoundComponent_C* WalkerSoundComponent; // 0x1030(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x1038(0x08)
	float NormalizedRPM_L; // 0x1040(0x04)
	float NormalizedRPM_R; // 0x1044(0x04)
	int32_t PrevGroupR; // 0x1048(0x04)
	int32_t CurrentGroup R; // 0x104c(0x04)
	struct UAudioComponent* Walker180A; // 0x1050(0x08)
	struct UAudioComponent* Walker220A; // 0x1058(0x08)
	struct UAudioComponent* Walker260A; // 0x1060(0x08)
	struct UAudioComponent* Walker300A; // 0x1068(0x08)
	int32_t PrevGroupL; // 0x1070(0x04)
	int32_t CurrentGroupL; // 0x1074(0x04)
	struct UAudioComponent* Walker180B; // 0x1078(0x08)
	struct UAudioComponent* Walker220B; // 0x1080(0x08)
	struct UAudioComponent* Walker260B; // 0x1088(0x08)
	struct UAudioComponent* Walker300B; // 0x1090(0x08)
	float GearShiftVolume; // 0x1098(0x04)
	float NormalizedWalkerSpeed; // 0x109c(0x04)
	float LegsSpeed; // 0x10a0(0x04)
	bool IsInside; // 0x10a4(0x01)
	char pad_10A5[0x3]; // 0x10a5(0x03)
	float CurrentTilt; // 0x10a8(0x04)
	float PrevTilt; // 0x10ac(0x04)
	struct USkeletalMeshComponent* Mesh Component; // 0x10b0(0x08)
	struct UAudioComponent* WalkerInWaterLoop; // 0x10b8(0x08)
	bool Walker Start Moving SFX Fired; // 0x10c0(0x01)
	bool HullBroke; // 0x10c1(0x01)
	char pad_10C2[0x2]; // 0x10c2(0x02)
	float TimeInAir; // 0x10c4(0x04)
	bool ListenerIsInRange; // 0x10c8(0x01)

	void HowLongIsInAir(); // Function WormWalker.WormWalker_C.HowLongIsInAir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnLegSoundNotify(struct USceneComponent* Mesh); // Function WormWalker.WormWalker_C.OnLegSoundNotify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupL(float RPM L, int32_t& RPM Group L); // Function WormWalker.WormWalker_C.SetRPMGroupL // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupR(float RPM R, int32_t& RPM Group R); // Function WormWalker.WormWalker_C.SetRPMGroupR // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckForTilt(); // Function WormWalker.WormWalker_C.CheckForTilt // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function WormWalker.WormWalker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void CheckingWater(); // Function WormWalker.WormWalker_C.CheckingWater // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerDamage(float PrevHealth, float NewHealth, float MaximumHealth); // Function WormWalker.WormWalker_C.OnWalkerDamage // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfIsInAir(); // Function WormWalker.WormWalker_C.CheckIfIsInAir // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfListenerIsInRange(); // Function WormWalker.WormWalker_C.CheckIfListenerIsInRange // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function WormWalker.WormWalker_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_WormWalker(int32_t EntryPoint); // Function WormWalker.WormWalker_C.ExecuteUbergraph_WormWalker // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

