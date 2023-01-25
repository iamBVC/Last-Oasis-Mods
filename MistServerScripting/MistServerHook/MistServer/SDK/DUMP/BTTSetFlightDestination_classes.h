// BlueprintGeneratedClass BTTSetFlightDestination.BTTSetFlightDestination_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBTTSetFlightDestination_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetLocation; // 0xb0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTSetFlightDestination.BTTSetFlightDestination_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTSetFlightDestination(int32_t EntryPoint); // Function BTTSetFlightDestination.BTTSetFlightDestination_C.ExecuteUbergraph_BTTSetFlightDestination // (Final|UbergraphFunction) // @ game+0x163f1c0
};

