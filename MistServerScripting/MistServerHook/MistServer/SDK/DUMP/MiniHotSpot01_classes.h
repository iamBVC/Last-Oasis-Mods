// BlueprintGeneratedClass MiniHotSpot01.MiniHotSpot01_C
// Size: 0x508 (Inherited: 0x4c0)
struct AMiniHotSpot01_C : ABaseLootSite_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UStaticMeshComponent* SM_MiniHotSpot01_PROXY; // 0x4c8(0x08)
	struct UHideComponent_C* HideComponent; // 0x4d0(0x08)
	struct ULootableBreakableWoodenBoxComponent_C* LootableAttackableBarrelComponent_01; // 0x4d8(0x08)
	struct UStaticMeshComponent* SM_LootModular_03; // 0x4e0(0x08)
	struct UAudioComponent* Audio 1; // 0x4e8(0x08)
	struct UAudioComponent* Audio 0; // 0x4f0(0x08)
	struct UStaticMeshComponent* SM_Palisade; // 0x4f8(0x08)
	struct UMistWorldObjectAdjustmentsComponent* MistWorldObjectAdjustments; // 0x500(0x08)

	void UserConstructionScript(); // Function MiniHotSpot01.MiniHotSpot01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function MiniHotSpot01.MiniHotSpot01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void AudioCreakTrigger(); // Function MiniHotSpot01.MiniHotSpot01_C.AudioCreakTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MiniHotSpot01(int32_t EntryPoint); // Function MiniHotSpot01.MiniHotSpot01_C.ExecuteUbergraph_MiniHotSpot01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

