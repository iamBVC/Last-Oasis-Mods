// BlueprintGeneratedClass ExoskeletonBallistaControlComponent.ExoskeletonBallistaControlComponent_C
// Size: 0x8c0 (Inherited: 0x850)
struct UExoskeletonBallistaControlComponent_C : UMistExoskeletonBallistaComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x850(0x08)
	struct UAudioComponent* Reeling Speed Sound; // 0x858(0x08)
	bool ReelingOut; // 0x860(0x01)
	char pad_861[0x7]; // 0x861(0x07)
	struct AActor* Owner; // 0x868(0x08)
	float LRMoveVolume; // 0x870(0x04)
	float UpDownMoveVolume; // 0x874(0x04)
	struct UAudioComponent* LRMove; // 0x878(0x08)
	struct UAudioComponent* UpDownMove; // 0x880(0x08)
	struct UStaticMeshComponent* Base; // 0x888(0x08)
	struct USceneComponent* Pitch; // 0x890(0x08)
	struct UAudioComponent* ProjectilePull; // 0x898(0x08)
	struct UAudioComponent* StringPull; // 0x8a0(0x08)
	struct UAudioComponent* ProjectilePush; // 0x8a8(0x08)
	int32_t BallistaType; // 0x8b0(0x04)
	char pad_8B4[0x4]; // 0x8b4(0x04)
	struct UAudioComponent* BallistaSmallCrank; // 0x8b8(0x08)

	void MulticastBallistaReload(); // Function ExoskeletonBallistaControlComponent.ExoskeletonBallistaControlComponent_C.MulticastBallistaReload // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function ExoskeletonBallistaControlComponent.ExoskeletonBallistaControlComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnSoundNotifyFired_Event_1(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function ExoskeletonBallistaControlComponent.ExoskeletonBallistaControlComponent_C.OnSoundNotifyFired_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveFired(); // Function ExoskeletonBallistaControlComponent.ExoskeletonBallistaControlComponent_C.ReceiveFired // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlayerEntered(struct AMistCharacter* Player); // Function ExoskeletonBallistaControlComponent.ExoskeletonBallistaControlComponent_C.ReceivePlayerEntered // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlayerLeft(struct AMistCharacter* Player); // Function ExoskeletonBallistaControlComponent.ExoskeletonBallistaControlComponent_C.ReceivePlayerLeft // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveReloadFailed(); // Function ExoskeletonBallistaControlComponent.ExoskeletonBallistaControlComponent_C.ReceiveReloadFailed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function ExoskeletonBallistaControlComponent.ExoskeletonBallistaControlComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_ExoskeletonBallistaControlComponent(int32_t EntryPoint); // Function ExoskeletonBallistaControlComponent.ExoskeletonBallistaControlComponent_C.ExecuteUbergraph_ExoskeletonBallistaControlComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

