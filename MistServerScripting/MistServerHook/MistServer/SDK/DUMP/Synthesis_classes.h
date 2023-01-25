// Class Synthesis.ModularSynthPresetBank
// Size: 0x38 (Inherited: 0x28)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x28(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x77d380
};

// Class Synthesis.ModularSynthComponent
// Size: 0xe10 (Inherited: 0x770)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x770(0x04)
	char pad_774[0x69c]; // 0x774(0x69c)

	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f8f0
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x77f870
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel // (Final|Native|Public|BlueprintCallable) // @ game+0x77f7f0
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x77f770
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x77f6f0
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode // (Final|Native|Public|BlueprintCallable) // @ game+0x77f670
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x77f5e0
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x77f560
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x77f4e0
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x77f460
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento // (Final|Native|Public|BlueprintCallable) // @ game+0x77f3e0
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x77f360
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan // (Final|Native|Public|BlueprintCallable) // @ game+0x77f2e0
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType // (Final|Native|Public|BlueprintCallable) // @ game+0x77f220
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync // (Final|Native|Public|BlueprintCallable) // @ game+0x77f190
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones // (Final|Native|Public|BlueprintCallable) // @ game+0x77f0c0
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth // (Final|Native|Public|BlueprintCallable) // @ game+0x77eff0
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave // (Final|Native|Public|BlueprintCallable) // @ game+0x77ef20
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x77ee50
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain // (Final|Native|Public|BlueprintCallable) // @ game+0x77ed80
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x77ecb0
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents // (Final|Native|Public|BlueprintCallable) // @ game+0x77ebe0
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x77eb60
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x77eae0
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x77ea60
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x77e9d0
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x77e950
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x77e8d0
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x77e850
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x77e7c0
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x77e740
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType // (Final|Native|Public|BlueprintCallable) // @ game+0x77e680
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x77e5c0
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode // (Final|Native|Public|BlueprintCallable) // @ game+0x77e500
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x77e430
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain // (Final|Native|Public|BlueprintCallable) // @ game+0x77e360
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x77e290
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x77e1c0
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb // (Final|Native|Public|BlueprintCallable) // @ game+0x77e140
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x77e0c0
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x77e040
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x77dfc0
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x77df40
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x77dec0
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x77de40
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison // (Final|Native|Public|BlueprintCallable) // @ game+0x77ddb0
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x77dd20
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony // (Final|Native|Public|BlueprintCallable) // @ game+0x77dc90
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch // (Final|Native|Public|BlueprintCallable) // @ game+0x77dbc0
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato // (Final|Native|Public|BlueprintCallable) // @ game+0x77db30
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x77dab0
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x77da30
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x77d9b0
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x77d920
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x77d8a0
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x77d820
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x77d710
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x77d600
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77d4c0
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	char pad_40[0x30]; // 0x40(0x30)
	struct FSourceEffectBitCrusherSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectBitCrusherSettings& InSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784460
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	char pad_40[0x40]; // 0x40(0x40)
	struct FSourceEffectChorusSettings Settings; // 0x80(0x18)

	void SetSettings(struct FSourceEffectChorusSettings& InSettings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784510
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xb8 (Inherited: 0x40)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	char pad_40[0x50]; // 0x40(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0x90(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7845c0
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0x110 (Inherited: 0xf0)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x74(0x0c)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x784de0
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784720
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x784360
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSourceEffectEQSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSourceEffectEQSettings& InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784670
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectFilterSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectFilterSettings& InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7847d0
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784880
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784930
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	char pad_40[0x30]; // 0x40(0x30)
	struct FSourceEffectPannerSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectPannerSettings& InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7849e0
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSourceEffectPhaserSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784a90
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	char pad_40[0x3c]; // 0x40(0x3c)
	struct FSourceEffectRingModulationSettings Settings; // 0x7c(0x14)

	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784b50
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	char pad_40[0x40]; // 0x40(0x40)
	struct FSourceEffectSimpleDelaySettings Settings; // 0x80(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784bf0
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	char pad_40[0x3c]; // 0x40(0x3c)
	struct FSourceEffectStereoDelaySettings Settings; // 0x7c(0x14)

	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784ca0
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	char pad_40[0x30]; // 0x40(0x30)
	struct FSourceEffectWaveShaperSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7849e0
};

