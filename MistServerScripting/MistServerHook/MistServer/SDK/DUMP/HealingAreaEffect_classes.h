// BlueprintGeneratedClass HealingAreaEffect.HealingAreaEffect_C
// Size: 0x530 (Inherited: 0x4c0)
struct AHealingAreaEffect_C : AMistGasAreaEffect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UAreaEffectFXManagerComponent_C* AreaEffectFXManagerComponent; // 0x4c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4d0(0x08)
	struct ANiagaraActor* Particles; // 0x4d8(0x08)
	struct TMap<struct AActor*, struct ANiagaraActor*> AffectedActorsMap; // 0x4e0(0x50)

	void OnBeginEffect(struct FMistAreaEffectItem& InEffect); // Function HealingAreaEffect.HealingAreaEffect_C.OnBeginEffect // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void OnBeginAffectActor(struct AActor* InAffectedActor); // Function HealingAreaEffect.HealingAreaEffect_C.OnBeginAffectActor // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnEndAffectActor(struct AActor* InAffectedActor); // Function HealingAreaEffect.HealingAreaEffect_C.OnEndAffectActor // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnEndEffect(struct FMistAreaEffectItem& InEffect); // Function HealingAreaEffect.HealingAreaEffect_C.OnEndEffect // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_HealingAreaEffect(int32_t EntryPoint); // Function HealingAreaEffect.HealingAreaEffect_C.ExecuteUbergraph_HealingAreaEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

