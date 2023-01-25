// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x9f0 (Inherited: 0x9e0)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FGuid GenerationGuid; // 0x9e0(0x10)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x410 (Inherited: 0x3c0)
struct AInstancedFoliageActor : AActor {
	char pad_3C0[0x50]; // 0x3c0(0x50)
};

// Class Foliage.FoliageSpawnerLogic
// Size: 0x78 (Inherited: 0x30)
struct UFoliageSpawnerLogic : UDataAsset {
	struct TArray<struct FName> CachedLandscapeLayers; // 0x30(0x10)
	struct TArray<struct FName> CachedRegionLayers; // 0x40(0x10)
	struct TArray<struct FName> CachedExcludeLayers; // 0x50(0x10)
	struct TArray<struct FName> CachedIncludeLayers; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)

	float Inverse(float InWeight); // Function Foliage.FoliageSpawnerLogic.Inverse // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2048ca0
	float GetWeightOr(struct TArray<struct FName>& Layers, float DefaultValue); // Function Foliage.FoliageSpawnerLogic.GetWeightOr // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2048ba0
	float GetWeightDefaultLogic(); // Function Foliage.FoliageSpawnerLogic.GetWeightDefaultLogic // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2048b70
	float GetWeightAnd(struct TArray<struct FName>& Layers, float DefaultValue); // Function Foliage.FoliageSpawnerLogic.GetWeightAnd // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2048a70
	float GetWeight(struct FName Name); // Function Foliage.FoliageSpawnerLogic.GetWeight // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x20489d0
	struct FVector GetLocation(); // Function Foliage.FoliageSpawnerLogic.GetLocation // (Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2048990
	float CalcWeightInternal(); // Function Foliage.FoliageSpawnerLogic.CalcWeightInternal // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
};

// Class Foliage.FoliageStatistics
// Size: 0x28 (Inherited: 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x2048840
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x2048720
};

// Class Foliage.FoliageType
// Size: 0x460 (Inherited: 0x28)
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; // 0x28(0x10)
	float Density; // 0x38(0x04)
	float DensityAdjustmentFactor; // 0x3c(0x04)
	float Radius; // 0x40(0x04)
	bool bSingleInstanceModeOverrideRadius; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float SingleInstanceModeRadius; // 0x48(0x04)
	enum class EFoliageScaling Scaling; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FFloatInterval ScaleX; // 0x50(0x08)
	struct FFloatInterval ScaleY; // 0x58(0x08)
	struct FFloatInterval ScaleZ; // 0x60(0x08)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float VertexColorMaskThreshold; // 0x9c(0x04)
	char VertexColorMaskInvert : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FFloatInterval ZOffset; // 0xa4(0x08)
	char AlignToNormal : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float AlignMaxAngle; // 0xb0(0x04)
	char RandomYaw : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float RandomPitchAngle; // 0xb8(0x04)
	struct FFloatInterval GroundSlopeAngle; // 0xbc(0x08)
	struct FFloatInterval Height; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd0(0x10)
	float MinimumLayerWeight; // 0xe0(0x04)
	bool bUseRegionLayers; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct TArray<struct FName> RegionLandscapeLayers; // 0xe8(0x10)
	struct TArray<struct FName> ExcludeLandscapeLayers; // 0xf8(0x10)
	struct TArray<struct FName> IncludeLandscapeLayers; // 0x108(0x10)
	struct UFoliageSpawnerLogic* OverrideSpawningLogic; // 0x118(0x08)
	struct FName LandscapeLayer; // 0x120(0x08)
	char CollisionWithWorld : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FVector CollisionScale; // 0x12c(0x0c)
	struct FBoxSphereBounds MeshBounds; // 0x138(0x1c)
	struct FVector LowBoundOriginRadius; // 0x154(0x0c)
	enum class EComponentMobility Mobility; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct FInt32Interval CullDistance; // 0x164(0x08)
	char bEnableStaticLighting : 1; // 0x16c(0x01)
	char CastShadow : 1; // 0x16c(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x16c(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x16c(0x01)
	char bCastDynamicShadow : 1; // 0x16c(0x01)
	char bCastStaticShadow : 1; // 0x16c(0x01)
	char bCastShadowAsTwoSided : 1; // 0x16c(0x01)
	char bReceivesDecals : 1; // 0x16c(0x01)
	char bOverrideLightMapRes : 1; // 0x16d(0x01)
	char pad_16D_1 : 7; // 0x16d(0x01)
	char pad_16E[0x2]; // 0x16e(0x02)
	int32_t OverriddenLightMapRes; // 0x170(0x04)
	enum class ELightmapType LightmapType; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	char bUseAsOccluder : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct FBodyInstance BodyInstance; // 0x180(0x1e8)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x368(0x01)
	struct FLightingChannels LightingChannels; // 0x369(0x01)
	char pad_36A[0x2]; // 0x36a(0x02)
	char bRenderCustomDepth : 1; // 0x36c(0x01)
	char pad_36C_1 : 7; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	int32_t CustomDepthStencilValue; // 0x370(0x04)
	int32_t TranslucencySortPriority; // 0x374(0x04)
	float CollisionRadius; // 0x378(0x04)
	float ShadeRadius; // 0x37c(0x04)
	int32_t NumSteps; // 0x380(0x04)
	float InitialSeedDensity; // 0x384(0x04)
	float AverageSpreadDistance; // 0x388(0x04)
	float SpreadVariance; // 0x38c(0x04)
	int32_t SeedsPerStep; // 0x390(0x04)
	int32_t DistributionSeed; // 0x394(0x04)
	float MaxInitialSeedOffset; // 0x398(0x04)
	bool bCanGrowInShade; // 0x39c(0x01)
	bool bSpawnsInShade; // 0x39d(0x01)
	char pad_39E[0x2]; // 0x39e(0x02)
	float MaxInitialAge; // 0x3a0(0x04)
	float MaxAge; // 0x3a4(0x04)
	float OverlapPriority; // 0x3a8(0x04)
	struct FFloatInterval ProceduralScale; // 0x3ac(0x08)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct FRuntimeFloatCurve ScaleCurve; // 0x3b8(0x88)
	int32_t ChangeCount; // 0x440(0x04)
	char ReapplyDensity : 1; // 0x444(0x01)
	char ReapplyRadius : 1; // 0x444(0x01)
	char ReapplyAlignToNormal : 1; // 0x444(0x01)
	char ReapplyRandomYaw : 1; // 0x444(0x01)
	char ReapplyScaling : 1; // 0x444(0x01)
	char ReapplyScaleX : 1; // 0x444(0x01)
	char ReapplyScaleY : 1; // 0x444(0x01)
	char ReapplyScaleZ : 1; // 0x444(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x445(0x01)
	char ReapplyGroundSlope : 1; // 0x445(0x01)
	char ReapplyHeight : 1; // 0x445(0x01)
	char ReapplyLandscapeLayers : 1; // 0x445(0x01)
	char ReapplyZOffset : 1; // 0x445(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x445(0x01)
	char ReapplyVertexColorMask : 1; // 0x445(0x01)
	char bEnableDensityScaling : 1; // 0x445(0x01)
	char pad_446[0x2]; // 0x446(0x02)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x448(0x10)
	int32_t VirtualTextureCullMips; // 0x458(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
};

