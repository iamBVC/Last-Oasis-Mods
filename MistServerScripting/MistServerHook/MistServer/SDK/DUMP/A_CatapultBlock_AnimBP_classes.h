// AnimBlueprintGeneratedClass A_CatapultBlock_AnimBP.A_CatapultBlock_AnimBP_C
// Size: 0x310 (Inherited: 0x290)
struct UA_CatapultBlock_AnimBP_C : UMistCatapultAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2c8(0x48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function A_CatapultBlock_AnimBP.A_CatapultBlock_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function A_CatapultBlock_AnimBP.A_CatapultBlock_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_A_CatapultBlock_AnimBP(int32_t EntryPoint); // Function A_CatapultBlock_AnimBP.A_CatapultBlock_AnimBP_C.ExecuteUbergraph_A_CatapultBlock_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

