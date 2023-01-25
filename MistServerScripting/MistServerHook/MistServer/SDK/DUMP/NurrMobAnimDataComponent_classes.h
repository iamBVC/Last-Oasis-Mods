// BlueprintGeneratedClass NurrMobAnimDataComponent.NurrMobAnimDataComponent_C
// Size: 0x110 (Inherited: 0xf0)
struct UNurrMobAnimDataComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	bool bIsResting; // 0xf8(0x01)
	bool bIsAttackingPlayer; // 0xf9(0x01)
	bool bIsAttackingWalker; // 0xfa(0x01)
	bool bIsDamaged; // 0xfb(0x01)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct ANurrMob_C* NurrMob; // 0x100(0x08)
	struct AActor* Target; // 0x108(0x08)

	void OnRep_bIsDamaged(); // Function NurrMobAnimDataComponent.NurrMobAnimDataComponent_C.OnRep_bIsDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsAttackingWalker(); // Function NurrMobAnimDataComponent.NurrMobAnimDataComponent_C.OnRep_bIsAttackingWalker // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsAttackingPlayer(); // Function NurrMobAnimDataComponent.NurrMobAnimDataComponent_C.OnRep_bIsAttackingPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsResting(); // Function NurrMobAnimDataComponent.NurrMobAnimDataComponent_C.OnRep_bIsResting // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function NurrMobAnimDataComponent.NurrMobAnimDataComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_NurrMobAnimDataComponent(int32_t EntryPoint); // Function NurrMobAnimDataComponent.NurrMobAnimDataComponent_C.ExecuteUbergraph_NurrMobAnimDataComponent // (Final|UbergraphFunction) // @ game+0x163f1c0
};

