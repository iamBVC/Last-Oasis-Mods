// BlueprintGeneratedClass HealingBomb.HealingBomb_C
// Size: 0x531 (Inherited: 0x508)
struct AHealingBomb_C : AMistGasBomb {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct USphereComponent* FlyByCollision; // 0x510(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x518(0x08)
	struct UAudioComponent* ProjectileFlyBy; // 0x520(0x08)
	bool ShotFired; // 0x528(0x01)
	char pad_529[0x3]; // 0x529(0x03)
	int32_t HitType; // 0x52c(0x04)
	bool FlyByActive; // 0x530(0x01)

	void ReceiveImpact(struct FHitResult& HitResult, struct FVector& Velocity, struct UPhysicalMaterial* PhysMaterial); // Function HealingBomb.HealingBomb_C.ReceiveImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function HealingBomb.HealingBomb_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function HealingBomb.HealingBomb_C.BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveMovementComponentDestroyed(); // Function HealingBomb.HealingBomb_C.ReceiveMovementComponentDestroyed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_HealingBomb(int32_t EntryPoint); // Function HealingBomb.HealingBomb_C.ExecuteUbergraph_HealingBomb // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

