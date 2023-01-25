// BlueprintGeneratedClass BaseLootSite.BaseLootSite_C
// Size: 0x4c0 (Inherited: 0x3d8)
struct ABaseLootSite_C : AMistDestructibleLootsite {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct USubmergeComponent_C* SubmergeComponent; // 0x3e0(0x08)
	struct UMistInactiveObjectsRemovalComponent* MistInactiveObjectsRemoval; // 0x3e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f0(0x08)
	struct TArray<struct UMeshComponent*> SimulatedComponents; // 0x3f8(0x10)
	struct UParticleSystemComponent* SubmergeParticles; // 0x408(0x08)
	bool bSubmergeOnDestroyed; // 0x410(0x01)
	bool bDebugCameraShake; // 0x411(0x01)
	char pad_412[0x2]; // 0x412(0x02)
	struct FVector2D SubmergeAngularVelocityDampen; // 0x414(0x08)
	struct FVector2D SubmergeAngularVelocity; // 0x41c(0x08)
	struct FVector2D SubmergeLineraVelocity; // 0x424(0x08)
	struct FVector2D SubmergeLineraVelocityDampen; // 0x42c(0x08)
	struct FVector2D MinLinearVelocity; // 0x434(0x08)
	float InitialTimeToStopSinking; // 0x43c(0x04)
	float RadiusFromBoundsMultiply; // 0x440(0x04)
	float CameraShakeOuterRadiusOffset; // 0x444(0x04)
	float InitialSubmergeParticlesSpawnRate; // 0x448(0x04)
	float InitialSubmergeParticlesSpawnRadius; // 0x44c(0x04)
	float TimeToStopSinkingEffects; // 0x450(0x04)
	float TimeToDestroy; // 0x454(0x04)
	float CameraShakeInnerRadiusOffset; // 0x458(0x04)
	bool DestructStarted; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct TMap<struct UPrimitiveComponent*, struct FSLootSiteMeshInfo> SimulatedComponentsInfo; // 0x460(0x50)
	int32_t SimulatedComponentsAmount; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct UAudioComponent* LootSiteDecaySFX; // 0x4b8(0x08)

	void DestroyReceivedBlueprint(); // Function BaseLootSite.BaseLootSite_C.DestroyReceivedBlueprint // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BaseLootSite(int32_t EntryPoint); // Function BaseLootSite.BaseLootSite_C.ExecuteUbergraph_BaseLootSite // (Final|UbergraphFunction) // @ game+0x163f1c0
};

