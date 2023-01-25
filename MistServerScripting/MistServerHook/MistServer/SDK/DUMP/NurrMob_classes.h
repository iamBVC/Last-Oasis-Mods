// BlueprintGeneratedClass NurrMob.NurrMob_C
// Size: 0x790 (Inherited: 0x6e8)
struct ANurrMob_C : AMistPhysicalCapsuleMob {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e8(0x08)
	struct UCapsuleComponent* Capsule; // 0x6f0(0x08)
	struct UCapsuleComponent* LeapAttackDamageArea; // 0x6f8(0x08)
	struct UCapsuleComponent* SlideOffCollision; // 0x700(0x08)
	struct UMistPhysicalMobSkeletalMesh* SkeletalMesh; // 0x708(0x08)
	struct UAudioComponent* Land; // 0x710(0x08)
	struct UAudioComponent* VO; // 0x718(0x08)
	struct UAudioComponent* Tail; // 0x720(0x08)
	struct UMistPhysicalMobAttackArea* AttackAreaLeap; // 0x728(0x08)
	struct UMistPhysicalMobAttackArea* AttackAreaClawR; // 0x730(0x08)
	struct UCapsuleComponent* BodyCapsule; // 0x738(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x740(0x08)
	struct UMistPhysicalMobAttackArea* AttackAreaTail; // 0x748(0x08)
	struct UMistPhysicalMobAttackArea* AttackAreaClawL; // 0x750(0x08)
	struct UMistPhysicalMobAttackArea* AttackAreaBite; // 0x758(0x08)
	struct UNurrMobAnimDataComponent_C* NurrMobAnimDataComponent; // 0x760(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x768(0x08)
	bool IsAlive; // 0x770(0x01)
	char pad_771[0x3]; // 0x771(0x03)
	float VolumeMultiplier; // 0x774(0x04)
	struct UAudioComponent* NurrBark; // 0x778(0x08)
	struct UAudioComponent* Bite; // 0x780(0x08)
	struct UAudioComponent* NurrPain; // 0x788(0x08)

	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function NurrMob.NurrMob_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveStateChanged(enum class EMistCharacterState PrevState, enum class EMistCharacterState NewState); // Function NurrMob.NurrMob_C.ReceiveStateChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function NurrMob.NurrMob_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_NurrMob(int32_t EntryPoint); // Function NurrMob.NurrMob_C.ExecuteUbergraph_NurrMob // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

