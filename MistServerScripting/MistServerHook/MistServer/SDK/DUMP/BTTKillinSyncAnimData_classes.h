// BlueprintGeneratedClass BTTKillinSyncAnimData.BTTKillinSyncAnimData_C
// Size: 0x1f0 (Inherited: 0xa8)
struct UBTTKillinSyncAnimData_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector IsDiving; // 0xb0(0x28)
	struct FBlackboardKeySelector IsAttackingPlayer; // 0xd8(0x28)
	struct FBlackboardKeySelector IsDamaged; // 0x100(0x28)
	struct FBlackboardKeySelector IsBadlyHurt; // 0x128(0x28)
	struct FBlackboardKeySelector IsOnGround; // 0x150(0x28)
	struct FBlackboardKeySelector IsDroppingTether; // 0x178(0x28)
	struct FBlackboardKeySelector IsCarrying; // 0x1a0(0x28)
	struct FBlackboardKeySelector CarriedActor; // 0x1c8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTKillinSyncAnimData.BTTKillinSyncAnimData_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTKillinSyncAnimData(int32_t EntryPoint); // Function BTTKillinSyncAnimData.BTTKillinSyncAnimData_C.ExecuteUbergraph_BTTKillinSyncAnimData // (Final|UbergraphFunction) // @ game+0x163f1c0
};

