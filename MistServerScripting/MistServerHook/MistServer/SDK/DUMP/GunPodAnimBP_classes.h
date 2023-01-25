// AnimBlueprintGeneratedClass GunPodAnimBP.GunPodAnimBP_C
// Size: 0x944 (Inherited: 0x2a0)
struct UGunPodAnimBP_C : UMistBallistaOperationAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2a8(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x2d8(0xf0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x3c8(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x480(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x4a8(0xc0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x568(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x5b0(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x668(0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x690(0xf0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x780(0xb8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x838(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x8f8(0x28)
	float TurnLR; // 0x920(0x04)
	float TurnUD; // 0x924(0x04)
	float InterpSpeed; // 0x928(0x04)
	float LastYaw; // 0x92c(0x04)
	float LastPitch; // 0x930(0x04)
	float DeltaTimeLac; // 0x934(0x04)
	float RollAnimProgress; // 0x938(0x04)
	bool Fire; // 0x93c(0x01)
	char pad_93D[0x3]; // 0x93d(0x03)
	float InFrameGearsRot; // 0x940(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function GunPodAnimBP.GunPodAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function GunPodAnimBP.GunPodAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_GunPodAnimBP(int32_t EntryPoint); // Function GunPodAnimBP.GunPodAnimBP_C.ExecuteUbergraph_GunPodAnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

