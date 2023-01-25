// BlueprintGeneratedClass ExplosiveRepeaterBolt.ExplosiveRepeaterBolt_C
// Size: 0x561 (Inherited: 0x530)
struct AExplosiveRepeaterBolt_C : AMistExplosiveProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USphereComponent* FlyByCollision; // 0x538(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x540(0x08)
	struct UCapsuleComponent* Capsule; // 0x548(0x08)
	struct UMistPropHealthComponent* MistPropHealth; // 0x550(0x08)
	struct UAudioComponent* ProjectileFlyBy; // 0x558(0x08)
	bool FlyByActive; // 0x560(0x01)

	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function ExplosiveRepeaterBolt.ExplosiveRepeaterBolt_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveImpact(struct FHitResult& HitResult, struct FVector& Velocity, struct UPhysicalMaterial* PhysMaterial); // Function ExplosiveRepeaterBolt.ExplosiveRepeaterBolt_C.ReceiveImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function ExplosiveRepeaterBolt.ExplosiveRepeaterBolt_C.BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void MulticastEventImpact(struct FHitResult HitResult, struct FVector Velocity, struct UPhysicalMaterial* PhysMaterial); // Function ExplosiveRepeaterBolt.ExplosiveRepeaterBolt_C.MulticastEventImpact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveMovementComponentDestroyed(); // Function ExplosiveRepeaterBolt.ExplosiveRepeaterBolt_C.ReceiveMovementComponentDestroyed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function ExplosiveRepeaterBolt.ExplosiveRepeaterBolt_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void OnExplode(struct FVector ImpactLocation); // Function ExplosiveRepeaterBolt.ExplosiveRepeaterBolt_C.OnExplode // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_ExplosiveRepeaterBolt(int32_t EntryPoint); // Function ExplosiveRepeaterBolt.ExplosiveRepeaterBolt_C.ExecuteUbergraph_ExplosiveRepeaterBolt // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

