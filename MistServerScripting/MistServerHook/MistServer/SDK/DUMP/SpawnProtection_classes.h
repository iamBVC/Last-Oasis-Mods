// BlueprintGeneratedClass SpawnProtection.SpawnProtection_C
// Size: 0x470 (Inherited: 0x3e0)
struct ASpawnProtection_C : AMistSpawnProtectionBubble {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USphereComponent* Sphere; // 0x3e8(0x08)
	struct UStaticMeshComponent* BubbleVisualRepresentationInversed; // 0x3f0(0x08)
	struct UBoxComponent* PC1; // 0x3f8(0x08)
	struct UBoxComponent* PC8; // 0x400(0x08)
	struct UBoxComponent* PC7; // 0x408(0x08)
	struct UBoxComponent* PC6; // 0x410(0x08)
	struct UBoxComponent* PC5; // 0x418(0x08)
	struct UBoxComponent* PC4; // 0x420(0x08)
	struct UBoxComponent* PC3; // 0x428(0x08)
	struct UBoxComponent* PC2; // 0x430(0x08)
	struct UStaticMeshComponent* BubbleVisualRepresentation1; // 0x438(0x08)
	struct USceneComponent* Root; // 0x440(0x08)
	struct UStaticMeshComponent* BubbleCollision; // 0x448(0x08)
	float DissolveTimeline_Dissolve_2EFC9F8B4B76A39CCD986BB24D4316E6; // 0x450(0x04)
	enum class ETimelineDirection DissolveTimeline__Direction_2EFC9F8B4B76A39CCD986BB24D4316E6; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct UTimelineComponent* DissolveTimeline; // 0x458(0x08)
	struct UMaterialInstanceDynamic* InteriorDMI; // 0x460(0x08)
	struct UMaterialInstanceDynamic* ExteriorDMI; // 0x468(0x08)

	void DissolveTimeline__FinishedFunc(); // Function SpawnProtection.SpawnProtection_C.DissolveTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void DissolveTimeline__UpdateFunc(); // Function SpawnProtection.SpawnProtection_C.DissolveTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void DestroySelf(); // Function SpawnProtection.SpawnProtection_C.DestroySelf // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DisableCollisions(); // Function SpawnProtection.SpawnProtection_C.DisableCollisions // (Net|NetReliableBlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void DisableVisuals(); // Function SpawnProtection.SpawnProtection_C.DisableVisuals // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveActorBeginTrigger(struct AActor* OtherActor); // Function SpawnProtection.SpawnProtection_C.ReceiveActorBeginTrigger // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_SpawnProtection(int32_t EntryPoint); // Function SpawnProtection.SpawnProtection_C.ExecuteUbergraph_SpawnProtection // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

