// BlueprintGeneratedClass SubmergeComponent.SubmergeComponent_C
// Size: 0x1c1 (Inherited: 0xf0)
struct USubmergeComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct TMap<struct UPrimitiveComponent*, struct FSLootSiteMeshInfo> SimulatedComponentsInfo; // 0xf8(0x50)
	struct FVector2D SubmergeLineraVelocity; // 0x148(0x08)
	struct FVector2D MinLinearVelocity; // 0x150(0x08)
	struct FVector2D SubmergeLineraVelocityDampen; // 0x158(0x08)
	struct FVector2D SubmergeAngularVelocity; // 0x160(0x08)
	struct FVector2D SubmergeAngularVelocityDampen; // 0x168(0x08)
	float RadiusFromBoundsMultiply; // 0x170(0x04)
	float CameraShakeInnerRadiusOffset; // 0x174(0x04)
	float CameraShakeOuterRadiusOffset; // 0x178(0x04)
	float TimeToStopSinkingEffects; // 0x17c(0x04)
	float InitialTimeToStopSinking; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct UParticleSystemComponent* SubmergeParticles; // 0x188(0x08)
	float InitialSubmergeParticlesSpawnRadius; // 0x190(0x04)
	float InitialSubmergeParticlesSpawnRate; // 0x194(0x04)
	bool bSubmergeStarted; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct TArray<struct UMeshComponent*> SimulatedComponents; // 0x1a0(0x10)
	int32_t SimulatedComponentsAmount; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct UAudioComponent* LootSiteDecaySFX; // 0x1b8(0x08)
	bool bDebugCameraShake; // 0x1c0(0x01)

	void StartSubmerge(); // Function SubmergeComponent.SubmergeComponent_C.StartSubmerge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ParticleInitialize(struct FVector ParticleOrigin, struct FVector ActorExtents); // Function SubmergeComponent.SubmergeComponent_C.ParticleInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DirectTransformInitialize(struct UPrimitiveComponent* PrimitiveComponent); // Function SubmergeComponent.SubmergeComponent_C.DirectTransformInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DirectTransformUpdate(); // Function SubmergeComponent.SubmergeComponent_C.DirectTransformUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void FindLowestHeightInBounds(bool bIncludeAllCornersCheck, struct USceneComponent* Component, float& MinHeight); // Function SubmergeComponent.SubmergeComponent_C.FindLowestHeightInBounds // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void StartSubmergeInternal(); // Function SubmergeComponent.SubmergeComponent_C.StartSubmergeInternal // (Net|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateParticleParameters(); // Function SubmergeComponent.SubmergeComponent_C.UpdateParticleParameters // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void RequestUpdateParticleParameters(); // Function SubmergeComponent.SubmergeComponent_C.RequestUpdateParticleParameters // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function SubmergeComponent.SubmergeComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SubmergeComponent(int32_t EntryPoint); // Function SubmergeComponent.SubmergeComponent_C.ExecuteUbergraph_SubmergeComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

