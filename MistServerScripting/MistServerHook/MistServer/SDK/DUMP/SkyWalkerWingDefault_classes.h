// BlueprintGeneratedClass SkyWalkerWingDefault.SkyWalkerWingDefault_C
// Size: 0x979 (Inherited: 0x920)
struct ASkyWalkerWingDefault_C : ASkyWalkerWing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x920(0x08)
	struct UCapsuleComponent* Capsule; // 0x928(0x08)
	struct USphereComponent* SoundTrigger; // 0x930(0x08)
	struct UAudioComponent* WingMechPosition; // 0x938(0x08)
	struct UAudioComponent* WingFlapsPosition; // 0x940(0x08)
	bool IsNetted; // 0x948(0x01)
	char pad_949[0x3]; // 0x949(0x03)
	float WingMechVolMultiplier; // 0x94c(0x04)
	float WingFlapsVolMultiplier; // 0x950(0x04)
	bool IsRetracted; // 0x954(0x01)
	char pad_955[0x3]; // 0x955(0x03)
	struct UAudioComponent* WingRetracting; // 0x958(0x08)
	struct UAudioComponent* WingExtending; // 0x960(0x08)
	struct UAudioComponent* WingFlaps; // 0x968(0x08)
	struct UAudioComponent* WingMech; // 0x970(0x08)
	bool IsAttached; // 0x978(0x01)

	void ReceiveTick(float DeltaSeconds); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveDetachedPart(); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.ReceiveDetachedPart // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__NettableComponent_K2Node_ComponentBoundEvent_1_OnNetAttached__DelegateSignature(); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.BndEvt__NettableComponent_K2Node_ComponentBoundEvent_1_OnNetAttached__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__NettableComponent_K2Node_ComponentBoundEvent_2_OnNetRemoved__DelegateSignature(); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.BndEvt__NettableComponent_K2Node_ComponentBoundEvent_2_OnNetRemoved__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveRetractStarted(); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.ReceiveRetractStarted // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveRetractEnded(); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.ReceiveRetractEnded // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveExtendEnded(); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.ReceiveExtendEnded // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveExtendStarted(); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.ReceiveExtendStarted // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__SoundTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginActorTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.BndEvt__SoundTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginActorTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__SoundTrigger_K2Node_ComponentBoundEvent_4_ComponentEndActorTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.BndEvt__SoundTrigger_K2Node_ComponentBoundEvent_4_ComponentEndActorTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SkyWalkerWingDefault(int32_t EntryPoint); // Function SkyWalkerWingDefault.SkyWalkerWingDefault_C.ExecuteUbergraph_SkyWalkerWingDefault // (Final|UbergraphFunction) // @ game+0x163f1c0
};

