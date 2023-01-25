// BlueprintGeneratedClass MiniHotSpot03.MiniHotSpot03_C
// Size: 0x500 (Inherited: 0x4c0)
struct AMiniHotSpot03_C : ABaseLootSite_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UStaticMeshComponent* SM_MiniHotSpot03_PROXY; // 0x4c8(0x08)
	struct UHideComponent_C* HideComponent; // 0x4d0(0x08)
	struct UStaticMeshComponent* er; // 0x4d8(0x08)
	struct UAudioComponent* Audio 0; // 0x4e0(0x08)
	struct UStaticMeshComponent* stick_platform_b; // 0x4e8(0x08)
	struct ULootableSkeletonComponent_C* LootableHumanRemainsComponent_01; // 0x4f0(0x08)
	struct UMistWorldObjectAdjustmentsComponent* MistWorldObjectAdjustments; // 0x4f8(0x08)

	void UserConstructionScript(); // Function MiniHotSpot03.MiniHotSpot03_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function MiniHotSpot03.MiniHotSpot03_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void AudioCreakTrigger(); // Function MiniHotSpot03.MiniHotSpot03_C.AudioCreakTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MiniHotSpot03(int32_t EntryPoint); // Function MiniHotSpot03.MiniHotSpot03_C.ExecuteUbergraph_MiniHotSpot03 // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

