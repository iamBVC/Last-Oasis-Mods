// BlueprintGeneratedClass SkyWalkerWing.SkyWalkerWing_C
// Size: 0x920 (Inherited: 0x760)
struct ASkyWalkerWing_C : AMistSkyWalkerWing {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x760(0x08)
	struct UStaticMeshComponent* VirtualCollisionTrigger; // 0x768(0x08)
	struct USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x770(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x778(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x780(0x08)
	struct USoundBase* WingMoveFirstSound; // 0x788(0x08)
	struct USoundBase* WingMoveSound; // 0x790(0x08)
	bool WingsDestroyed; // 0x798(0x01)
	char pad_799[0x7]; // 0x799(0x07)
	struct UAudioComponent* WingsDamagedFlaps; // 0x7a0(0x08)
	struct FSWingsVisuals WingsVisuals; // 0x7a8(0xa0)
	char pad_848[0x8]; // 0x848(0x08)
	struct FTransform WingsHideTransform; // 0x850(0x30)
	struct FTransform WingsHideFalloffDirection; // 0x880(0x30)
	struct UMistSkyWalkerWingAnimInstance* WingAnimInstance; // 0x8b0(0x08)
	float LaggedFlappingRate; // 0x8b8(0x04)
	float DistanceTraveled; // 0x8bc(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> DMIs; // 0x8c0(0x10)
	struct FVector LastWingTipLocation; // 0x8d0(0x0c)
	struct FName WingTipBoneName; // 0x8dc(0x08)
	struct FVector RelativeWingTipVelocity; // 0x8e4(0x0c)
	float BendLagged; // 0x8f0(0x04)
	struct FFloatSpringState BendSpringState; // 0x8f4(0x08)
	float BendSpringed; // 0x8fc(0x04)
	struct FDebugFloatHistory DebugSpeedFloat; // 0x900(0x20)

	void UpdateMaterial(float DeltaTime); // Function SkyWalkerWing.SkyWalkerWing_C.UpdateMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UserConstructionScript(); // Function SkyWalkerWing.SkyWalkerWing_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource, struct FHitResult& HitInfo); // Function SkyWalkerWing.SkyWalkerWing_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastPlayDamageSounds(float Damage, struct UDamageType* DamageType, struct FHitResult Hit); // Function SkyWalkerWing.SkyWalkerWing_C.MulticastPlayDamageSounds // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveDetachedPart(); // Function SkyWalkerWing.SkyWalkerWing_C.ReceiveDetachedPart // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function SkyWalkerWing.SkyWalkerWing_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function SkyWalkerWing.SkyWalkerWing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SkyWalkerWing(int32_t EntryPoint); // Function SkyWalkerWing.SkyWalkerWing_C.ExecuteUbergraph_SkyWalkerWing // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

