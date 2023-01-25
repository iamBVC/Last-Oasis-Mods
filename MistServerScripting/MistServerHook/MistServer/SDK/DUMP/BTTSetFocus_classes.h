// BlueprintGeneratedClass BTTSetFocus.BTTSetFocus_C
// Size: 0xd9 (Inherited: 0xa8)
struct UBTTSetFocus_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetActor; // 0xb0(0x28)
	bool Reset; // 0xd8(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTSetFocus.BTTSetFocus_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTSetFocus(int32_t EntryPoint); // Function BTTSetFocus.BTTSetFocus_C.ExecuteUbergraph_BTTSetFocus // (Final|UbergraphFunction) // @ game+0x163f1c0
};

