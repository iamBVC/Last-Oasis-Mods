// AnimBlueprintGeneratedClass A_ScattershotGun_MainBody_AnimBP.A_ScattershotGun_MainBody_AnimBP_C
// Size: 0x918 (Inherited: 0x2c0)
struct UA_ScattershotGun_MainBody_AnimBP_C : UMistScattershotGunAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2f8(0xf0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x3e8(0xb8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x4a0(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x560(0x28)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x588(0xb0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x638(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x6e8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x710(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x738(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x7b0(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x828(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x8a0(0x78)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function A_ScattershotGun_MainBody_AnimBP.A_ScattershotGun_MainBody_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGun_MainBody_AnimBP_AnimGraphNode_BlendListByEnum_188C5D394E0C34909255AA970F33D525(); // Function A_ScattershotGun_MainBody_AnimBP.A_ScattershotGun_MainBody_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGun_MainBody_AnimBP_AnimGraphNode_BlendListByEnum_188C5D394E0C34909255AA970F33D525 // (BlueprintEvent) // @ game+0x163f1c0
	void AnimNotify_Reload_L(); // Function A_ScattershotGun_MainBody_AnimBP.A_ScattershotGun_MainBody_AnimBP_C.AnimNotify_Reload_L // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AnimNotify_Reload_R(); // Function A_ScattershotGun_MainBody_AnimBP.A_ScattershotGun_MainBody_AnimBP_C.AnimNotify_Reload_R // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGun_MainBody_AnimBP_AnimGraphNode_BlendListByEnum_E20C9475403E0416F80957B2158B8C60(); // Function A_ScattershotGun_MainBody_AnimBP.A_ScattershotGun_MainBody_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGun_MainBody_AnimBP_AnimGraphNode_BlendListByEnum_E20C9475403E0416F80957B2158B8C60 // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_A_ScattershotGun_MainBody_AnimBP(int32_t EntryPoint); // Function A_ScattershotGun_MainBody_AnimBP.A_ScattershotGun_MainBody_AnimBP_C.ExecuteUbergraph_A_ScattershotGun_MainBody_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

