// BlueprintGeneratedClass BTTSetBooleanValue.BTTSetBooleanValue_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTTSetBooleanValue_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool NewValue; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FBlackboardKeySelector BlackboardBool; // 0xb8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTSetBooleanValue.BTTSetBooleanValue_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTSetBooleanValue(int32_t EntryPoint); // Function BTTSetBooleanValue.BTTSetBooleanValue_C.ExecuteUbergraph_BTTSetBooleanValue // (Final|UbergraphFunction) // @ game+0x163f1c0
};

