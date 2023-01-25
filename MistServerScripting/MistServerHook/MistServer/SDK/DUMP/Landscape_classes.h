// Class Landscape.ControlPointMeshActor
// Size: 0x3c8 (Inherited: 0x3c0)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x3c0(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x850 (Inherited: 0x850)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x848(0x04)
};

// Class Landscape.LandscapeProxy
// Size: 0x7b8 (Inherited: 0x3c0)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x3c0(0x08)
	struct FGuid LandscapeGuid; // 0x3c8(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x3d8(0x08)
	int32_t MaxLODLevel; // 0x3e0(0x04)
	float LODDistanceFactor; // 0x3e4(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x3ec(0x04)
	float LOD0ScreenSize; // 0x3f0(0x04)
	float LOD0DistributionSetting; // 0x3f4(0x04)
	float LODDistributionSetting; // 0x3f8(0x04)
	float TessellationComponentScreenSize; // 0x3fc(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x404(0x04)
	int32_t OccluderGeometryLOD; // 0x408(0x04)
	int32_t StaticLightingLOD; // 0x40c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x410(0x08)
	float StreamingDistanceMultiplier; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x420(0x08)
	char pad_428[0x20]; // 0x428(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x448(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x450(0x10)
	bool bMeshHoles; // 0x460(0x01)
	char MeshHolesMaxLod; // 0x461(0x01)
	char pad_462[0x6]; // 0x462(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x468(0x10)
	int32_t VirtualTextureNumLods; // 0x478(0x04)
	int32_t VirtualTextureLodBias; // 0x47c(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float NegativeZBoundsExtension; // 0x484(0x04)
	float PositiveZBoundsExtension; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x490(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x4a0(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x4b0(0x10)
	char pad_4C0[0x64]; // 0x4c0(0x64)
	bool bHasLandscapeGrass; // 0x524(0x01)
	char pad_525[0x3]; // 0x525(0x03)
	float StaticLightingResolution; // 0x528(0x04)
	char bCastStaticShadow : 1; // 0x52c(0x01)
	char bCastShadowAsTwoSided : 1; // 0x52c(0x01)
	char bCastFarShadow : 1; // 0x52c(0x01)
	char pad_52C_3 : 5; // 0x52c(0x01)
	char pad_52D[0x3]; // 0x52d(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x530(0x01)
	char pad_530_1 : 7; // 0x530(0x01)
	struct FLightingChannels LightingChannels; // 0x531(0x01)
	char pad_532[0x2]; // 0x532(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x534(0x01)
	char bRenderCustomDepth : 1; // 0x534(0x01)
	char pad_534_2 : 6; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	int32_t CustomDepthStencilValue; // 0x538(0x04)
	float LDMaxDrawDistance; // 0x53c(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x540(0x18)
	int32_t CollisionMipLevel; // 0x558(0x04)
	int32_t SimpleCollisionMipLevel; // 0x55c(0x04)
	float CollisionThickness; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct FBodyInstance BodyInstance; // 0x568(0x1e8)
	char bGenerateOverlapEvents : 1; // 0x750(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x750(0x01)
	char pad_750_2 : 6; // 0x750(0x01)
	char pad_751[0x3]; // 0x751(0x03)
	int32_t ComponentSizeQuads; // 0x754(0x04)
	int32_t SubsectionSizeQuads; // 0x758(0x04)
	int32_t NumSubsections; // 0x75c(0x04)
	char bUsedForNavigation : 1; // 0x760(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x760(0x01)
	char pad_760_2 : 6; // 0x760(0x01)
	char pad_761[0x3]; // 0x761(0x03)
	bool bUseDynamicMaterialInstance; // 0x764(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x765(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x766(0x01)
	bool bHasLayersContent; // 0x767(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x768(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2082d80
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x2082cc0
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x2082bf0
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x2082af0
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|Native|Public|BlueprintCallable) // @ game+0x20827e0
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x2082750
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x20826d0
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize // (Native|Public|BlueprintCallable) // @ game+0x2082650
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x20825d0
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x2082550
};

// Class Landscape.Landscape
// Size: 0x7b8 (Inherited: 0x7b8)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x3c0 (Inherited: 0x3c0)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x956b40
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x163f1c0
	void GetBlueprintRenderDependencies(struct TArray<struct UTexture2D*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
};

