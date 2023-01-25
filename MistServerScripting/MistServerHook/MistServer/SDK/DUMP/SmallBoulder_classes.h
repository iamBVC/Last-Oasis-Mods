// BlueprintGeneratedClass SmallBoulder.SmallBoulder_C
// Size: 0x551 (Inherited: 0x518)
struct ASmallBoulder_C : AMistBoulderProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct USphereComponent* FlyByCollision; // 0x520(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x528(0x08)
	bool ShotFired; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct UAudioComponent* ProjectileFlyBy; // 0x538(0x08)
	int32_t HitType; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
	struct UAudioComponent* FlyAway; // 0x548(0x08)
	bool FlyByActive; // 0x550(0x01)

	void ReceiveImpact(struct FHitResult& HitResult, struct FVector& Velocity, struct UPhysicalMaterial* PhysMaterial); // Function SmallBoulder.SmallBoulder_C.ReceiveImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function SmallBoulder.SmallBoulder_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function SmallBoulder.SmallBoulder_C.BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveMovementComponentDestroyed(); // Function SmallBoulder.SmallBoulder_C.ReceiveMovementComponentDestroyed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SmallBoulder(int32_t EntryPoint); // Function SmallBoulder.SmallBoulder_C.ExecuteUbergraph_SmallBoulder // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

