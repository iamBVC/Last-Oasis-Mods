// BlueprintGeneratedClass HarvestableTree.HarvestableTree_C
// Size: 0x44d (Inherited: 0x400)
struct AHarvestableTree_C : AMistHarvestablePhysicsActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	enum class ETimelineDirection Timeline_1__Direction_8AA1AD7D45A445B9F445B888E3A055A4; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UTimelineComponent* Timeline_2; // 0x410(0x08)
	enum class ETimelineDirection Timeline_0__Direction_9F7C5BC14CE6079D1F3548A67F8ABE85; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UTimelineComponent* Timeline_1; // 0x420(0x08)
	bool IsDragged; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	float Speed; // 0x42c(0x04)
	struct FVector PrevLocation; // 0x430(0x0c)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UAudioComponent* ChestDragged; // 0x440(0x08)
	float Force; // 0x448(0x04)
	bool HitOccured; // 0x44c(0x01)

	void Timeline_0__FinishedFunc(); // Function HarvestableTree.HarvestableTree_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void Timeline_0__UpdateFunc(); // Function HarvestableTree.HarvestableTree_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void Timeline_1__FinishedFunc(); // Function HarvestableTree.HarvestableTree_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void Timeline_1__UpdateFunc(); // Function HarvestableTree.HarvestableTree_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function HarvestableTree.HarvestableTree_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void HardHitOccured(float Damage, struct UDamageType* DamageType, struct FDamageSource DamageSource); // Function HarvestableTree.HarvestableTree_C.HardHitOccured // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function HarvestableTree.HarvestableTree_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function HarvestableTree.HarvestableTree_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_HarvestableTree(int32_t EntryPoint); // Function HarvestableTree.HarvestableTree_C.ExecuteUbergraph_HarvestableTree // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

