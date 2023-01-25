// BlueprintGeneratedClass StoneAutoTurret.StoneAutoTurret_C
// Size: 0x579 (Inherited: 0x550)
struct AStoneAutoTurret_C : AMistSemiHomingProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct USphereComponent* FlyByCollision; // 0x558(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x560(0x08)
	bool ShotFired; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct UAudioComponent* ProjectileFlyBy; // 0x570(0x08)
	bool FlyByActive; // 0x578(0x01)

	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function StoneAutoTurret.StoneAutoTurret_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveImpact(struct FHitResult& HitResult, struct FVector& Velocity, struct UPhysicalMaterial* PhysMaterial); // Function StoneAutoTurret.StoneAutoTurret_C.ReceiveImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function StoneAutoTurret.StoneAutoTurret_C.BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveMovementComponentDestroyed(); // Function StoneAutoTurret.StoneAutoTurret_C.ReceiveMovementComponentDestroyed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_StoneAutoTurret(int32_t EntryPoint); // Function StoneAutoTurret.StoneAutoTurret_C.ExecuteUbergraph_StoneAutoTurret // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

