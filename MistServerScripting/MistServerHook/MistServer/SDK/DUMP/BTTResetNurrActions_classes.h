// BlueprintGeneratedClass BTTResetNurrActions.BTTResetNurrActions_C
// Size: 0x128 (Inherited: 0xa8)
struct UBTTResetNurrActions_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector RestAction; // 0xb0(0x28)
	struct FBlackboardKeySelector PlayerAttackAction; // 0xd8(0x28)
	struct FBlackboardKeySelector WalkerAttackAction; // 0x100(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTResetNurrActions.BTTResetNurrActions_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTResetNurrActions(int32_t EntryPoint); // Function BTTResetNurrActions.BTTResetNurrActions_C.ExecuteUbergraph_BTTResetNurrActions // (Final|UbergraphFunction) // @ game+0x163f1c0
};

