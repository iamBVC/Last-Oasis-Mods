// BlueprintGeneratedClass BattleFanPrototype.BattleFanPrototype_C
// Size: 0x7f8 (Inherited: 0x5c1)
struct ABattleFanPrototype_C : AStructurePart_C {
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UCapsuleComponent* WalkerCollision; // 0x5d0(0x08)
	struct UBoxComponent* Box7; // 0x5d8(0x08)
	struct UBoxComponent* Box6; // 0x5e0(0x08)
	struct UBoxComponent* Box5; // 0x5e8(0x08)
	struct UBoxComponent* Box4; // 0x5f0(0x08)
	struct UCapsuleComponent* PlacementCollision; // 0x5f8(0x08)
	struct UStaticMeshComponent* Gas; // 0x600(0x08)
	struct UStaticMeshComponent* vial; // 0x608(0x08)
	struct UCapsuleComponent* Collision; // 0x610(0x08)
	struct UMistSkeletalMeshComponent* Fan; // 0x618(0x08)
	struct USceneComponent* Pitch; // 0x620(0x08)
	struct USpringArmComponent* SpringArm; // 0x628(0x08)
	struct USceneComponent* Attach; // 0x630(0x08)
	struct USceneComponent* Detach; // 0x638(0x08)
	struct UCapsuleComponent* InteractionCollision; // 0x640(0x08)
	struct USceneComponent* Yaw; // 0x648(0x08)
	struct USceneComponent* ParticlesScene; // 0x650(0x08)
	struct UCapsuleComponent* Area; // 0x658(0x08)
	struct UNiagaraComponent* ScalableWind; // 0x660(0x08)
	struct UTorqueContainerComponent_C* TorqueContainer; // 0x668(0x08)
	struct UMistInteractableInventoryComponent* MistInteractableInventory; // 0x670(0x08)
	struct UMistContainerComponent* LavaContainer; // 0x678(0x08)
	struct UMistBattleFanComponent* MistBattleFan; // 0x680(0x08)
	struct UStaticMeshComponent* SM_FurnaceRotBase; // 0x688(0x08)
	struct UAudioComponent* BasePlatform; // 0x690(0x08)
	struct UMistInteractableComponent* UseInteractable; // 0x698(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x6a0(0x08)
	struct UCameraComponent* Camera; // 0x6a8(0x08)
	struct UAudioComponent* LRMove; // 0x6b0(0x08)
	float MaxFanAnimationPlayRate; // 0x6b8(0x04)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct UMaterialInterface* ClothMaterial; // 0x6c0(0x08)
	struct UMaterialInstanceDynamic* ClothDMI; // 0x6c8(0x08)
	int32_t ClothMaterialId; // 0x6d0(0x04)
	float ClothTime; // 0x6d4(0x04)
	struct TMap<struct AMistAreaEffect*, struct UNiagaraSystem*> OverchargeEffects; // 0x6d8(0x50)
	float SpringArmHeight; // 0x728(0x04)
	char pad_72C[0x4]; // 0x72c(0x04)
	struct UAudioComponent* FansSound; // 0x730(0x08)
	struct UAudioComponent* OverheatSound; // 0x738(0x08)
	struct UAudioComponent* ChargeSound; // 0x740(0x08)
	struct TMap<int32_t, float> LoadedGasCount; // 0x748(0x50)
	struct TMap<struct AMistAreaEffect*, struct FVector> LoadedGasColor; // 0x798(0x50)
	struct UAudioComponent* SuckSound; // 0x7e8(0x08)
	struct UAudioComponent* SuckChargeSound; // 0x7f0(0x08)

	void SetGasVial(); // Function BattleFanPrototype.BattleFanPrototype_C.SetGasVial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnValidEffectOvercharge(); // Function BattleFanPrototype.BattleFanPrototype_C.SpawnValidEffectOvercharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetUpClothMaterials(struct FName MaterialSlotName); // Function BattleFanPrototype.BattleFanPrototype_C.SetUpClothMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function BattleFanPrototype.BattleFanPrototype_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BattleFanPrototype.BattleFanPrototype_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_2_PlayerEnteredLeftEvent__DelegateSignature(struct AMistCharacter* Player); // Function BattleFanPrototype.BattleFanPrototype_C.BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_2_PlayerEnteredLeftEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_3_PlayerEnteredLeftEvent__DelegateSignature(struct AMistCharacter* Player); // Function BattleFanPrototype.BattleFanPrototype_C.BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_3_PlayerEnteredLeftEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_4_Event__DelegateSignature(); // Function BattleFanPrototype.BattleFanPrototype_C.BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_4_Event__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_5_Event__DelegateSignature(); // Function BattleFanPrototype.BattleFanPrototype_C.BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_5_Event__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_6_Event__DelegateSignature(); // Function BattleFanPrototype.BattleFanPrototype_C.BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_6_Event__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_0_Event__DelegateSignature(); // Function BattleFanPrototype.BattleFanPrototype_C.BndEvt__MistBattleFan_K2Node_ComponentBoundEvent_0_Event__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BattleFanPrototype(int32_t EntryPoint); // Function BattleFanPrototype.BattleFanPrototype_C.ExecuteUbergraph_BattleFanPrototype // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

