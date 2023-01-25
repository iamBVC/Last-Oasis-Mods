// BlueprintGeneratedClass SpiderWalkerBallista.SpiderWalkerBallista_C
// Size: 0x1158 (Inherited: 0x10b0)
struct ASpiderWalkerBallista_C : ASpiderWalkerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UStaticMeshComponent* SM_SmallWalkerCargoDock_03; // 0x10b8(0x08)
	struct USceneComponent* RightOffset; // 0x10c0(0x08)
	struct UCameraComponent* Camera; // 0x10c8(0x08)
	struct USceneComponent* LeftOffset; // 0x10d0(0x08)
	struct UPlayerCameraSpringArm_C* SpringArm; // 0x10d8(0x08)
	struct UChildActorComponent* ChildActor; // 0x10e0(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x10e8(0x08)
	float NormalizedRPMR; // 0x10f0(0x04)
	float NormalizedRPML; // 0x10f4(0x04)
	float NormalizedWalkerSpeed_1; // 0x10f8(0x04)
	int32_t CurrentGroupR; // 0x10fc(0x04)
	int32_t CurrentGroupL; // 0x1100(0x04)
	int32_t PrevGroupR; // 0x1104(0x04)
	int32_t PrevGroupL; // 0x1108(0x04)
	float GearShiftVolume_1; // 0x110c(0x04)
	float LegsMoveVolume_1; // 0x1110(0x04)
	char pad_1114[0x4]; // 0x1114(0x04)
	struct UAudioComponent* Spider1A; // 0x1118(0x08)
	struct UAudioComponent* Spider2A; // 0x1120(0x08)
	struct UAudioComponent* Spider3A; // 0x1128(0x08)
	struct UAudioComponent* Spider4A; // 0x1130(0x08)
	struct UAudioComponent* SpiderB1; // 0x1138(0x08)
	struct UAudioComponent* SpiderB2; // 0x1140(0x08)
	struct UAudioComponent* SpiderB3; // 0x1148(0x08)
	struct UAudioComponent* SpiderB4; // 0x1150(0x08)

	void SetRPMGroupL(float RPM L, int32_t& RPM Group L); // Function SpiderWalkerBallista.SpiderWalkerBallista_C.SetRPMGroupL // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupR(float RPM R, int32_t& RPM Group R); // Function SpiderWalkerBallista.SpiderWalkerBallista_C.SetRPMGroupR // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function SpiderWalkerBallista.SpiderWalkerBallista_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function SpiderWalkerBallista.SpiderWalkerBallista_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SpiderWalkerBallista(int32_t EntryPoint); // Function SpiderWalkerBallista.SpiderWalkerBallista_C.ExecuteUbergraph_SpiderWalkerBallista // (Final|UbergraphFunction) // @ game+0x163f1c0
};

