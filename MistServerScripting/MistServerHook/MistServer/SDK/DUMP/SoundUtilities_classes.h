// Class SoundUtilities.SoundSimple
// Size: 0x178 (Inherited: 0x160)
struct USoundSimple : USoundBase {
	struct TArray<struct FSoundVariation> Variations; // 0x160(0x10)
	struct USoundWave* SoundWave; // 0x170(0x08)
};

// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USoundUtilitiesBPFunctionLibrary : UBlueprintFunctionLibrary {

	float GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x78cb10
	int32_t GetMIDIPitchFromFrequency(float Frequency); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x78ca90
	float GetFrequencyFromMIDIPitch(int32_t MidiNote); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x78ca10
	float GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x78c910
};

