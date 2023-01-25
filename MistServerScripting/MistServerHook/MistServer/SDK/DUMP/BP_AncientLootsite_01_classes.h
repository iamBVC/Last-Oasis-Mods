// BlueprintGeneratedClass BP_AncientLootsite_01.BP_AncientLootsite_01_C
// Size: 0x65d (Inherited: 0x4c0)
struct ABP_AncientLootsite_01_C : ABaseLootSite_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UMistInteractableComponent* MistInteractable; // 0x4c8(0x08)
	struct USceneComponent* SoundAttach; // 0x4d0(0x08)
	struct ULootableRubblePileComponent_C* LootableRubblePileComponent; // 0x4d8(0x08)
	struct UStaticMeshSimulationComponent* StaticMeshSimulation; // 0x4e0(0x08)
	struct UStaticMeshComponent* SM_AncientLootsite_01_PROXY; // 0x4e8(0x08)
	struct UHideComponent_C* HideComponent; // 0x4f0(0x08)
	struct UCapsuleComponent* Capsule; // 0x4f8(0x08)
	struct UNiagaraComponent* NiagaraFallingDust; // 0x500(0x08)
	struct UStaticMeshComponent* SM_AncientLootsite_01_FanBroken; // 0x508(0x08)
	struct UStaticMeshComponent* SM_AncientLootsite_01_FanBrokenWood; // 0x510(0x08)
	struct UMistHarvestableMeshComponent* MistHarvestableMesh6; // 0x518(0x08)
	struct UMistWorldObjectAdjustmentsComponent* MistWorldObjectAdjustments; // 0x520(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_015; // 0x528(0x08)
	struct UMistHarvestableMeshComponent* MistHarvestableMesh5; // 0x530(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_014; // 0x538(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_08; // 0x540(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_04; // 0x548(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_03; // 0x550(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_02; // 0x558(0x08)
	struct UMistHarvestableMeshComponent* MistHarvestableMesh3; // 0x560(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_05; // 0x568(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_013; // 0x570(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_012; // 0x578(0x08)
	struct UMistHarvestableMeshComponent* MistHarvestableMesh2; // 0x580(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_07; // 0x588(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_011; // 0x590(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_010; // 0x598(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_09; // 0x5a0(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_06; // 0x5a8(0x08)
	struct UMistHarvestableMeshComponent* MistHarvestableMesh4; // 0x5b0(0x08)
	struct UStaticMeshComponent* SM_AncientLootsite_01_Fan; // 0x5b8(0x08)
	struct UStaticMeshComponent* SM_AncientLootsite_01_Screw; // 0x5c0(0x08)
	struct UStaticMeshComponent* SM_AncientLootsite_01_Base; // 0x5c8(0x08)
	struct USceneComponent* Scene; // 0x5d0(0x08)
	char pad_5D8[0x8]; // 0x5d8(0x08)
	struct FTransform DefaultRelativeTransform; // 0x5e0(0x30)
	bool bOpen; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	float OpenProgress; // 0x614(0x04)
	float TargetOpenSpeed; // 0x618(0x04)
	float OpenSpeedSlowdownRate; // 0x61c(0x04)
	float MaxOpenSpeed; // 0x620(0x04)
	char pad_624[0x4]; // 0x624(0x04)
	struct UCurveFloat* OpenVelocityToSpeedRate; // 0x628(0x08)
	float DisableCollisionTreshold; // 0x630(0x04)
	char pad_634[0x4]; // 0x634(0x04)
	struct FTimerHandle UpdateOpenProgressTimer; // 0x638(0x08)
	float UpdateDeltaTime; // 0x640(0x04)
	char pad_644[0x4]; // 0x644(0x04)
	struct UAudioComponent* ScrewSound; // 0x648(0x08)
	struct UStaticMesh* RepairedMeshTemplate; // 0x650(0x08)
	float DamageToRepair; // 0x658(0x04)
	bool bRepaired; // 0x65c(0x01)

	void ProcessBattleFanVelocity(struct FVector Velocity); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.ProcessBattleFanVelocity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ProcessRepairDamage(float Damage); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.ProcessRepairDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_DamageToRepair(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.OnRep_DamageToRepair // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ProcessTensionDamage(float Damage); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.ProcessTensionDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	bool CanStartUpdating(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.CanStartUpdating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void DisableCollision(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.DisableCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	bool CanDisableCollision(float RotationProgress); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.CanDisableCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void SetRotationAndLocationAtProgress(float Progress); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.SetRotationAndLocationAtProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_OpenSpeed(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.OnRep_OpenSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	struct FRotator CalculateRotation(float Progress); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.CalculateRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void UserConstructionScript(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBattleFanMove(struct FVector& Velocity); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.ReceiveBattleFanMove // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void UpdateOpenProgress(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.UpdateOpenProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateOpenProgressClient(float Progress); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.UpdateOpenProgressClient // (Net|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void StartUpdating(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.StartUpdating // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteOnAllDisableCollision(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.ExecuteOnAllDisableCollision // (Net|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ActivateParticlesClient(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.ActivateParticlesClient // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetParticleSpawnRateClient(float SpawnRate); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.SetParticleSpawnRateClient // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetUpRepaired(); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.SetUpRepaired // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BP_AncientLootsite_01(int32_t EntryPoint); // Function BP_AncientLootsite_01.BP_AncientLootsite_01_C.ExecuteUbergraph_BP_AncientLootsite_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

