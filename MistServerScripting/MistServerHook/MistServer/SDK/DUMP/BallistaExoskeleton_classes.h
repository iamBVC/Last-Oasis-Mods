// BlueprintGeneratedClass BallistaExoskeleton.BallistaExoskeleton_C
// Size: 0x600 (Inherited: 0x568)
struct ABallistaExoskeleton_C : AMistExoskeletonWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct UMistItemMeshComponent* Missile; // 0x570(0x08)
	struct UStaticMeshComponent* Missle_Reload_01; // 0x578(0x08)
	struct UAudioComponent* TetherTension; // 0x580(0x08)
	struct UAudioComponent* ReelingSpeed; // 0x588(0x08)
	struct UBoxComponent* Box; // 0x590(0x08)
	struct UAudioComponent* TetherTakingDamage; // 0x598(0x08)
	struct UMistSkeletalMeshComponent* MistSkeletalMesh; // 0x5a0(0x08)
	struct UExoskeletonBallistaControlComponent_C* ExoskeletonBallistaControlComponent; // 0x5a8(0x08)
	struct USceneComponent* Slider; // 0x5b0(0x08)
	struct UBallistaAmmoContainer_C* AmmoContainer; // 0x5b8(0x08)
	struct UBallistaTetherComponent_C* Tether; // 0x5c0(0x08)
	struct UMistSoundNotifyListenerComponent* MistSoundNotifyListener; // 0x5c8(0x08)
	struct USceneComponent* Root; // 0x5d0(0x08)
	struct FVector ReloadTimeline_MisslePos_18ADE456448D6013639166B0A4DFFA6D; // 0x5d8(0x0c)
	enum class ETimelineDirection ReloadTimeline__Direction_18ADE456448D6013639166B0A4DFFA6D; // 0x5e4(0x01)
	char pad_5E5[0x3]; // 0x5e5(0x03)
	struct UTimelineComponent* ReloadTimeline; // 0x5e8(0x08)
	struct AMistCharacter* CharRef; // 0x5f0(0x08)
	bool Reloading; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	int32_t ArrowNr; // 0x5fc(0x04)

	void ReloadTimeline__FinishedFunc(); // Function BallistaExoskeleton.BallistaExoskeleton_C.ReloadTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void ReloadTimeline__UpdateFunc(); // Function BallistaExoskeleton.BallistaExoskeleton_C.ReloadTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function BallistaExoskeleton.BallistaExoskeleton_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReloadingEvent(); // Function BallistaExoskeleton.BallistaExoskeleton_C.ReloadingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void FireEvent(); // Function BallistaExoskeleton.BallistaExoskeleton_C.FireEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BallistaExoskeleton(int32_t EntryPoint); // Function BallistaExoskeleton.BallistaExoskeleton_C.ExecuteUbergraph_BallistaExoskeleton // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

