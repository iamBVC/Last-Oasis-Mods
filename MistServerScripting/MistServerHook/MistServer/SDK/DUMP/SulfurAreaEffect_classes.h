// BlueprintGeneratedClass SulfurAreaEffect.SulfurAreaEffect_C
// Size: 0x4f8 (Inherited: 0x4c0)
struct ASulfurAreaEffect_C : AMistGasAreaEffect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UAreaEffectFXManagerComponent_C* AreaEffectFXManagerComponent; // 0x4c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4d0(0x08)
	struct TArray<struct ANiagaraActor*> Particles; // 0x4d8(0x10)
	struct TArray<struct UDecalComponent*> Decals; // 0x4e8(0x10)

	void SpawnDecalAtComponentTraced(int32_t MaxSpawnCount, struct USceneComponent* Component); // Function SulfurAreaEffect.SulfurAreaEffect_C.SpawnDecalAtComponentTraced // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnBeginEffect(struct FMistAreaEffectItem& InEffect); // Function SulfurAreaEffect.SulfurAreaEffect_C.OnBeginEffect // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SulfurAreaEffect.SulfurAreaEffect_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function SulfurAreaEffect.SulfurAreaEffect_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void OnEndEffect(struct FMistAreaEffectItem& InEffect); // Function SulfurAreaEffect.SulfurAreaEffect_C.OnEndEffect // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SulfurAreaEffect(int32_t EntryPoint); // Function SulfurAreaEffect.SulfurAreaEffect_C.ExecuteUbergraph_SulfurAreaEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

