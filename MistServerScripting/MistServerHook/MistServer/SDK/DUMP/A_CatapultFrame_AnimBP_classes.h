// AnimBlueprintGeneratedClass A_CatapultFrame_AnimBP.A_CatapultFrame_AnimBP_C
// Size: 0xd28 (Inherited: 0x290)
struct UA_CatapultFrame_AnimBP_C : UMistCatapultAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0x2c8(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x388(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x400(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x4a0(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x558(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x580(0xc0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x640(0xc0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x700(0xc0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x7c0(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x880(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x8f8(0xa0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x998(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x9e0(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xa98(0x28)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0xac0(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xb08(0xb8)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xbc0(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xc08(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xcc0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xce8(0x28)
	struct UAnimSequence* PedalsSequence; // 0xd10(0x08)
	struct UAnimSequence* ArmCrankSequence; // 0xd18(0x08)
	struct UAnimSequence* BlockCrankSequence; // 0xd20(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function A_CatapultFrame_AnimBP.A_CatapultFrame_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_CatapultFrame_AnimBP_AnimGraphNode_SequenceEvaluator_C6BD927447762ABC571DC68910C39CDA(); // Function A_CatapultFrame_AnimBP.A_CatapultFrame_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_CatapultFrame_AnimBP_AnimGraphNode_SequenceEvaluator_C6BD927447762ABC571DC68910C39CDA // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_CatapultFrame_AnimBP_AnimGraphNode_SequenceEvaluator_74FB9A1D4D2583E1FEFF9F843425D40E(); // Function A_CatapultFrame_AnimBP.A_CatapultFrame_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_CatapultFrame_AnimBP_AnimGraphNode_SequenceEvaluator_74FB9A1D4D2583E1FEFF9F843425D40E // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_CatapultFrame_AnimBP_AnimGraphNode_SequenceEvaluator_AE1D4CB14362865EB02DFFA78A075678(); // Function A_CatapultFrame_AnimBP.A_CatapultFrame_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_CatapultFrame_AnimBP_AnimGraphNode_SequenceEvaluator_AE1D4CB14362865EB02DFFA78A075678 // (BlueprintEvent) // @ game+0x163f1c0
	void AnimNotify_RecoilEnd(); // Function A_CatapultFrame_AnimBP.A_CatapultFrame_AnimBP_C.AnimNotify_RecoilEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_A_CatapultFrame_AnimBP(int32_t EntryPoint); // Function A_CatapultFrame_AnimBP.A_CatapultFrame_AnimBP_C.ExecuteUbergraph_A_CatapultFrame_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

