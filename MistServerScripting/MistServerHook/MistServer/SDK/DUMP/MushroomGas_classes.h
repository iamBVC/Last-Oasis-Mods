// BlueprintGeneratedClass MushroomGas.MushroomGas_C
// Size: 0x430 (Inherited: 0x3c0)
struct AMushroomGas_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UParticleSystemComponent* Cloud; // 0x3c8(0x08)
	struct UParticleSystemComponent* Up; // 0x3d0(0x08)
	struct USceneComponent* CloudScene; // 0x3d8(0x08)
	struct USceneComponent* UpScene; // 0x3e0(0x08)
	struct UMistLootableMeshComponent* MistLootableMesh; // 0x3e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f0(0x08)
	float HeightMin; // 0x3f8(0x04)
	float HeightMax; // 0x3fc(0x04)
	struct FMistLootDesc GasLoot; // 0x400(0x30)

	void ReceiveBeginPlay(); // Function MushroomGas.MushroomGas_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistLootableMesh_K2Node_ComponentBoundEvent_0_MistLootableEvent__DelegateSignature(struct UMistLootableMeshComponent* Sender, struct AMistPlayer* Looter); // Function MushroomGas.MushroomGas_C.BndEvt__MistLootableMesh_K2Node_ComponentBoundEvent_0_MistLootableEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MushroomGas(int32_t EntryPoint); // Function MushroomGas.MushroomGas_C.ExecuteUbergraph_MushroomGas // (Final|UbergraphFunction) // @ game+0x163f1c0
};

