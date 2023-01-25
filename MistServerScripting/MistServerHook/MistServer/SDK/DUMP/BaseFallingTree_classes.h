// BlueprintGeneratedClass BaseFallingTree.BaseFallingTree_C
// Size: 0x7d8 (Inherited: 0x680)
struct ABaseFallingTree_C : AMistFallingTree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	float StartFallTimeline_Hit_74BED4544F2193A8B5CFF0B825B65AAC; // 0x688(0x04)
	enum class ETimelineDirection StartFallTimeline__Direction_74BED4544F2193A8B5CFF0B825B65AAC; // 0x68c(0x01)
	char pad_68D[0x3]; // 0x68d(0x03)
	struct UTimelineComponent* StartFallTimeline; // 0x690(0x08)
	float Current Damage; // 0x698(0x04)
	int32_t Current Outputs; // 0x69c(0x04)
	int32_t New Outputs; // 0x6a0(0x04)
	float Max Health; // 0x6a4(0x04)
	struct UParticleSystem* Particle System; // 0x6a8(0x08)
	struct USoundBase* Sound; // 0x6b0(0x08)
	int32_t Experience Amount; // 0x6b8(0x04)
	int32_t Max Outputs; // 0x6bc(0x04)
	struct FMistLootDesc Loot; // 0x6c0(0x30)
	struct FTransform PreFallTransform; // 0x6f0(0x30)
	float LaggedRandomScale; // 0x720(0x04)
	struct FVector LaggedRandomLocation; // 0x724(0x0c)
	bool bPreFallPush; // 0x730(0x01)
	char pad_731[0x7]; // 0x731(0x07)
	struct TMap<struct UStaticMesh*, struct UParticleSystem*> StaticMeshToDestroyParticle; // 0x738(0x50)
	struct TMap<struct UMaterialInterface*, struct UParticleSystem*> MatertialsToDestroyParticle; // 0x788(0x50)

	void UpdateDestroyParticleFromMap(); // Function BaseFallingTree.BaseFallingTree_C.UpdateDestroyParticleFromMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Modify Damage(float Damage, struct AActor* Damage Causer, struct UDamageType* Damage Type, float& Modified Damage); // Function BaseFallingTree.BaseFallingTree_C.Modify Damage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Handle Damage(struct FVector Location, float Damage, struct AActor* Damage Causer, struct UDamageType* Damage Type); // Function BaseFallingTree.BaseFallingTree_C.Handle Damage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UserConstructionScript(); // Function BaseFallingTree.BaseFallingTree_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StartFallTimeline__FinishedFunc(); // Function BaseFallingTree.BaseFallingTree_C.StartFallTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void StartFallTimeline__UpdateFunc(); // Function BaseFallingTree.BaseFallingTree_C.StartFallTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveRadialDamage(float Damage, struct UDamageType* DamageType, struct FVector Origin, struct FDamageSource& DamageSource, struct TArray<struct FHitResult>& HitInfos); // Function BaseFallingTree.BaseFallingTree_C.ReceiveRadialDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastPlayEffects(struct FVector Location); // Function BaseFallingTree.BaseFallingTree_C.MulticastPlayEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginFall(); // Function BaseFallingTree.BaseFallingTree_C.ReceiveBeginFall // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function BaseFallingTree.BaseFallingTree_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource, struct FHitResult& HitInfo); // Function BaseFallingTree.BaseFallingTree_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BaseFallingTree(int32_t EntryPoint); // Function BaseFallingTree.BaseFallingTree_C.ExecuteUbergraph_BaseFallingTree // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

