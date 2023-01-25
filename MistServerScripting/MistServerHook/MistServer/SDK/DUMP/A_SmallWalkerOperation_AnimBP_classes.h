// AnimBlueprintGeneratedClass A_SmallWalkerOperation_AnimBP.A_SmallWalkerOperation_AnimBP_C
// Size: 0xa9c (Inherited: 0x2c0)
struct UA_SmallWalkerOperation_AnimBP_C : UMistSmallWalkerControlAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2c8(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2e8(0x108)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x3f0(0xc0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x4b0(0xc0)
	struct FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_2; // 0x570(0xf8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x668(0xa0)
	struct FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator; // 0x708(0xf8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x800(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x830(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x8d0(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x988(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x9b0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9d8(0x78)
	struct FRotator HeadRot; // 0xa50(0x0c)
	float Head_Yaw; // 0xa5c(0x04)
	float EX_Time; // 0xa60(0x04)
	float LastSpeed; // 0xa64(0x04)
	int32_t FrameCounter; // 0xa68(0x04)
	float DeltaSpeedCurr; // 0xa6c(0x04)
	struct FDebugFloatHistory FloatHistory; // 0xa70(0x20)
	float Easing; // 0xa90(0x04)
	float DeltaSpeedTar; // 0xa94(0x04)
	float LocalInitSpeedTolerance; // 0xa98(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function A_SmallWalkerOperation_AnimBP.A_SmallWalkerOperation_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void RotHead(); // Function A_SmallWalkerOperation_AnimBP.A_SmallWalkerOperation_AnimBP_C.RotHead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpeedDelta(); // Function A_SmallWalkerOperation_AnimBP.A_SmallWalkerOperation_AnimBP_C.SpeedDelta // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function A_SmallWalkerOperation_AnimBP.A_SmallWalkerOperation_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintInitializeAnimation(); // Function A_SmallWalkerOperation_AnimBP.A_SmallWalkerOperation_AnimBP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_SmallWalkerOperation_AnimBP_AnimGraphNode_BlendListByBool_AF38D1EB4134F760C3A6A39F3E674927(); // Function A_SmallWalkerOperation_AnimBP.A_SmallWalkerOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_SmallWalkerOperation_AnimBP_AnimGraphNode_BlendListByBool_AF38D1EB4134F760C3A6A39F3E674927 // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_SmallWalkerOperation_AnimBP_AnimGraphNode_BlendListByBool_65BD97AF4CDF234FB96C3E9D071C801E(); // Function A_SmallWalkerOperation_AnimBP.A_SmallWalkerOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_SmallWalkerOperation_AnimBP_AnimGraphNode_BlendListByBool_65BD97AF4CDF234FB96C3E9D071C801E // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_A_SmallWalkerOperation_AnimBP(int32_t EntryPoint); // Function A_SmallWalkerOperation_AnimBP.A_SmallWalkerOperation_AnimBP_C.ExecuteUbergraph_A_SmallWalkerOperation_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

