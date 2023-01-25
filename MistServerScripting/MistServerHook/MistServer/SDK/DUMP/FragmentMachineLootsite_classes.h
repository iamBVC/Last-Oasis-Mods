// BlueprintGeneratedClass FragmentMachineLootsite.FragmentMachineLootsite_C
// Size: 0x580 (Inherited: 0x4a0)
struct AFragmentMachineLootsite_C : AMistFragmentMachine {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UStaticMeshComponent* SM_AncientCS_StarCollision; // 0x4a8(0x08)
	struct USubmergeComponent_C* SubmergeComponent; // 0x4b0(0x08)
	struct UStaticMeshComponent* SM_FragmentMachine_Pillar4; // 0x4b8(0x08)
	struct UStaticMeshComponent* SM_FragmentMachine_Pillar3; // 0x4c0(0x08)
	struct UStaticMeshComponent* SM_FragmentMachine_Pillar2; // 0x4c8(0x08)
	struct UStaticMeshComponent* SM_FragmentMachine_Pillar1; // 0x4d0(0x08)
	struct UBoxComponent* InteractionCollision; // 0x4d8(0x08)
	struct UMistHarvestableMeshComponent* Bush_MistHarvestableMesh_09; // 0x4e0(0x08)
	struct UMistHarvestableMeshComponent* Bush_MistHarvestableMesh_08; // 0x4e8(0x08)
	struct UStaticMeshComponent* SM_ACS_033; // 0x4f0(0x08)
	struct UStaticMeshComponent* SM_ACS_035; // 0x4f8(0x08)
	struct UStaticMeshComponent* SM_ACS_036; // 0x500(0x08)
	struct UStaticMeshComponent* SM_ACS_034; // 0x508(0x08)
	struct UMistHarvestableMeshComponent* Bush_MistHarvestableMesh_07; // 0x510(0x08)
	struct UStaticMeshComponent* SM_FragmentMachine; // 0x518(0x08)
	struct UMistHarvestableMeshComponent* Bush_MistHarvestableMesh_04; // 0x520(0x08)
	struct UMistHarvestableMeshComponent* Bush_MistHarvestableMesh_03; // 0x528(0x08)
	struct UMistHarvestableMeshComponent* Bush_MistHarvestableMesh_02; // 0x530(0x08)
	struct UMistHarvestableMeshComponent* Bush_MistHarvestableMesh_01; // 0x538(0x08)
	struct UMistHarvestableMeshComponent* Bush_MistHarvestableMesh_05; // 0x540(0x08)
	struct UMistHarvestableMeshComponent* Bush_MistHarvestableMesh_06; // 0x548(0x08)
	struct USphereComponent* ProximityTrigger; // 0x550(0x08)
	struct UTorqueContainerComponent_C* TorqueContainerComponent; // 0x558(0x08)
	struct UMistToggleAutoCraftingStationComponent* TorqueConsumption; // 0x560(0x08)
	struct UMistContainerComponent* InputContainer; // 0x568(0x08)
	struct UMistAlternativeFurnaceComponent* AncientCraftingFurnace; // 0x570(0x08)
	struct UMistWorldObjectAdjustmentsComponent* MistWorldObjectAdjustments; // 0x578(0x08)

	void ReceiveStartCrumbling(); // Function FragmentMachineLootsite.FragmentMachineLootsite_C.ReceiveStartCrumbling // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_FragmentMachineLootsite(int32_t EntryPoint); // Function FragmentMachineLootsite.FragmentMachineLootsite_C.ExecuteUbergraph_FragmentMachineLootsite // (Final|UbergraphFunction) // @ game+0x163f1c0
};

