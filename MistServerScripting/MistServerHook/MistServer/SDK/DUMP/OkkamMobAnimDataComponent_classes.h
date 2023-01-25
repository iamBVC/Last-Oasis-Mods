// BlueprintGeneratedClass OkkamMobAnimDataComponent.OkkamMobAnimDataComponent_C
// Size: 0x118 (Inherited: 0xf0)
struct UOkkamMobAnimDataComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	bool bIsResting; // 0xf8(0x01)
	bool bIsAttackingPlayer; // 0xf9(0x01)
	bool bIsAttackingWalker; // 0xfa(0x01)
	bool bIsDamaged; // 0xfb(0x01)
	bool bIsBadlyHurt; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct AOkkamMob_C* OkkamMob; // 0x100(0x08)
	bool FCPlayed; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UAudioComponent* OkkamDesireToAttack; // 0x110(0x08)

	void OnRep_bIsDamaged(); // Function OkkamMobAnimDataComponent.OkkamMobAnimDataComponent_C.OnRep_bIsDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsAttackingWalker(); // Function OkkamMobAnimDataComponent.OkkamMobAnimDataComponent_C.OnRep_bIsAttackingWalker // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsAttackingPlayer(); // Function OkkamMobAnimDataComponent.OkkamMobAnimDataComponent_C.OnRep_bIsAttackingPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsResting(); // Function OkkamMobAnimDataComponent.OkkamMobAnimDataComponent_C.OnRep_bIsResting // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function OkkamMobAnimDataComponent.OkkamMobAnimDataComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void FirstContactCooldown(); // Function OkkamMobAnimDataComponent.OkkamMobAnimDataComponent_C.FirstContactCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_OkkamMobAnimDataComponent(int32_t EntryPoint); // Function OkkamMobAnimDataComponent.OkkamMobAnimDataComponent_C.ExecuteUbergraph_OkkamMobAnimDataComponent // (Final|UbergraphFunction) // @ game+0x163f1c0
};

