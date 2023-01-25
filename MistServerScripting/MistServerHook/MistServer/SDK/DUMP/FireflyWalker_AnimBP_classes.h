// AnimBlueprintGeneratedClass FireflyWalker_AnimBP.FireflyWalker_AnimBP_C
// Size: 0x5a8 (Inherited: 0x2c0)
struct UFireflyWalker_AnimBP_C : UMistSmallWalkerControlAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_2; // 0x2f8(0xf8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3f0(0xa0)
	struct FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator; // 0x490(0xf8)
	int32_t Sprint_Mltpl; // 0x588(0x04)
	float Curr_Time; // 0x58c(0x04)
	float AnimAssetLenght; // 0x590(0x04)
	float Mpl; // 0x594(0x04)
	float InitSpeedTolerance; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct ASpiderWalkerBase_C* WalkerBase; // 0x5a0(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function FireflyWalker_AnimBP.FireflyWalker_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FireflyWalker_AnimBP_AnimGraphNode_BlendListByBool_6D6EEA5D40CC57C318043BA5DCE1ABB2(); // Function FireflyWalker_AnimBP.FireflyWalker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FireflyWalker_AnimBP_AnimGraphNode_BlendListByBool_6D6EEA5D40CC57C318043BA5DCE1ABB2 // (BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function FireflyWalker_AnimBP.FireflyWalker_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintInitializeAnimation(); // Function FireflyWalker_AnimBP.FireflyWalker_AnimBP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_FireflyWalker_AnimBP(int32_t EntryPoint); // Function FireflyWalker_AnimBP.FireflyWalker_AnimBP_C.ExecuteUbergraph_FireflyWalker_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

