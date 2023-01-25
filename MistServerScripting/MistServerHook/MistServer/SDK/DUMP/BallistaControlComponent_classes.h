// BlueprintGeneratedClass BallistaControlComponent.BallistaControlComponent_C
// Size: 0x810 (Inherited: 0x7a0)
struct UBallistaControlComponent_C : UMistMannedBallistaControlComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7a0(0x08)
	struct UAudioComponent* Reeling Speed Sound; // 0x7a8(0x08)
	bool ReelingOut; // 0x7b0(0x01)
	char pad_7B1[0x7]; // 0x7b1(0x07)
	struct AActor* Owner; // 0x7b8(0x08)
	float LRMoveVolume; // 0x7c0(0x04)
	float UpDownMoveVolume; // 0x7c4(0x04)
	struct UAudioComponent* LRMove; // 0x7c8(0x08)
	struct UAudioComponent* UpDownMove; // 0x7d0(0x08)
	struct UStaticMeshComponent* Base; // 0x7d8(0x08)
	struct USceneComponent* Pitch; // 0x7e0(0x08)
	struct UAudioComponent* ProjectilePull; // 0x7e8(0x08)
	struct UAudioComponent* StringPull; // 0x7f0(0x08)
	struct UAudioComponent* ProjectilePush; // 0x7f8(0x08)
	int32_t BallistaType; // 0x800(0x04)
	char pad_804[0x4]; // 0x804(0x04)
	struct UAudioComponent* BallistaSmallCrank; // 0x808(0x08)

	void MulticastBallistaReload(); // Function BallistaControlComponent.BallistaControlComponent_C.MulticastBallistaReload // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function BallistaControlComponent.BallistaControlComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnSoundNotifyFired_Event_1(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function BallistaControlComponent.BallistaControlComponent_C.OnSoundNotifyFired_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveFired(); // Function BallistaControlComponent.BallistaControlComponent_C.ReceiveFired // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlayerEntered(struct AMistCharacter* Player); // Function BallistaControlComponent.BallistaControlComponent_C.ReceivePlayerEntered // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlayerLeft(struct AMistCharacter* Player); // Function BallistaControlComponent.BallistaControlComponent_C.ReceivePlayerLeft // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveReloadFailed(); // Function BallistaControlComponent.BallistaControlComponent_C.ReceiveReloadFailed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function BallistaControlComponent.BallistaControlComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BallistaControlComponent(int32_t EntryPoint); // Function BallistaControlComponent.BallistaControlComponent_C.ExecuteUbergraph_BallistaControlComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

