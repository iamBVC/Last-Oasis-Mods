// BlueprintGeneratedClass EffectsFunctionLibrary.EffectsFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UEffectsFunctionLibrary_C : UBlueprintFunctionLibrary {

	void FindClosestSurfaceRecursive(struct FVector Location, struct FVector SweepDirection, float Radius, int32_t Iteration, int32_t MaxIteration, struct FName ProfileName, enum class EDrawDebugTrace DrawDebugType, struct UObject* __WorldContext, bool& bValid, struct FHitResult& OutHit); // Function EffectsFunctionLibrary.EffectsFunctionLibrary_C.FindClosestSurfaceRecursive // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void FindClosestSurface(struct FVector Start, float Radius, struct FName ProfileName, enum class EDrawDebugTrace DrawDebugType, struct UObject* __WorldContext, bool& bValid, struct FHitResult& OutHit); // Function EffectsFunctionLibrary.EffectsFunctionLibrary_C.FindClosestSurface // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnExplosionEffects(struct UNiagaraSystem* SystemTemplate, struct UMaterialInterface* DecalMaterial, float DecalFadeDuration, struct UCameraShake* Shake, struct FVector Location, float Radius, bool bDrawDebug, struct UObject* __WorldContext); // Function EffectsFunctionLibrary.EffectsFunctionLibrary_C.SpawnExplosionEffects // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
};

