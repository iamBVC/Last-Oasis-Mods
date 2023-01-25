// BlueprintGeneratedClass AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C
// Size: 0x30c (Inherited: 0xf0)
struct UAreaEffectFXManagerComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct TArray<struct ANiagaraActor*> ParticleActors; // 0xf8(0x10)
	struct TMap<struct AActor*, struct ANiagaraActor*> AffectedActorsMap; // 0x108(0x50)
	struct FMulticastInlineDelegate UpdateAffectedActorDispatcher; // 0x158(0x10)
	struct TMap<struct USceneComponent*, struct ANiagaraActor*> AttachedEffectsMap; // 0x168(0x50)
	struct TMap<struct USceneComponent*, struct UFXSystemAsset*> ComponentsToTemplates; // 0x1b8(0x50)
	struct TMap<struct UFXSystemAsset*, struct UFXSystemComponent*> TemplatesToSystems; // 0x208(0x50)
	struct TMap<struct USceneComponent*, struct UFXSystemComponent*> ComponentsToSystems; // 0x258(0x50)
	int32_t CurrentUpdatedComponentID; // 0x2a8(0x04)
	bool bDebug; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct TMap<struct USceneComponent*, struct UParticleSystemComponent*> ComponentsToCascade; // 0x2b0(0x50)
	struct FTimerHandle SpawnByEventTimer; // 0x300(0x08)
	int32_t CurrentSpawnedByEventID; // 0x308(0x04)

	void SpawnAndIncrementID(); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.SpawnAndIncrementID // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void RequestSpawnAllByEvent(float TimeToSpawnAll); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.RequestSpawnAllByEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AddToComponentsToSystemMap(struct UFXSystemComponent*& FXComponent, struct USceneComponent*& ComponentToSpawnAt, struct TMap<struct USceneComponent*, struct UFXSystemComponent*>& ComponentsToSystems); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.AddToComponentsToSystemMap // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnSharedCascadeByEvent(int32_t ComponentIndex); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.SpawnSharedCascadeByEvent // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnAndInitializeSharedAtComponent(struct UFXSystemAsset* SystemTemplate, struct USceneComponent* SpawnAtComponent, struct UFXSystemComponent*& Component); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.SpawnAndInitializeSharedAtComponent // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateShared(); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.UpdateShared // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnFromSharedSystemAtComponent(struct UFXSystemAsset* Template, struct USceneComponent* ComponentToSpawnAt, struct UFXSystemComponent*& FXComponent, int32_t& NuberOfSharingComponents); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.SpawnFromSharedSystemAtComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DespawnAttached(struct USceneComponent*& Key, struct UNiagaraComponent*& NiagaraComponent); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.DespawnAttached // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DetatchAllAParticles(); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.DetatchAllAParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SpawnAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct UNiagaraComponent*& NiagaraComponent); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.SpawnAttached // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetAffectedActorsMap(struct TMap<struct AActor*, struct ANiagaraActor*>& AffectedActorsMap); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.GetAffectedActorsMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void DeactivateAllAffectedActorsEffects(); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.DeactivateAllAffectedActorsEffects // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UpdateAffectedActors(); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.UpdateAffectedActors // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DeactivateAffectedActorEffect(struct AActor* Actor, struct UNiagaraComponent*& NiagaraComponent, bool& bSuccess); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.DeactivateAffectedActorEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void AddAffectedActor(struct AActor*& Actror, struct UNiagaraSystem* Template, bool bAttachToAffectedActor, struct UNiagaraComponent*& NiagaraComponent); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.AddAffectedActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DespawnAllParticles(struct TArray<struct ANiagaraActor*>& DeactivatedParticleActors, struct TArray<struct UFXSystemComponent*>& FXSystems); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.DespawnAllParticles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void SetParticleSystemTransform(struct FTransform Location, struct UFXSystemComponent* ParticleSystem); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.SetParticleSystemTransform // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_AreaEffectFXManagerComponent(int32_t EntryPoint); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.ExecuteUbergraph_AreaEffectFXManagerComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
	void UpdateAffectedActorDispatcher__DelegateSignature(struct ANiagaraActor* NiagaraActor, struct AActor* AffectedActor); // Function AreaEffectFXManagerComponent.AreaEffectFXManagerComponent_C.UpdateAffectedActorDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
};

