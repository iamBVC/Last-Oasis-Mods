// BlueprintGeneratedClass ChalkCloudAreaEffect.ChalkCloudAreaEffect_C
// Size: 0x52c (Inherited: 0x4c0)
struct AChalkCloudAreaEffect_C : AMistGasAreaEffect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UAreaEffectFXManagerComponent_C* AreaEffectFXManagerComponent; // 0x4c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4d0(0x08)
	struct TMap<struct UMistAreaEffectComponent*, int32_t> AreaEffectToInstanceID; // 0x4d8(0x50)
	int32_t NumberOfSharing; // 0x528(0x04)

	void StartSpawning(); // Function ChalkCloudAreaEffect.ChalkCloudAreaEffect_C.StartSpawning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void RequestSpawnByEvent(); // Function ChalkCloudAreaEffect.ChalkCloudAreaEffect_C.RequestSpawnByEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetInstanceTransformFromEffect(struct UMistAreaEffectComponent* Effect, bool& bValid, struct FTransform& Transform); // Function ChalkCloudAreaEffect.ChalkCloudAreaEffect_C.GetInstanceTransformFromEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void OnBeginEffect(struct FMistAreaEffectItem& InEffect); // Function ChalkCloudAreaEffect.ChalkCloudAreaEffect_C.OnBeginEffect // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function ChalkCloudAreaEffect.ChalkCloudAreaEffect_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_ChalkCloudAreaEffect(int32_t EntryPoint); // Function ChalkCloudAreaEffect.ChalkCloudAreaEffect_C.ExecuteUbergraph_ChalkCloudAreaEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

