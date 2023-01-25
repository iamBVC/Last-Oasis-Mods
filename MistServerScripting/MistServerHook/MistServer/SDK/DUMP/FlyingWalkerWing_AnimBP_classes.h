// AnimBlueprintGeneratedClass FlyingWalkerWing_AnimBP.FlyingWalkerWing_AnimBP_C
// Size: 0x870 (Inherited: 0x2c0)
struct UFlyingWalkerWing_AnimBP_C : UMistSkyWalkerWingAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x370(0xa0)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x410(0x198)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x5a8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5f0(0x78)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x668(0xc0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x728(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x830(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x850(0x20)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function FlyingWalkerWing_AnimBP.FlyingWalkerWing_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalkerWing_AnimBP_AnimGraphNode_BlendListByBool_A35EC1DF4809A4FBEBC7D89B0E3AA5C5(); // Function FlyingWalkerWing_AnimBP.FlyingWalkerWing_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalkerWing_AnimBP_AnimGraphNode_BlendListByBool_A35EC1DF4809A4FBEBC7D89B0E3AA5C5 // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_FlyingWalkerWing_AnimBP(int32_t EntryPoint); // Function FlyingWalkerWing_AnimBP.FlyingWalkerWing_AnimBP_C.ExecuteUbergraph_FlyingWalkerWing_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

