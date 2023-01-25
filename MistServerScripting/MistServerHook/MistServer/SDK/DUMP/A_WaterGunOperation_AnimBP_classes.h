// AnimBlueprintGeneratedClass A_WaterGunOperation_AnimBP.A_WaterGunOperation_AnimBP_C
// Size: 0x768 (Inherited: 0x290)
struct UA_WaterGunOperation_AnimBP_C : UMistHoseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x298(0x28)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x2c0(0x198)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x458(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4d0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x500(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x578(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5a8(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x658(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x710(0x28)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x738(0x30)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function A_WaterGunOperation_AnimBP.A_WaterGunOperation_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_WaterGunOperation_AnimBP_AnimGraphNode_TransitionResult_986128504A7A04491EB4E18BE65DF7D2(); // Function A_WaterGunOperation_AnimBP.A_WaterGunOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_WaterGunOperation_AnimBP_AnimGraphNode_TransitionResult_986128504A7A04491EB4E18BE65DF7D2 // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_A_WaterGunOperation_AnimBP(int32_t EntryPoint); // Function A_WaterGunOperation_AnimBP.A_WaterGunOperation_AnimBP_C.ExecuteUbergraph_A_WaterGunOperation_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

