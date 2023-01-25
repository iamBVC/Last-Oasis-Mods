// BlueprintGeneratedClass PhemkeMobAnimDataComponent.PhemkeMobAnimDataComponent_C
// Size: 0x109 (Inherited: 0xf0)
struct UPhemkeMobAnimDataComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	bool IsAware; // 0xf8(0x01)
	bool IsTired; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
	struct APhemkeMob_C* PhemkeMob; // 0x100(0x08)
	bool IsRunningAway; // 0x108(0x01)

	void OnRep_IsRunningAway(); // Function PhemkeMobAnimDataComponent.PhemkeMobAnimDataComponent_C.OnRep_IsRunningAway // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_IsTired(); // Function PhemkeMobAnimDataComponent.PhemkeMobAnimDataComponent_C.OnRep_IsTired // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void OnRep_IsAware(); // Function PhemkeMobAnimDataComponent.PhemkeMobAnimDataComponent_C.OnRep_IsAware // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function PhemkeMobAnimDataComponent.PhemkeMobAnimDataComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_PhemkeMobAnimDataComponent(int32_t EntryPoint); // Function PhemkeMobAnimDataComponent.PhemkeMobAnimDataComponent_C.ExecuteUbergraph_PhemkeMobAnimDataComponent // (Final|UbergraphFunction) // @ game+0x163f1c0
};

