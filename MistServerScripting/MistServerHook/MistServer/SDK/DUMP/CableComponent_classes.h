// Class CableComponent.CableActor
// Size: 0x3c8 (Inherited: 0x3c0)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3c0(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x870 (Inherited: 0x7e0)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x7e0(0x01)
	bool bAttachEnd; // 0x7e1(0x01)
	char pad_7E2[0x6]; // 0x7e2(0x06)
	struct FComponentReference AttachEndTo; // 0x7e8(0x28)
	struct FName AttachEndToSocketName; // 0x810(0x08)
	struct FVector EndLocation; // 0x818(0x0c)
	float CableLength; // 0x824(0x04)
	int32_t NumSegments; // 0x828(0x04)
	float SubstepTime; // 0x82c(0x04)
	int32_t SolverIterations; // 0x830(0x04)
	bool bEnableStiffness; // 0x834(0x01)
	bool bEnableCollision; // 0x835(0x01)
	char pad_836[0x2]; // 0x836(0x02)
	float CollisionFriction; // 0x838(0x04)
	struct FVector CableForce; // 0x83c(0x0c)
	float CableGravityScale; // 0x848(0x04)
	float CableWidth; // 0x84c(0x04)
	int32_t NumSides; // 0x850(0x04)
	float TileMaterial; // 0x854(0x04)
	char pad_858[0x18]; // 0x858(0x18)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0xaf1ef0
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0xaf1df0
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xaf1d40
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xaf1d10
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xaf1ce0
};

