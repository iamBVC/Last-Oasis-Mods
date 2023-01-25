// BlueprintGeneratedClass BaseFallingBone.BaseFallingBone_C
// Size: 0x6e0 (Inherited: 0x680)
struct ABaseFallingBone_C : AMistFallingTree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	float Current Damage; // 0x688(0x04)
	int32_t Current Outputs; // 0x68c(0x04)
	int32_t New Outputs; // 0x690(0x04)
	float Max Health; // 0x694(0x04)
	struct UParticleSystem* Particle System; // 0x698(0x08)
	struct USoundBase* Sound; // 0x6a0(0x08)
	int32_t Experience Amount; // 0x6a8(0x04)
	int32_t Max Outputs; // 0x6ac(0x04)
	struct FMistLootDesc Loot; // 0x6b0(0x30)

	void Modify Damage(float Damage, struct UDamageType* Damage Type, struct AActor* Damage Causer, float& Modified Damage); // Function BaseFallingBone.BaseFallingBone_C.Modify Damage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Handle Damage(struct FVector Location, float Damage, struct AActor* Damage Causer, struct UDamageType* Damage Type); // Function BaseFallingBone.BaseFallingBone_C.Handle Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginFall(); // Function BaseFallingBone.BaseFallingBone_C.ReceiveBeginFall // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndFall(); // Function BaseFallingBone.BaseFallingBone_C.ReceiveEndFall // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource, struct FHitResult& HitInfo); // Function BaseFallingBone.BaseFallingBone_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastPlayEffects(struct FVector Location); // Function BaseFallingBone.BaseFallingBone_C.MulticastPlayEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveRadialDamage(float Damage, struct UDamageType* DamageType, struct FVector Origin, struct FDamageSource& DamageSource, struct TArray<struct FHitResult>& HitInfos); // Function BaseFallingBone.BaseFallingBone_C.ReceiveRadialDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function BaseFallingBone.BaseFallingBone_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BaseFallingBone(int32_t EntryPoint); // Function BaseFallingBone.BaseFallingBone_C.ExecuteUbergraph_BaseFallingBone // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

