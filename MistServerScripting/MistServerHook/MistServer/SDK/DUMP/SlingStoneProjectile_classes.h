// BlueprintGeneratedClass SlingStoneProjectile.SlingStoneProjectile_C
// Size: 0x531 (Inherited: 0x508)
struct ASlingStoneProjectile_C : AMistScattershotProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct USphereComponent* FlyByCollision; // 0x510(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x518(0x08)
	bool ShotFired; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct UAudioComponent* ProjectileFlyBy; // 0x528(0x08)
	bool FlyByActive; // 0x530(0x01)

	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function SlingStoneProjectile.SlingStoneProjectile_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveImpact(struct FHitResult& HitResult, struct FVector& Velocity, struct UPhysicalMaterial* PhysMaterial); // Function SlingStoneProjectile.SlingStoneProjectile_C.ReceiveImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function SlingStoneProjectile.SlingStoneProjectile_C.BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveMovementComponentDestroyed(); // Function SlingStoneProjectile.SlingStoneProjectile_C.ReceiveMovementComponentDestroyed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SlingStoneProjectile(int32_t EntryPoint); // Function SlingStoneProjectile.SlingStoneProjectile_C.ExecuteUbergraph_SlingStoneProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

