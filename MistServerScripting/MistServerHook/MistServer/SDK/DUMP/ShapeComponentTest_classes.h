// BlueprintGeneratedClass ShapeComponentTest.ShapeComponentTest_C
// Size: 0x450 (Inherited: 0x3c0)
struct AShapeComponentTest_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct USpotLightComponent* SpotLight7; // 0x3c8(0x08)
	struct USpotLightComponent* SpotLight6; // 0x3d0(0x08)
	struct UPostProcessComponent* PostProcess4; // 0x3d8(0x08)
	struct UPostProcessComponent* PostProcess3; // 0x3e0(0x08)
	struct UPostProcessComponent* PostProcess2; // 0x3e8(0x08)
	struct UPostProcessComponent* PostProcess1; // 0x3f0(0x08)
	struct UPostProcessComponent* PostProcess; // 0x3f8(0x08)
	struct UBoxComponent* Box4; // 0x400(0x08)
	struct UBoxComponent* Box3; // 0x408(0x08)
	struct UBoxComponent* Box2; // 0x410(0x08)
	struct UBoxComponent* Box1; // 0x418(0x08)
	struct UBoxComponent* Box; // 0x420(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x428(0x08)
	float Intensity; // 0x430(0x04)
	float Intensity multiply; // 0x434(0x04)
	bool LoopIncrease; // 0x438(0x01)
	bool LoopDecrease; // 0x439(0x01)
	char pad_43A[0x2]; // 0x43a(0x02)
	float DeltaTimer; // 0x43c(0x04)
	bool NewVar_1; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FTimerHandle Timer; // 0x448(0x08)

	void ReceiveActorBeginTrigger(struct AActor* OtherActor); // Function ShapeComponentTest.ShapeComponentTest_C.ReceiveActorBeginTrigger // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveActorEndTrigger(struct AActor* OtherActor); // Function ShapeComponentTest.ShapeComponentTest_C.ReceiveActorEndTrigger // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void Increase light event(); // Function ShapeComponentTest.ShapeComponentTest_C.Increase light event // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Decrease light event(); // Function ShapeComponentTest.ShapeComponentTest_C.Decrease light event // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function ShapeComponentTest.ShapeComponentTest_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_ShapeComponentTest(int32_t EntryPoint); // Function ShapeComponentTest.ShapeComponentTest_C.ExecuteUbergraph_ShapeComponentTest // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

