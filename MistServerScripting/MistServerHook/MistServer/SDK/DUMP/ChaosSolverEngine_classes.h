// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xf8 (Inherited: 0xf0)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_F0[0x8]; // 0xf0(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xf8 (Inherited: 0xf0)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_F0[0x8]; // 0xf0(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x2b0 (Inherited: 0xf8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_F8[0x110]; // 0xf8(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x208(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x258(0x50)
	char pad_2A8[0x8]; // 0x2a8(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2ef6a00
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x448 (Inherited: 0x3c0)
struct AChaosSolverActor : AActor {
	float TimeStepMultiplier; // 0x3c0(0x04)
	int32_t CollisionIterations; // 0x3c4(0x04)
	int32_t PushOutIterations; // 0x3c8(0x04)
	int32_t PushOutPairIterations; // 0x3cc(0x04)
	float ClusterConnectionFactor; // 0x3d0(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x3d4(0x01)
	bool DoGenerateCollisionData; // 0x3d5(0x01)
	char pad_3D6[0x2]; // 0x3d6(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x3d8(0x10)
	bool DoGenerateBreakingData; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x3ec(0x10)
	bool DoGenerateTrailingData; // 0x3fc(0x01)
	char pad_3FD[0x3]; // 0x3fd(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x400(0x10)
	bool bHasFloor; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float FloorHeight; // 0x414(0x04)
	float MassScale; // 0x418(0x04)
	bool bGenerateContactGraph; // 0x41c(0x01)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x41d(0x03)
	struct UBillboardComponent* SpriteComponent; // 0x420(0x08)
	char pad_428[0x18]; // 0x428(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x440(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x2ef6b10
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x2ef6af0
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

