// BlueprintGeneratedClass RemoteBallistaControlComponent.RemoteBallistaControlComponent_C
// Size: 0x840 (Inherited: 0x7d0)
struct URemoteBallistaControlComponent_C : UMistRemoteBallistaControlComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UAudioComponent* Reeling Speed Sound; // 0x7d8(0x08)
	bool ReelingOut; // 0x7e0(0x01)
	char pad_7E1[0x7]; // 0x7e1(0x07)
	struct AActor* Owner; // 0x7e8(0x08)
	float LRMoveVolume; // 0x7f0(0x04)
	float UpDownMoveVolume; // 0x7f4(0x04)
	struct UAudioComponent* LRMove; // 0x7f8(0x08)
	struct UAudioComponent* UpDownMove; // 0x800(0x08)
	struct UStaticMeshComponent* Base; // 0x808(0x08)
	struct USceneComponent* Pitch; // 0x810(0x08)
	struct UAudioComponent* ProjectilePull; // 0x818(0x08)
	struct UAudioComponent* StringPull; // 0x820(0x08)
	struct UAudioComponent* ProjectilePush; // 0x828(0x08)
	int32_t BallistaType; // 0x830(0x04)
	char pad_834[0x4]; // 0x834(0x04)
	struct UAudioComponent* BallistaSmallCrank; // 0x838(0x08)

	void MulticastBallistaReload(); // Function RemoteBallistaControlComponent.RemoteBallistaControlComponent_C.MulticastBallistaReload // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function RemoteBallistaControlComponent.RemoteBallistaControlComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnSoundNotifyFired_Event_1(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function RemoteBallistaControlComponent.RemoteBallistaControlComponent_C.OnSoundNotifyFired_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveFired(); // Function RemoteBallistaControlComponent.RemoteBallistaControlComponent_C.ReceiveFired // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlayerEntered(struct AMistCharacter* Player); // Function RemoteBallistaControlComponent.RemoteBallistaControlComponent_C.ReceivePlayerEntered // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlayerLeft(struct AMistCharacter* Player); // Function RemoteBallistaControlComponent.RemoteBallistaControlComponent_C.ReceivePlayerLeft // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveReloadFailed(); // Function RemoteBallistaControlComponent.RemoteBallistaControlComponent_C.ReceiveReloadFailed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function RemoteBallistaControlComponent.RemoteBallistaControlComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_RemoteBallistaControlComponent(int32_t EntryPoint); // Function RemoteBallistaControlComponent.RemoteBallistaControlComponent_C.ExecuteUbergraph_RemoteBallistaControlComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

