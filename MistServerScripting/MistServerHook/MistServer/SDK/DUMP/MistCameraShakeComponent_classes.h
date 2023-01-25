// BlueprintGeneratedClass MistCameraShakeComponent.MistCameraShakeComponent_C
// Size: 0x110 (Inherited: 0xf0)
struct UMistCameraShakeComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct AMistPlayer* MistPlayer; // 0xf8(0x08)
	struct APlayerCameraManager* PlayerCameraManager; // 0x100(0x08)
	struct APlayerController* PlayerController; // 0x108(0x08)

	void GetController(struct APlayerController*& PlayerController); // Function MistCameraShakeComponent.MistCameraShakeComponent_C.GetController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void LandDamaged(float DamagePercent); // Function MistCameraShakeComponent.MistCameraShakeComponent_C.LandDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void LandNormal(); // Function MistCameraShakeComponent.MistCameraShakeComponent_C.LandNormal // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void LevelUpShake(); // Function MistCameraShakeComponent.MistCameraShakeComponent_C.LevelUpShake // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Jump(); // Function MistCameraShakeComponent.MistCameraShakeComponent_C.Jump // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MistCameraShakeComponent(int32_t EntryPoint); // Function MistCameraShakeComponent.MistCameraShakeComponent_C.ExecuteUbergraph_MistCameraShakeComponent // (Final|UbergraphFunction) // @ game+0x163f1c0
};

