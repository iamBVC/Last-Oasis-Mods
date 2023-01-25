// BlueprintGeneratedClass GunPodTier_01.GunPodTier_01_C
// Size: 0x6d0 (Inherited: 0x5c1)
struct AGunPodTier_01_C : AStructurePart_C {
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct USceneComponent* Attach; // 0x5d0(0x08)
	struct UBoxComponent* Box3; // 0x5d8(0x08)
	struct UBoxComponent* Box2; // 0x5e0(0x08)
	struct UBoxComponent* Box1; // 0x5e8(0x08)
	struct UBoxComponent* Box; // 0x5f0(0x08)
	struct USceneComponent* Detach3; // 0x5f8(0x08)
	struct USceneComponent* Detach2; // 0x600(0x08)
	struct USceneComponent* Detach1; // 0x608(0x08)
	struct USceneComponent* Detach; // 0x610(0x08)
	struct USphereComponent* Placement6; // 0x618(0x08)
	struct UMistSkeletalMeshComponent* GunPodControlLevers; // 0x620(0x08)
	struct UMistSkeletalMeshComponent* GunPodMechanics; // 0x628(0x08)
	struct UStaticMeshComponent* Rotator; // 0x630(0x08)
	struct USceneComponent* Scene; // 0x638(0x08)
	struct USphereComponent* WeldedCollision; // 0x640(0x08)
	struct UStaticMeshComponent* TopGear_R; // 0x648(0x08)
	struct UStaticMeshComponent* TopGear_L; // 0x650(0x08)
	struct UBoxComponent* Placement5; // 0x658(0x08)
	struct UBoxComponent* Placement4; // 0x660(0x08)
	struct UBoxComponent* Placement3; // 0x668(0x08)
	struct UBoxComponent* Placement2; // 0x670(0x08)
	struct UBoxComponent* Placement1; // 0x678(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x680(0x08)
	struct USpringArmComponent* SpringArm; // 0x688(0x08)
	struct UMistSiegePodComponent* MistSiegePod; // 0x690(0x08)
	struct UCameraComponent* Camera; // 0x698(0x08)
	struct UStaticMeshComponent* Pod; // 0x6a0(0x08)
	struct UStaticMeshComponent* Arm; // 0x6a8(0x08)
	bool AltCamera; // 0x6b0(0x01)
	bool HasShell; // 0x6b1(0x01)
	char pad_6B2[0x6]; // 0x6b2(0x06)
	struct UAudioComponent* LRMove; // 0x6b8(0x08)
	struct UAudioComponent* UpDownMove; // 0x6c0(0x08)
	float PodPitch; // 0x6c8(0x04)
	float RotatorYaw; // 0x6cc(0x04)

	void StopCheckMovement(); // Function GunPodTier_01.GunPodTier_01_C.StopCheckMovement // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function GunPodTier_01.GunPodTier_01_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void CheckMovement(); // Function GunPodTier_01.GunPodTier_01_C.CheckMovement // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GunPodTier_01.GunPodTier_01_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_GunPodTier_01(int32_t EntryPoint); // Function GunPodTier_01.GunPodTier_01_C.ExecuteUbergraph_GunPodTier_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

