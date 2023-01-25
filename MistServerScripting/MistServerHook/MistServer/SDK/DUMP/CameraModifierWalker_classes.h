// BlueprintGeneratedClass CameraModifierWalker.CameraModifierWalker_C
// Size: 0x78 (Inherited: 0x48)
struct UCameraModifierWalker_C : UCameraModifier {
	struct AMistWalker* Walker; // 0x48(0x08)
	struct AMistCameraManager_C* CameraManager; // 0x50(0x08)
	float GameTimeAtInitialize; // 0x58(0x04)
	float LaggedFOV; // 0x5c(0x04)
	float TransitionTime; // 0x60(0x04)
	float SprintingFOVOffset; // 0x64(0x04)
	float SprintingFOVInterpSpeed; // 0x68(0x04)
	struct FVector LocationNoise; // 0x6c(0x0c)

	float GetTransitionTime(); // Function CameraModifierWalker.CameraModifierWalker_C.GetTransitionTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void BlueprintModifyCamera(float DeltaTime, struct FVector ViewLocation, struct FRotator ViewRotation, float FOV, struct FVector& NewViewLocation, struct FRotator& NewViewRotation, float& NewFOV); // Function CameraModifierWalker.CameraModifierWalker_C.BlueprintModifyCamera // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Initialize(struct AMistWalker* ParentWalker, struct AMistCameraManager_C* OwningCameraManager); // Function CameraModifierWalker.CameraModifierWalker_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
};

