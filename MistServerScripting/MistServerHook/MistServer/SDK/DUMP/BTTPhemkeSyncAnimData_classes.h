// BlueprintGeneratedClass BTTPhemkeSyncAnimData.BTTPhemkeSyncAnimData_C
// Size: 0x128 (Inherited: 0xa8)
struct UBTTPhemkeSyncAnimData_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector IsSpooked; // 0xb0(0x28)
	struct FBlackboardKeySelector IsTired; // 0xd8(0x28)
	struct FBlackboardKeySelector IsAware; // 0x100(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTPhemkeSyncAnimData.BTTPhemkeSyncAnimData_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTPhemkeSyncAnimData(int32_t EntryPoint); // Function BTTPhemkeSyncAnimData.BTTPhemkeSyncAnimData_C.ExecuteUbergraph_BTTPhemkeSyncAnimData // (Final|UbergraphFunction) // @ game+0x163f1c0
};

