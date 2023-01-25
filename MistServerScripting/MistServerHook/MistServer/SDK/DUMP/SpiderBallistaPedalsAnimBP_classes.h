// AnimBlueprintGeneratedClass SpiderBallistaPedalsAnimBP.SpiderBallistaPedalsAnimBP_C
// Size: 0x340 (Inherited: 0x2c0)
struct USpiderBallistaPedalsAnimBP_C : UMistBallistaAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2f8(0x48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SpiderBallistaPedalsAnimBP.SpiderBallistaPedalsAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SpiderBallistaPedalsAnimBP.SpiderBallistaPedalsAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SpiderBallistaPedalsAnimBP(int32_t EntryPoint); // Function SpiderBallistaPedalsAnimBP.SpiderBallistaPedalsAnimBP_C.ExecuteUbergraph_SpiderBallistaPedalsAnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

