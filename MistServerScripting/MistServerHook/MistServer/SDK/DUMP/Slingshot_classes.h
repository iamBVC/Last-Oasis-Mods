// BlueprintGeneratedClass Slingshot.Slingshot_C
// Size: 0x655 (Inherited: 0x5c1)
struct ASlingshot_C : AStructurePart_C {
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UCapsuleComponent* WalkerCollision; // 0x5d0(0x08)
	struct UCableComponent* CableR; // 0x5d8(0x08)
	struct UCableComponent* CableL; // 0x5e0(0x08)
	struct UChildActorComponent* Pouch; // 0x5e8(0x08)
	struct UMistSkeletalMeshComponent* SkeletalMesh; // 0x5f0(0x08)
	struct UMistInteractableComponent* UseInteractable; // 0x5f8(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x600(0x08)
	struct UBoxComponent* Placement4; // 0x608(0x08)
	struct UBoxComponent* Placement3; // 0x610(0x08)
	struct UBoxComponent* Placement2; // 0x618(0x08)
	struct UBoxComponent* Placement1; // 0x620(0x08)
	struct UMistSlingshotControlComponent* MistSlingshotControl; // 0x628(0x08)
	struct UStaticMeshComponent* Base; // 0x630(0x08)
	struct UAudioComponent* LRMove; // 0x638(0x08)
	struct UAudioComponent* StressLight; // 0x640(0x08)
	struct UAudioComponent* StressHigh; // 0x648(0x08)
	bool Stress_1; // 0x650(0x01)
	bool Stress_2; // 0x651(0x01)
	bool Stress_3; // 0x652(0x01)
	bool Stress_4; // 0x653(0x01)
	bool ReadyToFire; // 0x654(0x01)

	void WoodStressSFX(float CurrentDistance, float TopTreshold, float BottomTreshold, float VolumeMultiplier, bool Stress, bool& NewStress); // Function Slingshot.Slingshot_C.WoodStressSFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSlingshotControl_K2Node_ComponentBoundEvent_2_PlayerEnteredLeftEvent__DelegateSignature(struct AMistCharacter* Player); // Function Slingshot.Slingshot_C.BndEvt__MistSlingshotControl_K2Node_ComponentBoundEvent_2_PlayerEnteredLeftEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function Slingshot.Slingshot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSlingshotControl_K2Node_ComponentBoundEvent_0_PlayerEnteredLeftEvent__DelegateSignature(struct AMistCharacter* Player); // Function Slingshot.Slingshot_C.BndEvt__MistSlingshotControl_K2Node_ComponentBoundEvent_0_PlayerEnteredLeftEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSlingshotControl_K2Node_ComponentBoundEvent_1_SlingshotFireEvent__DelegateSignature(struct UMistSlingshotControlComponent* Sender); // Function Slingshot.Slingshot_C.BndEvt__MistSlingshotControl_K2Node_ComponentBoundEvent_1_SlingshotFireEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Slingshot.Slingshot_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__UseInteractable_K2Node_ComponentBoundEvent_3_MistInteractableEvent__DelegateSignature(struct UMistInteractableComponent* Sender, struct FMistInteraction& Interaction); // Function Slingshot.Slingshot_C.BndEvt__UseInteractable_K2Node_ComponentBoundEvent_3_MistInteractableEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_Slingshot(int32_t EntryPoint); // Function Slingshot.Slingshot_C.ExecuteUbergraph_Slingshot // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

