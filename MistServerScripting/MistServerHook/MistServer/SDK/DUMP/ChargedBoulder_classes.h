// BlueprintGeneratedClass ChargedBoulder.ChargedBoulder_C
// Size: 0x559 (Inherited: 0x518)
struct AChargedBoulder_C : AMistBoulderProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UStaticMeshComponent* VisibleMesh; // 0x520(0x08)
	struct USphereComponent* FlyByCollision; // 0x528(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x530(0x08)
	bool ShotFired; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct UAudioComponent* ProjectileFlyBy; // 0x540(0x08)
	int32_t HitType; // 0x548(0x04)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct UAudioComponent* FlyAway; // 0x550(0x08)
	bool FlyByActive; // 0x558(0x01)

	void ReceiveImpact(struct FHitResult& HitResult, struct FVector& Velocity, struct UPhysicalMaterial* PhysMaterial); // Function ChargedBoulder.ChargedBoulder_C.ReceiveImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function ChargedBoulder.ChargedBoulder_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_2_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function ChargedBoulder.ChargedBoulder_C.BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_2_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveMovementComponentDestroyed(); // Function ChargedBoulder.ChargedBoulder_C.ReceiveMovementComponentDestroyed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function ChargedBoulder.ChargedBoulder_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_ChargedBoulder(int32_t EntryPoint); // Function ChargedBoulder.ChargedBoulder_C.ExecuteUbergraph_ChargedBoulder // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

