// BlueprintGeneratedClass IgnitableComponent.IgnitableComponent_C
// Size: 0x258 (Inherited: 0x210)
struct UIgnitableComponent_C : UMistIgnitableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x210(0x08)
	struct UDecalComponent* BuirningDecal; // 0x218(0x08)
	struct UNiagaraComponent* BurningFX; // 0x220(0x08)
	bool bIgnitionEffectsAtBoundOrigin; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	struct FVector IgnitionEffectsScale; // 0x22c(0x0c)
	struct FVector IgnitionEffectsLocationOffset; // 0x238(0x0c)
	char pad_244[0x4]; // 0x244(0x04)
	struct USceneComponent* CustomComponentForBounds; // 0x248(0x08)
	struct UAudioComponent* IgnitionSound; // 0x250(0x08)

	void SetCustomComponentForBounds(struct USceneComponent* CustomComponentForBounds); // Function IgnitableComponent.IgnitableComponent_C.SetCustomComponentForBounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetBounds(struct FVector& Origin, struct FVector& BoxExtent); // Function IgnitableComponent.IgnitableComponent_C.GetBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void Explode(struct FVector ExplosionLocation, float ExplosionRadius); // Function IgnitableComponent.IgnitableComponent_C.Explode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StopIgnition(); // Function IgnitableComponent.IgnitableComponent_C.StopIgnition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StartIgnition(); // Function IgnitableComponent.IgnitableComponent_C.StartIgnition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveExplodeExternal(struct FVector& Location, float ExplosionPower, float ExplosionRadius); // Function IgnitableComponent.IgnitableComponent_C.ReceiveExplodeExternal // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveExplodeInternal(struct FVector& Location, float ExplosionPower); // Function IgnitableComponent.IgnitableComponent_C.ReceiveExplodeInternal // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBurningFinished(); // Function IgnitableComponent.IgnitableComponent_C.ReceiveBurningFinished // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBurningStarted(struct FVector& Location, bool bExplodes, float ExplosionPower, float ExplosionRadius); // Function IgnitableComponent.IgnitableComponent_C.ReceiveBurningStarted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_IgnitableComponent(int32_t EntryPoint); // Function IgnitableComponent.IgnitableComponent_C.ExecuteUbergraph_IgnitableComponent // (Final|UbergraphFunction) // @ game+0x163f1c0
};

