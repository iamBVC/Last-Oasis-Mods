// BlueprintGeneratedClass WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C
// Size: 0x1a4 (Inherited: 0xf0)
struct UWalkerCollisionSoundComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	bool ImpactOccured; // 0xf8(0x01)
	bool DamageOccured; // 0xf9(0x01)
	bool RattleOccured; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)
	struct UAudioComponent* WalkerScrape; // 0x100(0x08)
	struct UAudioComponent* SoundSocket; // 0x108(0x08)
	float MinImpactSpeedForDMG; // 0x110(0x04)
	float ImpactSpeed; // 0x114(0x04)
	float Damage; // 0x118(0x04)
	struct FVector ImpactLocation; // 0x11c(0x0c)
	int32_t ScrapeType; // 0x128(0x04)
	float MaxDamage; // 0x12c(0x04)
	float MinDamage; // 0x130(0x04)
	float MaxSpeed; // 0x134(0x04)
	float SpeedMultiplier; // 0x138(0x04)
	float SoundTreshold; // 0x13c(0x04)
	float RattleTreshold; // 0x140(0x04)
	float ImpactTreshold; // 0x144(0x04)
	float LowImpactMultiplier; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct UPrimitiveComponent* WalkerSkeletalMesh; // 0x150(0x08)
	struct FVector InitialDistance; // 0x158(0x0c)
	char pad_164[0x4]; // 0x164(0x04)
	struct AActor* Sender; // 0x168(0x08)
	struct AActor* Receiver; // 0x170(0x08)
	float DistanceMultiplierImpacts; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FTimerHandle CheckDistanceHandle; // 0x180(0x08)
	bool DistanceSaved; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float DistanceMultiplierScrapes; // 0x18c(0x04)
	float ImpactDirection; // 0x190(0x04)
	bool CollidedWithWalker; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float CollisionTypeVolMultiplier; // 0x198(0x04)
	float LastCollisionTime; // 0x19c(0x04)
	float SpiderGroundCollisionMultiplier; // 0x1a0(0x04)

	void ShakeScale(float SpeedScale, float& ShakeScale); // Function WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C.ShakeScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void CheckDistance(); // Function WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C.CheckDistance // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerCollided(struct AActor* Other, float Damage, float ImpactSpeedValue, float SpeedMult, float AngleMult, float MyImpactSpeed, struct FVector HitLocation); // Function WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C.OnWalkerCollided // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastOnWalkerCollides(struct AActor* Other, float Damage, float ImpactSpeedValue, float SpeedMult, float AngleMult, float MyImpactSpeed, struct FVector HitLocation); // Function WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C.MulticastOnWalkerCollides // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerCollidedGeneral(struct AActor* Other, float MyImpactSpeed, struct FVector HitLocation, struct FVector BodySize); // Function WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C.OnWalkerCollidedGeneral // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastOnWalkerCollidesGeneral(float MyImpactSpeed, struct FVector HitLocation, struct AActor* Receiver, struct FVector BodySize); // Function WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C.MulticastOnWalkerCollidesGeneral // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerCollidedMob(struct AActor* Other, float Damage, float ImpactSpeedValue, float SpeedMult, float AngleMult, float MyImpactSpeed, struct FVector HitLocation); // Function WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C.OnWalkerCollidedMob // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastOnWalkerCollidedMob(struct AActor* Other, float Damage, float ImpactSpeedValue, float SpeedMult, float AngleMult, float MyImpactSpeed, struct FVector HitLocation); // Function WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C.MulticastOnWalkerCollidedMob // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_WalkerCollisionSoundComponent(int32_t EntryPoint); // Function WalkerCollisionSoundComponent.WalkerCollisionSoundComponent_C.ExecuteUbergraph_WalkerCollisionSoundComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

