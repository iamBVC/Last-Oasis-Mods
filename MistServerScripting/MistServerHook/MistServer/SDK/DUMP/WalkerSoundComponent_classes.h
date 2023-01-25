// BlueprintGeneratedClass WalkerSoundComponent.WalkerSoundComponent_C
// Size: 0x1bc (Inherited: 0xf0)
struct UWalkerSoundComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	float NormalizedWalkerSpeed; // 0xf8(0x04)
	float LegsMoveVolume; // 0xfc(0x04)
	struct TArray<int32_t> PrevRPMGroup; // 0x100(0x10)
	struct TArray<struct UAudioComponent*> WalkerAudioComponents; // 0x110(0x10)
	struct TArray<struct USceneComponent*> LegSockets; // 0x120(0x10)
	struct USoundBase* Gear1; // 0x130(0x08)
	struct USoundBase* Gear2; // 0x138(0x08)
	struct USoundBase* Gear3; // 0x140(0x08)
	struct USoundBase* Gear4; // 0x148(0x08)
	float TresholdUp1; // 0x150(0x04)
	float TresholdUp2; // 0x154(0x04)
	float TresholdUp3; // 0x158(0x04)
	float TresholdUp4; // 0x15c(0x04)
	float TresholdDown1; // 0x160(0x04)
	float TresholdDown2; // 0x164(0x04)
	float TresholdDown3; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct USoundBase* GearShift; // 0x170(0x08)
	float MinWalkerSpeed; // 0x178(0x04)
	float MaxWalkerSpeed; // 0x17c(0x04)
	float MinLegsSpeed; // 0x180(0x04)
	float MaxLegsSpeed; // 0x184(0x04)
	float MinNormalizedWalkerSpeed; // 0x188(0x04)
	float MaxNormalizedWalkerSpeed; // 0x18c(0x04)
	float MinLegsVolume; // 0x190(0x04)
	float MaxLegsVolume; // 0x194(0x04)
	int32_t RPMGroupCurrent; // 0x198(0x04)
	int32_t Side; // 0x19c(0x04)
	struct UMistAudioComponent* Step; // 0x1a0(0x08)
	float NormalizedRPM_L; // 0x1a8(0x04)
	float NormalizedRPM_R; // 0x1ac(0x04)
	float GearShiftVolume; // 0x1b0(0x04)
	float GearShiftStopVolume; // 0x1b4(0x04)
	float RPMGearVolume; // 0x1b8(0x04)

	void SoundCalcRPMGroup(int32_t Side, int32_t& RPM Group); // Function WalkerSoundComponent.WalkerSoundComponent_C.SoundCalcRPMGroup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SoundMain(struct TArray<struct USceneComponent*>& LegSockets); // Function WalkerSoundComponent.WalkerSoundComponent_C.SoundMain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function WalkerSoundComponent.WalkerSoundComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function WalkerSoundComponent.WalkerSoundComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function WalkerSoundComponent.WalkerSoundComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_WalkerSoundComponent(int32_t EntryPoint); // Function WalkerSoundComponent.WalkerSoundComponent_C.ExecuteUbergraph_WalkerSoundComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

