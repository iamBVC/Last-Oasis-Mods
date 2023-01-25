// AnimBlueprintGeneratedClass BallistaOperation_AnimBP.BallistaOperation_AnimBP_C
// Size: 0x1030 (Inherited: 0x2a0)
struct UBallistaOperation_AnimBP_C : UMistBallistaOperationAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x2a8(0xb8)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x360(0x1e0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x540(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x560(0x20)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x580(0x1e0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x760(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x788(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x7b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x7d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x800(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x828(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x850(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x878(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x8a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x8c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x8f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x918(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x940(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x968(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x990(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x9b8(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x9e8(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xad8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb08(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xb80(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0xbb0(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xca0(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0xcd0(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xdc0(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xdf0(0xf0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xee0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xf10(0xb0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xfc0(0x30)
	struct FVector LeftHandIKEffector; // 0xff0(0x0c)
	struct FVector RightHandIKEffector; // 0xffc(0x0c)
	struct FName RightHandTarget; // 0x1008(0x08)
	struct FName LeftHandTarget; // 0x1010(0x08)
	float LeftHandIKAlpha; // 0x1018(0x04)
	char pad_101C[0x4]; // 0x101c(0x04)
	struct UAnimSequenceBase* Reload Anim Ref; // 0x1020(0x08)
	float RightHandIKAlpha; // 0x1028(0x04)
	float ReloadMultiplier; // 0x102c(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_ABDECFD54D20B890D84B05A5B99ED2B7(); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_ABDECFD54D20B890D84B05A5B99ED2B7 // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_9FB5B8FF4039F3E74E13B1BEA7FF0C89(); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_9FB5B8FF4039F3E74E13B1BEA7FF0C89 // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_2AC61DB64753B4728801DE9A1ED5CEAE(); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_2AC61DB64753B4728801DE9A1ED5CEAE // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_21EC7CFE44670D2DC56751BF687FA49D(); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_21EC7CFE44670D2DC56751BF687FA49D // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_7B90246C4DB5C2503ABA799793891F9A(); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_7B90246C4DB5C2503ABA799793891F9A // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_84451969448FDE811F69328F5D862F7F(); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_84451969448FDE811F69328F5D862F7F // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_820F516D4F0EBC1B2F5B69A0788C25BF(); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_820F516D4F0EBC1B2F5B69A0788C25BF // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_5BD7F53B460266E7BB807888F31EB04D(); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_5BD7F53B460266E7BB807888F31EB04D // (BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_F07012EC4702BD2C302C7D8D85C98E24(); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BallistaOperation_AnimBP_AnimGraphNode_TransitionResult_F07012EC4702BD2C302C7D8D85C98E24 // (BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BallistaOperation_AnimBP(int32_t EntryPoint); // Function BallistaOperation_AnimBP.BallistaOperation_AnimBP_C.ExecuteUbergraph_BallistaOperation_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

