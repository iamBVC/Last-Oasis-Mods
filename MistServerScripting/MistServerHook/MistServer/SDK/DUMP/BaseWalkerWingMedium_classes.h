// BlueprintGeneratedClass BaseWalkerWingMedium.BaseWalkerWingMedium_C
// Size: 0x8f9 (Inherited: 0x8a0)
struct ABaseWalkerWingMedium_C : ABaseWalkerWing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8a0(0x08)
	struct UCapsuleComponent* Capsule; // 0x8a8(0x08)
	struct USphereComponent* SoundTrigger; // 0x8b0(0x08)
	struct UAudioComponent* WingFlapsPosition; // 0x8b8(0x08)
	struct UAudioComponent* WingMechPosition; // 0x8c0(0x08)
	bool IsNetted; // 0x8c8(0x01)
	char pad_8C9[0x3]; // 0x8c9(0x03)
	float WingMechVolMultiplier; // 0x8cc(0x04)
	float WingFlapsVolMultiplier; // 0x8d0(0x04)
	bool IsRetracted; // 0x8d4(0x01)
	char pad_8D5[0x3]; // 0x8d5(0x03)
	struct UAudioComponent* WingRetracting; // 0x8d8(0x08)
	struct UAudioComponent* WingExtending; // 0x8e0(0x08)
	struct UAudioComponent* WingFlaps; // 0x8e8(0x08)
	struct UAudioComponent* WingMech; // 0x8f0(0x08)
	bool IsAttached; // 0x8f8(0x01)

	void ReceiveTick(float DeltaSeconds); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveDetachedPart(); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.ReceiveDetachedPart // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__NettableComponent_K2Node_ComponentBoundEvent_1_OnNetAttached__DelegateSignature(); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.BndEvt__NettableComponent_K2Node_ComponentBoundEvent_1_OnNetAttached__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__NettableComponent_K2Node_ComponentBoundEvent_2_OnNetRemoved__DelegateSignature(); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.BndEvt__NettableComponent_K2Node_ComponentBoundEvent_2_OnNetRemoved__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveRetractStarted(); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.ReceiveRetractStarted // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveRetractEnded(); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.ReceiveRetractEnded // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveExtendEnded(); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.ReceiveExtendEnded // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveExtendStarted(); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.ReceiveExtendStarted // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__SoundTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginActorTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.BndEvt__SoundTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginActorTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__SoundTrigger_K2Node_ComponentBoundEvent_4_ComponentEndActorTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.BndEvt__SoundTrigger_K2Node_ComponentBoundEvent_4_ComponentEndActorTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BaseWalkerWingMedium(int32_t EntryPoint); // Function BaseWalkerWingMedium.BaseWalkerWingMedium_C.ExecuteUbergraph_BaseWalkerWingMedium // (Final|UbergraphFunction) // @ game+0x163f1c0
};

