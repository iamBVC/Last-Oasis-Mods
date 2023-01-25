// BlueprintGeneratedClass PlayerLavaBomb.PlayerLavaBomb_C
// Size: 0x570 (Inherited: 0x558)
struct APlayerLavaBomb_C : ALavaBomb_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UStaticMeshComponent* SM_Lava_BombOnly; // 0x560(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x568(0x08)

	void ReceiveBeginPlay(); // Function PlayerLavaBomb.PlayerLavaBomb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void AddEmitter(); // Function PlayerLavaBomb.PlayerLavaBomb_C.AddEmitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_PlayerLavaBomb(int32_t EntryPoint); // Function PlayerLavaBomb.PlayerLavaBomb_C.ExecuteUbergraph_PlayerLavaBomb // (Final|UbergraphFunction) // @ game+0x163f1c0
};

