// BlueprintGeneratedClass BTS_KillinSyncCarrying.BTS_KillinSyncCarrying_C
// Size: 0xc8 (Inherited: 0x98)
struct UBTS_KillinSyncCarrying_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector IsCarrying; // 0xa0(0x28)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTS_KillinSyncCarrying.BTS_KillinSyncCarrying_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_BTS_KillinSyncCarrying(int32_t EntryPoint); // Function BTS_KillinSyncCarrying.BTS_KillinSyncCarrying_C.ExecuteUbergraph_BTS_KillinSyncCarrying // (Final|UbergraphFunction) // @ game+0x163f1c0
};

