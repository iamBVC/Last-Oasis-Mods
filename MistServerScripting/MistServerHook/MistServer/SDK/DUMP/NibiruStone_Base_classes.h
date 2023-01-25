// BlueprintGeneratedClass NibiruStone_Base.NibiruStone_Base_C
// Size: 0x428 (Inherited: 0x3f0)
struct ANibiruStone_Base_C : AMistHarvestableActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UParticleSystemComponent* P_NibiruCloud; // 0x3f8(0x08)
	struct UPointLightComponent* PointLight; // 0x400(0x08)
	struct AMistSceneManager* SceneManager; // 0x408(0x08)
	struct UCurveFloat* NibiruCurve; // 0x410(0x08)
	float DefaultLightIntensity; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UAudioComponent* NibiruEffect; // 0x420(0x08)

	void UserConstructionScript(); // Function NibiruStone_Base.NibiruStone_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function NibiruStone_Base.NibiruStone_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void OnEclipseProgressUpdated(float EclipseProgress); // Function NibiruStone_Base.NibiruStone_Base_C.OnEclipseProgressUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_NibiruStone_Base(int32_t EntryPoint); // Function NibiruStone_Base.NibiruStone_Base_C.ExecuteUbergraph_NibiruStone_Base // (Final|UbergraphFunction) // @ game+0x163f1c0
};