// Class Foliage.FoliageType_Actor
// Size: 0x470 (Inherited: 0x460)
struct UFoliageType_Actor : UFoliageType {
	struct AActor* ActorClass; // 0x460(0x08)
	bool bShouldAttachToBaseComponent; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x480 (Inherited: 0x460)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x460(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x468(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x478(0x08)
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x430 (Inherited: 0x3d0)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x3d0(0x08)
	struct FVector TouchingActorEntryPosition; // 0x3d8(0x0c)
	struct FVector FoliageVelocity; // 0x3e4(0x0c)
	struct FVector FoliageForce; // 0x3f0(0x0c)
	struct FVector FoliagePosition; // 0x3fc(0x0c)
	float FoliageDamageImpulseScale; // 0x408(0x04)
	float FoliageTouchImpulseScale; // 0x40c(0x04)
	float FoliageStiffness; // 0x410(0x04)
	float FoliageStiffnessQuadratic; // 0x414(0x04)
	float FoliageDamping; // 0x418(0x04)
	float MaxDamageImpulse; // 0x41c(0x04)
	float MaxTouchImpulse; // 0x420(0x04)
	float MaxForce; // 0x424(0x04)
	float Mass; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)

	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // (Final|Native|Protected|HasOutParms) // @ game+0x2048510
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x850 (Inherited: 0x850)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x400 (Inherited: 0x3f8)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x3f8(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x118 (Inherited: 0xf0)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xf0(0x08)
	float TileOverlap; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct AVolume* SpawningVolume; // 0x100(0x08)
	struct FGuid ProceduralGuid; // 0x108(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0xc0 (Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28(0x04)
	float TileSize; // 0x2c(0x04)
	int32_t NumUniqueTiles; // 0x30(0x04)
	float MinimumQuadTreeSize; // 0x34(0x04)
	bool bOverrideLandscapeLayers; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FName> LandscapeLayers; // 0x40(0x10)
	bool bUseRegions; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FName> RegionLayers; // 0x58(0x10)
	struct TArray<struct FName> ExcludeLayers; // 0x68(0x10)
	struct TArray<struct FName> IncludeLayers; // 0x78(0x10)
	struct UFoliageSpawnerLogic* OverrideSpawningLogic; // 0x88(0x08)
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate // (Final|Native|Public|BlueprintCallable) // @ game+0x2048d30
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x158 (Inherited: 0x28)
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x08)
	char pad_30[0xa0]; // 0x30(0xa0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xd0(0x10)
	char pad_E0[0x78]; // 0xe0(0x78)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x400 (Inherited: 0x3f8)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x3f8(0x08)
};

