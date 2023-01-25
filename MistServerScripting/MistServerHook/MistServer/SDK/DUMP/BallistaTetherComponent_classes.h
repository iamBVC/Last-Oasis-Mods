// BlueprintGeneratedClass BallistaTetherComponent.BallistaTetherComponent_C
// Size: 0x5a8 (Inherited: 0x590)
struct UBallistaTetherComponent_C : UMistTetherMasterComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x590(0x08)
	struct UAudioComponent* TetherTakingDamage; // 0x598(0x08)
	struct UAudioComponent* TetherTension; // 0x5a0(0x08)

	void ReceiveStressChanged(float NewTension, float OldTension, float NewHealth, float OldHealth, float DeltaTime); // Function BallistaTetherComponent.BallistaTetherComponent_C.ReceiveStressChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function BallistaTetherComponent.BallistaTetherComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveSnapped(struct AActor* Snapped, struct AActor* Attached); // Function BallistaTetherComponent.BallistaTetherComponent_C.ReceiveSnapped // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BallistaTetherComponent.BallistaTetherComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BallistaTetherComponent(int32_t EntryPoint); // Function BallistaTetherComponent.BallistaTetherComponent_C.ExecuteUbergraph_BallistaTetherComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

