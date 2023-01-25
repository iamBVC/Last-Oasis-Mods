// BlueprintGeneratedClass AudioAmbientComponent.AudioAmbientComponent_C
// Size: 0x280 (Inherited: 0x110)
struct UAudioAmbientComponent_C : UMistAmbientSoundComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	struct TArray<struct FName> Biomes; // 0x118(0x10)
	bool HighWindActive; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct UAudioComponent* HighWind; // 0x130(0x08)
	bool MedWindActive; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UAudioComponent* MedWind; // 0x140(0x08)
	struct UAudioComponent* MiniOasisWind; // 0x148(0x08)
	struct UAudioComponent* 2DWind; // 0x150(0x08)
	struct TMap<enum class EMistClimateType, struct UAudioComponent*> ActiveClimateAmbientMap; // 0x158(0x50)
	struct UAudioComponent* LakeGentleAmbiance; // 0x1a8(0x08)
	struct TArray<enum class EMistClimateType> Climates; // 0x1b0(0x10)
	struct TMap<enum class EMistClimateType, struct USoundCue*> ClimateSoundCueMap; // 0x1c0(0x50)
	struct TMap<enum class EMistClimateType, struct UAudioComponent*> ClimateAudioCompMap; // 0x210(0x50)
	struct UAudioComponent* Default2D; // 0x260(0x08)
	bool SpecialReverbIsActive; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<enum class EMistClimateType> ClimatesToRemoveFromAudioCompMap; // 0x270(0x10)

	void ClearAudioComps(); // Function AudioAmbientComponent.AudioAmbientComponent_C.ClearAudioComps // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void 3DCBiomeBased(struct FName Biome_A_01, struct FName Biome_A_02, struct FName Biome_A_03, float SpawnPossibility, struct USoundBase* SoundCueA, float MinRadius, float MaxRadius); // Function AudioAmbientComponent.AudioAmbientComponent_C.3DCBiomeBased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void 2DAmbianceSetter(enum class EMistClimateType CurrentClimate, struct USoundBase* WindSoundCue); // Function AudioAmbientComponent.AudioAmbientComponent_C.2DAmbianceSetter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MedWindTrigger(struct FName Biome1, struct FName Biome2, struct FName Biome3); // Function AudioAmbientComponent.AudioAmbientComponent_C.MedWindTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void HighWindTrigger(struct FName Biome1, struct FName Biome2); // Function AudioAmbientComponent.AudioAmbientComponent_C.HighWindTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function AudioAmbientComponent.AudioAmbientComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void CheckClimate(); // Function AudioAmbientComponent.AudioAmbientComponent_C.CheckClimate // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckBiome(); // Function AudioAmbientComponent.AudioAmbientComponent_C.CheckBiome // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function AudioAmbientComponent.AudioAmbientComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void Spawn3DC(); // Function AudioAmbientComponent.AudioAmbientComponent_C.Spawn3DC // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_AudioAmbientComponent(int32_t EntryPoint); // Function AudioAmbientComponent.AudioAmbientComponent_C.ExecuteUbergraph_AudioAmbientComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

