// AnimBlueprintGeneratedClass A_ScattershotGunOperation_AnimBP.A_ScattershotGunOperation_AnimBP_C
// Size: 0xb68 (Inherited: 0x2c0)
struct UA_ScattershotGunOperation_AnimBP_C : UMistScattershotGunOperationAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2c8(0xa0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x368(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x428(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x450(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4c8(0x78)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x540(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x568(0xb8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x620(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x648(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x670(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x698(0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x6c0(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x7b0(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x7e0(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x8d0(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x900(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x9f0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa20(0xb0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xad0(0x30)
	struct FTransform LHand_IKTarget; // 0xb00(0x30)
	struct FTransform RHand_IKTarget; // 0xb30(0x30)
	float LHand_IKAlpha; // 0xb60(0x04)
	float RHand_IKAlpha; // 0xb64(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function A_ScattershotGunOperation_AnimBP.A_ScattershotGunOperation_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGunOperation_AnimBP_AnimGraphNode_TransitionResult_D9ACF11743755FDD1A7EF6A08D114FFB(); // Function A_ScattershotGunOperation_AnimBP.A_ScattershotGunOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGunOperation_AnimBP_AnimGraphNode_TransitionResult_D9ACF11743755FDD1A7EF6A08D114FFB // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGunOperation_AnimBP_AnimGraphNode_TransitionResult_D5E559554DED59F926BC9ABA99B8FE4D(); // Function A_ScattershotGunOperation_AnimBP.A_ScattershotGunOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGunOperation_AnimBP_AnimGraphNode_TransitionResult_D5E559554DED59F926BC9ABA99B8FE4D // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGunOperation_AnimBP_AnimGraphNode_TransitionResult_0F9779594E0D2D82D1BF938501DB385C(); // Function A_ScattershotGunOperation_AnimBP.A_ScattershotGunOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGunOperation_AnimBP_AnimGraphNode_TransitionResult_0F9779594E0D2D82D1BF938501DB385C // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGunOperation_AnimBP_AnimGraphNode_LayeredBoneBlend_54CF56F8468799F2E51B8081D02904A6(); // Function A_ScattershotGunOperation_AnimBP.A_ScattershotGunOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGunOperation_AnimBP_AnimGraphNode_LayeredBoneBlend_54CF56F8468799F2E51B8081D02904A6 // (BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function A_ScattershotGunOperation_AnimBP.A_ScattershotGunOperation_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintInitializeAnimation(); // Function A_ScattershotGunOperation_AnimBP.A_ScattershotGunOperation_AnimBP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGunOperation_AnimBP_AnimGraphNode_TransitionResult_941624FA44D79DABFE1F19B2A4390277(); // Function A_ScattershotGunOperation_AnimBP.A_ScattershotGunOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_A_ScattershotGunOperation_AnimBP_AnimGraphNode_TransitionResult_941624FA44D79DABFE1F19B2A4390277 // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_A_ScattershotGunOperation_AnimBP(int32_t EntryPoint); // Function A_ScattershotGunOperation_AnimBP.A_ScattershotGunOperation_AnimBP_C.ExecuteUbergraph_A_ScattershotGunOperation_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

