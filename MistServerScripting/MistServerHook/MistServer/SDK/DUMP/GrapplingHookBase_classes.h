// BlueprintGeneratedClass GrapplingHookBase.GrapplingHookBase_C
// Size: 0x441 (Inherited: 0x420)
struct UGrapplingHookBase_C : UMistGrapplingHookComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UMistAudioComponent* UnderTensionAudioComponent; // 0x428(0x08)
	struct UMistAudioComponent* UnderHighTensionAudioComponent; // 0x430(0x08)
	struct UAudioComponent* RopeStress; // 0x438(0x08)
	bool Attached; // 0x440(0x01)

	void ReceiveBeginReelIn(); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveBeginReelIn // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndReelIn(); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveEndReelIn // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginReelOut(); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveBeginReelOut // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndReelOut(); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveEndReelOut // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveChargeUsed(bool bWasLastCharge); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveChargeUsed // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveRequiresCharge(); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveRequiresCharge // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveReset(enum class EMistGrapplingHookResetReason Reason, bool bWasAttached); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveReset // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void MulticastEventReset(enum class EMistGrapplingHookResetReason Reason, bool WasAttached); // Function GrapplingHookBase.GrapplingHookBase_C.MulticastEventReset // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastAttachSound(struct FHitResult HitResult); // Function GrapplingHookBase.GrapplingHookBase_C.MulticastAttachSound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastShot(); // Function GrapplingHookBase.GrapplingHookBase_C.MulticastShot // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastBeginReelIn(); // Function GrapplingHookBase.GrapplingHookBase_C.MulticastBeginReelIn // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastEndReelIn(); // Function GrapplingHookBase.GrapplingHookBase_C.MulticastEndReelIn // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastBeginReelOut(); // Function GrapplingHookBase.GrapplingHookBase_C.MulticastBeginReelOut // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveShot(); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveShot // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void MulticastEndReelOut(); // Function GrapplingHookBase.GrapplingHookBase_C.MulticastEndReelOut // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAttach(struct FHitResult& HitResult); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveAttach // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveDetach(); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveDetach // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveHit(struct FHitResult& HitResult); // Function GrapplingHookBase.GrapplingHookBase_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_GrapplingHookBase(int32_t EntryPoint); // Function GrapplingHookBase.GrapplingHookBase_C.ExecuteUbergraph_GrapplingHookBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

