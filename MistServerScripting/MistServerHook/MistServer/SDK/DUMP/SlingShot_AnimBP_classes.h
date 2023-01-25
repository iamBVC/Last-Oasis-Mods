// AnimBlueprintGeneratedClass SlingShot_AnimBP.SlingShot_AnimBP_C
// Size: 0x7a0 (Inherited: 0x280)
struct USlingShot_AnimBP_C : UMistSlingshotAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2b8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2e0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x308(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x330(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x358(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x3d0(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x400(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4f0(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x520(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x610(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x640(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6b8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6e8(0xb0)
	float Progress; // 0x798(0x04)
	float NewVar_1; // 0x79c(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SlingShot_AnimBP.SlingShot_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlingShot_AnimBP_AnimGraphNode_TransitionResult_D55BEFCE4205BC678C4511B39DD32C59(); // Function SlingShot_AnimBP.SlingShot_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlingShot_AnimBP_AnimGraphNode_TransitionResult_D55BEFCE4205BC678C4511B39DD32C59 // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlingShot_AnimBP_AnimGraphNode_TransitionResult_C93D0E4444589288D0726F94A7DB0EF1(); // Function SlingShot_AnimBP.SlingShot_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlingShot_AnimBP_AnimGraphNode_TransitionResult_C93D0E4444589288D0726F94A7DB0EF1 // (BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SlingShot_AnimBP.SlingShot_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SlingShot_AnimBP(int32_t EntryPoint); // Function SlingShot_AnimBP.SlingShot_AnimBP_C.ExecuteUbergraph_SlingShot_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

