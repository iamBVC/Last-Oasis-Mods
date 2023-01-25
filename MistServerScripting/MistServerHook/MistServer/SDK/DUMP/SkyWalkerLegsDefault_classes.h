// BlueprintGeneratedClass SkyWalkerLegsDefault.SkyWalkerLegsDefault_C
// Size: 0x780 (Inherited: 0x6d0)
struct ASkyWalkerLegsDefault_C : AMistSkyWalkerLeg {
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
	struct TSet<struct UParticleSystemComponent*> Particles; // 0x730(0x50)

	void UpdateMaterialsBasedOnLandscapeLayer(float DeltaTime, struct UVirtualLandscapeLayer* LandscapeLayer); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.UpdateMaterialsBasedOnLandscapeLayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateEmmitersByLandscapeLayer(struct UParticleSystemComponent* Emmiter, struct UVirtualLandscapeLayer* LandscapeLayer); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.UpdateEmmitersByLandscapeLayer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReduceBurnHeatIfPossible(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.ReduceBurnHeatIfPossible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void LavaDamage(float Damage, struct FHitResult& Hit); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.LavaDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateMaterialsBurn(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.UpdateMaterialsBurn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateMaterialsSandiness(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.UpdateMaterialsSandiness // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetUpDynamicMaterials(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.SetUpDynamicMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void TraceToGround(struct FVector StartLocation, struct FVector& Location, struct FRotator& Rotation, bool& bTraceValid); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.TraceToGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void MulticastPlayDamageSounds(float Damage, struct UDamageType* DamageType, struct FHitResult Hit); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.MulticastPlayDamageSounds // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource, struct FHitResult& HitInfo); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_1_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__NettableComponent_K2Node_ComponentBoundEvent_4_OnNetRemoved__DelegateSignature(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.BndEvt__NettableComponent_K2Node_ComponentBoundEvent_4_OnNetRemoved__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void MulticastOnNetRemoved(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.MulticastOnNetRemoved // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__NettableComponent_K2Node_ComponentBoundEvent_0_OnNetAttached__DelegateSignature(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.BndEvt__NettableComponent_K2Node_ComponentBoundEvent_0_OnNetAttached__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveDetachedPart(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.ReceiveDetachedPart // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveUpdateVFX(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.ReceiveUpdateVFX // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void UpdateMaterialsByGround(); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.UpdateMaterialsByGround // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void PointDamageFX(float Damage, struct UDamageType* DamageType, struct FHitResult HitInfo); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.PointDamageFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEnableEmittersByLandscapeLayer(struct UParticleSystemComponent* ParticleSystem, struct UVirtualLandscapeLayer* LandscapeLayer); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.ReceiveEnableEmittersByLandscapeLayer // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SkyWalkerLegsDefault(int32_t EntryPoint); // Function SkyWalkerLegsDefault.SkyWalkerLegsDefault_C.ExecuteUbergraph_SkyWalkerLegsDefault // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

