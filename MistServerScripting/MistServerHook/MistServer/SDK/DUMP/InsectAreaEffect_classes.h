// BlueprintGeneratedClass InsectAreaEffect.InsectAreaEffect_C
// Size: 0x538 (Inherited: 0x4c0)
struct AInsectAreaEffect_C : AMistGasAreaEffect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UAudioComponent* InsectSound; // 0x4c8(0x08)
	struct UAreaEffectFXManagerComponent_C* AreaEffectFXManagerComponent; // 0x4d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4d8(0x08)
	struct ANiagaraActor* SwarmParticles; // 0x4e0(0x08)
	struct TMap<struct AActor*, struct ANiagaraActor*> AffectedActorsMap; // 0x4e8(0x50)

	void DeactivateAffectedActorEffect(struct AActor* Actor); // Function InsectAreaEffect.InsectAreaEffect_C.DeactivateAffectedActorEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateAffectedActorEffects(); // Function InsectAreaEffect.InsectAreaEffect_C.UpdateAffectedActorEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AddAffectedActorEffect(struct AActor* Actor); // Function InsectAreaEffect.InsectAreaEffect_C.AddAffectedActorEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnBeginEffect(struct FMistAreaEffectItem& InEffect); // Function InsectAreaEffect.InsectAreaEffect_C.OnBeginEffect // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function InsectAreaEffect.InsectAreaEffect_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void OnBeginAffectActor(struct AActor* InAffectedActor); // Function InsectAreaEffect.InsectAreaEffect_C.OnBeginAffectActor // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnEndAffectActor(struct AActor* InAffectedActor); // Function InsectAreaEffect.InsectAreaEffect_C.OnEndAffectActor // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__AreaEffectFXManagerComponent_K2Node_ComponentBoundEvent_2_UpdateAffectedActorDispatcher__DelegateSignature(struct ANiagaraActor* NiagaraActor, struct AActor* AffectedActor); // Function InsectAreaEffect.InsectAreaEffect_C.BndEvt__AreaEffectFXManagerComponent_K2Node_ComponentBoundEvent_2_UpdateAffectedActorDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function InsectAreaEffect.InsectAreaEffect_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void OnEndEffect(struct FMistAreaEffectItem& InEffect); // Function InsectAreaEffect.InsectAreaEffect_C.OnEndEffect // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_InsectAreaEffect(int32_t EntryPoint); // Function InsectAreaEffect.InsectAreaEffect_C.ExecuteUbergraph_InsectAreaEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

