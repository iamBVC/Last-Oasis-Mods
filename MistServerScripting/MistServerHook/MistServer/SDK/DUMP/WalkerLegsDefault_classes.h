// BlueprintGeneratedClass WalkerLegsDefault.WalkerLegsDefault_C
// Size: 0x730 (Inherited: 0x6d0)
struct AWalkerLegsDefault_C : AMistWalkerLeg {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	struct UFXManagerComponent_C* FXManagerComponent; // 0x6d8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x6e0(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x6e8(0x08)
	bool LegsDestroyed; // 0x6f0(0x01)
	char pad_6F1[0x7]; // 0x6f1(0x07)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x6f8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DMIs; // 0x700(0x10)
	float Sandiness; // 0x710(0x04)
	float Burn; // 0x714(0x04)
	float BurnHeat; // 0x718(0x04)
	float HealthAtBurningStart; // 0x71c(0x04)
	bool bBurning; // 0x720(0x01)
	char pad_721[0x7]; // 0x721(0x07)
	struct UVirtualLandscapeLayer* LandscapeLayerWalkedOn; // 0x728(0x08)

	void UpdateMaterialsBasedOnLandscapeLayer(float DeltaTime, struct UVirtualLandscapeLayer* LandscapeLayer); // Function WalkerLegsDefault.WalkerLegsDefault_C.UpdateMaterialsBasedOnLandscapeLayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateEmmitersByLandscapeLayer(struct UParticleSystemComponent* Emmiter, struct UVirtualLandscapeLayer* LandscapeLayer); // Function WalkerLegsDefault.WalkerLegsDefault_C.UpdateEmmitersByLandscapeLayer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReduceBurnHeatIfPossible(); // Function WalkerLegsDefault.WalkerLegsDefault_C.ReduceBurnHeatIfPossible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void LavaDamage(float Damage, struct FHitResult& Hit); // Function WalkerLegsDefault.WalkerLegsDefault_C.LavaDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateMaterialsBurn(); // Function WalkerLegsDefault.WalkerLegsDefault_C.UpdateMaterialsBurn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateMaterialsSandiness(); // Function WalkerLegsDefault.WalkerLegsDefault_C.UpdateMaterialsSandiness // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetUpDynamicMaterials(); // Function WalkerLegsDefault.WalkerLegsDefault_C.SetUpDynamicMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void TraceToGround(struct FVector StartLocation, struct FVector& Location, struct FRotator& Rotation, bool& bTraceValid); // Function WalkerLegsDefault.WalkerLegsDefault_C.TraceToGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void MulticastPlayDamageSounds(float Damage, struct UDamageType* DamageType, struct FHitResult Hit); // Function WalkerLegsDefault.WalkerLegsDefault_C.MulticastPlayDamageSounds // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource, struct FHitResult& HitInfo); // Function WalkerLegsDefault.WalkerLegsDefault_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function WalkerLegsDefault.WalkerLegsDefault_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__NettableComponent_K2Node_ComponentBoundEvent_4_OnNetRemoved__DelegateSignature(); // Function WalkerLegsDefault.WalkerLegsDefault_C.BndEvt__NettableComponent_K2Node_ComponentBoundEvent_4_OnNetRemoved__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void MulticastOnNetRemoved(); // Function WalkerLegsDefault.WalkerLegsDefault_C.MulticastOnNetRemoved // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__NettableComponent_K2Node_ComponentBoundEvent_0_OnNetAttached__DelegateSignature(); // Function WalkerLegsDefault.WalkerLegsDefault_C.BndEvt__NettableComponent_K2Node_ComponentBoundEvent_0_OnNetAttached__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveDetachedPart(); // Function WalkerLegsDefault.WalkerLegsDefault_C.ReceiveDetachedPart // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function WalkerLegsDefault.WalkerLegsDefault_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveUpdateVFX(); // Function WalkerLegsDefault.WalkerLegsDefault_C.ReceiveUpdateVFX // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void UpdateMaterialsByGround(); // Function WalkerLegsDefault.WalkerLegsDefault_C.UpdateMaterialsByGround // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void PointDamageFX(float Damage, struct UDamageType* DamageType, struct FHitResult HitInfo); // Function WalkerLegsDefault.WalkerLegsDefault_C.PointDamageFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEnableEmittersByLandscapeLayer(struct UParticleSystemComponent* ParticleSystem, struct UVirtualLandscapeLayer* LandscapeLayer); // Function WalkerLegsDefault.WalkerLegsDefault_C.ReceiveEnableEmittersByLandscapeLayer // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_WalkerLegsDefault(int32_t EntryPoint); // Function WalkerLegsDefault.WalkerLegsDefault_C.ExecuteUbergraph_WalkerLegsDefault // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

