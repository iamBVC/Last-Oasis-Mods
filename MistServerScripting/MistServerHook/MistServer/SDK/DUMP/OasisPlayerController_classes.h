// BlueprintGeneratedClass OasisPlayerController.OasisPlayerController_C
// Size: 0x958 (Inherited: 0x928)
struct AOasisPlayerController_C : AMistOasisPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x928(0x08)
	struct UAudioComponent* LevelingUp; // 0x930(0x08)
	struct FMulticastInlineDelegate OnPossessDispatcher; // 0x938(0x10)
	struct FMulticastInlineDelegate OnUnPossessDispatcher; // 0x948(0x10)

	void BndEvt__MessengerComponent_K2Node_ComponentBoundEvent_0_MessageReceivedEvent__DelegateSignature(struct UMistBaseMessageData* Message); // Function OasisPlayerController.OasisPlayerController_C.BndEvt__MessengerComponent_K2Node_ComponentBoundEvent_0_MessageReceivedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceivePossess(struct APawn* PossessedPawn); // Function OasisPlayerController.OasisPlayerController_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveUnPossess(struct APawn* UnpossessedPawn); // Function OasisPlayerController.OasisPlayerController_C.ReceiveUnPossess // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function OasisPlayerController.OasisPlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_OasisPlayerController(int32_t EntryPoint); // Function OasisPlayerController.OasisPlayerController_C.ExecuteUbergraph_OasisPlayerController // (Final|UbergraphFunction) // @ game+0x163f1c0
	void OnUnPossessDispatcher__DelegateSignature(struct APawn* UnpossessedPawn); // Function OasisPlayerController.OasisPlayerController_C.OnUnPossessDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnPossessDispatcher__DelegateSignature(struct APawn* PossessedPawn); // Function OasisPlayerController.OasisPlayerController_C.OnPossessDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
};

