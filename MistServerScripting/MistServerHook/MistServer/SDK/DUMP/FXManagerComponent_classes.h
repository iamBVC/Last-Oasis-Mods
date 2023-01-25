// BlueprintGeneratedClass FXManagerComponent.FXManagerComponent_C
// Size: 0x149 (Inherited: 0xf0)
struct UFXManagerComponent_C : UActorComponent {
	struct TMap<struct UParticleSystem*, struct UParticleSystemComponent*> RecyclableEmittersMap; // 0xf0(0x50)
	struct UReactiveMaterialControllerComponent_C* ReactiveMaterialController; // 0x140(0x08)
	bool bDisplayedErrorMessage; // 0x148(0x01)

	void GetAndUpdateReactiveMaterialController(bool& bResult, struct UReactiveMaterialControllerComponent_C*& ReactiveMaterialController); // Function FXManagerComponent.FXManagerComponent_C.GetAndUpdateReactiveMaterialController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DestroyAllParticleComponents(); // Function FXManagerComponent.FXManagerComponent_C.DestroyAllParticleComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetParticleComponentEmittersEnabled(struct TArray<struct FName>& EmitterNames, bool bNewEnableState, struct UParticleSystemComponent* Target); // Function FXManagerComponent.FXManagerComponent_C.SetParticleComponentEmittersEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnReactiveEmmiterAttacedRecyclable(struct UParticleSystem* EmitterTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FTransform Transform, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bLandscapeDistanceTrace, float LandscapeDistanceTraceLength, struct UParticleSystemComponent*& EmmiterReference, bool& Success); // Function FXManagerComponent.FXManagerComponent_C.SpawnReactiveEmmiterAttacedRecyclable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetAllEmittersEnabled(struct TArray<struct FName>& EmitterNames, bool bNewEnableState); // Function FXManagerComponent.FXManagerComponent_C.SetAllEmittersEnabled // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnEmitterAttachedRecyclable(struct UParticleSystem* EmitterTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FTransform Transform, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bLandscapeDistanceTrace, float LandscapeDistanceTraceLength, float CullDistance, struct UParticleSystemComponent*& EmmiterReference, bool& bRecycled, bool& bSuccess); // Function FXManagerComponent.FXManagerComponent_C.SpawnEmitterAttachedRecyclable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
};

