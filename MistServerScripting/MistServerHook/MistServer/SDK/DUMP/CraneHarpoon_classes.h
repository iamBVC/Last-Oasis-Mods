// BlueprintGeneratedClass CraneHarpoon.CraneHarpoon_C
// Size: 0x598 (Inherited: 0x580)
struct ACraneHarpoon_C : AStoneHarpoon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UMistCraneLockComponent* MistCraneLock; // 0x588(0x08)
	struct UHarpoonTetherComponent_C* HarpoonTetherComponent; // 0x590(0x08)

	void BndEvt__HarpoonTetherComponent_K2Node_ComponentBoundEvent_0_Event__DelegateSignature(struct UMistTetherMasterComponent* Sender); // Function CraneHarpoon.CraneHarpoon_C.BndEvt__HarpoonTetherComponent_K2Node_ComponentBoundEvent_0_Event__DelegateSignature // (BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_CraneHarpoon(int32_t EntryPoint); // Function CraneHarpoon.CraneHarpoon_C.ExecuteUbergraph_CraneHarpoon // (Final|UbergraphFunction) // @ game+0x163f1c0
};

