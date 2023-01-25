// BlueprintGeneratedClass BTTSetPhemkeDefaults.BTTSetPhemkeDefaults_C
// Size: 0x100 (Inherited: 0xa8)
struct UBTTSetPhemkeDefaults_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector IsInitialized; // 0xb0(0x28)
	struct FBlackboardKeySelector TargetLocation; // 0xd8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTSetPhemkeDefaults.BTTSetPhemkeDefaults_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTSetPhemkeDefaults(int32_t EntryPoint); // Function BTTSetPhemkeDefaults.BTTSetPhemkeDefaults_C.ExecuteUbergraph_BTTSetPhemkeDefaults // (Final|UbergraphFunction) // @ game+0x163f1c0
};

