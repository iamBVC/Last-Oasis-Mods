// BlueprintGeneratedClass SingleMediumRupuCamp_01.SingleMediumRupuCamp_01_C
// Size: 0x588 (Inherited: 0x514)
struct ASingleMediumRupuCamp_01_C : AMistMobCamp_Base_C {
	char pad_514[0x4]; // 0x514(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UStaticMeshComponent* VT_Decal14; // 0x520(0x08)
	struct UStaticMeshComponent* VT_Decal1; // 0x528(0x08)
	struct UStaticMeshComponent* SM_RupuCamp_03wood; // 0x530(0x08)
	struct UStaticMeshComponent* SM_RupuCamp_02_Collision; // 0x538(0x08)
	struct UStaticMeshComponent* SM_RupuCampFlags_02; // 0x540(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x548(0x08)
	struct UMistWorldObjectAdjustmentsComponent* MistWorldObjectAdjustments; // 0x550(0x08)
	struct UCampMonkeyVine_C* CampMonkeyVine; // 0x558(0x08)
	struct UBoxComponent* Trigger_RC2_05; // 0x560(0x08)
	struct ULootableAttackableUrnComponent_C* LootableAttackableUrnComponent1; // 0x568(0x08)
	struct UStaticMeshComponent* SM_RupuCamp_02; // 0x570(0x08)
	struct USceneComponent* MobSpawnLocation2; // 0x578(0x08)
	struct USceneComponent* MobSpawnLocation1; // 0x580(0x08)

	void ReceiveDeactivated(); // Function SingleMediumRupuCamp_01.SingleMediumRupuCamp_01_C.ReceiveDeactivated // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__Trigger_RC2_05_K2Node_ComponentBoundEvent_0_ComponentBeginActorTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function SingleMediumRupuCamp_01.SingleMediumRupuCamp_01_C.BndEvt__Trigger_RC2_05_K2Node_ComponentBoundEvent_0_ComponentBeginActorTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__Trigger_RC2_05_K2Node_ComponentBoundEvent_1_ComponentEndActorTriggerSignature__DelegateSignature(struct UPrimitiveComponent* TriggerComponent, struct AActor* OtherActor); // Function SingleMediumRupuCamp_01.SingleMediumRupuCamp_01_C.BndEvt__Trigger_RC2_05_K2Node_ComponentBoundEvent_1_ComponentEndActorTriggerSignature__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SingleMediumRupuCamp_01(int32_t EntryPoint); // Function SingleMediumRupuCamp_01.SingleMediumRupuCamp_01_C.ExecuteUbergraph_SingleMediumRupuCamp_01 // (Final|UbergraphFunction) // @ game+0x163f1c0
};

