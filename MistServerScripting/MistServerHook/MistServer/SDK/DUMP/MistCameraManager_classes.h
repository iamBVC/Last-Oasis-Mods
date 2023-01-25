// BlueprintGeneratedClass MistCameraManager.MistCameraManager_C
// Size: 0x2980 (Inherited: 0x2970)
struct AMistCameraManager_C : AMistPlayerCameraManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2970(0x08)
	struct AOasisPlayerController_C* PlayerController; // 0x2978(0x08)

	void OnPossessDispatcher_Event_1(struct APawn* PossessedPawn); // Function MistCameraManager.MistCameraManager_C.OnPossessDispatcher_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SteeringWalkerDispatcher_Event_1(struct AMistWalker* Walker); // Function MistCameraManager.MistCameraManager_C.SteeringWalkerDispatcher_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StopSteeringWalkerDispatcher_Event_1(); // Function MistCameraManager.MistCameraManager_C.StopSteeringWalkerDispatcher_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Initialize(struct AOasisPlayerController_C* OasisPlayerController); // Function MistCameraManager.MistCameraManager_C.Initialize // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BindPawn(struct APawn* Pawn); // Function MistCameraManager.MistCameraManager_C.BindPawn // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MistCameraManager(int32_t EntryPoint); // Function MistCameraManager.MistCameraManager_C.ExecuteUbergraph_MistCameraManager // (Final|UbergraphFunction) // @ game+0x163f1c0
};

