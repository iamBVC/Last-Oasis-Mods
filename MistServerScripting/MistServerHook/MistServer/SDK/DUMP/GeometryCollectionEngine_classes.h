// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x4c0 (Inherited: 0x290)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x290(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x290(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x290(0x01)
	char pad_290_3 : 5; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x294(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x2ac(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x2c4(0x18)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x2e0(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x330(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x380(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x390(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x3a0(0x10)
	char pad_3B0[0x110]; // 0x3b0(0x110)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2f1a000
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2f19f10
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2f19e20
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2f19d80
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x2f19cf0
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2f19bc0
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x2f19b30
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2f19a90
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x2f19a00
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x2f19980
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x2082af0
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2f197d0
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x2f19510
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x2082af0
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x3d0 (Inherited: 0x3c0)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x3c0(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x3c8(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2f19800
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x08)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xd00 (Inherited: 0x7e0)
struct UGeometryCollectionComponent : UMeshComponent {
	char pad_7E0[0x8]; // 0x7e0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x7e8(0x08)
	char pad_7F0[0xe0]; // 0x7f0(0xe0)
	struct UGeometryCollection* RestCollection; // 0x8d0(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x8d8(0x10)
	bool Simulating; // 0x8e8(0x01)
	char pad_8E9[0x7]; // 0x8e9(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x8f0(0x01)
	bool EnableClustering; // 0x8f1(0x01)
	char pad_8F2[0x2]; // 0x8f2(0x02)
	int32_t ClusterGroupIndex; // 0x8f4(0x04)
	int32_t MaxClusterLevel; // 0x8f8(0x04)
	char pad_8FC[0x4]; // 0x8fc(0x04)
	struct TArray<float> DamageThreshold; // 0x900(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x910(0x01)
	char pad_911[0x3]; // 0x911(0x03)
	int32_t CollisionGroup; // 0x914(0x04)
	float CollisionSampleFraction; // 0x918(0x04)
	float LinearEtherDrag; // 0x91c(0x04)
	float AngularEtherDrag; // 0x920(0x04)
	char pad_924[0x4]; // 0x924(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x928(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x930(0x01)
	char pad_931[0x3]; // 0x931(0x03)
	struct FVector InitialLinearVelocity; // 0x934(0x0c)
	struct FVector InitialAngularVelocity; // 0x940(0x0c)
	char pad_94C[0x4]; // 0x94c(0x04)
	struct FGeomComponentCacheParameters CacheParameters; // 0x950(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x9a0(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x9b0(0x10)
	char pad_9C0[0x18]; // 0x9c0(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x9d8(0x10)
	float DesiredCacheTime; // 0x9e8(0x04)
	bool CachePlayback; // 0x9ec(0x01)
	char pad_9ED[0x3]; // 0x9ed(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x9f0(0x10)
	bool bNotifyBreaks; // 0xa00(0x01)
	bool bNotifyCollisions; // 0xa01(0x01)
	char pad_A02[0x2d6]; // 0xa02(0x2d6)
	struct UBodySetup* DummyBodySetup; // 0xcd8(0x08)
	char pad_CE0[0x20]; // 0xce0(0x20)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x2f19c60
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x163f1c0
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x163f1c0
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x2f19660
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2f19590
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x4a8 (Inherited: 0x3c0)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x3c8(0x18)
	bool bDebugDrawWholeCollection; // 0x3e0(0x01)
	bool bDebugDrawHierarchy; // 0x3e1(0x01)
	bool bDebugDrawClustering; // 0x3e2(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x3e3(0x01)
	bool bShowRigidBodyId; // 0x3e4(0x01)
	bool bShowRigidBodyCollision; // 0x3e5(0x01)
	bool bCollisionAtOrigin; // 0x3e6(0x01)
	bool bShowRigidBodyTransform; // 0x3e7(0x01)
	bool bShowRigidBodyInertia; // 0x3e8(0x01)
	bool bShowRigidBodyVelocity; // 0x3e9(0x01)
	bool bShowRigidBodyForce; // 0x3ea(0x01)
	bool bShowRigidBodyInfos; // 0x3eb(0x01)
	bool bShowTransformIndex; // 0x3ec(0x01)
	bool bShowTransform; // 0x3ed(0x01)
	bool bShowParent; // 0x3ee(0x01)
	bool bShowLevel; // 0x3ef(0x01)
	bool bShowConnectivityEdges; // 0x3f0(0x01)
	bool bShowGeometryIndex; // 0x3f1(0x01)
	bool bShowGeometryTransform; // 0x3f2(0x01)
	bool bShowBoundingBox; // 0x3f3(0x01)
	bool bShowFaces; // 0x3f4(0x01)
	bool bShowFaceIndices; // 0x3f5(0x01)
	bool bShowFaceNormals; // 0x3f6(0x01)
	bool bShowSingleFace; // 0x3f7(0x01)
	int32_t SingleFaceIndex; // 0x3f8(0x04)
	bool bShowVertices; // 0x3fc(0x01)
	bool bShowVertexIndices; // 0x3fd(0x01)
	bool bShowVertexNormals; // 0x3fe(0x01)
	bool bUseActiveVisualization; // 0x3ff(0x01)
	float PointThickness; // 0x400(0x04)
	float LineThickness; // 0x404(0x04)
	bool bTextShadow; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float TextScale; // 0x40c(0x04)
	float NormalScale; // 0x410(0x04)
	float AxisScale; // 0x414(0x04)
	float ArrowScale; // 0x418(0x04)
	struct FColor RigidBodyIdColor; // 0x41c(0x04)
	float RigidBodyTransformScale; // 0x420(0x04)
	struct FColor RigidBodyCollisionColor; // 0x424(0x04)
	struct FColor RigidBodyInertiaColor; // 0x428(0x04)
	struct FColor RigidBodyVelocityColor; // 0x42c(0x04)
	struct FColor RigidBodyForceColor; // 0x430(0x04)
	struct FColor RigidBodyInfoColor; // 0x434(0x04)
	struct FColor TransformIndexColor; // 0x438(0x04)
	float TransformScale; // 0x43c(0x04)
	struct FColor LevelColor; // 0x440(0x04)
	struct FColor ParentColor; // 0x444(0x04)
	float ConnectivityEdgeThickness; // 0x448(0x04)
	struct FColor GeometryIndexColor; // 0x44c(0x04)
	float GeometryTransformScale; // 0x450(0x04)
	struct FColor BoundingBoxColor; // 0x454(0x04)
	struct FColor FaceColor; // 0x458(0x04)
	struct FColor FaceIndexColor; // 0x45c(0x04)
	struct FColor FaceNormalColor; // 0x460(0x04)
	struct FColor SingleFaceColor; // 0x464(0x04)
	struct FColor VertexColor; // 0x468(0x04)
	struct FColor VertexIndexColor; // 0x46c(0x04)
	struct FColor VertexNormalColor; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x478(0x08)
	char pad_480[0x28]; // 0x480(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0x108 (Inherited: 0xf0)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xf0(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0xd0 (Inherited: 0x28)
struct UGeometryCollection : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x40(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t MinLevelSetResolution; // 0x44(0x04)
	int32_t MaxLevelSetResolution; // 0x48(0x04)
	int32_t MinClusterLevelSetResolution; // 0x4c(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x50(0x04)
	float CollisionObjectReductionPercentage; // 0x54(0x04)
	bool bMassAsDensity; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Mass; // 0x5c(0x04)
	float MinimumMassClamp; // 0x60(0x04)
	float CollisionParticlesFraction; // 0x64(0x04)
	int32_t MaximumCollisionParticles; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x70(0x10)
	bool EnableRemovePiecesOnFracture; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x88(0x10)
	struct FGuid PersistentGuid; // 0x98(0x10)
	struct FGuid StateGuid; // 0xa8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xb8(0x04)
	char pad_BC[0x14]; // 0xbc(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x460 (Inherited: 0x3c0)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x3c0(0x08)
	struct UMaterial* RayMarchMaterial; // 0x3c8(0x08)
	float SurfaceTolerance; // 0x3d0(0x04)
	float Isovalue; // 0x3d4(0x04)
	bool Enabled; // 0x3d8(0x01)
	bool RenderVolumeBoundingBox; // 0x3d9(0x01)
	char pad_3DA[0x86]; // 0x3da(0x86)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x178 (Inherited: 0xf0)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xf8(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x100(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0x108(0x08)
	bool bSimulating; // 0x110(0x01)
	bool bNotifyCollisions; // 0x111(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0x112(0x01)
	char pad_113[0x1]; // 0x113(0x01)
	float Density; // 0x114(0x04)
	float MinMass; // 0x118(0x04)
	float MaxMass; // 0x11c(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0x124(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0x128(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0x12c(0x04)
	int32_t MinLevelSetResolution; // 0x130(0x04)
	int32_t MaxLevelSetResolution; // 0x134(0x04)
	int32_t CollisionGroup; // 0x138(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct FVector InitialLinearVelocity; // 0x140(0x0c)
	struct FVector InitialAngularVelocity; // 0x14c(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x158(0x10)
	char pad_168[0x10]; // 0x168(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x178 (Inherited: 0xf0)
struct UStaticMeshSimulationComponent : UActorComponent {
	char pad_F0[0x8]; // 0xf0(0x08)
	bool Simulating; // 0xf8(0x01)
	bool bNotifyCollisions; // 0xf9(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xfa(0x01)
	char pad_FB[0x1]; // 0xfb(0x01)
	float Mass; // 0xfc(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x100(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x101(0x01)
	char pad_102[0x2]; // 0x102(0x02)
	int32_t MinLevelSetResolution; // 0x104(0x04)
	int32_t MaxLevelSetResolution; // 0x108(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct FVector InitialLinearVelocity; // 0x110(0x0c)
	struct FVector InitialAngularVelocity; // 0x11c(0x0c)
	float DamageThreshold; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x130(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x138(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x140(0x10)
	char pad_150[0x10]; // 0x150(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x160(0x10)
	char pad_170[0x8]; // 0x170(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // @ game+0x2f197b0
};

