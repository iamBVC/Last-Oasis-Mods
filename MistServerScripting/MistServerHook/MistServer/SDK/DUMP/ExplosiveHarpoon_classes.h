// BlueprintGeneratedClass ExplosiveHarpoon.ExplosiveHarpoon_C
// Size: 0x558 (Inherited: 0x530)
struct AExplosiveHarpoon_C : AMistExplosiveProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USphereComponent* FlyByCollision; // 0x538(0x08)
	struct UParticleSystemComponent* TrailParticleSystem; // 0x540(0x08)
	bool ShotFired_1; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct UAudioComponent* ProjectileFlyBy_1; // 0x550(0x08)

	void ReceiveImpact(struct FHitResult& HitResult, struct FVector& Velocity, struct UPhysicalMaterial* PhysMaterial); // Function ExplosiveHarpoon.ExplosiveHarpoon_C.ReceiveImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ImpactEffects(struct FVector Location); // Function ExplosiveHarpoon.ExplosiveHarpoon_C.ImpactEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnExplode(struct FVector ImpactLocation); // Function ExplosiveHarpoon.ExplosiveHarpoon_C.OnExplode // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_ExplosiveHarpoon(int32_t EntryPoint); // Function ExplosiveHarpoon.ExplosiveHarpoon_C.ExecuteUbergraph_ExplosiveHarpoon // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

