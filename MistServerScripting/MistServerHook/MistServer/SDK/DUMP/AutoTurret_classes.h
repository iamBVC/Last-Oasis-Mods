// BlueprintGeneratedClass AutoTurret.AutoTurret_C
// Size: 0x682 (Inherited: 0x5e8)
struct AAutoTurret_C : AMistTurretStructure {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e8(0x08)
	struct UAudioComponent* RupuVO; // 0x5f0(0x08)
	struct UMistSkeletalMeshComponent* Slingshot3; // 0x5f8(0x08)
	struct UMistSkeletalMeshComponent* Slingshot2; // 0x600(0x08)
	struct UMistSkeletalMeshComponent* Slingshot1; // 0x608(0x08)
	struct UStaticMeshComponent* SM_RupuTurretBase; // 0x610(0x08)
	struct USceneComponent* Rotator; // 0x618(0x08)
	struct UArrowComponent* Arrow; // 0x620(0x08)
	struct UBoxComponent* Placement3; // 0x628(0x08)
	struct UBoxComponent* Collision3; // 0x630(0x08)
	struct UBoxComponent* Collision2; // 0x638(0x08)
	struct UBoxComponent* Collision; // 0x640(0x08)
	struct UBoxComponent* Placement2; // 0x648(0x08)
	struct UMistInteractableInventoryComponent* InteractableInventory; // 0x650(0x08)
	struct UMistContainerComponent* MistContainer; // 0x658(0x08)
	struct UAudioComponent* Damaged; // 0x660(0x08)
	bool HasTarget; // 0x668(0x01)
	char pad_669[0x3]; // 0x669(0x03)
	float RandomRotationValue; // 0x66c(0x04)
	float RandomRotationTime; // 0x670(0x04)
	float Tar_Rot_RT; // 0x674(0x04)
	bool IsShooting; // 0x678(0x01)
	char pad_679[0x3]; // 0x679(0x03)
	float ReloadProg; // 0x67c(0x04)
	bool LoadinTimer; // 0x680(0x01)
	bool HasAmmo; // 0x681(0x01)

	void ReceivePlaceableConstructed(struct AMistPlayer* Player, struct FTransform& Transform, int32_t ItemIndex); // Function AutoTurret.AutoTurret_C.ReceivePlaceableConstructed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function AutoTurret.AutoTurret_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlaceableDestroyed(struct FTransform& Transform, int32_t ItemIndex, enum class EMistDestroyReason Reason); // Function AutoTurret.AutoTurret_C.ReceivePlaceableDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastAnyDamage(float Damage, struct UDamageType* DamageType); // Function AutoTurret.AutoTurret_C.MulticastAnyDamage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnWindupInterrupted_Event_1(); // Function AutoTurret.AutoTurret_C.OnWindupInterrupted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnWindupStarted_Event_1(); // Function AutoTurret.AutoTurret_C.OnWindupStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnTurretFired_Event_1(); // Function AutoTurret.AutoTurret_C.OnTurretFired_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function AutoTurret.AutoTurret_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnPatrolRotationStarted_Event_1(float AngleDifference); // Function AutoTurret.AutoTurret_C.OnPatrolRotationStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function AutoTurret.AutoTurret_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void OnTargetChanged_2(); // Function AutoTurret.AutoTurret_C.OnTargetChanged_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_AutoTurret(int32_t EntryPoint); // Function AutoTurret.AutoTurret_C.ExecuteUbergraph_AutoTurret // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

