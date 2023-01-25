// BlueprintGeneratedClass FlareProjectile_00.FlareProjectile_00_C
// Size: 0x5e8 (Inherited: 0x570)
struct AFlareProjectile_00_C : AMistFlareProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x578(0x08)
	struct UNiagaraComponent* Niagara; // 0x580(0x08)
	float TrailTimeline_Progress_4F1BB3C0452825C49CF2EAA964CAAAFD; // 0x588(0x04)
	enum class ETimelineDirection TrailTimeline__Direction_4F1BB3C0452825C49CF2EAA964CAAAFD; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)
	struct UTimelineComponent* TrailTimeline; // 0x590(0x08)
	struct UAudioComponent* FireSFX; // 0x598(0x08)
	struct FLinearColor TrailColor1; // 0x5a0(0x10)
	struct FLinearColor TrailColor2; // 0x5b0(0x10)
	float TrailDuration; // 0x5c0(0x04)
	float TrailWidthScale; // 0x5c4(0x04)
	struct FInt32Range NumberOfExplosions; // 0x5c8(0x10)
	struct FInputRange ExplosionDelayMinMax; // 0x5d8(0x08)
	int32_t CurrentExplosionNum; // 0x5e0(0x04)
	int32_t MaxExplosionsNum; // 0x5e4(0x04)

	int32_t GetExplosionCount(); // Function FlareProjectile_00.FlareProjectile_00_C.GetExplosionCount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	float GetExplosionDelay(); // Function FlareProjectile_00.FlareProjectile_00_C.GetExplosionDelay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	float GetVFXDuration(); // Function FlareProjectile_00.FlareProjectile_00_C.GetVFXDuration // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void UserConstructionScript(); // Function FlareProjectile_00.FlareProjectile_00_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void TrailTimeline__FinishedFunc(); // Function FlareProjectile_00.FlareProjectile_00_C.TrailTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void TrailTimeline__UpdateFunc(); // Function FlareProjectile_00.FlareProjectile_00_C.TrailTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function FlareProjectile_00.FlareProjectile_00_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FlareProjectile_00.FlareProjectile_00_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BlueprintExplosion(); // Function FlareProjectile_00.FlareProjectile_00_C.BlueprintExplosion // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_FlareProjectile_00(int32_t EntryPoint); // Function FlareProjectile_00.FlareProjectile_00_C.ExecuteUbergraph_FlareProjectile_00 // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

