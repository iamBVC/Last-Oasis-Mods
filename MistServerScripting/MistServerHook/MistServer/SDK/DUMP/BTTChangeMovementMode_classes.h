// BlueprintGeneratedClass BTTChangeMovementMode.BTTChangeMovementMode_C
// Size: 0xb5 (Inherited: 0xa8)
struct UBTTChangeMovementMode_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	int32_t Preset; // 0xb0(0x04)
	enum class EMobMovementMode MovementMode; // 0xb4(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTChangeMovementMode.BTTChangeMovementMode_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTChangeMovementMode(int32_t EntryPoint); // Function BTTChangeMovementMode.BTTChangeMovementMode_C.ExecuteUbergraph_BTTChangeMovementMode // (Final|UbergraphFunction) // @ game+0x163f1c0
};

