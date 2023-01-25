// BlueprintGeneratedClass SceneManager.SceneManager_C
// Size: 0x1538 (Inherited: 0x11c0)
struct ASceneManager_C : AMistSceneManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x11c8(0x08)
	struct AUltraDynamicSky_C* UDS; // 0x11d0(0x08)
	struct FSceneData SceneData; // 0x11d8(0x350)
	struct UCurveFloat* NibiruCurve; // 0x1528(0x08)
	struct UCurveFloat* EclipseDarkeningCurve; // 0x1530(0x08)

	void SetObjectsForUDS(bool& Success); // Function SceneManager.SceneManager_C.SetObjectsForUDS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetUDS(struct FSceneData SceneData); // Function SceneManager.SceneManager_C.SetUDS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEclipseProgressUpdate(float EclipseProgress); // Function SceneManager.SceneManager_C.ReceiveEclipseProgressUpdate // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SceneManager(int32_t EntryPoint); // Function SceneManager.SceneManager_C.ExecuteUbergraph_SceneManager // (Final|UbergraphFunction) // @ game+0x163f1c0
};

