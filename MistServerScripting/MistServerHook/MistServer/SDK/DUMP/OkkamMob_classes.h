// BlueprintGeneratedClass OkkamMob.OkkamMob_C
// Size: 0x7b8 (Inherited: 0x6e8)
struct AOkkamMob_C : AMistPhysicalLeggedMob {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e8(0x08)
	struct UMistPhysicalMobAttackArea* MistPhysicalMobAttackArea8; // 0x6f0(0x08)
	struct UMistPhysicalMobAttackArea* MistPhysicalMobAttackArea6; // 0x6f8(0x08)
	struct UMistPhysicalMobAttackArea* MistPhysicalMobAttackArea7; // 0x700(0x08)
	struct UAudioComponent* HideInOut; // 0x708(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x710(0x08)
	struct UMobBody* Body4; // 0x718(0x08)
	struct UMobBody* Body3; // 0x720(0x08)
	struct UMobBody* Body2; // 0x728(0x08)
	struct UMobBody* body1; // 0x730(0x08)
	struct UMistPhysicalMobAttackArea* MistPhysicalMobAttackArea1; // 0x738(0x08)
	struct UMistPhysicalMobAttackArea* MistPhysicalMobAttackArea2; // 0x740(0x08)
	struct UMistPhysicalMobAttackArea* MistPhysicalMobAttackArea4; // 0x748(0x08)
	struct UMistPhysicalMobAttackArea* MistPhysicalMobAttackArea3; // 0x750(0x08)
	struct UMistPhysicalMobAttackArea* MistPhysicalMobAttackArea5; // 0x758(0x08)
	struct UOkkamMobAnimDataComponent_C* OkkamMobAnimDataComponent; // 0x760(0x08)
	struct UMistPhysicalMobSkeletalMesh* MobSkeletalMesh; // 0x768(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x770(0x08)
	struct UMobBody* Body; // 0x778(0x08)
	struct UMobLimb* Leg_BackLeft; // 0x780(0x08)
	struct UMobLimb* Leg_BackRight; // 0x788(0x08)
	struct UMobLimb* Leg_FrontRight; // 0x790(0x08)
	struct UMobLimb* Leg_FrontLeft; // 0x798(0x08)
	bool IsAlive; // 0x7a0(0x01)
	char pad_7A1[0x3]; // 0x7a1(0x03)
	float VolumeMultiplier; // 0x7a4(0x04)
	struct UAudioComponent* VOPain; // 0x7a8(0x08)
	struct UAudioComponent* VODeath; // 0x7b0(0x08)

	void ReceiveStateChanged(enum class EMistCharacterState PrevState, enum class EMistCharacterState NewState); // Function OkkamMob.OkkamMob_C.ReceiveStateChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function OkkamMob.OkkamMob_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function OkkamMob.OkkamMob_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastAnyDamage(struct UDamageType* Damage Type, float Damage, struct FDamageSource DamageSource); // Function OkkamMob.OkkamMob_C.MulticastAnyDamage // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_OkkamMob(int32_t EntryPoint); // Function OkkamMob.OkkamMob_C.ExecuteUbergraph_OkkamMob // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

