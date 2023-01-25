// AnimBlueprintGeneratedClass A_BattlefanOperation_AnimBP.A_BattlefanOperation_AnimBP_C
// Size: 0x9f0 (Inherited: 0x290)
struct UA_BattlefanOperation_AnimBP_C : UMistMannedGimbalControlAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x298(0x20)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct FAnimNode_CCDIK AnimGraphNode_CCDIK; // 0x2c0(0x180)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x440(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x460(0x30)
	struct FAnimNode_Fabrik AnimGraphNode_Fabrik; // 0x490(0x190)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x620(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x648(0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x670(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x760(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x790(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x880(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x8b0(0xb0)
	struct FRotator PitchRotation; // 0x960(0x0c)
	char pad_96C[0x4]; // 0x96c(0x04)
	struct UMistBattleFanComponent* Battle Fan Component; // 0x970(0x08)
	enum class EMistBattleFanState Fan State; // 0x978(0x01)
	char pad_979[0x7]; // 0x979(0x07)
	struct UMistSkeletalMeshComponent* BattleFanMesh; // 0x980(0x08)
	float IKAlpha; // 0x988(0x04)
	struct FVector LeftHand_IKTarget; // 0x98c(0x0c)
	struct FVector RightHand_IKTarget; // 0x998(0x0c)
	char pad_9A4[0xc]; // 0x9a4(0x0c)
	struct FTransform RightHand_IKTargetTransform; // 0x9b0(0x30)
	float RotateAnimPlayrate; // 0x9e0(0x04)
	bool Rotating; // 0x9e4(0x01)
	char pad_9E5[0x3]; // 0x9e5(0x03)
	struct UAnimSequence* SuperChargeAnimation; // 0x9e8(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function A_BattlefanOperation_AnimBP.A_BattlefanOperation_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function A_BattlefanOperation_AnimBP.A_BattlefanOperation_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintInitializeAnimation(); // Function A_BattlefanOperation_AnimBP.A_BattlefanOperation_AnimBP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintBeginPlay(); // Function A_BattlefanOperation_AnimBP.A_BattlefanOperation_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_A_BattlefanOperation_AnimBP(int32_t EntryPoint); // Function A_BattlefanOperation_AnimBP.A_BattlefanOperation_AnimBP_C.ExecuteUbergraph_A_BattlefanOperation_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

