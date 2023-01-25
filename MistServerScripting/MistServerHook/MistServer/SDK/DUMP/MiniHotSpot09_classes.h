// BlueprintGeneratedClass MiniHotSpot09.MiniHotSpot09_C
// Size: 0x530 (Inherited: 0x4c0)
struct AMiniHotSpot09_C : ABaseLootSite_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UStaticMeshComponent* SM_MiniHotSpot09_PROXY; // 0x4c8(0x08)
	struct UHideComponent_C* HideComponent; // 0x4d0(0x08)
	struct UStaticMeshComponent* SM_LootModular_05; // 0x4d8(0x08)
	struct ULootableBrokenBarrelComponent_C* LootableBrokenPackageComponent; // 0x4e0(0x08)
	struct USceneComponent* Scene5; // 0x4e8(0x08)
	struct ULootableSiegeCrateComponent_C* LootableSiegeCrateComponent; // 0x4f0(0x08)
	struct UStaticMeshComponent* SM_TradingStationFlagsDoor; // 0x4f8(0x08)
	struct USceneComponent* Scene1; // 0x500(0x08)
	struct USceneComponent* Scene; // 0x508(0x08)
	struct UMistWorldObjectAdjustmentsComponent* MistWorldObjectAdjustments_1; // 0x510(0x08)
	struct UAudioComponent* Audio2; // 0x518(0x08)
	struct UAudioComponent* Audio1; // 0x520(0x08)
	struct UAudioComponent* Audio0; // 0x528(0x08)

	void UserConstructionScript(); // Function MiniHotSpot09.MiniHotSpot09_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function MiniHotSpot09.MiniHotSpot09_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void AudioCreakTrigger(); // Function MiniHotSpot09.MiniHotSpot09_C.AudioCreakTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MiniHotSpot09(int32_t EntryPoint); // Function MiniHotSpot09.MiniHotSpot09_C.ExecuteUbergraph_MiniHotSpot09 // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

