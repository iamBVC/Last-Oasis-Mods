// BlueprintGeneratedClass DefaultRupuMob.DefaultRupuMob_C
// Size: 0xb48 (Inherited: 0xac0)
struct ADefaultRupuMob_C : AMistHumanoidMob {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xac0(0x08)
	struct USkeletalMeshComponentBudgeted* Fur; // 0xac8(0x08)
	struct UMistAttackDirectionWidgetComponent* MistAttackDirectionWidget; // 0xad0(0x08)
	struct UAudioComponent* Voice; // 0xad8(0x08)
	struct USceneComponent* VO; // 0xae0(0x08)
	struct UMobMeleeCombatComponent_C* MobMeleeCombatComponent; // 0xae8(0x08)
	struct UAudioComponent* Footstep; // 0xaf0(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0xaf8(0x08)
	float RupuDeadVolumeMultiplier; // 0xb00(0x04)
	bool IsInWater_1; // 0xb04(0x01)
	char pad_B05[0x3]; // 0xb05(0x03)
	struct FVector RipplePosition_1; // 0xb08(0x0c)
	char pad_B14[0x4]; // 0xb14(0x04)
	struct FTimerHandle TimerRipples; // 0xb18(0x08)
	float WaterRippleParticle; // 0xb20(0x04)
	float TimeBetweenParticleIsSpawned; // 0xb24(0x04)
	bool StepLeftFired; // 0xb28(0x01)
	bool StepRightFired; // 0xb29(0x01)
	char pad_B2A[0x6]; // 0xb2a(0x06)
	struct URupuSoundTypeAsset_C* RupuSoundType; // 0xb30(0x08)
	struct USkeletalMeshComponent* FoldedNetMesh; // 0xb38(0x08)
	struct UPhysicsConstraintComponent* Constraint; // 0xb40(0x08)

	void JogTypeDefiner(int32_t& JogType); // Function DefaultRupuMob.DefaultRupuMob_C.JogTypeDefiner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void VOTakingDamegeDefiner(float Damage, int32_t& VOType); // Function DefaultRupuMob.DefaultRupuMob_C.VOTakingDamegeDefiner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioSetFalseStepFiredRight(); // Function DefaultRupuMob.DefaultRupuMob_C.AudioSetFalseStepFiredRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StepDefinerRight(int32_t StepType, float VolumeMultiplier, float NotifyVolumeMultiplier); // Function DefaultRupuMob.DefaultRupuMob_C.StepDefinerRight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioSetFalseStepFiredLeft(); // Function DefaultRupuMob.DefaultRupuMob_C.AudioSetFalseStepFiredLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StepDefinerLeft(int32_t StepType, float VolumeMultiplier, float NotifyVolumeMultiplier, struct USoundAttenuation* Attenuation); // Function DefaultRupuMob.DefaultRupuMob_C.StepDefinerLeft // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AudioHandleWhooshNotify(struct USoundCue* BluntSound, struct USoundCue* CutSound, struct USoundCue* PierceSound, struct USoundCue* UnarmedSound, float VolumeMultiplier, float PitchMultiplier); // Function DefaultRupuMob.DefaultRupuMob_C.AudioHandleWhooshNotify // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UserConstructionScript(); // Function DefaultRupuMob.DefaultRupuMob_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastAnyDamage(float Damage); // Function DefaultRupuMob.DefaultRupuMob_C.MulticastAnyDamage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveStateChanged(enum class EMistCharacterState PrevState, enum class EMistCharacterState NewState); // Function DefaultRupuMob.DefaultRupuMob_C.ReceiveStateChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void Small step(struct FVector Position); // Function DefaultRupuMob.DefaultRupuMob_C.Small step // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Step (struct FVector Position); // Function DefaultRupuMob.DefaultRupuMob_C.Step  // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Huge step(struct FVector Position); // Function DefaultRupuMob.DefaultRupuMob_C.Huge step // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function DefaultRupuMob.DefaultRupuMob_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void CustomEvent(); // Function DefaultRupuMob.DefaultRupuMob_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StartContinuousRipple(); // Function DefaultRupuMob.DefaultRupuMob_C.StartContinuousRipple // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EndContinuousRipple(); // Function DefaultRupuMob.DefaultRupuMob_C.EndContinuousRipple // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function DefaultRupuMob.DefaultRupuMob_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function DefaultRupuMob.DefaultRupuMob_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function DefaultRupuMob.DefaultRupuMob_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function DefaultRupuMob.DefaultRupuMob_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnRupuBeginCombat(); // Function DefaultRupuMob.DefaultRupuMob_C.OnRupuBeginCombat // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_DefaultRupuMob(int32_t EntryPoint); // Function DefaultRupuMob.DefaultRupuMob_C.ExecuteUbergraph_DefaultRupuMob // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

