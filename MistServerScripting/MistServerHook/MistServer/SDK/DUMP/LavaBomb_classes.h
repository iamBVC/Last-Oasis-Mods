// BlueprintGeneratedClass LavaBomb.LavaBomb_C
// Size: 0x558 (Inherited: 0x508)
struct ALavaBomb_C : AMistFireBomb {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UFXManagerComponent_C* FXManagerComponent; // 0x510(0x08)
	struct USphereComponent* FlyByCollision; // 0x518(0x08)
	bool ShotFired; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	int32_t HitType; // 0x524(0x04)
	struct UAudioComponent* ProjectileFlyBy; // 0x528(0x08)
	bool FlyByActive; // 0x530(0x01)
	char pad_531[0x3]; // 0x531(0x03)
	struct FVector ParticleScale; // 0x534(0x0c)
	struct UParticleSystem* ExplosionTemplate; // 0x540(0x08)
	struct UParticleSystem* SmokeTemplate; // 0x548(0x08)
	struct AEmitter* SmokeEmitter; // 0x550(0x08)

	void AddEmitter(); // Function LavaBomb.LavaBomb_C.AddEmitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AddSmokeEmitterActor(struct USceneComponent* Parent, struct FName SocketName); // Function LavaBomb.LavaBomb_C.AddSmokeEmitterActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveImpact(struct FHitResult& HitResult, struct FVector& Velocity, struct UPhysicalMaterial* PhysMaterial); // Function LavaBomb.LavaBomb_C.ReceiveImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function LavaBomb.LavaBomb_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function LavaBomb.LavaBomb_C.BndEvt__FlyByCollision_K2Node_ComponentBoundEvent_0_ComponentTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveMovementComponentDestroyed(); // Function LavaBomb.LavaBomb_C.ReceiveMovementComponentDestroyed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function LavaBomb.LavaBomb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_LavaBomb(int32_t EntryPoint); // Function LavaBomb.LavaBomb_C.ExecuteUbergraph_LavaBomb // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

