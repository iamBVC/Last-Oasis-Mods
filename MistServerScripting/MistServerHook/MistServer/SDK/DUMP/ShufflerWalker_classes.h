// BlueprintGeneratedClass ShufflerWalker.ShufflerWalker_C
// Size: 0x1091 (Inherited: 0xf38)
struct AShufflerWalker_C : AMistWalker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf38(0x08)
	struct UStaticMeshComponent* SM_ShufflerWalker_Cargo; // 0xf40(0x08)
	struct UStaticMeshComponent* SM_ShufflerWalker_Collision_NoBuilding; // 0xf48(0x08)
	struct UStaticMeshComponent* SM_ShufflerWalker; // 0xf50(0x08)
	struct USceneComponent* Scene; // 0xf58(0x08)
	struct UAudioComponent* SoundSocket8; // 0xf60(0x08)
	struct UAudioComponent* SoundSocket7; // 0xf68(0x08)
	struct UWalkerSparePartsCraftingStation_C* WalkerSparePartsCraftingStation; // 0xf70(0x08)
	struct UMistWalkerSprintTorqueComponent* MistWalkerSprintTorque; // 0xf78(0x08)
	struct UAudioComponent* SoundSocket6; // 0xf80(0x08)
	struct UAudioComponent* SoundSocket5; // 0xf88(0x08)
	struct UMistInteractableInventoryComponent* CargoInteractableInventory; // 0xf90(0x08)
	struct UWalkerWaterContainer_C* WalkerWaterContainer; // 0xf98(0x08)
	struct UWalkerHatchContainer_C* WalkerHatchContainer; // 0xfa0(0x08)
	struct UWalkerCargoContainer_C* WalkerCargoContainer; // 0xfa8(0x08)
	struct UTorqueContainerComponent_C* TorqueContainer; // 0xfb0(0x08)
	struct UBoxComponent* OverheadTrigger; // 0xfb8(0x08)
	struct UBoxComponent* InteriorMixTrigger2; // 0xfc0(0x08)
	struct UMistWalkerPartSocketComponent* LeftLegSocket; // 0xfc8(0x08)
	struct UMistWalkerPartSocketComponent* RightWingSocket; // 0xfd0(0x08)
	struct UMistWalkerPartSocketComponent* LeftWingSocket; // 0xfd8(0x08)
	struct UMistWalkerPartSocketComponent* RightLegSocket; // 0xfe0(0x08)
	struct UMistPackingInteractableComponent* MistPackingInteractable; // 0xfe8(0x08)
	struct UMistPackingComponent* MistPacking; // 0xff0(0x08)
	struct UWalkerCollisionSoundComponent_C* WalkerCollisionSoundComponent; // 0xff8(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x1000(0x08)
	struct UAudioComponent* InteriorSoundSocket4; // 0x1008(0x08)
	struct UAudioComponent* InteriorSoundSocket3; // 0x1010(0x08)
	struct UAudioComponent* InteriorSoundSocket2; // 0x1018(0x08)
	struct UAudioComponent* InteriorSoundSocket1; // 0x1020(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x1028(0x08)
	struct UAudioComponent* OverheadSocket; // 0x1030(0x08)
	struct UAudioComponent* SoundSocket4; // 0x1038(0x08)
	struct UAudioComponent* SoundSocket3; // 0x1040(0x08)
	struct UAudioComponent* SoundSocket2; // 0x1048(0x08)
	struct UAudioComponent* SoundSocket1; // 0x1050(0x08)
	struct UWalkerSoundComponent_C* WalkerSoundComponent; // 0x1058(0x08)
	bool OverheadActive; // 0x1060(0x01)
	char pad_1061[0x3]; // 0x1061(0x03)
	float CurrentTilt; // 0x1064(0x04)
	float PrevTilt; // 0x1068(0x04)
	bool IsInside; // 0x106c(0x01)
	char pad_106D[0x3]; // 0x106d(0x03)
	struct USkeletalMeshComponent* Mesh Component; // 0x1070(0x08)
	bool Walker Start Moving SFX Fired; // 0x1078(0x01)
	char pad_1079[0x7]; // 0x1079(0x07)
	struct UAudioComponent* WalkerInWaterLoop; // 0x1080(0x08)
	bool HullBroke; // 0x1088(0x01)
	char pad_1089[0x3]; // 0x1089(0x03)
	float TimeInAir; // 0x108c(0x04)
	bool ListenerIsInRange; // 0x1090(0x01)

	void HowLongIsInAir(); // Function ShufflerWalker.ShufflerWalker_C.HowLongIsInAir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function ShufflerWalker.ShufflerWalker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__InteriorMixTrigger2_K2Node_ComponentBoundEvent_8_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function ShufflerWalker.ShufflerWalker_C.BndEvt__InteriorMixTrigger2_K2Node_ComponentBoundEvent_8_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__InteriorMixTrigger2_K2Node_ComponentBoundEvent_9_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function ShufflerWalker.ShufflerWalker_C.BndEvt__InteriorMixTrigger2_K2Node_ComponentBoundEvent_9_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__OverheadTrigger_K2Node_ComponentBoundEvent_10_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function ShufflerWalker.ShufflerWalker_C.BndEvt__OverheadTrigger_K2Node_ComponentBoundEvent_10_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function ShufflerWalker.ShufflerWalker_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void CheckingWater(); // Function ShufflerWalker.ShufflerWalker_C.CheckingWater // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckForTilt(); // Function ShufflerWalker.ShufflerWalker_C.CheckForTilt // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerDamage(float PrevHealth, float NewHealth, float MaximumHealth); // Function ShufflerWalker.ShufflerWalker_C.OnWalkerDamage // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfIsInAir(); // Function ShufflerWalker.ShufflerWalker_C.CheckIfIsInAir // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfListenerIsInRange(); // Function ShufflerWalker.ShufflerWalker_C.CheckIfListenerIsInRange // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_ShufflerWalker(int32_t EntryPoint); // Function ShufflerWalker.ShufflerWalker_C.ExecuteUbergraph_ShufflerWalker // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

