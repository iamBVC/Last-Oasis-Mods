// BlueprintGeneratedClass BTTNurrSyncAnimData.BTTNurrSyncAnimData_C
// Size: 0x178 (Inherited: 0xa8)
struct UBTTNurrSyncAnimData_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector IsResting; // 0xb0(0x28)
	struct FBlackboardKeySelector IsAttackingPlayer; // 0xd8(0x28)
	struct FBlackboardKeySelector IsAttackingWalker; // 0x100(0x28)
	struct FBlackboardKeySelector IsDamaged; // 0x128(0x28)
	struct FBlackboardKeySelector Target; // 0x150(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTNurrSyncAnimData.BTTNurrSyncAnimData_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTNurrSyncAnimData(int32_t EntryPoint); // Function BTTNurrSyncAnimData.BTTNurrSyncAnimData_C.ExecuteUbergraph_BTTNurrSyncAnimData // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

