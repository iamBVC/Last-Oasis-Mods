// BlueprintGeneratedClass PumpWalker.PumpWalker_C
// Size: 0x11d1 (Inherited: 0xf38)
struct APumpWalker_C : AMistWalker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf38(0x08)
	struct UStaticMeshComponent* Sacks; // 0xf40(0x08)
	struct UStaticMeshComponent* SM_PumpWalker; // 0xf48(0x08)
	struct USceneComponent* Attach; // 0xf50(0x08)
	struct UPlayerCameraSpringArm_C* SpringArm; // 0xf58(0x08)
	struct USceneComponent* Detach; // 0xf60(0x08)
	struct UBoxComponent* Drive; // 0xf68(0x08)
	struct UMistSkeletalMeshComponent* SK_DinghyWalkerRudder; // 0xf70(0x08)
	struct UCameraComponent* Camera; // 0xf78(0x08)
	struct USceneComponent* RightOffset; // 0xf80(0x08)
	struct USceneComponent* LeftOffset; // 0xf88(0x08)
	struct UBoxComponent* DrillCollision; // 0xf90(0x08)
	struct USceneComponent* CableAttach4; // 0xf98(0x08)
	struct UCableComponent* Cable4; // 0xfa0(0x08)
	struct USceneComponent* CableBase4; // 0xfa8(0x08)
	struct USceneComponent* CableAttach3; // 0xfb0(0x08)
	struct UCableComponent* Cable3; // 0xfb8(0x08)
	struct USceneComponent* CableBase3; // 0xfc0(0x08)
	struct USceneComponent* CableAttach2; // 0xfc8(0x08)
	struct UCableComponent* Cable2; // 0xfd0(0x08)
	struct USceneComponent* CableBase2; // 0xfd8(0x08)
	struct USceneComponent* CableAttach1; // 0xfe0(0x08)
	struct UCableComponent* Cable1; // 0xfe8(0x08)
	struct USceneComponent* CableBase1; // 0xff0(0x08)
	struct USceneComponent* DrillSound; // 0xff8(0x08)
	struct USceneComponent* PumpSound; // 0x1000(0x08)
	struct UStaticMeshComponent* LeversCollision; // 0x1008(0x08)
	struct UStaticMeshComponent* PumpRotate; // 0x1010(0x08)
	struct UStaticMeshComponent* Drill; // 0x1018(0x08)
	struct UStaticMeshComponent* PumpBase; // 0x1020(0x08)
	struct UMistPumpWalkerComponent* MistPumpWalker; // 0x1028(0x08)
	struct UMistInteractableComponent* DriveInteractable; // 0x1030(0x08)
	struct UMistMannedWalkerControlComponent* MistMannedWalkerControl; // 0x1038(0x08)
	struct UMistInteractableComponent* PumpInteract; // 0x1040(0x08)
	struct UStaticMeshComponent* Pump; // 0x1048(0x08)
	struct USceneComponent* Scene; // 0x1050(0x08)
	struct UAudioComponent* InteriorSoundSocket8; // 0x1058(0x08)
	struct UAudioComponent* InteriorSoundSocket7; // 0x1060(0x08)
	struct UAudioComponent* InteriorSoundSocket6; // 0x1068(0x08)
	struct UAudioComponent* InteriorSoundSocket5; // 0x1070(0x08)
	struct UWalkerSparePartsCraftingStation_C* WalkerSparePartsCraftingStation; // 0x1078(0x08)
	struct UTorqueContainerComponent_C* TorqueContainer; // 0x1080(0x08)
	struct UMistWalkerSprintTorqueComponent* MistWalkerSprintTorque; // 0x1088(0x08)
	struct UMistInteractableInventoryComponent* CargoInteractableInventory; // 0x1090(0x08)
	struct UWalkerWaterContainer_C* WalkerWaterContainer; // 0x1098(0x08)
	struct UWalkerCargoContainer_C* WalkerCargoContainer; // 0x10a0(0x08)
	struct UWalkerHatchContainer_C* WalkerHatchContainer; // 0x10a8(0x08)
	struct UAudioComponent* WaterLoop; // 0x10b0(0x08)
	struct UMistWalkerPartSocketComponent* LeftLegSocket; // 0x10b8(0x08)
	struct UMistWalkerPartSocketComponent* RightLegSocket; // 0x10c0(0x08)
	struct UMistPackingComponent* MistPacking; // 0x10c8(0x08)
	struct UWalkerCollisionSoundComponent_C* WalkerCollisionSoundComponent; // 0x10d0(0x08)
	struct UAudioComponent* InteriorSoundSocket4; // 0x10d8(0x08)
	struct UAudioComponent* InteriorSoundSocket3; // 0x10e0(0x08)
	struct UAudioComponent* InteriorSoundSocket2; // 0x10e8(0x08)
	struct UAudioComponent* InteriorSoundSocket1; // 0x10f0(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x10f8(0x08)
	struct UWalkerSoundComponent_C* WalkerSoundComponent; // 0x1100(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x1108(0x08)
	float NormalizedRPM_L; // 0x1110(0x04)
	float NormalizedRPM_R; // 0x1114(0x04)
	int32_t PrevGroupR; // 0x1118(0x04)
	int32_t CurrentGroup R; // 0x111c(0x04)
	struct UAudioComponent* Walker180A; // 0x1120(0x08)
	struct UAudioComponent* Walker220A; // 0x1128(0x08)
	struct UAudioComponent* Walker260A; // 0x1130(0x08)
	struct UAudioComponent* Walker300A; // 0x1138(0x08)
	int32_t PrevGroupL; // 0x1140(0x04)
	int32_t CurrentGroupL; // 0x1144(0x04)
	struct UAudioComponent* Walker180B; // 0x1148(0x08)
	struct UAudioComponent* Walker220B; // 0x1150(0x08)
	struct UAudioComponent* Walker260B; // 0x1158(0x08)
	struct UAudioComponent* Walker300B; // 0x1160(0x08)
	float GearShiftVolume; // 0x1168(0x04)
	float NormalizedWalkerSpeed; // 0x116c(0x04)
	float LegsSpeed; // 0x1170(0x04)
	bool IsInside; // 0x1174(0x01)
	char pad_1175[0x3]; // 0x1175(0x03)
	float CurrentTilt; // 0x1178(0x04)
	float PrevTilt; // 0x117c(0x04)
	struct USkeletalMeshComponent* Mesh Component; // 0x1180(0x08)
	struct UAudioComponent* WalkerInWaterLoop; // 0x1188(0x08)
	bool Walker Start Moving SFX Fired; // 0x1190(0x01)
	bool HullBroke; // 0x1191(0x01)
	char pad_1192[0x2]; // 0x1192(0x02)
	float TimeInAir; // 0x1194(0x04)
	bool ListenerIsInRange; // 0x1198(0x01)
	char pad_1199[0x7]; // 0x1199(0x07)
	struct TArray<enum class EObjectTypeQuery> NewVar_1; // 0x11a0(0x10)
	bool PumpActive; // 0x11b0(0x01)
	char pad_11B1[0x7]; // 0x11b1(0x07)
	struct UAudioComponent* PumpSoundCue; // 0x11b8(0x08)
	struct UAudioComponent* DrillSoundCue; // 0x11c0(0x08)
	struct UAudioComponent* PumpingActiveSound; // 0x11c8(0x08)
	enum class EPumpWalkerState ConfirmedPumpState; // 0x11d0(0x01)

	void CableDeactivate(); // Function PumpWalker.PumpWalker_C.CableDeactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CableActivate(); // Function PumpWalker.PumpWalker_C.CableActivate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void HowLongIsInAir(); // Function PumpWalker.PumpWalker_C.HowLongIsInAir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnLegSoundNotify(struct USceneComponent* Mesh); // Function PumpWalker.PumpWalker_C.OnLegSoundNotify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupL(float RPM L, int32_t& RPM Group L); // Function PumpWalker.PumpWalker_C.SetRPMGroupL // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupR(float RPM R, int32_t& RPM Group R); // Function PumpWalker.PumpWalker_C.SetRPMGroupR // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckForTilt(); // Function PumpWalker.PumpWalker_C.CheckForTilt // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function PumpWalker.PumpWalker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function PumpWalker.PumpWalker_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void CheckingWater(); // Function PumpWalker.PumpWalker_C.CheckingWater // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerDamage(float PrevHealth, float NewHealth, float MaximumHealth); // Function PumpWalker.PumpWalker_C.OnWalkerDamage // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfIsInAir(); // Function PumpWalker.PumpWalker_C.CheckIfIsInAir // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfListenerIsInRange(); // Function PumpWalker.PumpWalker_C.CheckIfListenerIsInRange // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistPumpWalker_K2Node_ComponentBoundEvent_0_PumpWalkerStateChanged__DelegateSignature(enum class EPumpWalkerState NewState); // Function PumpWalker.PumpWalker_C.BndEvt__MistPumpWalker_K2Node_ComponentBoundEvent_0_PumpWalkerStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void TransitionSound(); // Function PumpWalker.PumpWalker_C.TransitionSound // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void PumpActiveSound(); // Function PumpWalker.PumpWalker_C.PumpActiveSound // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckSounds(); // Function PumpWalker.PumpWalker_C.CheckSounds // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_PumpWalker(int32_t EntryPoint); // Function PumpWalker.PumpWalker_C.ExecuteUbergraph_PumpWalker // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

