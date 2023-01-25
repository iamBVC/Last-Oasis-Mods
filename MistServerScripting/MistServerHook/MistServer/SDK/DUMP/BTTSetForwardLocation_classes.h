// BlueprintGeneratedClass BTTSetForwardLocation.BTTSetForwardLocation_C
// Size: 0xdc (Inherited: 0xa8)
struct UBTTSetForwardLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetLocation; // 0xb0(0x28)
	float Distance; // 0xd8(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTSetForwardLocation.BTTSetForwardLocation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTSetForwardLocation(int32_t EntryPoint); // Function BTTSetForwardLocation.BTTSetForwardLocation_C.ExecuteUbergraph_BTTSetForwardLocation // (Final|UbergraphFunction) // @ game+0x163f1c0
};

