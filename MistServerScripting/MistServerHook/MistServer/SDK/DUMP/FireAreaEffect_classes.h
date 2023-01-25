// BlueprintGeneratedClass FireAreaEffect.FireAreaEffect_C
// Size: 0x4e0 (Inherited: 0x4c8)
struct AFireAreaEffect_C : AMistFireAreaEffect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UAudioComponent* FireSound; // 0x4d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4d8(0x08)

	void ReceiveBeginPlay(); // Function FireAreaEffect.FireAreaEffect_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_FireAreaEffect(int32_t EntryPoint); // Function FireAreaEffect.FireAreaEffect_C.ExecuteUbergraph_FireAreaEffect // (Final|UbergraphFunction) // @ game+0x163f1c0
};

