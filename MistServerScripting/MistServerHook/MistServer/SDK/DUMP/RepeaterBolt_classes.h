// BlueprintGeneratedClass RepeaterBolt.RepeaterBolt_C
// Size: 0x579 (Inherited: 0x540)
struct ARepeaterBolt_C : AMistHarpoonProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UMistInteractableComponent* PullInteractable; // 0x548(0x08)
	struct USphereComponent* FlyByCollision; // 0x550(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x558(0x08)
	struct UCapsuleComponent* Capsule; // 0x560(0x08)
	struct UMistPropHealthComponent* MistPropHealth; // 0x568(0x08)
	struct UAudioComponent* ProjectileFlyBy; // 0x570(0x08)
	bool FlyByActive; // 0x578(0x01)

	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function RepeaterBolt.RepeaterBolt_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveImpact(struct FHitResult& HitResult, struct FVector& Velocity, struct UPhysicalMaterial* PhysMaterial); // Function RepeaterBolt.RepeaterBolt_C.ReceiveImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function RepeaterBolt.RepeaterBolt_C.BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void MulticastEventImpact(struct FHitResult HitResult, struct FVector Velocity, struct UPhysicalMaterial* PhysMaterial); // Function RepeaterBolt.RepeaterBolt_C.MulticastEventImpact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveMovementComponentDestroyed(); // Function RepeaterBolt.RepeaterBolt_C.ReceiveMovementComponentDestroyed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_RepeaterBolt(int32_t EntryPoint); // Function RepeaterBolt.RepeaterBolt_C.ExecuteUbergraph_RepeaterBolt // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

