// BlueprintGeneratedClass BaseWalkerWing.BaseWalkerWing_C
// Size: 0x8a0 (Inherited: 0x750)
struct ABaseWalkerWing_C : AMistWalkerWing {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x750(0x08)
	struct UStaticMeshComponent* VirtualCollisionTrigger; // 0x758(0x08)
	struct USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x760(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x768(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x770(0x08)
	struct USoundBase* WingMoveFirstSound; // 0x778(0x08)
	struct USoundBase* WingMoveSound; // 0x780(0x08)
	bool WingsDestroyed; // 0x788(0x01)
	char pad_789[0x7]; // 0x789(0x07)
	struct UAudioComponent* WingsDamagedFlaps; // 0x790(0x08)
	struct FSWingsVisuals WingsVisuals; // 0x798(0xa0)
	char pad_838[0x8]; // 0x838(0x08)
	struct FTransform WingsHideTransform; // 0x840(0x30)
	struct FTransform WingsHideFalloffDirection; // 0x870(0x30)

	void UserConstructionScript(); // Function BaseWalkerWing.BaseWalkerWing_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource, struct FHitResult& HitInfo); // Function BaseWalkerWing.BaseWalkerWing_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastPlayDamageSounds(float Damage, struct UDamageType* DamageType, struct FHitResult Hit); // Function BaseWalkerWing.BaseWalkerWing_C.MulticastPlayDamageSounds // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveDetachedPart(); // Function BaseWalkerWing.BaseWalkerWing_C.ReceiveDetachedPart // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function BaseWalkerWing.BaseWalkerWing_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BaseWalkerWing(int32_t EntryPoint); // Function BaseWalkerWing.BaseWalkerWing_C.ExecuteUbergraph_BaseWalkerWing // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

