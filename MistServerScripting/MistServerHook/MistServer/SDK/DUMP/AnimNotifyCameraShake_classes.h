// BlueprintGeneratedClass AnimNotifyCameraShake.AnimNotifyCameraShake_C
// Size: 0x55 (Inherited: 0x38)
struct UAnimNotifyCameraShake_C : UAnimNotify {
	struct FName SocketName; // 0x38(0x08)
	struct UCameraShake* ShakeClass; // 0x40(0x08)
	float InnerRadius; // 0x48(0x04)
	float OuterRadius; // 0x4c(0x04)
	float Falloff; // 0x50(0x04)
	bool bDrawDebug; // 0x54(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyCameraShake.AnimNotifyCameraShake_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x163f1c0
};

