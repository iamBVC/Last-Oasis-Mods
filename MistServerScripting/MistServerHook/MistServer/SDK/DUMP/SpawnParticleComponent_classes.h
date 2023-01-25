// BlueprintGeneratedClass SpawnParticleComponent.SpawnParticleComponent_C
// Size: 0x270 (Inherited: 0x208)
struct USpawnParticleComponent_C : UMistSpawnParticleComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x208(0x08)
	bool bDebugSurfaceGroundType; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct USceneComponent* CameraRootComponent; // 0x218(0x08)
	struct UParticleSystemComponent* DustParticles; // 0x220(0x08)
	struct UParticleSystemComponent* AshParticles; // 0x228(0x08)
	enum class EMistClimateType PlayerClimatType; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct UVirtualLandscapeLayer* PlayerDominantLandscapeLayer; // 0x238(0x08)
	struct AMistDirectionalLight_C* MainDirectionalLight; // 0x240(0x08)
	struct UNiagaraComponent* BlueFlowers; // 0x248(0x08)
	struct UMistGameUserSettings* GameUserSettings; // 0x250(0x08)
	bool bParticleByLayers; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct FTimerHandle UpdateParticleByLayersTimer; // 0x260(0x08)
	struct FTimerHandle SpawnByFoliageMeshTimer; // 0x268(0x08)

	void DebugTransform(struct FTransform Transform); // Function SpawnParticleComponent.SpawnParticleComponent_C.DebugTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnByFoliageMesh(); // Function SpawnParticleComponent.SpawnParticleComponent_C.SpawnByFoliageMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateParticleByLayers(); // Function SpawnParticleComponent.SpawnParticleComponent_C.UpdateParticleByLayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	float GetGameTime(); // Function SpawnParticleComponent.SpawnParticleComponent_C.GetGameTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	struct UParticleSystemComponent* SpawnCascadeAtTransform(struct UParticleSystem* FXAsset, struct FTransform Transform, bool bAutoDestroy); // Function SpawnParticleComponent.SpawnParticleComponent_C.SpawnCascadeAtTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	struct UNiagaraComponent* SpawnNiagaraAtTransform(struct UNiagaraSystem* FXAsset, struct FTransform Transform, bool bAutoDestroy); // Function SpawnParticleComponent.SpawnParticleComponent_C.SpawnNiagaraAtTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetMainDirectionalLight(struct AMistDirectionalLight_C*& MainDirectionalLight); // Function SpawnParticleComponent.SpawnParticleComponent_C.GetMainDirectionalLight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	bool LineTraceForStatic(struct FVector Location, float TraceStartOffset, float TraceEndOffset, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, struct UVirtualLandscapeLayer*& DominantLandscapeLayer); // Function SpawnParticleComponent.SpawnParticleComponent_C.LineTraceForStatic // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	bool LineTraceByLandscape(struct FVector Location, float TraceStartOffset, float TraceEndOffset, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, struct UVirtualLandscapeLayer*& DominantLandscapeLayer); // Function SpawnParticleComponent.SpawnParticleComponent_C.LineTraceByLandscape // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateWorldData(); // Function SpawnParticleComponent.SpawnParticleComponent_C.UpdateWorldData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateDustParticles(float VerticalDistanceToLandscapeTraceLength, float MaxVerticalDistanceToLandscapeSpawnOffset, float MultiplyRangeByDistanceToLandscape, struct UParticleSystem* EmitterTemplate, float MinSpawnRange, float MaxSpawnRange, float MinRangeExponent, float MaxRangeExponent, int32_t ParticlesToSpawn); // Function SpawnParticleComponent.SpawnParticleComponent_C.UpdateDustParticles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetWindAlignedRotation(struct FVector UpVector, struct FRotator& Rotation); // Function SpawnParticleComponent.SpawnParticleComponent_C.GetWindAlignedRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void GetClimateType(struct FVector& Location, enum class EMistClimateType& Climate); // Function SpawnParticleComponent.SpawnParticleComponent_C.GetClimateType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void GetRandomLocationAround(float RadiusMin, float RadiusMax, float RadiusDistributionExponent, struct FVector Direction, float DirectionStrength, struct FVector& Location); // Function SpawnParticleComponent.SpawnParticleComponent_C.GetRandomLocationAround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void UpdateParticleComponentOnLandscape(bool bAlignToWindDirection, struct FVector Location, float TraceLength, struct UParticleSystemComponent* ParticleSystem, struct FVector Offset, bool& bSuccess); // Function SpawnParticleComponent.SpawnParticleComponent_C.UpdateParticleComponentOnLandscape // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OwnerIsLocalPlayerClient(bool& bIsLocalPlayer); // Function SpawnParticleComponent.SpawnParticleComponent_C.OwnerIsLocalPlayerClient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void GetViewRoot(struct USceneComponent*& ViewRootComponent); // Function SpawnParticleComponent.SpawnParticleComponent_C.GetViewRoot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnAroundByGroundType(); // Function SpawnParticleComponent.SpawnParticleComponent_C.SpawnAroundByGroundType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void RequestSpawnByGroundType(float MinTime, float MaxTime); // Function SpawnParticleComponent.SpawnParticleComponent_C.RequestSpawnByGroundType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnByGroundType(); // Function SpawnParticleComponent.SpawnParticleComponent_C.SpawnByGroundType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function SpawnParticleComponent.SpawnParticleComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void Initialize(); // Function SpawnParticleComponent.SpawnParticleComponent_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateQuality(); // Function SpawnParticleComponent.SpawnParticleComponent_C.UpdateQuality // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetParticlesByLayerEnabled(bool bEnabled); // Function SpawnParticleComponent.SpawnParticleComponent_C.SetParticlesByLayerEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetUpGameUserSettings(); // Function SpawnParticleComponent.SpawnParticleComponent_C.SetUpGameUserSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SpawnParticleComponent(int32_t EntryPoint); // Function SpawnParticleComponent.SpawnParticleComponent_C.ExecuteUbergraph_SpawnParticleComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

