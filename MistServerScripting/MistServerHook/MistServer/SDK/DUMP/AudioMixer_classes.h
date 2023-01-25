// Class AudioMixer.SynthComponent
// Size: 0x770 (Inherited: 0x290)
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x290(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x290(0x01)
	char bAllowSpatialization : 1; // 0x290(0x01)
	char bOverrideAttenuation : 1; // 0x290(0x01)
	char pad_290_4 : 4; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	char bOutputToBusOnly : 1; // 0x294(0x01)
	char pad_294_1 : 7; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct USoundAttenuation* AttenuationSettings; // 0x298(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x2a0(0x3a0)
	struct USoundConcurrency* ConcurrencySettings; // 0x640(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x648(0x50)
	struct USoundClass* SoundClass; // 0x698(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x6a0(0x08)
	struct USoundSubmixBase* SoundSubmix; // 0x6a8(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x6b0(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x6c0(0x10)
	struct FSoundModulation Modulation; // 0x6d0(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x6e0(0x10)
	char bIsUISound : 1; // 0x6f0(0x01)
	char bIsPreviewSound : 1; // 0x6f0(0x01)
	char pad_6F0_2 : 6; // 0x6f0(0x01)
	char pad_6F1[0x3]; // 0x6f1(0x03)
	int32_t EnvelopeFollowerAttackTime; // 0x6f4(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x6f8(0x04)
	char pad_6FC[0x4]; // 0x6fc(0x04)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x700(0x10)
	char pad_710[0x20]; // 0x710(0x20)
	struct USynthSound* Synth; // 0x730(0x08)
	struct UAudioComponent* AudioComponent; // 0x738(0x08)
	char pad_740[0x30]; // 0x740(0x30)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x22e15b0
	void Start(); // Function AudioMixer.SynthComponent.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x22e12d0
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x22e1250
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend // (Final|Native|Public|BlueprintCallable) // @ game+0x22e1180
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22e0470
};

// Class AudioMixer.AudioGenerator
// Size: 0xa8 (Inherited: 0x28)
struct UAudioGenerator : UObject {
	char pad_28[0x80]; // 0x28(0x80)
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e1890
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite); // Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e1680
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e15d0
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord); // Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e14b0
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e12f0
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e0b40
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e04a0
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e0a10
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e0920
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e0830
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e0740
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e0690
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e05c0
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e0550
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e04a0
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22e0230
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e03b0
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22e0230
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e0180
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e0110
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22e0020
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22dff20
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22dfe70
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x108 (Inherited: 0x40)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	char pad_40[0x78]; // 0x40(0x78)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xb8(0x50)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x22e0cf0
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix // (Final|Native|Public|BlueprintCallable) // @ game+0x22e0c70
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x784670
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0xd0 (Inherited: 0x40)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	char pad_40[0x5c]; // 0x40(0x5c)
	struct FSubmixEffectReverbSettings Settings; // 0x9c(0x34)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x22e1080
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x22e0ec0
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// Size: 0xd8 (Inherited: 0x40)
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset {
	char pad_40[0x60]; // 0x40(0x60)
	struct FSubmixEffectReverbFastSettings Settings; // 0xa0(0x38)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x22e0f80
	void SetSettings(struct FSubmixEffectReverbFastSettings& InSettings); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x22e0e00
};

// Class AudioMixer.SynthSound
// Size: 0x380 (Inherited: 0x360)
struct USynthSound : USoundWaveProcedural {
	struct USynthComponent* OwningSynthComponent; // 0x360(0x08)
	char pad_368[0x18]; // 0x368(0x18)
};

