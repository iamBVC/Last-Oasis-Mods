// AnimBlueprintGeneratedClass SawBladeTopMech_AnimBP.SawBladeTopMech_AnimBP_C
// Size: 0x39c (Inherited: 0x270)
struct USawBladeTopMech_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2a8(0xf0)
	float Pitch; // 0x398(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SawBladeTopMech_AnimBP.SawBladeTopMech_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SawBladeTopMech_AnimBP.SawBladeTopMech_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SawBladeTopMech_AnimBP(int32_t EntryPoint); // Function SawBladeTopMech_AnimBP.SawBladeTopMech_AnimBP_C.ExecuteUbergraph_SawBladeTopMech_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

