// BlueprintGeneratedClass DesertMonkeyCamp.DesertMonkeyCamp_C
// Size: 0x548 (Inherited: 0x500)
struct ADesertMonkeyCamp_C : AMistMobCamp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x508(0x08)
	struct UStaticMeshComponent* SM_RupuCampFlags_02; // 0x510(0x08)
	struct UMistHarvestableMeshComponent* MistHarvestableMesh1; // 0x518(0x08)
	struct UMistHarvestableMeshComponent* MistHarvestableMesh; // 0x520(0x08)
	struct UCampChest_C* CampChest; // 0x528(0x08)
	struct UStaticMeshComponent* SM_RupuCamp_02; // 0x530(0x08)
	struct USceneComponent* MobSpawnLocation2; // 0x538(0x08)
	struct USceneComponent* MobSpawnLocation1; // 0x540(0x08)

	void ReceiveDeactivated(); // Function DesertMonkeyCamp.DesertMonkeyCamp_C.ReceiveDeactivated // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_DesertMonkeyCamp(int32_t EntryPoint); // Function DesertMonkeyCamp.DesertMonkeyCamp_C.ExecuteUbergraph_DesertMonkeyCamp // (Final|UbergraphFunction) // @ game+0x163f1c0
};

