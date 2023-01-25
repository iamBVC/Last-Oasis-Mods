// BlueprintGeneratedClass BTTSetFloatValue.BTTSetFloatValue_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTTSetFloatValue_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float NewValue; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FBlackboardKeySelector BlackboardFloat; // 0xb8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTSetFloatValue.BTTSetFloatValue_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTSetFloatValue(int32_t EntryPoint); // Function BTTSetFloatValue.BTTSetFloatValue_C.ExecuteUbergraph_BTTSetFloatValue // (Final|UbergraphFunction) // @ game+0x163f1c0
};

