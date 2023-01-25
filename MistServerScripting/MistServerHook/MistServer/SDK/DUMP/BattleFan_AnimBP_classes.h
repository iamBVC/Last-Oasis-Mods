// AnimBlueprintGeneratedClass BattleFan_AnimBP.BattleFan_AnimBP_C
// Size: 0x908 (Inherited: 0x270)
struct UBattleFan_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2a8(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x358(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x3d0(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x448(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x4c0(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x538(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x5b0(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x628(0x78)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x6a0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7a8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7c8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7e8(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x860(0x78)
	enum class EMistBattleFanState FanState; // 0x8d8(0x01)
	char pad_8D9[0x3]; // 0x8d9(0x03)
	float SuperChargeAnimPlayrate; // 0x8dc(0x04)
	struct UAnimSequence* SuperChargeAnimation; // 0x8e0(0x08)
	struct FRotator PitchRotation; // 0x8e8(0x0c)
	float ExhaustLoopPlayRate; // 0x8f4(0x04)
	struct UMistBattleFanComponent* BattleFanComponent; // 0x8f8(0x08)
	float CurrentSuperChargeAnimPlayrate; // 0x900(0x04)
	float SuperSuckPlayrate; // 0x904(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function BattleFan_AnimBP.BattleFan_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function BattleFan_AnimBP.BattleFan_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintInitializeAnimation(); // Function BattleFan_AnimBP.BattleFan_AnimBP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintBeginPlay(); // Function BattleFan_AnimBP.BattleFan_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BattleFan_AnimBP(int32_t EntryPoint); // Function BattleFan_AnimBP.BattleFan_AnimBP_C.ExecuteUbergraph_BattleFan_AnimBP // (Final|UbergraphFunction) // @ game+0x163f1c0
};

