// Class TimeSynth.TimeSynthVolumeGroup
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynthVolumeGroup : UObject {
	float DefaultVolume; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class TimeSynth.TimeSynthClip
// Size: 0x68 (Inherited: 0x28)
struct UTimeSynthClip : UObject {
	struct TArray<struct FTimeSynthClipSound> Sounds; // 0x28(0x10)
	struct FVector2D VolumeScaleDb; // 0x38(0x08)
	struct FVector2D PitchScaleSemitones; // 0x40(0x08)
	struct FTimeSynthTimeDef FadeInTime; // 0x48(0x08)
	bool bApplyFadeOut; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FTimeSynthTimeDef FadeOutTime; // 0x54(0x08)
	struct FTimeSynthTimeDef ClipDuration; // 0x5c(0x08)
	enum class ETimeSynthEventClipQuantization ClipQuantization; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class TimeSynth.TimeSynthComponent
// Size: 0x11a0 (Inherited: 0x770)
struct UTimeSynthComponent : USynthComponent {
	struct FTimeSynthQuantizationSettings QuantizationSettings; // 0x770(0x14)
	char bEnableSpectralAnalysis : 1; // 0x784(0x01)
	char pad_784_1 : 7; // 0x784(0x01)
	char pad_785[0x3]; // 0x785(0x03)
	struct TArray<float> FrequenciesToAnalyze; // 0x788(0x10)
	enum class ETimeSynthFFTSize FFTSize; // 0x798(0x01)
	char pad_799[0x7]; // 0x799(0x07)
	struct FMulticastInlineDelegate OnPlaybackTime; // 0x7a0(0x10)
	char bIsFilterAEnabled : 1; // 0x7b0(0x01)
	char bIsFilterBEnabled : 1; // 0x7b0(0x01)
	char pad_7B0_2 : 6; // 0x7b0(0x01)
	char pad_7B1[0x3]; // 0x7b1(0x03)
	struct FTimeSynthFilterSettings FilterASettings; // 0x7b4(0x0c)
	struct FTimeSynthFilterSettings FilterBSettings; // 0x7c0(0x0c)
	char bIsEnvelopeFollowerEnabled : 1; // 0x7cc(0x01)
	char pad_7CC_1 : 7; // 0x7cc(0x01)
	char pad_7CD[0x3]; // 0x7cd(0x03)
	struct FTimeSynthEnvelopeFollowerSettings EnvelopeFollowerSettings; // 0x7d0(0x0c)
	int32_t MaxPoolSize; // 0x7dc(0x04)
	char pad_7E0[0x9c0]; // 0x7e0(0x9c0)

	void StopSoundsOnVolumeGroupWithFadeOverride(struct UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime); // Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7528c0
	void StopSoundsOnVolumeGroup(struct UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization); // Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x752800
	void StopClipWithFadeOverride(struct FTimeSynthClipHandle InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime); // Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7526b0
	void StopClip(struct FTimeSynthClipHandle InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization); // Function TimeSynth.TimeSynthComponent.StopClip // (Final|Native|Public|BlueprintCallable) // @ game+0x7525c0
	void SetVolumeGroup(struct UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec); // Function TimeSynth.TimeSynthComponent.SetVolumeGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x7524c0
	void SetSeed(int32_t InSeed); // Function TimeSynth.TimeSynthComponent.SetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x752440
	void SetQuantizationSettings(struct FTimeSynthQuantizationSettings& InQuantizationSettings); // Function TimeSynth.TimeSynthComponent.SetQuantizationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x752380
	void SetFilterSettings(enum class ETimeSynthFilter Filter, struct FTimeSynthFilterSettings& InSettings); // Function TimeSynth.TimeSynthComponent.SetFilterSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x752290
	void SetFilterEnabled(enum class ETimeSynthFilter Filter, bool bIsEnabled); // Function TimeSynth.TimeSynthComponent.SetFilterEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x7521c0
	void SetFFTSize(enum class ETimeSynthFFTSize InFFTSize); // Function TimeSynth.TimeSynthComponent.SetFFTSize // (Final|Native|Public|BlueprintCallable) // @ game+0x752140
	void SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings& InSettings); // Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x752090
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled); // Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x752000
	void SetBPM(float BeatsPerMinute); // Function TimeSynth.TimeSynthComponent.SetBPM // (Final|Native|Public|BlueprintCallable) // @ game+0x751f80
	void ResetSeed(); // Function TimeSynth.TimeSynthComponent.ResetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x751f60
	struct FTimeSynthClipHandle PlayClip(struct UTimeSynthClip* InClip, struct UTimeSynthVolumeGroup* InVolumeGroup); // Function TimeSynth.TimeSynthComponent.PlayClip // (Final|Native|Public|BlueprintCallable) // @ game+0x751e90
	bool HasActiveClips(); // Function TimeSynth.TimeSynthComponent.HasActiveClips // (Final|Native|Public|BlueprintCallable) // @ game+0x751e60
	struct TArray<struct FTimeSynthSpectralData> GetSpectralData(); // Function TimeSynth.TimeSynthComponent.GetSpectralData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x751de0
	float GetEnvelopeFollowerValue(); // Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x751dc0
	int32_t GetBPM(); // Function TimeSynth.TimeSynthComponent.GetBPM // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x751d90
	void AddQuantizationEventDelegate(enum class ETimeSynthEventQuantization QuantizationType, struct FDelegate& OnQuantizationEvent); // Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x751ca0
};

