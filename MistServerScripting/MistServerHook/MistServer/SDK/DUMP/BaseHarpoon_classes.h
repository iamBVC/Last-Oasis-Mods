// BlueprintGeneratedClass BaseHarpoon.BaseHarpoon_C
// Size: 0x580 (Inherited: 0x540)
struct ABaseHarpoon_C : AMistHarpoonProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UMistPropHealthComponent* MistPropHealth; // 0x548(0x08)
	struct UParticleSystemComponent* TrailParticleSystem; // 0x550(0x08)
	struct UMistInteractableComponent* PullInteractable; // 0x558(0x08)
	struct UCapsuleComponent* PullInteractableCollision; // 0x560(0x08)
	struct USphereComponent* FlyByCollision; // 0x568(0x08)
	struct UAudioComponent* ProjectileFlyBy; // 0x570(0x08)
	bool FlyByActive; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float MainHitVolume; // 0x57c(0x04)

	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function BaseHarpoon.BaseHarpoon_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveImpact(struct FHitResult& HitResult, struct FVector& Velocity, struct UPhysicalMaterial* PhysMaterial); // Function BaseHarpoon.BaseHarpoon_C.ReceiveImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_1_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function BaseHarpoon.BaseHarpoon_C.BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_1_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void MulticastEventImpact(struct FHitResult HitResult, struct FVector Velocity, struct UPhysicalMaterial* PhysMaterial); // Function BaseHarpoon.BaseHarpoon_C.MulticastEventImpact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveMovementComponentDestroyed(); // Function BaseHarpoon.BaseHarpoon_C.ReceiveMovementComponentDestroyed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BaseHarpoon(int32_t EntryPoint); // Function BaseHarpoon.BaseHarpoon_C.ExecuteUbergraph_BaseHarpoon // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

