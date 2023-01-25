// BlueprintGeneratedClass BTTPredictTargetPosition.BTTPredictTargetPosition_C
// Size: 0x104 (Inherited: 0xa8)
struct UBTTPredictTargetPosition_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector Target; // 0xb0(0x28)
	struct FBlackboardKeySelector OutLocation; // 0xd8(0x28)
	float Time; // 0x100(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTPredictTargetPosition.BTTPredictTargetPosition_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTPredictTargetPosition(int32_t EntryPoint); // Function BTTPredictTargetPosition.BTTPredictTargetPosition_C.ExecuteUbergraph_BTTPredictTargetPosition // (Final|UbergraphFunction) // @ game+0x163f1c0
};

