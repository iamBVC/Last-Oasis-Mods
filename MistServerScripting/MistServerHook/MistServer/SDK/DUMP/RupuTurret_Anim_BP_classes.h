// AnimBlueprintGeneratedClass RupuTurret_Anim_BP.RupuTurret_Anim_BP_C
// Size: 0x5c5 (Inherited: 0x270)
struct URupuTurret_Anim_BP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3c0(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x3f0(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x438(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x468(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4e0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x510(0xb0)
	float Loc_Shot_Progress; // 0x5c0(0x04)
	bool Loc_Shot; // 0x5c4(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function RupuTurret_Anim_BP.RupuTurret_Anim_BP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RupuTurret_Anim_BP_AnimGraphNode_TransitionResult_CE70B1814803DFDC1E15AEA0B1052AA4(); // Function RupuTurret_Anim_BP.RupuTurret_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RupuTurret_Anim_BP_AnimGraphNode_TransitionResult_CE70B1814803DFDC1E15AEA0B1052AA4 // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RupuTurret_Anim_BP_AnimGraphNode_TransitionResult_DED44DAD4118F4BA3A3CEE97E766325A(); // Function RupuTurret_Anim_BP.RupuTurret_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RupuTurret_Anim_BP_AnimGraphNode_TransitionResult_DED44DAD4118F4BA3A3CEE97E766325A // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RupuTurret_Anim_BP_AnimGraphNode_TransitionResult_A3158E6B49C03BF75BAF72BE14CDFC4F(); // Function RupuTurret_Anim_BP.RupuTurret_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RupuTurret_Anim_BP_AnimGraphNode_TransitionResult_A3158E6B49C03BF75BAF72BE14CDFC4F // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RupuTurret_Anim_BP_AnimGraphNode_TransitionResult_877938704B7141693489AD8060FAE7CE(); // Function RupuTurret_Anim_BP.RupuTurret_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RupuTurret_Anim_BP_AnimGraphNode_TransitionResult_877938704B7141693489AD8060FAE7CE // (BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function RupuTurret_Anim_BP.RupuTurret_Anim_BP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_RupuTurret_Anim_BP(int32_t EntryPoint); // Function RupuTurret_Anim_BP.RupuTurret_Anim_BP_C.ExecuteUbergraph_RupuTurret_Anim_BP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

