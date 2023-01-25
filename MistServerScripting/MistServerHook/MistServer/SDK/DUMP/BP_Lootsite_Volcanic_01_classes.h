// BlueprintGeneratedClass BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C
// Size: 0x6f1 (Inherited: 0x4c0)
struct ABP_Lootsite_Volcanic_01_C : ABaseLootSite_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UStaticMeshComponent* SM_Lootsite_Volcanic_01_Normal_WoodCollisions; // 0x4c8(0x08)
	struct UStaticMeshComponent* SM_Lootsite_Volcanic_01_Replacement; // 0x4d0(0x08)
	struct UHideComponent_C* HideComponent; // 0x4d8(0x08)
	struct ULootableAttackableUrnComponent_C* LootableAttackableUrnComponent; // 0x4e0(0x08)
	struct ULootableSkeletonComponent_C* LootableSkeletonComponent; // 0x4e8(0x08)
	struct UStaticMeshComponent* SM_Lootsite_Volcanic_01_Broken; // 0x4f0(0x08)
	struct USceneComponent* Burnt_Rock_09; // 0x4f8(0x08)
	struct USceneComponent* Burnt_Rock_08; // 0x500(0x08)
	struct USceneComponent* Burnt_Rock_07; // 0x508(0x08)
	struct USceneComponent* Burnt_Rock_06; // 0x510(0x08)
	struct USceneComponent* Burnt_Rock_05; // 0x518(0x08)
	struct USceneComponent* Burnt_Rock_010; // 0x520(0x08)
	struct USceneComponent* Burnt_Rock_03; // 0x528(0x08)
	struct USceneComponent* Burnt_Rock_02; // 0x530(0x08)
	struct USceneComponent* Burnt_Rock_01; // 0x538(0x08)
	struct USceneComponent* Burnt; // 0x540(0x08)
	struct UStaticMeshComponent* SM_DryRockHand_03_Addjusted; // 0x548(0x08)
	struct UStaticMeshComponent* SM_DryRockHand_06_Addjusted; // 0x550(0x08)
	struct UStaticMeshComponent* SM_DryRockHand_07_Addjusted; // 0x558(0x08)
	struct UStaticMeshComponent* SM_DryRockHand_04_Addjusted; // 0x560(0x08)
	struct UStaticMeshComponent* SM_DryRockHand_05_Addjusted; // 0x568(0x08)
	struct UStaticMeshComponent* SM_DryRockHand_010_Addjusted; // 0x570(0x08)
	struct UStaticMeshComponent* SM_DryRockHand_08_Addjusted; // 0x578(0x08)
	struct UStaticMeshComponent* SM_DryRockHand_012_Addjusted; // 0x580(0x08)
	struct UStaticMeshComponent* SM_DryRockHand_09_Addjusted; // 0x588(0x08)
	struct UStaticMeshComponent* SM_Lootsite_Volcanic_01_Normal; // 0x590(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_05_01_Addjusted; // 0x598(0x08)
	struct USceneComponent* Bush_03; // 0x5a0(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_05_02_Addjusted; // 0x5a8(0x08)
	struct USceneComponent* Bush_02; // 0x5b0(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_05_03_Addjusted; // 0x5b8(0x08)
	struct USceneComponent* Bush_01; // 0x5c0(0x08)
	struct UStaticMeshComponent* SM_FOL_Grass_Clump_03_01_Addjusted; // 0x5c8(0x08)
	struct USceneComponent* Grass_05; // 0x5d0(0x08)
	struct UStaticMeshComponent* SM_FOL_Grass_Clump_03_02_Addjusted; // 0x5d8(0x08)
	struct USceneComponent* Grass_04; // 0x5e0(0x08)
	struct UStaticMeshComponent* SM_FOL_Grass_Clump_03_03_Addjusted; // 0x5e8(0x08)
	struct USceneComponent* Grass_03; // 0x5f0(0x08)
	struct UStaticMeshComponent* SM_FOL_Grass_Clump_03_04_Addjusted; // 0x5f8(0x08)
	struct USceneComponent* Grass_02; // 0x600(0x08)
	struct UStaticMeshComponent* SM_FOL_FieldBush_05_06_Addjusted; // 0x608(0x08)
	struct USceneComponent* Grass_01; // 0x610(0x08)
	struct UMistWorldObjectAdjustmentsComponent* MistWorldObjectAdjustments; // 0x618(0x08)
	struct USceneComponent* Scene1; // 0x620(0x08)
	float BurnTimeline_AppearDestroyed_BE97B626488BB65616FEBF91BD4EA3F2; // 0x628(0x04)
	float BurnTimeline_DissolveRocks_BE97B626488BB65616FEBF91BD4EA3F2; // 0x62c(0x04)
	float BurnTimeline_Dissolve_BE97B626488BB65616FEBF91BD4EA3F2; // 0x630(0x04)
	float BurnTimeline_Burn_BE97B626488BB65616FEBF91BD4EA3F2; // 0x634(0x04)
	enum class ETimelineDirection BurnTimeline__Direction_BE97B626488BB65616FEBF91BD4EA3F2; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
	struct UTimelineComponent* BurnTimeline; // 0x640(0x08)
	struct UMaterialInstanceDynamic* BurningWoodDMI; // 0x648(0x08)
	struct UMaterialInstanceDynamic* BurningClothDMI; // 0x650(0x08)
	struct UMaterialInstanceDynamic* BurningBushDMI; // 0x658(0x08)
	struct UMaterialInstanceDynamic* BurningGrassDMI; // 0x660(0x08)
	struct UMaterialInstanceDynamic* BurningRock1DMI; // 0x668(0x08)
	struct UMaterialInstanceDynamic* BurningRock2DMI; // 0x670(0x08)
	struct UMaterialInstanceDynamic* BurningRock3DMI; // 0x678(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> BrokenDMIs; // 0x680(0x10)
	struct TMap<struct UMaterialInterface*, struct UMaterialInterface*> BrokenMaterialsReplace; // 0x690(0x50)
	bool bBurning; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)
	struct UAudioComponent* LootsiteBurning; // 0x6e8(0x08)
	bool bBurned; // 0x6f0(0x01)

	void OnRep_bBurned(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.OnRep_bBurned // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetupBurnedState(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.SetupBurnedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DisableDynamicMaterials(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.DisableDynamicMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MakeDynamicMaterials(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.MakeDynamicMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UserConstructionScript(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BurnTimeline__FinishedFunc(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.BurnTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void BurnTimeline__UpdateFunc(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.BurnTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void BurnTimeline__CollapseStarted__EventFunc(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.BurnTimeline__CollapseStarted__EventFunc // (BlueprintEvent) // @ game+0x163f1c0
	void BurnTimeline__UnhideDestroyed__EventFunc(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.BurnTimeline__UnhideDestroyed__EventFunc // (BlueprintEvent) // @ game+0x163f1c0
	void StartBurning(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.StartBurning // (Net|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void HideBurnedMeshes(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.HideBurnedMeshes // (Net|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void DestroyReceivedBlueprint(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.DestroyReceivedBlueprint // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BP_Lootsite_Volcanic_01(int32_t EntryPoint); // Function BP_Lootsite_Volcanic_01.BP_Lootsite_Volcanic_01_C.ExecuteUbergraph_BP_Lootsite_Volcanic_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

