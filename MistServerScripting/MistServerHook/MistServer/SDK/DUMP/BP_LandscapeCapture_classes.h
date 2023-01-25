// BlueprintGeneratedClass BP_LandscapeCapture.BP_LandscapeCapture_C
// Size: 0x118 (Inherited: 0xf0)
struct UBP_LandscapeCapture_C : UActorComponent {
	struct USceneCaptureComponent2D* SceneCaptureComponent; // 0xf0(0x08)
	float UpdateDistanceTreshold; // 0xf8(0x04)
	struct FVector LastCaptureLocation; // 0xfc(0x0c)
	struct TArray<struct AActor*> show; // 0x108(0x10)

	void SetNewLocation(struct FVector ActorLocation); // Function BP_LandscapeCapture.BP_LandscapeCapture_C.SetNewLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Capture(); // Function BP_LandscapeCapture.BP_LandscapeCapture_C.Capture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void InitializeCapture(struct USceneCaptureComponent2D* SceneCaptureBaseColor); // Function BP_LandscapeCapture.BP_LandscapeCapture_C.InitializeCapture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Update(); // Function BP_LandscapeCapture.BP_LandscapeCapture_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
};

