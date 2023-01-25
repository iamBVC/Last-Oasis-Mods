// BlueprintGeneratedClass FuelPuddle.FuelPuddle_C
// Size: 0x478 (Inherited: 0x408)
struct AFuelPuddle_C : AMistFuelPuddle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct USphereComponent* CollisionSphere; // 0x410(0x08)
	float DisappearTimeline_Opacity_9D2CB6654B72B235F4A150AFF9F9A6C8; // 0x418(0x04)
	float DisappearTimeline_Burn_9D2CB6654B72B235F4A150AFF9F9A6C8; // 0x41c(0x04)
	enum class ETimelineDirection DisappearTimeline__Direction_9D2CB6654B72B235F4A150AFF9F9A6C8; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UTimelineComponent* DisappearTimeline; // 0x428(0x08)
	float AppearTimeline_Opacity_11F917F44A4E83B909C82C9EA741574E; // 0x430(0x04)
	enum class ETimelineDirection AppearTimeline__Direction_11F917F44A4E83B909C82C9EA741574E; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct UTimelineComponent* AppearTimeline; // 0x438(0x08)
	float BurnTimeline_Burn_5F80238144B07BCBED0253908406501A; // 0x440(0x04)
	enum class ETimelineDirection BurnTimeline__Direction_5F80238144B07BCBED0253908406501A; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct UTimelineComponent* BurnTimeline; // 0x448(0x08)
	struct FVector DecalForwardVector; // 0x450(0x0c)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct UDecalComponent* Decal; // 0x460(0x08)
	struct UMaterialInstanceDynamic* DecalDMI; // 0x468(0x08)
	enum class EComponentMobility Mobility; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	float DecalRandomRotation; // 0x474(0x04)

	void BurnTimeline__FinishedFunc(); // Function FuelPuddle.FuelPuddle_C.BurnTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void BurnTimeline__UpdateFunc(); // Function FuelPuddle.FuelPuddle_C.BurnTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void AppearTimeline__FinishedFunc(); // Function FuelPuddle.FuelPuddle_C.AppearTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void AppearTimeline__UpdateFunc(); // Function FuelPuddle.FuelPuddle_C.AppearTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void DisappearTimeline__FinishedFunc(); // Function FuelPuddle.FuelPuddle_C.DisappearTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x163f1c0
	void DisappearTimeline__UpdateFunc(); // Function FuelPuddle.FuelPuddle_C.DisappearTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x163f1c0
	void DisappearTimeline__DisableEmitters__EventFunc(); // Function FuelPuddle.FuelPuddle_C.DisappearTimeline__DisableEmitters__EventFunc // (BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function FuelPuddle.FuelPuddle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void OnIgnitedStateChanged(bool bIgnited); // Function FuelPuddle.FuelPuddle_C.OnIgnitedStateChanged // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void Disappear(); // Function FuelPuddle.FuelPuddle_C.Disappear // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnFuelRanOut(); // Function FuelPuddle.FuelPuddle_C.OnFuelRanOut // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FuelPuddle.FuelPuddle_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void CreateDecal(struct FVector Location, struct FVector Impact, struct USceneComponent* AttachmentParent, struct FName AttachmentBone); // Function FuelPuddle.FuelPuddle_C.CreateDecal // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_FuelPuddle(int32_t EntryPoint); // Function FuelPuddle.FuelPuddle_C.ExecuteUbergraph_FuelPuddle // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

