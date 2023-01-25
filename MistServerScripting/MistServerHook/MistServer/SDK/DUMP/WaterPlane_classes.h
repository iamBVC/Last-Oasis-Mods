// BlueprintGeneratedClass WaterPlane.WaterPlane_C
// Size: 0x5e0 (Inherited: 0x3f0)
struct AWaterPlane_C : AMistBasePersistentActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UStaticMeshComponent* TinyHighlightMesh; // 0x3f8(0x08)
	struct UBoxComponent* CameraCollision; // 0x400(0x08)
	struct UBoxComponent* FallbackCollision; // 0x408(0x08)
	struct UMistSpawnOnGridActorComponent* MistSpawnOnGridActor; // 0x410(0x08)
	struct UBoxComponent* Particle Trigger; // 0x418(0x08)
	struct UMistLiquidComponent* MistLiquid; // 0x420(0x08)
	struct UMistTriggerListenerComponent* MistTriggerListener; // 0x428(0x08)
	struct UStaticMeshComponent* Plane; // 0x430(0x08)
	struct UStaticMeshComponent* Plane1; // 0x438(0x08)
	struct TMap<struct FName, struct UMaterialInterface*> WaterBackgroundLayerMaterials; // 0x440(0x50)
	struct UMaterialInterface* WaterPlaneDefaultMaterial; // 0x490(0x08)
	float WaterBackgroundHightOffset; // 0x498(0x04)
	bool bAddWaterBackcround; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	struct FName WaterLayerName; // 0x4a0(0x08)
	bool bIsLava; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct TArray<struct UNiagaraComponent*> Particles; // 0x4b0(0x10)
	struct TMap<struct FName, struct UFXSystemAsset*> LayersToParticles; // 0x4c0(0x50)
	struct TArray<struct FTransform> GridTransforms; // 0x510(0x10)
	struct TArray<struct UFXSystemComponent*> FXSystemComponents; // 0x520(0x10)
	struct TMap<struct FName, struct UMaterialInterface*> WaterFogMaterials; // 0x530(0x50)
	float WaterFogOffset; // 0x580(0x04)
	bool bAddWaterFog; // 0x584(0x01)
	char pad_585[0x3]; // 0x585(0x03)
	struct TMap<struct FName, struct UMaterialInterface*> WaterSecondaryFogMaterials; // 0x588(0x50)
	bool bAddWaterSecondaryFog; // 0x5d8(0x01)
	char pad_5D9[0x3]; // 0x5d9(0x03)
	float WaterSecondaryFogOffset; // 0x5dc(0x04)

	void UpdateParticleCompoents(); // Function WaterPlane.WaterPlane_C.UpdateParticleCompoents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ClearParticleComponents(); // Function WaterPlane.WaterPlane_C.ClearParticleComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetParticleTemplatesAtTransform(struct FTransform Transform, struct TMap<struct FName, struct UFXSystemAsset*> LayersToParticles, float MinWeight, struct TArray<struct UFXSystemAsset*>& FXSystemsAssets); // Function WaterPlane.WaterPlane_C.GetParticleTemplatesAtTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void EvenDistributedRandomTransforms(float Distance, float MaxRelativeRandomDistance, struct TArray<struct FTransform>& Transform); // Function WaterPlane.WaterPlane_C.EvenDistributedRandomTransforms // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void AddParticleComponent(struct FTransform& Transform, struct UFXSystemAsset* InAsset, float NewCullDistance); // Function WaterPlane.WaterPlane_C.AddParticleComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetWaterLayersFiltered(struct TArray<struct FName>& AllGroundLayers, struct TArray<struct FName>& WaterLayers); // Function WaterPlane.WaterPlane_C.GetWaterLayersFiltered // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void FindWaterLayer(struct FName& WaterLayer); // Function WaterPlane.WaterPlane_C.FindWaterLayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void UserConstructionScript(); // Function WaterPlane.WaterPlane_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void MulticastPlaySound(struct FMistInteraction Interaction); // Function WaterPlane.WaterPlane_C.MulticastPlaySound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistLiquid_K2Node_ComponentBoundEvent_2_ComponentDrinkInteraction__DelegateSignature(struct FMistInteraction Interaction); // Function WaterPlane.WaterPlane_C.BndEvt__MistLiquid_K2Node_ComponentBoundEvent_2_ComponentDrinkInteraction__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistTriggerListener_K2Node_ComponentBoundEvent_0_TriggerEvent__DelegateSignature(struct AActor* Actor); // Function WaterPlane.WaterPlane_C.BndEvt__MistTriggerListener_K2Node_ComponentBoundEvent_0_TriggerEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MistTriggerListener_K2Node_ComponentBoundEvent_1_TriggerEvent__DelegateSignature(struct AActor* Actor); // Function WaterPlane.WaterPlane_C.BndEvt__MistTriggerListener_K2Node_ComponentBoundEvent_1_TriggerEvent__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void DebugWaterDepth(bool bEnabled); // Function WaterPlane.WaterPlane_C.DebugWaterDepth // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateParticles(); // Function WaterPlane.WaterPlane_C.UpdateParticles // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DebugParticleLocatrions(); // Function WaterPlane.WaterPlane_C.DebugParticleLocatrions // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_WaterPlane(int32_t EntryPoint); // Function WaterPlane.WaterPlane_C.ExecuteUbergraph_WaterPlane // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

