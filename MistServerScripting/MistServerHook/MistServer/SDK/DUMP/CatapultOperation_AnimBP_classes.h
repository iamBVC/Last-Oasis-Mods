// AnimBlueprintGeneratedClass CatapultOperation_AnimBP.CatapultOperation_AnimBP_C
// Size: 0xc20 (Inherited: 0x290)
struct UCatapultOperation_AnimBP_C : UMistCatapultAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x2c8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x340(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x3e0(0xb8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x498(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x510(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x5b0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5d8(0x78)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x650(0xc0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x710(0xc0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x7d0(0xc0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x890(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x8d8(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x990(0x28)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x9b8(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xa00(0xb8)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xab8(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xb00(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xbb8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xbe0(0x28)
	struct UAnimSequence* PedalsSequence; // 0xc08(0x08)
	struct UAnimSequence* ArmCrankSequence; // 0xc10(0x08)
	struct UAnimSequence* BlockCrankSequence; // 0xc18(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function CatapultOperation_AnimBP.CatapultOperation_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CatapultOperation_AnimBP_AnimGraphNode_SequenceEvaluator_60B4A744420408DCF3FD5E906AB68FB8(); // Function CatapultOperation_AnimBP.CatapultOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CatapultOperation_AnimBP_AnimGraphNode_SequenceEvaluator_60B4A744420408DCF3FD5E906AB68FB8 // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CatapultOperation_AnimBP_AnimGraphNode_SequenceEvaluator_02E1F28C4D8F51D7601F79B36FED48BA(); // Function CatapultOperation_AnimBP.CatapultOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CatapultOperation_AnimBP_AnimGraphNode_SequenceEvaluator_02E1F28C4D8F51D7601F79B36FED48BA // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CatapultOperation_AnimBP_AnimGraphNode_SequenceEvaluator_0C5EFD4D4FBE933A7692FEA596870F46(); // Function CatapultOperation_AnimBP.CatapultOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CatapultOperation_AnimBP_AnimGraphNode_SequenceEvaluator_0C5EFD4D4FBE933A7692FEA596870F46 // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_CatapultOperation_AnimBP(int32_t EntryPoint); // Function CatapultOperation_AnimBP.CatapultOperation_AnimBP_C.ExecuteUbergraph_CatapultOperation_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

