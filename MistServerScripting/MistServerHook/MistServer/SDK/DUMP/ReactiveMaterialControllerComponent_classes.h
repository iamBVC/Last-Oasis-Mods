// BlueprintGeneratedClass ReactiveMaterialControllerComponent.ReactiveMaterialControllerComponent_C
// Size: 0x10c (Inherited: 0xf0)
struct UReactiveMaterialControllerComponent_C : UActorComponent {
	struct TArray<int32_t> AviableTranslusencyIndexPool; // 0xf0(0x10)
	struct USceneCaptureComponent2D* ReactiveMaterialSceneCapture; // 0x100(0x08)
	int32_t PoolSize; // 0x108(0x04)

	void IsSetUp(bool& bInitialized); // Function ReactiveMaterialControllerComponent.ReactiveMaterialControllerComponent_C.IsSetUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void Capture(); // Function ReactiveMaterialControllerComponent.ReactiveMaterialControllerComponent_C.Capture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetUpReactiveMaterialSceneCapture(struct USceneCaptureComponent2D* SceneCapture); // Function ReactiveMaterialControllerComponent.ReactiveMaterialControllerComponent_C.SetUpReactiveMaterialSceneCapture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetAndRemoveRandomIndexFromPool(int32_t& RandomIndexFromPool); // Function ReactiveMaterialControllerComponent.ReactiveMaterialControllerComponent_C.GetAndRemoveRandomIndexFromPool // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ResetTranslusencyIndexPool(int32_t PoolSize); // Function ReactiveMaterialControllerComponent.ReactiveMaterialControllerComponent_C.ResetTranslusencyIndexPool // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void InitializeParticleSystem(struct UParticleSystemComponent* ParticleSystem, bool& bSuccess); // Function ReactiveMaterialControllerComponent.ReactiveMaterialControllerComponent_C.InitializeParticleSystem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
};

