// BlueprintGeneratedClass MeleeCombatComponent.MeleeCombatComponent_C
// Size: 0xa2c (Inherited: 0x9d0)
struct UMeleeCombatComponent_C : UMistMeleeCombatComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d0(0x08)
	int32_t HitDamageTier; // 0x9d8(0x04)
	float Decal LifeTime; // 0x9dc(0x04)
	struct UMeshComponent* CurrentWeaponMesh; // 0x9e0(0x08)
	struct UParticleSystemComponent* TrailParticleSystem; // 0x9e8(0x08)
	bool bAttackingInProgress; // 0x9f0(0x01)
	char pad_9F1[0x7]; // 0x9f1(0x07)
	struct TArray<struct UMaterialInstanceDynamic*> WeaponDMIs; // 0x9f8(0x10)
	struct UCurveFloat* ChargeUpColor; // 0xa08(0x08)
	enum class ECombatAction CurrentCombatAction; // 0xa10(0x01)
	char pad_A11[0x3]; // 0xa11(0x03)
	float BlinkDuration; // 0xa14(0x04)
	struct UParticleSystemComponent* SecondaryTrailParticleSystem; // 0xa18(0x08)
	bool bAllowParticleTrails; // 0xa20(0x01)
	char pad_A21[0x3]; // 0xa21(0x03)
	float BlinkStartGameTime; // 0xa24(0x04)
	float MaxFXCalculateDistance; // 0xa28(0x04)

	void SetTrailParticlesSpawnRate(float SpawnRate); // Function MeleeCombatComponent.MeleeCombatComponent_C.SetTrailParticlesSpawnRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StopWeaponCharging(); // Function MeleeCombatComponent.MeleeCombatComponent_C.StopWeaponCharging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StartWeaponCharging(); // Function MeleeCombatComponent.MeleeCombatComponent_C.StartWeaponCharging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetWeaponChargeMaterialBlink(float Blink); // Function MeleeCombatComponent.MeleeCombatComponent_C.SetWeaponChargeMaterialBlink // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateCurrentWeaponMesh(); // Function MeleeCombatComponent.MeleeCombatComponent_C.UpdateCurrentWeaponMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	bool IsAttacking(); // Function MeleeCombatComponent.MeleeCombatComponent_C.IsAttacking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void SpawnNewTrailParticle(); // Function MeleeCombatComponent.MeleeCombatComponent_C.SpawnNewTrailParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetSyncComponent(struct UMistSyncMusicControlComponent*& SyncControlComponent); // Function MeleeCombatComponent.MeleeCombatComponent_C.GetSyncComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x163f1c0
	void ProceedBlock(struct AMistCharacter* Causer, struct UMistSyncMusicControlComponent* SyncComponent, struct AMistCharacter* HitActor); // Function MeleeCombatComponent.MeleeCombatComponent_C.ProceedBlock // (Private|BlueprintCallable|BlueprintEvent|Const) // @ game+0x163f1c0
	void HeavyAttackCameraShake(struct AMistCharacter* MistCharacter, float Damage, struct FVector ImpactNormal, enum class ECombatAction CombatAction); // Function MeleeCombatComponent.MeleeCombatComponent_C.HeavyAttackCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnBloodParticle(struct FTransform Transform, struct FName BoneName, struct UPrimitiveComponent* Component, float Damage); // Function MeleeCombatComponent.MeleeCombatComponent_C.SpawnBloodParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioHitDamageSet(float Damage, float Treshold1, float Treshold2, float Treshold3, float Percentage, float PercentageTreshold1, float PercentageTreshold2, int32_t& HitDamageTier); // Function MeleeCombatComponent.MeleeCombatComponent_C.AudioHitDamageSet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioMeleeHit(struct FVector ImpactLocation, float Damage, float Sweetspot, struct USoundCue* SoundCue, float Treshold1, float Treshold2, float Treshold3, struct AActor* SourceActor); // Function MeleeCombatComponent.MeleeCombatComponent_C.AudioMeleeHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnMeleeHit(struct FMeleeHitInfo HitInfo); // Function MeleeCombatComponent.MeleeCombatComponent_C.OnMeleeHit // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function MeleeCombatComponent.MeleeCombatComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void MulticastLandedHit(float Damage, float Time sweetspot, struct FVector Impact Location, enum class EPhysicalSurface WeaponSurfaceType, enum class EPhysicalSurface TargetSurfaceType, struct AActor* HitActor, struct AActor* SourceActor); // Function MeleeCombatComponent.MeleeCombatComponent_C.MulticastLandedHit // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastHitObject(struct FVector ImpactLocation, struct FVector ImpactNormal, enum class EPhysicalSurface WeaponSurfaceType, enum class EPhysicalSurface TargetSurfaceType, bool WasHitBlocked, struct AMistCharacter* CharacterSource, struct AMistCharacter* HitActor, struct UPrimitiveComponent* HitComponent, bool bIsChambered); // Function MeleeCombatComponent.MeleeCombatComponent_C.MulticastHitObject // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnMeleehitReceived(struct FMeleeHitInfo HitInfo); // Function MeleeCombatComponent.MeleeCombatComponent_C.OnMeleehitReceived // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastLandedHitReceived(float Damage, struct FVector Location, struct FVector Normal, struct FName Bone, enum class ECombatAction AttackersAction, bool WasBlocked, struct AMistCharacter* SourceCharacter, struct AMistCharacter* HitActor); // Function MeleeCombatComponent.MeleeCombatComponent_C.MulticastLandedHitReceived // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function MeleeCombatComponent.MeleeCombatComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void StartAttacking(); // Function MeleeCombatComponent.MeleeCombatComponent_C.StartAttacking // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StopAttacking(); // Function MeleeCombatComponent.MeleeCombatComponent_C.StopAttacking // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnCombatActionChangedEvent(enum class ECombatAction PrevAction, enum class ECombatAction NewAction); // Function MeleeCombatComponent.MeleeCombatComponent_C.OnCombatActionChangedEvent // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MeleeCombatComponent(int32_t EntryPoint); // Function MeleeCombatComponent.MeleeCombatComponent_C.ExecuteUbergraph_MeleeCombatComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

