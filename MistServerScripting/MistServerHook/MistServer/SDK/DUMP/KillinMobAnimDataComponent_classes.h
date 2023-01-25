// BlueprintGeneratedClass KillinMobAnimDataComponent.KillinMobAnimDataComponent_C
// Size: 0x118 (Inherited: 0xf0)
struct UKillinMobAnimDataComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	bool bIsAttackingPlayer; // 0xf8(0x01)
	bool bIsDamaged; // 0xf9(0x01)
	bool bIsBadlyHurt; // 0xfa(0x01)
	bool bIsDiving; // 0xfb(0x01)
	bool bIsFlying; // 0xfc(0x01)
	bool DesireToAttackPlayed; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	struct AKillinMob_C* KillinMob; // 0x100(0x08)
	bool bIsDroppingTether; // 0x108(0x01)
	bool bIsCarrying; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct AActor* CarriedActor; // 0x110(0x08)

	void OnRep_CarriedActor(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.OnRep_CarriedActor // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsCarrying(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.OnRep_bIsCarrying // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsDroppingTether(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.OnRep_bIsDroppingTether // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsFlying(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.OnRep_bIsFlying // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsDiving(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.OnRep_bIsDiving // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsDamaged(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.OnRep_bIsDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsAttackingWalker(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.OnRep_bIsAttackingWalker // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsAttackingPlayer(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.OnRep_bIsAttackingPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_bIsResting(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.OnRep_bIsResting // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void DesireToAttackCooldown(); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.DesireToAttackCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_KillinMobAnimDataComponent(int32_t EntryPoint); // Function KillinMobAnimDataComponent.KillinMobAnimDataComponent_C.ExecuteUbergraph_KillinMobAnimDataComponent // (Final|UbergraphFunction) // @ game+0x163f1c0
};

