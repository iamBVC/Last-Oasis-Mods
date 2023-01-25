// BlueprintGeneratedClass BTTSetKillinDefaults.BTTSetKillinDefaults_C
// Size: 0x178 (Inherited: 0xa8)
struct UBTTSetKillinDefaults_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector IsInitialized; // 0xb0(0x28)
	struct FBlackboardKeySelector TargetLocation; // 0xd8(0x28)
	struct FBlackboardKeySelector ShouldLand; // 0x100(0x28)
	struct FBlackboardKeySelector OnGround; // 0x128(0x28)
	struct FBlackboardKeySelector NestLocation; // 0x150(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTSetKillinDefaults.BTTSetKillinDefaults_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTSetKillinDefaults(int32_t EntryPoint); // Function BTTSetKillinDefaults.BTTSetKillinDefaults_C.ExecuteUbergraph_BTTSetKillinDefaults // (Final|UbergraphFunction) // @ game+0x163f1c0
};

