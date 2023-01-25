// BlueprintGeneratedClass MiniHotSpot02.MiniHotSpot02_C
// Size: 0x568 (Inherited: 0x4c0)
struct AMiniHotSpot02_C : ABaseLootSite_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct ULootableBrokenBarrelComponent_C* LootablePackageComponent_01; // 0x4c8(0x08)
	struct UStaticMeshComponent* SM_LootModular_05; // 0x4d0(0x08)
	struct UStaticMeshComponent* SM_TradingStationFlagsCircle; // 0x4d8(0x08)
	struct UAudioComponent* Audio 4; // 0x4e0(0x08)
	struct UAudioComponent* Audio 3; // 0x4e8(0x08)
	struct UAudioComponent* Audio 2; // 0x4f0(0x08)
	struct UAudioComponent* Audio 1; // 0x4f8(0x08)
	struct UAudioComponent* Audio 0; // 0x500(0x08)
	struct ULootableRockHotspotComponent_C* LootableBreakableLargeCaseComponent_01; // 0x508(0x08)
	struct UStaticMeshComponent* SM_TradingStationFlagsDoor1; // 0x510(0x08)
	struct UStaticMeshComponent* SM_TradingStationFlagsWindow1; // 0x518(0x08)
	struct UStaticMeshComponent* SM_TradingStationWallFloor; // 0x520(0x08)
	struct UStaticMeshComponent* SM_TradingStationStairs_02; // 0x528(0x08)
	struct UStaticMeshComponent* SM_TradingStationWallUpPlanks2; // 0x530(0x08)
	struct UStaticMeshComponent* SM_TradingStationFlagsWindow2; // 0x538(0x08)
	struct UStaticMeshComponent* SM_TradingStationFlagsWindow; // 0x540(0x08)
	struct UStaticMeshComponent* SM_TradingStationWallUpPlanks_01; // 0x548(0x08)
	struct UStaticMeshComponent* Sm_fabric_long_high_parts01_Sm_fabric_long_high_rope_01; // 0x550(0x08)
	struct UStaticMeshComponent* SM_TradingStationWallUpPlanks_02; // 0x558(0x08)
	struct UMistWorldObjectAdjustmentsComponent* MistWorldObjectAdjustments; // 0x560(0x08)

	void ReceiveBeginPlay(); // Function MiniHotSpot02.MiniHotSpot02_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void AudioCreakTrigger(); // Function MiniHotSpot02.MiniHotSpot02_C.AudioCreakTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MiniHotSpot02(int32_t EntryPoint); // Function MiniHotSpot02.MiniHotSpot02_C.ExecuteUbergraph_MiniHotSpot02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

