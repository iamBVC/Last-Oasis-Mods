// BlueprintGeneratedClass NC_Lootsite_01.NC_Lootsite_01_C
// Size: 0x578 (Inherited: 0x4c0)
struct ANC_Lootsite_01_C : ABaseLootSite_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UStaticMeshComponent* SM_NC_Lootsite_01_Part_01_PROXY; // 0x4c8(0x08)
	struct UStaticMeshComponent* NC_Lootsite_01_Part_01; // 0x4d0(0x08)
	struct ULootableBackpackComponent_C* LootableBagComponent_01; // 0x4d8(0x08)
	struct UStaticMeshComponent* NC_Lootsite_01_Part_02_PROXY; // 0x4e0(0x08)
	struct UHideComponent_C* HideComponent1; // 0x4e8(0x08)
	struct UHideComponent_C* HideComponent; // 0x4f0(0x08)
	struct UStaticMeshComponent* NC_Lootsite_01_Part_02; // 0x4f8(0x08)
	struct UStaticMeshComponent* SM_LootModular_07; // 0x500(0x08)
	struct USceneComponent* Scene2; // 0x508(0x08)
	struct UStaticMeshComponent* SM_LootModular_06; // 0x510(0x08)
	struct USceneComponent* Scene1; // 0x518(0x08)
	struct UAudioComponent* Audio6; // 0x520(0x08)
	struct UAudioComponent* Audio5; // 0x528(0x08)
	struct UAudioComponent* Audio4; // 0x530(0x08)
	struct UAudioComponent* Audio3; // 0x538(0x08)
	struct UAudioComponent* Audio2; // 0x540(0x08)
	struct UAudioComponent* Audio1; // 0x548(0x08)
	struct UAudioComponent* Audio0; // 0x550(0x08)
	struct ULootableBreakableWoodenBoxComponent_C* LootableBreakableOldChestComponent_01; // 0x558(0x08)
	struct ULootableBrokenBarrelComponent_C* LootablePackageComponent; // 0x560(0x08)
	struct USceneComponent* Scene; // 0x568(0x08)
	struct UMistWorldObjectAdjustmentsComponent* MistWorldObjectAdjustments; // 0x570(0x08)

	void UserConstructionScript(); // Function NC_Lootsite_01.NC_Lootsite_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function NC_Lootsite_01.NC_Lootsite_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void AudioCreakTrigger(); // Function NC_Lootsite_01.NC_Lootsite_01_C.AudioCreakTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_NC_Lootsite_01(int32_t EntryPoint); // Function NC_Lootsite_01.NC_Lootsite_01_C.ExecuteUbergraph_NC_Lootsite_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

