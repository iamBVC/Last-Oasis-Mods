// BlueprintGeneratedClass ENV_Lamp_Base.ENV_Lamp_Base_C
// Size: 0x4b0 (Inherited: 0x3c0)
struct AENV_Lamp_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x3c8(0x08)
	float TimelineEnable_Enable_2AE750614E7AD8CFBDB39E99D7D6E775; // 0x3d0(0x04)
	enum class ETimelineDirection TimelineEnable__Direction_2AE750614E7AD8CFBDB39E99D7D6E775; // 0x3d4(0x01)
	char pad_3D5[0x3]; // 0x3d5(0x03)
	struct UTimelineComponent* TimelineEnable; // 0x3d8(0x08)
	struct TMap<struct ULightComponent*, float> DefaultIntensity; // 0x3e0(0x50)
	struct TArray<struct ULightComponent*> LightComponents; // 0x430(0x10)
	bool bLightFunctionPositionEfects; // 0x440(0x01)
	bool bControlledByWorld; // 0x441(0x01)
	char pad_442[0x6]; // 0x442(0x06)
	struct UMaterialInstance* LightFunctionPositionEfectsMaterial; // 0x448(0x08)
	struct FLinearColor LightFunctionPositionEfectsAnimateAmplitude; // 0x450(0x10)
	struct TMap<struct FName, struct UMaterialInstance*> MaterialMapForMerge; // 0x460(0x50)

	void SetUpDynamicLightFunction(); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.SetUpDynamicLightFunction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateByEclipseProgress(float EclipseProgress); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.UpdateByEclipseProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetSoundActive(bool bNewActive); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.SetSoundActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetLightsActive(bool bNewActive); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.SetLightsActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetParticlesActive(bool bNewActive); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.SetParticlesActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateDefaultIntensity(); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.UpdateDefaultIntensity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetLightIntensity(float LightIntensity); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.SetLightIntensity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UserConstructionScript(); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void TimelineEnable__FinishedFunc(); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.TimelineEnable__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void TimelineEnable__UpdateFunc(); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.TimelineEnable__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void EnableLamp(); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.EnableLamp // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DisableLamp(); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.DisableLamp // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void OnEclipseStarted_Event_1(); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.OnEclipseStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnEclipseStopped_Event_1(); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.OnEclipseStopped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_ENV_Lamp_Base(int32_t EntryPoint); // Function ENV_Lamp_Base.ENV_Lamp_Base_C.ExecuteUbergraph_ENV_Lamp_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

