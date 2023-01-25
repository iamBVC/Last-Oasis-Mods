// AnimBlueprintGeneratedClass SmallWalkerBallistaAnimBP.SmallWalkerBallistaAnimBP_C
// Size: 0x755 (Inherited: 0x2c0)
struct USmallWalkerBallistaAnimBP_C : UMistBallistaAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x2c8(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x368(0xb8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x420(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x450(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4c8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x540(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5e0(0xa0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x680(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6c8(0x78)
	float FireTimer; // 0x740(0x04)
	float FireProgress; // 0x744(0x04)
	bool BallistaLoaded; // 0x748(0x01)
	char pad_749[0x3]; // 0x749(0x03)
	float LoadingTimer; // 0x74c(0x04)
	float LoadingProgress; // 0x750(0x04)
	bool BallistaFired; // 0x754(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SmallWalkerBallistaAnimBP.SmallWalkerBallistaAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SmallWalkerBallistaAnimBP.SmallWalkerBallistaAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void FIreBallista(); // Function SmallWalkerBallistaAnimBP.SmallWalkerBallistaAnimBP_C.FIreBallista // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void LoadBallista(); // Function SmallWalkerBallistaAnimBP.SmallWalkerBallistaAnimBP_C.LoadBallista // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SmallWalkerBallistaAnimBP(int32_t EntryPoint); // Function SmallWalkerBallistaAnimBP.SmallWalkerBallistaAnimBP_C.ExecuteUbergraph_SmallWalkerBallistaAnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

