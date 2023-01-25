// BlueprintGeneratedClass KillinMob.KillinMob_C
// Size: 0x781 (Inherited: 0x6e8)
struct AKillinMob_C : AMistPhysicalCapsuleMob {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e8(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x6f0(0x08)
	struct UMistPhysicalMobAttackArea* GrabAttackArea; // 0x6f8(0x08)
	struct UCapsuleComponent* Capsule; // 0x700(0x08)
	struct UCapsuleComponent* ClawAttackDamageArea; // 0x708(0x08)
	struct UMistPhysicalMobSkeletalMesh* SkeletalMesh; // 0x710(0x08)
	struct UAudioComponent* Wings; // 0x718(0x08)
	struct UKillinMobAnimDataComponent_C* KillinMobAnimDataComponent; // 0x720(0x08)
	struct UMistPhysicalMobAttackArea* MistPhysicalMobAttackArea2; // 0x728(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x730(0x08)
	struct UAudioComponent* VO; // 0x738(0x08)
	bool IsAlive; // 0x740(0x01)
	char pad_741[0x3]; // 0x741(0x03)
	float VolumeMultiplier; // 0x744(0x04)
	struct UAudioComponent* KillinBark; // 0x748(0x08)
	struct UAudioComponent* Bite; // 0x750(0x08)
	struct UAudioComponent* ActionVO; // 0x758(0x08)
	struct UAudioComponent* VOPain; // 0x760(0x08)
	struct UAudioComponent* Dive; // 0x768(0x08)
	struct UAudioComponent* Glide; // 0x770(0x08)
	struct UMistPhysicalMobAnimInstance* PhysicalMobAnimInstance; // 0x778(0x08)
	bool IsStartingToDive; // 0x780(0x01)

	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function KillinMob.KillinMob_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveStateChanged(enum class EMistCharacterState PrevState, enum class EMistCharacterState NewState); // Function KillinMob.KillinMob_C.ReceiveStateChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function KillinMob.KillinMob_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function KillinMob.KillinMob_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void CheckFlightStatus(); // Function KillinMob.KillinMob_C.CheckFlightStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastAnyDamage(struct UDamageType* Damage Type, float Damage, struct FDamageSource DamageSource); // Function KillinMob.KillinMob_C.MulticastAnyDamage // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Bark(); // Function KillinMob.KillinMob_C.Bark // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_KillinMob(int32_t EntryPoint); // Function KillinMob.KillinMob_C.ExecuteUbergraph_KillinMob // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

