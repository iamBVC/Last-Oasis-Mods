// BlueprintGeneratedClass FlareActor.FlareActor_C
// Size: 0x400 (Inherited: 0x3d8)
struct AFlareActor_C : AMistFlareActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UStaticMeshComponent* Cap; // 0x3e0(0x08)
	struct UBoxComponent* Box; // 0x3e8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x3f0(0x08)
	struct UAudioComponent* SoundFuse; // 0x3f8(0x08)

	void ReceiveVFXEvent(enum class EItemUsageEvent EventIndex); // Function FlareActor.FlareActor_C.ReceiveVFXEvent // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_FlareActor(int32_t EntryPoint); // Function FlareActor.FlareActor_C.ExecuteUbergraph_FlareActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

