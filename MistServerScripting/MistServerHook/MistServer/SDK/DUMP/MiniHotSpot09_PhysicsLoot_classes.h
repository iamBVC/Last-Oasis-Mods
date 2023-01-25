// BlueprintGeneratedClass MiniHotSpot09_PhysicsLoot.MiniHotSpot09_PhysicsLoot_C
// Size: 0x43a (Inherited: 0x408)
struct AMiniHotSpot09_PhysicsLoot_C : AMistLootablePhysicsActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	enum class ETimelineDirection CollisionTimeline__Direction_C0528B7245D1E21103B711998ED0001B; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UTimelineComponent* CollisionTimeline; // 0x418(0x08)
	struct FVector PrevLocation; // 0x420(0x0c)
	float Speed; // 0x42c(0x04)
	struct UAudioComponent* ChestDragged; // 0x430(0x08)
	bool IsDragged; // 0x438(0x01)
	bool IsBroken; // 0x439(0x01)

	void CollisionTimeline__FinishedFunc(); // Function MiniHotSpot09_PhysicsLoot.MiniHotSpot09_PhysicsLoot_C.CollisionTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void CollisionTimeline__UpdateFunc(); // Function MiniHotSpot09_PhysicsLoot.MiniHotSpot09_PhysicsLoot_C.CollisionTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveTick(float DeltaSeconds); // Function MiniHotSpot09_PhysicsLoot.MiniHotSpot09_PhysicsLoot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource); // Function MiniHotSpot09_PhysicsLoot.MiniHotSpot09_PhysicsLoot_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastAnyDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource DamageSource); // Function MiniHotSpot09_PhysicsLoot.MiniHotSpot09_PhysicsLoot_C.MulticastAnyDamage // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnBroken_Event_1(struct UMistLootableMeshComponent* Sender); // Function MiniHotSpot09_PhysicsLoot.MiniHotSpot09_PhysicsLoot_C.OnBroken_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function MiniHotSpot09_PhysicsLoot.MiniHotSpot09_PhysicsLoot_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function MiniHotSpot09_PhysicsLoot.MiniHotSpot09_PhysicsLoot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MiniHotSpot09_PhysicsLoot(int32_t EntryPoint); // Function MiniHotSpot09_PhysicsLoot.MiniHotSpot09_PhysicsLoot_C.ExecuteUbergraph_MiniHotSpot09_PhysicsLoot // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

