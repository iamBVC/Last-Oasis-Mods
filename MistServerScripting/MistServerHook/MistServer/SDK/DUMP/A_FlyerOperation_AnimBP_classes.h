// AnimBlueprintGeneratedClass A_FlyerOperation_AnimBP.A_FlyerOperation_AnimBP_C
// Size: 0x3a8 (Inherited: 0x280)
struct UA_FlyerOperation_AnimBP_C : UMistSkyWalkerAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2b8(0xf0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function A_FlyerOperation_AnimBP.A_FlyerOperation_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_A_FlyerOperation_AnimBP(int32_t EntryPoint); // Function A_FlyerOperation_AnimBP.A_FlyerOperation_AnimBP_C.ExecuteUbergraph_A_FlyerOperation_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

