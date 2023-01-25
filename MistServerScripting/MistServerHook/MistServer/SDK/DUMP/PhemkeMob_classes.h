// BlueprintGeneratedClass PhemkeMob.PhemkeMob_C
// Size: 0x728 (Inherited: 0x6e8)
struct APhemkeMob_C : AMistPhysicalCapsuleMob {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e8(0x08)
	struct UMistPhysicalMobSkeletalMesh* SK_Phemke; // 0x6f0(0x08)
	struct UAudioComponent* VO; // 0x6f8(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x700(0x08)
	struct UPhemkeMobAnimDataComponent_C* PhemkeMobAnimDataComponent; // 0x708(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x710(0x08)
	bool IsAlive; // 0x718(0x01)
	char pad_719[0x7]; // 0x719(0x07)
	struct UAudioComponent* PhemkeBark; // 0x720(0x08)

	void BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature(struct USkeletalMeshComponent* MeshComponent, struct UAnimSequenceBase* Animation, struct FName& NotifyName, float VolumeMultiplier); // Function PhemkeMob.PhemkeMob_C.BndEvt__MistSoundNotifyListener_K2Node_ComponentBoundEvent_0_SoundNotifyEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveStateChanged(enum class EMistCharacterState PrevState, enum class EMistCharacterState NewState); // Function PhemkeMob.PhemkeMob_C.ReceiveStateChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function PhemkeMob.PhemkeMob_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastAnyDamage(); // Function PhemkeMob.PhemkeMob_C.MulticastAnyDamage // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_PhemkeMob(int32_t EntryPoint); // Function PhemkeMob.PhemkeMob_C.ExecuteUbergraph_PhemkeMob // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

