// BlueprintGeneratedClass WingsuitComponent.WingsuitComponent_C
// Size: 0x1d1 (Inherited: 0x1b8)
struct UWingsuitComponent_C : UMistWingsuitComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b8(0x08)
	struct UAudioComponent* SpreadLoop; // 0x1c0(0x08)
	struct UAudioComponent* NarrowLoop; // 0x1c8(0x08)
	bool VOFired; // 0x1d0(0x01)

	void ReceiveTick(float DeltaSeconds); // Function WingsuitComponent.WingsuitComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveOpenWingsuit(); // Function WingsuitComponent.WingsuitComponent_C.ReceiveOpenWingsuit // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveCloseWingsuit(); // Function WingsuitComponent.WingsuitComponent_C.ReceiveCloseWingsuit // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_WingsuitComponent(int32_t EntryPoint); // Function WingsuitComponent.WingsuitComponent_C.ExecuteUbergraph_WingsuitComponent // (Final|UbergraphFunction) // @ game+0x163f1c0
};

