// ScriptStruct SoundUtilities.SoundVariation
// Size: 0x20 (Inherited: 0x00)
struct FSoundVariation {
	struct USoundWave* SoundWave; // 0x00(0x08)
	float ProbabilityWeight; // 0x08(0x04)
	struct FVector2D VolumeRange; // 0x0c(0x08)
	struct FVector2D PitchRange; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

