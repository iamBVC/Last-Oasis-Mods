// BlueprintGeneratedClass FireflyWalker.FireflyWalker_C
// Size: 0x1188 (Inherited: 0x10b0)
struct AFireflyWalker_C : ASpiderWalkerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UStaticMeshComponent* SM_FireflyWalker; // 0x10b8(0x08)
	struct UStaticMeshComponent* SM_HouseWalker_Collosions_Main; // 0x10c0(0x08)
	struct UMistWalkerPartSocketComponent* LeftWingSocket; // 0x10c8(0x08)
	struct UMistWalkerPartSocketComponent* RightWingSocket; // 0x10d0(0x08)
	struct USceneComponent* RightOffset; // 0x10d8(0x08)
	struct USceneComponent* LeftOffset; // 0x10e0(0x08)
	struct UCameraComponent* Camera; // 0x10e8(0x08)
	struct UPlayerCameraSpringArm_C* SpringArm; // 0x10f0(0x08)
	struct UMistPackingInteractableComponent* PackingInteractable; // 0x10f8(0x08)
	struct UMistMapIconProviderComponent* MistMapIconProvider; // 0x1100(0x08)
	struct UMistPackingComponent* MistPacking; // 0x1108(0x08)
	float NormalizedWalkerSpeed_1; // 0x1110(0x04)
	char pad_1114[0x4]; // 0x1114(0x04)
	struct UAudioComponent* LegFDown; // 0x1118(0x08)
	int32_t CurrentGroupR; // 0x1120(0x04)
	int32_t CurrentGroupL; // 0x1124(0x04)
	int32_t PrevGroupR; // 0x1128(0x04)
	int32_t PrevGroupL; // 0x112c(0x04)
	float GearShiftVolume_1; // 0x1130(0x04)
	char pad_1134[0x4]; // 0x1134(0x04)
	struct UAudioComponent* Spider1A; // 0x1138(0x08)
	struct UAudioComponent* Spider2A; // 0x1140(0x08)
	struct UAudioComponent* Spider3A; // 0x1148(0x08)
	struct UAudioComponent* Spider4A; // 0x1150(0x08)
	struct UAudioComponent* SpiderB1; // 0x1158(0x08)
	struct UAudioComponent* SpiderB2; // 0x1160(0x08)
	struct UAudioComponent* SpiderB3; // 0x1168(0x08)
	struct UAudioComponent* SpiderB4; // 0x1170(0x08)
	float LegsMoveVolume_1; // 0x1178(0x04)
	char pad_117C[0x4]; // 0x117c(0x04)
	struct UStaticMeshComponent* TutorialHighlightMesh; // 0x1180(0x08)

	void RemoveEdgeTutorialMesh(); // Function FireflyWalker.FireflyWalker_C.RemoveEdgeTutorialMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AddEdgeTutorialMesh(); // Function FireflyWalker.FireflyWalker_C.AddEdgeTutorialMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupL(float RPM L, int32_t& RPM Group L); // Function FireflyWalker.FireflyWalker_C.SetRPMGroupL // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRPMGroupR(float RPM R, int32_t& RPM Group R); // Function FireflyWalker.FireflyWalker_C.SetRPMGroupR // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function FireflyWalker.FireflyWalker_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_FireflyWalker(int32_t EntryPoint); // Function FireflyWalker.FireflyWalker_C.ExecuteUbergraph_FireflyWalker // (Final|UbergraphFunction) // @ game+0x163f1c0
};

