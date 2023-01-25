// Class KiBLII.KiBLIIFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKiBLIIFunctionLibrary : UBlueprintFunctionLibrary {

	struct FKeyEvent RemapKeyEvent_SystemToQwerty(struct FKeyEvent& KeyEvent); // Function KiBLII.KiBLIIFunctionLibrary.RemapKeyEvent_SystemToQwerty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x797c70
	struct FKeyEvent RemapKeyEvent_QwertyToSystem(struct FKeyEvent& KeyEvent); // Function KiBLII.KiBLIIFunctionLibrary.RemapKeyEvent_QwertyToSystem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x797b00
	struct FKey RemapKey_QwertyToSystem(struct FKey Key); // Function KiBLII.KiBLIIFunctionLibrary.RemapKey_QwertyToSystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x797de0
	struct FString GetKeyboardLayoutsChars(); // Function KiBLII.KiBLIIFunctionLibrary.GetKeyboardLayoutsChars // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x797a80
};

// Class KiBLII.KiBLIIInputKeySelector
// Size: 0x6f0 (Inherited: 0x6f0)
struct UKiBLIIInputKeySelector : UInputKeySelector {
};

// Class KiBLII.KiBLIISettings
// Size: 0x30 (Inherited: 0x28)
struct UKiBLIISettings : UObject {
	bool bEnableInGame; // 0x28(0x01)
	bool bEnableInEditor; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

