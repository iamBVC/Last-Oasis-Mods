// BlueprintGeneratedClass SpiderWalkerBase.SpiderWalkerBase_C
// Size: 0x10b0 (Inherited: 0xf50)
struct ASpiderWalkerBase_C : AMistSpiderWalker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf50(0x08)
	struct UBoxComponent* CharacterPushingVolume; // 0xf58(0x08)
	struct UMistSkeletalMeshComponent* MistSkeletalMesh; // 0xf60(0x08)
	struct UIgnitableComponent_C* IgnitableComponent; // 0xf68(0x08)
	struct UWalkerCollisionSoundComponent_C* WalkerCollisionSoundComponent; // 0xf70(0x08)
	struct UWalkerSparePartsCraftingStation_C* WalkerSparePartsCraftingStation; // 0xf78(0x08)
	struct UWalkerWaterContainer_C* WalkerWaterContainer; // 0xf80(0x08)
	struct UWalkerHatchContainer_C* WalkerHatchContainer; // 0xf88(0x08)
	struct UWalkerCargoContainer_C* WalkerCargoContainer; // 0xf90(0x08)
	struct USceneComponent* Detach4; // 0xf98(0x08)
	struct USceneComponent* Detach3; // 0xfa0(0x08)
	struct UMistWalkerPartSocketComponent* LeftLegSocket; // 0xfa8(0x08)
	struct UMistWalkerPartSocketComponent* RightLegSocket; // 0xfb0(0x08)
	struct USceneComponent* Scene; // 0xfb8(0x08)
	struct USceneComponent* Detach2; // 0xfc0(0x08)
	struct USceneComponent* Detach1; // 0xfc8(0x08)
	struct UMistInteractableComponent* DriveInteractable; // 0xfd0(0x08)
	struct UMistInteractableInventoryComponent* StorageInventoryInteractable; // 0xfd8(0x08)
	struct UAudioComponent* VO; // 0xfe0(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0xfe8(0x08)
	struct USceneComponent* Attach; // 0xff0(0x08)
	struct UAudioComponent* Engine; // 0xff8(0x08)
	struct UMistBicycleWalkerControlComponent* MistBicycleWalkerControl; // 0x1000(0x08)
	struct UMistWalkerTorqueGeneratorComponent* MistWalkerTorqueGenerator; // 0x1008(0x08)
	struct TArray<int32_t> PrevRPMGroup; // 0x1010(0x10)
	float NormalizedWalkerSpeed; // 0x1020(0x04)
	float LegsMoveVolume; // 0x1024(0x04)
	struct TArray<struct UAudioComponent*> SpiderAudioComponents; // 0x1028(0x10)
	bool SprintActive; // 0x1038(0x01)
	char pad_1039[0x7]; // 0x1039(0x07)
	struct UAudioComponent* SprintEffort; // 0x1040(0x08)
	struct UAudioComponent* HighTensionCreaking; // 0x1048(0x08)
	bool CreakActive; // 0x1050(0x01)
	char pad_1051[0x7]; // 0x1051(0x07)
	struct FTimerHandle TimerRipples; // 0x1058(0x08)
	float WaterRippleParticle; // 0x1060(0x04)
	float TimeBetweenParticleIsSpawned; // 0x1064(0x04)
	struct USkeletalMeshComponent* MeshComponent; // 0x1068(0x08)
	bool WalkerStartMovingSFXFired; // 0x1070(0x01)
	char pad_1071[0x7]; // 0x1071(0x07)
	struct UAudioComponent* WalkerMovesInWaterLoop; // 0x1078(0x08)
	bool WalksInWater; // 0x1080(0x01)
	bool HullBroke; // 0x1081(0x01)
	char pad_1082[0x2]; // 0x1082(0x02)
	float AnimCurrentTime; // 0x1084(0x04)
	float InitSpeedTreshold; // 0x1088(0x04)
	float CurrentTurn; // 0x108c(0x04)
	float PrevTurn; // 0x1090(0x04)
	float CurrentDirection; // 0x1094(0x04)
	float PrevDirection; // 0x1098(0x04)
	float TrueWalkerSpeed; // 0x109c(0x04)
	float TimeInAir; // 0x10a0(0x04)
	bool ListenerIsInRange; // 0x10a4(0x01)
	char pad_10A5[0x3]; // 0x10a5(0x03)
	struct UWalkerWheel* WalkerWheel; // 0x10a8(0x08)

	void HowLongIsInAir(); // Function SpiderWalkerBase.SpiderWalkerBase_C.HowLongIsInAir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void HighTension(); // Function SpiderWalkerBase.SpiderWalkerBase_C.HighTension // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SoundMain(struct TArray<struct USceneComponent*>& LegComponent); // Function SpiderWalkerBase.SpiderWalkerBase_C.SoundMain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SoundCalcRPMGroup(int32_t Side, int32_t& RPM Group); // Function SpiderWalkerBase.SpiderWalkerBase_C.SoundCalcRPMGroup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EngineRotation(); // Function SpiderWalkerBase.SpiderWalkerBase_C.EngineRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__NettableComponent_K2Node_ComponentBoundEvent_3_OnHitByNet__DelegateSignature(struct AMistNetProjectile* NetProjectile); // Function SpiderWalkerBase.SpiderWalkerBase_C.BndEvt__NettableComponent_K2Node_ComponentBoundEvent_3_OnHitByNet__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void MulticastOnHitByNet(struct AMistNetProjectile* NetProjectile); // Function SpiderWalkerBase.SpiderWalkerBase_C.MulticastOnHitByNet // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Water Checking(); // Function SpiderWalkerBase.SpiderWalkerBase_C.Water Checking // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StartContinuousRipple(); // Function SpiderWalkerBase.SpiderWalkerBase_C.StartContinuousRipple // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EndContinuousRipple(); // Function SpiderWalkerBase.SpiderWalkerBase_C.EndContinuousRipple // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckSprinting(); // Function SpiderWalkerBase.SpiderWalkerBase_C.CheckSprinting // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function SpiderWalkerBase.SpiderWalkerBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_2_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function SpiderWalkerBase.SpiderWalkerBase_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_2_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerDamage(float PrevHealth, float NewHealth, float MaximumHealth); // Function SpiderWalkerBase.SpiderWalkerBase_C.OnWalkerDamage // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void CheckSteering(); // Function SpiderWalkerBase.SpiderWalkerBase_C.CheckSteering // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistBicycleWalkerControl_K2Node_ComponentBoundEvent_1_PlayerEnteredLeftEvent__DelegateSignature(struct AMistCharacter* Player); // Function SpiderWalkerBase.SpiderWalkerBase_C.BndEvt__MistBicycleWalkerControl_K2Node_ComponentBoundEvent_1_PlayerEnteredLeftEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistBicycleWalkerControl_K2Node_ComponentBoundEvent_0_PlayerEnteredLeftEvent__DelegateSignature(struct AMistCharacter* Player); // Function SpiderWalkerBase.SpiderWalkerBase_C.BndEvt__MistBicycleWalkerControl_K2Node_ComponentBoundEvent_0_PlayerEnteredLeftEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void CheckIfIsInAir(); // Function SpiderWalkerBase.SpiderWalkerBase_C.CheckIfIsInAir // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckIsInWater(); // Function SpiderWalkerBase.SpiderWalkerBase_C.CheckIsInWater // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfListenerIsInRange(); // Function SpiderWalkerBase.SpiderWalkerBase_C.CheckIfListenerIsInRange // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function SpiderWalkerBase.SpiderWalkerBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SpiderWalkerBase(int32_t EntryPoint); // Function SpiderWalkerBase.SpiderWalkerBase_C.ExecuteUbergraph_SpiderWalkerBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

