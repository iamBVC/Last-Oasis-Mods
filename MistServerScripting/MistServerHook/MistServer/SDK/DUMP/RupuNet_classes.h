// BlueprintGeneratedClass RupuNet.RupuNet_C
// Size: 0x55c (Inherited: 0x541)
struct ARupuNet_C : ANet_C {
	char pad_541[0x7]; // 0x541(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UAudioComponent* NetInAir; // 0x550(0x08)
	float NetOpenTime; // 0x558(0x04)

	void ReceiveBeginPlay(); // Function RupuNet.RupuNet_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function RupuNet.RupuNet_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void BndEvt__MeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function RupuNet.RupuNet_C.BndEvt__MeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void NetOpened(); // Function RupuNet.RupuNet_C.NetOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_RupuNet(int32_t EntryPoint); // Function RupuNet.RupuNet_C.ExecuteUbergraph_RupuNet // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

