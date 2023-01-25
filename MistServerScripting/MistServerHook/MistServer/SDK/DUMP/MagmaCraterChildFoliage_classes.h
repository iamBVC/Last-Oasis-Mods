// BlueprintGeneratedClass MagmaCraterChildFoliage.MagmaCraterChildFoliage_C
// Size: 0xd48 (Inherited: 0xca0)
struct UMagmaCraterChildFoliage_C : UMistFoliageComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xca0(0x08)
	struct TMap<int32_t, struct UAudioComponent*> Sounds; // 0xca8(0x50)
	struct TMap<int32_t, struct UParticleSystemComponent*> Particles; // 0xcf8(0x50)

	void ReceiveCoolingStarted_2(int32_t UniqueId, struct FVector& AreaPosition, struct FRotator& AreaRotation); // Function MagmaCraterChildFoliage.MagmaCraterChildFoliage_C.ReceiveCoolingStarted_2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveCoolingStopped_2(int32_t UniqueId); // Function MagmaCraterChildFoliage.MagmaCraterChildFoliage_C.ReceiveCoolingStopped_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MagmaCraterChildFoliage(int32_t EntryPoint); // Function MagmaCraterChildFoliage.MagmaCraterChildFoliage_C.ExecuteUbergraph_MagmaCraterChildFoliage // (Final|UbergraphFunction) // @ game+0x163f1c0
};

