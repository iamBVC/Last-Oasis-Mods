// AnimBlueprintGeneratedClass A_Scattergun_Wheel_AnimBP.A_Scattergun_Wheel_AnimBP_C
// Size: 0x3e8 (Inherited: 0x2c0)
struct UA_Scattergun_Wheel_AnimBP_C : UMistDoubleBarreledGunAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2f8(0xf0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function A_Scattergun_Wheel_AnimBP.A_Scattergun_Wheel_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_A_Scattergun_Wheel_AnimBP(int32_t EntryPoint); // Function A_Scattergun_Wheel_AnimBP.A_Scattergun_Wheel_AnimBP_C.ExecuteUbergraph_A_Scattergun_Wheel_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

