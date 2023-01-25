// BlueprintGeneratedClass Exoskeleton_BP.Exoskeleton_BP_C
// Size: 0xb60 (Inherited: 0xa90)
struct AExoskeleton_BP_C : AMistExoskeleton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa90(0x08)
	struct UCharacterFXManager_C* CharacterFXManager; // 0xa98(0x08)
	struct UBoxComponent* Placement6; // 0xaa0(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0xaa8(0x08)
	struct UMistWalkerPartSocketComponent* RightWeaponSocket; // 0xab0(0x08)
	struct UMistWalkerPartSocketComponent* LeftWeaponSocket; // 0xab8(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0xac0(0x08)
	struct UMistInteractableInventoryComponent* MistInteractableInventory; // 0xac8(0x08)
	struct USceneComponent* RightGunShotPoint; // 0xad0(0x08)
	struct USceneComponent* LeftGunShotPoint; // 0xad8(0x08)
	struct UMistExoskeletonControlComponent* MistExoskeletonControl; // 0xae0(0x08)
	struct USceneComponent* Pitch; // 0xae8(0x08)
	struct USceneComponent* Yaw; // 0xaf0(0x08)
	struct UCameraComponent* Camera; // 0xaf8(0x08)
	struct UPlayerCameraSpringArm_C* PlayerCameraSpringArm; // 0xb00(0x08)
	struct UMistInteractableComponent* Interactable; // 0xb08(0x08)
	struct USceneComponent* Detach; // 0xb10(0x08)
	struct USceneComponent* Attach; // 0xb18(0x08)
	bool ListenerIsInRange; // 0xb20(0x01)
	char pad_B21[0x3]; // 0xb21(0x03)
	float ArmYawLocal; // 0xb24(0x04)
	float ArmPitchLocal; // 0xb28(0x04)
	char pad_B2C[0x4]; // 0xb2c(0x04)
	struct UAudioComponent* ArmMovementCue; // 0xb30(0x08)
	struct USkeletalMeshComponent* MeshComponent; // 0xb38(0x08)
	struct UAudioComponent* HighTensionCreaking; // 0xb40(0x08)
	struct UAudioComponent* FallingCue; // 0xb48(0x08)
	struct TArray<struct FSStepParticles> TempStepParticles; // 0xb50(0x10)

	void ProcesStep(struct USkeletalMeshComponent* SkeletalMeshComponetn, struct FName NotifyName, struct TArray<struct FSStepParticles>& ParticleTemplates); // Function Exoskeleton_BP.Exoskeleton_BP_C.ProcesStep // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function Exoskeleton_BP.Exoskeleton_BP_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastAnyDamage(struct UDamageType* Damage Type, float Damage); // Function Exoskeleton_BP.Exoskeleton_BP_C.MulticastAnyDamage // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveStateChanged(enum class EMistCharacterState PrevState, enum class EMistCharacterState NewState); // Function Exoskeleton_BP.Exoskeleton_BP_C.ReceiveStateChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function Exoskeleton_BP.Exoskeleton_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void CheckIfListenerIsInRange(); // Function Exoskeleton_BP.Exoskeleton_BP_C.CheckIfListenerIsInRange // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function Exoskeleton_BP.Exoskeleton_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function Exoskeleton_BP.Exoskeleton_BP_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_3_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function Exoskeleton_BP.Exoskeleton_BP_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_3_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistExoskeletonControl_K2Node_ComponentBoundEvent_4_PlayerEnteredLeftEvent__DelegateSignature(struct AMistCharacter* Player); // Function Exoskeleton_BP.Exoskeleton_BP_C.BndEvt__MistExoskeletonControl_K2Node_ComponentBoundEvent_4_PlayerEnteredLeftEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistExoskeletonControl_K2Node_ComponentBoundEvent_5_PlayerEnteredLeftEvent__DelegateSignature(struct AMistCharacter* Player); // Function Exoskeleton_BP.Exoskeleton_BP_C.BndEvt__MistExoskeletonControl_K2Node_ComponentBoundEvent_5_PlayerEnteredLeftEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_Exoskeleton_BP(int32_t EntryPoint); // Function Exoskeleton_BP.Exoskeleton_BP_C.ExecuteUbergraph_Exoskeleton_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

