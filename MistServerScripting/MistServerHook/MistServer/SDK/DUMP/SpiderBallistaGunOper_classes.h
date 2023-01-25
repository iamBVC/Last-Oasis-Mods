// AnimBlueprintGeneratedClass SpiderBallistaGunOper.SpiderBallistaGunOper_C
// Size: 0xc08 (Inherited: 0x2a0)
struct USpiderBallistaGunOper_C : UMistBallistaOperationAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x2a8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x2c8(0x20)
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x2f0(0x1e0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x4d0(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x570(0xa0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x610(0x48)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x658(0x48)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x6a0(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x6d0(0xf0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x7c0(0xc0)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x880(0x1e0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xa60(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xa80(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xaa0(0xf0)
	struct FVector LeftHandIKEffector; // 0xb90(0x0c)
	struct FVector RightHandIKEffector; // 0xb9c(0x0c)
	struct FName RightHandTarget; // 0xba8(0x08)
	struct FName LeftHandTarget; // 0xbb0(0x08)
	float LeftHandIKAlpha; // 0xbb8(0x04)
	float RightHandIKAlpha; // 0xbbc(0x04)
	float ReloadMultiplier; // 0xbc0(0x04)
	char pad_BC4[0x4]; // 0xbc4(0x04)
	struct UAnimSequenceBase* Reload Anim Ref; // 0xbc8(0x08)
	struct UAnimSequence* RollingAnimation; // 0xbd0(0x08)
	float ReelPos; // 0xbd8(0x04)
	bool BallistaLoaded; // 0xbdc(0x01)
	char pad_BDD[0x3]; // 0xbdd(0x03)
	float LoadingProgress; // 0xbe0(0x04)
	float FireProgress; // 0xbe4(0x04)
	bool BallistaFired; // 0xbe8(0x01)
	char pad_BE9[0x3]; // 0xbe9(0x03)
	float LoadingTimer; // 0xbec(0x04)
	float FireTimer; // 0xbf0(0x04)
	char pad_BF4[0x4]; // 0xbf4(0x04)
	struct USpiderBallistaPedalsAnimBP_C* SpiderBall_Cast; // 0xbf8(0x08)
	struct UStaticMeshComponent* Missile; // 0xc00(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SpiderBallistaGunOper.SpiderBallistaGunOper_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Ballista_Firing(); // Function SpiderBallistaGunOper.SpiderBallistaGunOper_C.Ballista_Firing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_ReelPos(); // Function SpiderBallistaGunOper.SpiderBallistaGunOper_C.OnRep_ReelPos // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Ballista_Reloading(); // Function SpiderBallistaGunOper.SpiderBallistaGunOper_C.Ballista_Reloading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpiderBallistaGunOper_AnimGraphNode_BlendSpacePlayer_0E2B59614FD726D11025408FD0021E87(); // Function SpiderBallistaGunOper.SpiderBallistaGunOper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpiderBallistaGunOper_AnimGraphNode_BlendSpacePlayer_0E2B59614FD726D11025408FD0021E87 // (BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SpiderBallistaGunOper.SpiderBallistaGunOper_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintInitializeAnimation(); // Function SpiderBallistaGunOper.SpiderBallistaGunOper_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SpiderBallistaGunOper(int32_t EntryPoint); // Function SpiderBallistaGunOper.SpiderBallistaGunOper_C.ExecuteUbergraph_SpiderBallistaGunOper // (Final|UbergraphFunction) // @ game+0x163f1c0
};

