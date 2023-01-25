// BlueprintGeneratedClass CabinWalker.CabinWalker_C
// Size: 0x1091 (Inherited: 0xf38)
struct ACabinWalker_C : AMistWalker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf38(0x08)
	struct UStaticMeshComponent* SM_CabinWalker_Collision_NoBuilding; // 0xf40(0x08)
	struct UStaticMeshComponent* SM_CabinWalker_Collision_PlayerOnly; // 0xf48(0x08)
	struct UStaticMeshComponent* SM_CabinWalker; // 0xf50(0x08)
	struct UBoxComponent* DoorBlock; // 0xf58(0x08)
	struct UAudioComponent* HatchDoor; // 0xf60(0x08)
	struct UAudioComponent* BackDoor; // 0xf68(0x08)
	struct UBoxComponent* InteriorMixTrigger; // 0xf70(0x08)
	struct UAudioComponent* SoundSocket4; // 0xf78(0x08)
	struct UStaticMeshComponent* SM_LegsAttachment1; // 0xf80(0x08)
	struct UStaticMeshComponent* SM_LegsAttachment; // 0xf88(0x08)
	struct UStaticMeshComponent* Hatch; // 0xf90(0x08)
	struct UBoxComponent* Box2; // 0xf98(0x08)
	struct UMistDoorInteractableComponent* DoorInteractable1; // 0xfa0(0x08)
	struct UBoxComponent* Box1; // 0xfa8(0x08)
	struct UMistDoorInteractableComponent* DoorInteractable; // 0xfb0(0x08)
	struct UStaticMeshComponent* Door1; // 0xfb8(0x08)
	struct UStaticMeshComponent* Door2; // 0xfc0(0x08)
	struct UWalkerSparePartsCraftingStation_C* WalkerSparePartsCraftingStation; // 0xfc8(0x08)
	struct UMistWalkerSprintTorqueComponent* MistWalkerSprintTorque; // 0xfd0(0x08)
	struct UMistInteractableInventoryComponent* CargoInventoryInteractable; // 0xfd8(0x08)
	struct UWalkerWaterContainer_C* WalkerWaterContainer; // 0xfe0(0x08)
	struct UWalkerHatchContainer_C* WalkerHatchContainer; // 0xfe8(0x08)
	struct UWalkerCargoContainer_C* WalkerCargoContainer; // 0xff0(0x08)
	struct UTorqueContainerComponent_C* TorqueContainer; // 0xff8(0x08)
	struct UAudioComponent* WaterLoop; // 0x1000(0x08)
	struct UMistWalkerPartSocketComponent* RightWingSocket; // 0x1008(0x08)
	struct UMistWalkerPartSocketComponent* RightLegSocket; // 0x1010(0x08)
	struct UMistWalkerPartSocketComponent* LeftWingSocket; // 0x1018(0x08)
	struct UMistWalkerPartSocketComponent* LeftLegSocket; // 0x1020(0x08)
	struct UMistPackingInteractableComponent* MistPackingInteractable; // 0x1028(0x08)
	struct UMistPackingComponent* MistPacking; // 0x1030(0x08)
	struct UWalkerCollisionSoundComponent_C* WalkerCollisionSoundComponent; // 0x1038(0x08)
	struct UAudioComponent* SoundSocket3; // 0x1040(0x08)
	struct UAudioComponent* SoundSocket2; // 0x1048(0x08)
	struct UAudioComponent* SoundSocket1; // 0x1050(0x08)
	struct UWalkerSoundComponent_C* WalkerSoundComponent; // 0x1058(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x1060(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x1068(0x08)
	float CurrentTilt; // 0x1070(0x04)
	float PrevTilt; // 0x1074(0x04)
	struct UAudioComponent* WalkerInWaterLoop; // 0x1078(0x08)
	struct USkeletalMeshComponent* Mesh Component; // 0x1080(0x08)
	bool Walker Start Moving SFX Fired; // 0x1088(0x01)
	bool HullBroke; // 0x1089(0x01)
	bool IsInside; // 0x108a(0x01)
	char pad_108B[0x1]; // 0x108b(0x01)
	float TimeInAir; // 0x108c(0x04)
	bool ListenerIsInRange; // 0x1090(0x01)

	void HowLongIsInAir(); // Function CabinWalker.CabinWalker_C.HowLongIsInAir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckForTilt(); // Function CabinWalker.CabinWalker_C.CheckForTilt // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function CabinWalker.CabinWalker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void CheckingWater(); // Function CabinWalker.CabinWalker_C.CheckingWater // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function CabinWalker.CabinWalker_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerDamage(float PrevHealth, float NewHealth, float MaximumHealth); // Function CabinWalker.CabinWalker_C.OnWalkerDamage // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_7_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function CabinWalker.CabinWalker_C.BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_7_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void MulticastDoorClose(); // Function CabinWalker.CabinWalker_C.MulticastDoorClose // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastDoorOpen(); // Function CabinWalker.CabinWalker_C.MulticastDoorOpen // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__DoorInteractable_K2Node_ComponentBoundEvent_0_MistDoorEvent__DelegateSignature(); // Function CabinWalker.CabinWalker_C.BndEvt__DoorInteractable_K2Node_ComponentBoundEvent_0_MistDoorEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__DoorInteractable_K2Node_ComponentBoundEvent_3_MistDoorEvent__DelegateSignature(); // Function CabinWalker.CabinWalker_C.BndEvt__DoorInteractable_K2Node_ComponentBoundEvent_3_MistDoorEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__DoorInteractable1_K2Node_ComponentBoundEvent_4_MistDoorEvent__DelegateSignature(); // Function CabinWalker.CabinWalker_C.BndEvt__DoorInteractable1_K2Node_ComponentBoundEvent_4_MistDoorEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void MulticastBackDoorClose(); // Function CabinWalker.CabinWalker_C.MulticastBackDoorClose // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastBackDoorOpen(); // Function CabinWalker.CabinWalker_C.MulticastBackDoorOpen // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__DoorInteractable1_K2Node_ComponentBoundEvent_5_MistDoorEvent__DelegateSignature(); // Function CabinWalker.CabinWalker_C.BndEvt__DoorInteractable1_K2Node_ComponentBoundEvent_5_MistDoorEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void CheckIfIsInAir(); // Function CabinWalker.CabinWalker_C.CheckIfIsInAir // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_6_ComponentEndActorTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function CabinWalker.CabinWalker_C.BndEvt__InteriorMixTrigger_K2Node_ComponentBoundEvent_6_ComponentEndActorTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void CheckIfListenerIsInRange(); // Function CabinWalker.CabinWalker_C.CheckIfListenerIsInRange // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__DoorInteractable1_K2Node_ComponentBoundEvent_2_MistDoorEvent__DelegateSignature(); // Function CabinWalker.CabinWalker_C.BndEvt__DoorInteractable1_K2Node_ComponentBoundEvent_2_MistDoorEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void MulticastDoorKicked(); // Function CabinWalker.CabinWalker_C.MulticastDoorKicked // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_CabinWalker(int32_t EntryPoint); // Function CabinWalker.CabinWalker_C.ExecuteUbergraph_CabinWalker // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

