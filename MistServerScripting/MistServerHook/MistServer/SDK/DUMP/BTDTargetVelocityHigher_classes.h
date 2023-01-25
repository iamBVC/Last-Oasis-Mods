// BlueprintGeneratedClass BTDTargetVelocityHigher.BTDTargetVelocityHigher_C
// Size: 0xd4 (Inherited: 0xa0)
struct UBTDTargetVelocityHigher_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FBlackboardKeySelector TargetActor; // 0xa8(0x28)
	float SpeedThreshold; // 0xd0(0x04)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTDTargetVelocityHigher.BTDTargetVelocityHigher_C.PerformConditionCheckAI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTDTargetVelocityHigher.BTDTargetVelocityHigher_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTDTargetVelocityHigher(int32_t EntryPoint); // Function BTDTargetVelocityHigher.BTDTargetVelocityHigher_C.ExecuteUbergraph_BTDTargetVelocityHigher // (Final|UbergraphFunction) // @ game+0x163f1c0
};