// Class Synthesis.AudioImpulseResponse
// Size: 0x58 (Inherited: 0x28)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x28(0x10)
	int32_t NumChannels; // 0x38(0x04)
	int32_t SampleRate; // 0x3c(0x04)
	float NormalizationVolumeDb; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<float> IRData; // 0x48(0x10)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0xb8 (Inherited: 0x40)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x40(0x20)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x60(0x08)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x68(0x01)
	bool bEnableHardwareAcceleration; // 0x69(0x01)
	char pad_6A[0x4e]; // 0x6a(0x4e)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784d40
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // @ game+0x7843e0
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSubmixEffectDelaySettings Settings; // 0x74(0x0c)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)

	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x78a510
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x789a50
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x788c20
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0x787dd0
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSubmixEffectFilterSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x78a5d0
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x789340
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x7892c0
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x789240
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x788da0
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x788d20
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x788ca0
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSubmixEffectFlexiverbSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x78a680
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xb0 (Inherited: 0x40)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	char pad_40[0x40]; // 0x40(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0x80(0x18)
	char pad_98[0x18]; // 0x98(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x78aa90
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x78a740
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x789ad0
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap // (Final|Native|Public|BlueprintCallable) // @ game+0x788470
	void GetTapIds(struct TArray<int32_t>& TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x787f90
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x787eb0
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0x787df0
	void AddTap(int32_t& TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x787ba0
};

// Class Synthesis.Synth2DSlider
// Size: 0x478 (Inherited: 0x108)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x108(0x04)
	float ValueY; // 0x10c(0x04)
	struct FDelegate ValueXDelegate; // 0x110(0x10)
	struct FDelegate ValueYDelegate; // 0x120(0x10)
	struct FSynth2DSliderStyle WidgetStyle; // 0x130(0x2b8)
	struct FLinearColor SliderHandleColor; // 0x3e8(0x10)
	bool IndentHandle; // 0x3f8(0x01)
	bool Locked; // 0x3f9(0x01)
	char pad_3FA[0x2]; // 0x3fa(0x02)
	float StepSize; // 0x3fc(0x04)
	bool IsFocusable; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x448(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x458(0x10)
	char pad_468[0x10]; // 0x468(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x78ab70
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x78a900
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x78a800
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x789b50
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x7899c0
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x788040
};

// Class Synthesis.GranularSynth
// Size: 0xb30 (Inherited: 0x770)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x770(0x08)
	char pad_778[0x3b8]; // 0x778(0x3b8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x78a980
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x78a880
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x78a480
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec // (Final|Native|Public|BlueprintCallable) // @ game+0x78a400
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime // (Final|Native|Public|BlueprintCallable) // @ game+0x789d60
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x789ce0
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x789880
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0x789940
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability // (Final|Native|Public|BlueprintCallable) // @ game+0x789800
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x789740
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x789680
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType // (Final|Native|Public|BlueprintCallable) // @ game+0x789600
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x789540
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x788910
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x788910
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x788200
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x7880b0
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x788080
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x787e80
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x787c30
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x170 (Inherited: 0x28)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x28(0x10)
	char bLockKeyframesToGridBool : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t LockKeyframesToGrid; // 0x3c(0x04)
	int32_t WaveTableResolution; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x48(0x10)
	char bNormalizeWaveTables : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x117]; // 0x59(0x117)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xeb0 (Inherited: 0x770)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x770(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x780(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x790(0x08)
	char pad_798[0x718]; // 0x798(0x718)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (Final|Native|Public|BlueprintCallable) // @ game+0x78abf0
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState // (Final|Native|Public|BlueprintCallable) // @ game+0x78aa00
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType // (Final|Native|Public|BlueprintCallable) // @ game+0x789f60
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x789ee0
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x789e60
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x78a380
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x78a300
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x78a270
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x78a1f0
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x78a170
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x78a0e0
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x78a060
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x789fe0
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance // (Final|Native|Public|BlueprintCallable) // @ game+0x789c60
	void SetLowPassFilterFrequency(float InNewFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x789be0
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote // (Final|Native|Public|BlueprintCallable) // @ game+0x7894c0
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x789440
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x7893c0
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x789140
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x7890c0
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x7891c0
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x789030
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x788fb0
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x788f20
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x788ea0
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x788e20
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x788b20
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x788a50
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType // (Final|Native|Public|BlueprintCallable) // @ game+0x788990
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x788890
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x788810
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x788780
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x788700
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x788680
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x7885f0
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x788570
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x7884f0
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable // (Final|Native|Public|BlueprintCallable) // @ game+0x7883f0
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables // (Final|Native|Public|BlueprintCallable) // @ game+0x7883d0
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x788310
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x788180
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x787e50
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x787e10
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x787cf0
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x787c60
};

// Class Synthesis.SynthSamplePlayer
// Size: 0x8a0 (Inherited: 0x770)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x770(0x08)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x778(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x788(0x10)
	char pad_798[0x108]; // 0x798(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x78bcf0
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x78bc70
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x78bbe0
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0x78bb20
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime // (Final|Native|Public|BlueprintCallable) // @ game+0x78b980
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x78b950
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x78b8f0
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x78b8c0
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x78b890
};

// Class Synthesis.SynthKnob
// Size: 0x400 (Inherited: 0x108)
struct USynthKnob : UWidget {
	float Value; // 0x108(0x04)
	float StepSize; // 0x10c(0x04)
	float MouseSpeed; // 0x110(0x04)
	float MouseFineTuneSpeed; // 0x114(0x04)
	char ShowTooltipInfo : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FText ParameterName; // 0x120(0x18)
	struct FText ParameterUnits; // 0x138(0x18)
	struct FDelegate ValueDelegate; // 0x150(0x10)
	struct FSynthKnobStyle WidgetStyle; // 0x160(0x238)
	bool Locked; // 0x398(0x01)
	bool IsFocusable; // 0x399(0x01)
	char pad_39A[0x6]; // 0x39a(0x06)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x3e0(0x10)
	char pad_3F0[0x10]; // 0x3f0(0x10)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x78bdf0
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x78bd70
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x78ba90
	float GetValue(); // Function Synthesis.SynthKnob.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x78b920
};

