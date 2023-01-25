// BlueprintGeneratedClass AudioFunctionLibrary.AudioFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UAudioFunctionLibrary_C : UBlueprintFunctionLibrary {

	void CheckIfAnyListenerInRange(struct USceneComponent* SceneComponent, float Range, struct UObject* __WorldContext, bool& IsInRange); // Function AudioFunctionLibrary.AudioFunctionLibrary_C.CheckIfAnyListenerInRange // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioAdjust(struct UAudioComponent* AudioComponent, float VolumeAdjustDuration, float VolumeAdjustLevel, float PitchAdjustDuration, float PitchAdjustLevel, bool AdjustVolume, bool AdjustPitch, struct UObject* __WorldContext); // Function AudioFunctionLibrary.AudioFunctionLibrary_C.AudioAdjust // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GroundTypeDefiner(struct FVector ActorLocation, struct UCharacterMovementComponent* CharacterMovement, struct UObject* __WorldContext, int32_t& GroundMaterialOut); // Function AudioFunctionLibrary.AudioFunctionLibrary_C.GroundTypeDefiner // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioFadeOut(struct UAudioComponent* AudioComponent, float Duration, float Volume, struct UObject* __WorldContext); // Function AudioFunctionLibrary.AudioFunctionLibrary_C.AudioFadeOut // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
};

