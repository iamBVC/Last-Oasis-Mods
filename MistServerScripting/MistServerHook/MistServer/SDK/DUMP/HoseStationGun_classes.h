// BlueprintGeneratedClass HoseStationGun.HoseStationGun_C
// Size: 0x490 (Inherited: 0x3f0)
struct AHoseStationGun_C : AMistBasePersistentActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UMistNettableComponent* MistNettable; // 0x3f8(0x08)
	struct UIgnitableComponent_C* IgnitableComponent; // 0x400(0x08)
	struct UParticleSystemComponent* FuelParticleSystem; // 0x408(0x08)
	struct UMistCollisionGroupComponent* MistCollisionGroup; // 0x410(0x08)
	struct UMistInteractableInventoryComponent* WaterInventoryInteractable; // 0x418(0x08)
	struct UMistInteractableComponent* UseInteractable; // 0x420(0x08)
	struct UMistContainerComponent* AmmoContainer; // 0x428(0x08)
	struct UMistAudioComponent* HosePumpConstant; // 0x430(0x08)
	struct USceneComponent* Detach; // 0x438(0x08)
	struct USceneComponent* Attach; // 0x440(0x08)
	struct UBoxComponent* Box; // 0x448(0x08)
	struct UStaticMeshComponent* Gun; // 0x450(0x08)
	struct UMistHoseControlComponent* MistHoseControl; // 0x458(0x08)
	struct UCameraComponent* Camera; // 0x460(0x08)
	struct USpringArmComponent* SpringArm; // 0x468(0x08)
	struct UParticleSystemComponent* WaterParticleSystem; // 0x470(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x478(0x08)
	struct UAudioComponent* GunRotate; // 0x480(0x08)
	struct UAudioComponent* WaterShoot; // 0x488(0x08)

	void BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_6_ActionEvent__DelegateSignature(struct UMistHoseControlComponent* Sender); // Function HoseStationGun.HoseStationGun_C.BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_6_ActionEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_7_ActionEvent__DelegateSignature(struct UMistHoseControlComponent* Sender); // Function HoseStationGun.HoseStationGun_C.BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_7_ActionEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_0_ActionEvent__DelegateSignature(struct UMistHoseControlComponent* Sender); // Function HoseStationGun.HoseStationGun_C.BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_0_ActionEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_1_ActionEvent__DelegateSignature(struct UMistHoseControlComponent* Sender); // Function HoseStationGun.HoseStationGun_C.BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_1_ActionEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function HoseStationGun.HoseStationGun_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_10_PlayerEnteredLeftEvent__DelegateSignature(struct AMistCharacter* Player); // Function HoseStationGun.HoseStationGun_C.BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_10_PlayerEnteredLeftEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_12_PlayerEnteredLeftEvent__DelegateSignature(struct AMistCharacter* Player); // Function HoseStationGun.HoseStationGun_C.BndEvt__MistHoseControl_K2Node_ComponentBoundEvent_12_PlayerEnteredLeftEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function HoseStationGun.HoseStationGun_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_HoseStationGun(int32_t EntryPoint); // Function HoseStationGun.HoseStationGun_C.ExecuteUbergraph_HoseStationGun // (Final|UbergraphFunction) // @ game+0x163f1c0
};