// Class Landscape.LandscapeComponent
// Size: 0x9d0 (Inherited: 0x7c0)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x7b8(0x04)
	int32_t SectionBaseY; // 0x7bc(0x04)
	int32_t ComponentSizeQuads; // 0x7c0(0x04)
	int32_t SubsectionSizeQuads; // 0x7c4(0x04)
	int32_t NumSubsections; // 0x7c8(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x7d0(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x7d8(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x7e0(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x7f0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x800(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x810(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x820(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocationsEditorOnly; // 0x830(0x10)
	struct TArray<struct UTexture2D*> WeightmapTexturesEditorOnly; // 0x840(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x850(0x08)
	char pad_85C[0x4]; // 0x85c(0x04)
	struct FVector4 WeightmapScaleBias; // 0x860(0x10)
	float WeightmapSubsectionOffset; // 0x870(0x04)
	char pad_874[0xc]; // 0x874(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x880(0x10)
	struct FBox CachedLocalBox; // 0x890(0x1c)
	LazyObjectProperty CollisionComponent; // 0x8ac(0x1c)
	struct UTexture2D* HeightmapTexture; // 0x8c8(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x8d0(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x8e0(0x10)
	struct FGuid MapBuildDataId; // 0x8f0(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x900(0x10)
	int32_t CollisionMipLevel; // 0x910(0x04)
	int32_t SimpleCollisionMipLevel; // 0x914(0x04)
	float NegativeZBoundsExtension; // 0x918(0x04)
	float PositiveZBoundsExtension; // 0x91c(0x04)
	float StaticLightingResolution; // 0x920(0x04)
	int32_t ForcedLOD; // 0x924(0x04)
	int32_t LODBias; // 0x928(0x04)
	struct FGuid StateId; // 0x92c(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x93c(0x10)
	char pad_94C[0x4]; // 0x94c(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x950(0x08)
	char MobileBlendableLayerMask; // 0x958(0x01)
	char pad_959[0x7]; // 0x959(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x960(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x968(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x978(0x10)
	char pad_988[0x48]; // 0x988(0x48)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2080cb0
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2080bd0
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2080bd0
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x3c0 (Inherited: 0x3c0)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x410 (Inherited: 0x3c0)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_3C0[0x50]; // 0x3c0(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x7c0 (Inherited: 0x7c0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	char bEnableDensityScaling : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32_t StartCullDistance; // 0x50(0x04)
	int32_t EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x8a0 (Inherited: 0x7c0)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x7b8(0x10)
	int32_t SectionBaseX; // 0x7c8(0x04)
	int32_t SectionBaseY; // 0x7cc(0x04)
	int32_t CollisionSizeQuads; // 0x7d0(0x04)
	float CollisionScale; // 0x7d4(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x7d8(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x7e0(0x10)
	struct FGuid HeightfieldGuid; // 0x7f0(0x10)
	struct FBox CachedLocalBox; // 0x800(0x1c)
	LazyObjectProperty RenderComponent; // 0x81c(0x1c)
	char pad_83C[0xc]; // 0x83c(0x0c)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x848(0x10)
	char pad_858[0x48]; // 0x858(0x48)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2080d40
};

// Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x1c)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x04)
	int32_t SubsectionSizeQuads; // 0x58(0x04)
	int32_t ComponentNumSubsections; // 0x5c(0x04)
	struct FVector DrawScale; // 0x60(0x0c)
	char pad_6C[0xa4]; // 0x6c(0xa4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
	char pad_120[0xf0]; // 0x120(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x428 (Inherited: 0x410)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x410(0x10)
	char bIsLayerThumbnail : 1; // 0x420(0x01)
	char bDisableTessellation : 1; // 0x420(0x01)
	char bMobile : 1; // 0x420(0x01)
	char bEditorToolUsage : 1; // 0x420(0x01)
	char pad_420_4 : 4; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x8b0 (Inherited: 0x8a0)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x898(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x3c8 (Inherited: 0x3c0)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x3c0(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x870 (Inherited: 0x850)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x848(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x858(0x10)
	int8_t ProxyLOD; // 0x868(0x01)
};

// Class Landscape.LandscapeSettings
// Size: 0x40 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x7f0 (Inherited: 0x7c0)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x7b8(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x7c8(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x7d8(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x2082b70
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float LayerWidthRatio; // 0x44(0x04)
	float SideFalloff; // 0x48(0x04)
	float LeftSideFalloffFactor; // 0x4c(0x04)
	float RightSideFalloffFactor; // 0x50(0x04)
	float LeftSideLayerFalloffFactor; // 0x54(0x04)
	float RightSideLayerFalloffFactor; // 0x58(0x04)
	float EndFalloff; // 0x5c(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa0(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb0 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	struct FInterpCurveVector SplineInfo; // 0x58(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa0(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x7d8 (Inherited: 0x7b8)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x7b8(0x1c)
	char pad_7D4[0x4]; // 0x7d4(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x98 (Inherited: 0x30)
struct ULandscapeSubsystem : UWorldSubsystem {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x40(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float MappingScale; // 0x44(0x04)
	float MappingRotation; // 0x48(0x04)
	float MappingPanU; // 0x4c(0x04)
	float MappingPanV; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x40(0x08)
	float PreviewWeight; // 0x48(0x04)
	struct FGuid ExpressionGUID; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x40(0x0c)
	char pad_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput LayerNotUsed; // 0x54(0x0c)
	char pad_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	char PreviewUsed : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FGuid ExpressionGUID; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x40(0x0c)
	char pad_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Layer; // 0x54(0x0c)
	char pad_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	float PreviewWeight; // 0x70(0x04)
	struct FVector ConstBase; // 0x74(0x0c)
	struct FGuid ExpressionGUID; // 0x80(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x40(0x10)
};

