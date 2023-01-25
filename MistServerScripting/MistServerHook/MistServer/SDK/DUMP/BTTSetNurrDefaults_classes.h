// BlueprintGeneratedClass BTTSetNurrDefaults.BTTSetNurrDefaults_C
// Size: 0x128 (Inherited: 0xa8)
struct UBTTSetNurrDefaults_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector IsInitialized; // 0xb0(0x28)
	struct FBlackboardKeySelector TargetLocation; // 0xd8(0x28)
	struct FBlackboardKeySelector StartLocation; // 0x100(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTSetNurrDefaults.BTTSetNurrDefaults_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTSetNurrDefaults(int32_t EntryPoint); // Function BTTSetNurrDefaults.BTTSetNurrDefaults_C.ExecuteUbergraph_BTTSetNurrDefaults // (Final|UbergraphFunction) // @ game+0x163f1c0
};

