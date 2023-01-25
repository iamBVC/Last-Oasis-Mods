// AnimBlueprintGeneratedClass Okkam_AnimBP.Okkam_AnimBP_C
// Size: 0x1b26 (Inherited: 0x3a0)
struct UOkkam_AnimBP_C : UMistOkkamAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3a8(0x30)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x3d8(0xb8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x490(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x4b8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x4e0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x508(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x530(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x5a8(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5d8(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x6c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x6f8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x770(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7a0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x818(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x848(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x8f8(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x940(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x968(0x78)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x9e0(0xc0)
	struct FAnimNode_CCDIK AnimGraphNode_CCDIK_4; // 0xaa0(0x180)
	struct FAnimNode_CCDIK AnimGraphNode_CCDIK_3; // 0xc20(0x180)
	struct FAnimNode_CCDIK AnimGraphNode_CCDIK_2; // 0xda0(0x180)
	struct FAnimNode_CCDIK AnimGraphNode_CCDIK; // 0xf20(0x180)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x10a0(0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x1160(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x1218(0x28)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x1240(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x1260(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x1288(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x12a8(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x1360(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x1388(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x13a8(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x13c8(0xb8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x1480(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x14a0(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x1558(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x1580(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x15a0(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x15c8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x15e8(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1608(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x16c0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x16e8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1710(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1738(0x28)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_4; // 0x1760(0xf0)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_3; // 0x1850(0xf0)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_2; // 0x1940(0xf0)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1a30(0xf0)
	float TransitionTime; // 0x1b20(0x04)
	bool Hide; // 0x1b24(0x01)
	bool Hurt; // 0x1b25(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Okkam_AnimBP.Okkam_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Okkam_AnimBP_AnimGraphNode_TransitionResult_515F60B244F13912C353C4A173687D4C(); // Function Okkam_AnimBP.Okkam_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Okkam_AnimBP_AnimGraphNode_TransitionResult_515F60B244F13912C353C4A173687D4C // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Okkam_AnimBP_AnimGraphNode_TransitionResult_83268F7F474E00C4A9748A89FDE254A7(); // Function Okkam_AnimBP.Okkam_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Okkam_AnimBP_AnimGraphNode_TransitionResult_83268F7F474E00C4A9748A89FDE254A7 // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Okkam_AnimBP_AnimGraphNode_LayeredBoneBlend_6D8771024FA6185A15E6A69B829A3476(); // Function Okkam_AnimBP.Okkam_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Okkam_AnimBP_AnimGraphNode_LayeredBoneBlend_6D8771024FA6185A15E6A69B829A3476 // (BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Okkam_AnimBP.Okkam_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_Okkam_AnimBP(int32_t EntryPoint); // Function Okkam_AnimBP.Okkam_AnimBP_C.ExecuteUbergraph_Okkam_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

