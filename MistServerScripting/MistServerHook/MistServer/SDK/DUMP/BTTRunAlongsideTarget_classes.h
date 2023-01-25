// BlueprintGeneratedClass BTTRunAlongsideTarget.BTTRunAlongsideTarget_C
// Size: 0x10c (Inherited: 0xa8)
struct UBTTRunAlongsideTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float AlongsideDistance; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FBlackboardKeySelector TargetActor; // 0xb8(0x28)
	struct FBlackboardKeySelector StoredLocation; // 0xe0(0x28)
	float ForwardDistance; // 0x108(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTRunAlongsideTarget.BTTRunAlongsideTarget_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTTRunAlongsideTarget(int32_t EntryPoint); // Function BTTRunAlongsideTarget.BTTRunAlongsideTarget_C.ExecuteUbergraph_BTTRunAlongsideTarget // (Final|UbergraphFunction) // @ game+0x163f1c0
};

