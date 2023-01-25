// Class MagicLeapARPin.MagicLeapARPinComponent
// Size: 0x3c0 (Inherited: 0x290)
struct UMagicLeapARPinComponent : USceneComponent {
	struct FString ObjectUID; // 0x290(0x10)
	int32_t UserIndex; // 0x2a0(0x04)
	enum class EMagicLeapAutoPinType AutoPinType; // 0x2a4(0x01)
	bool bShouldPinActor; // 0x2a5(0x01)
	char pad_2A6[0x2]; // 0x2a6(0x02)
	struct UMagicLeapARPinSaveGame* PinDataClass; // 0x2a8(0x08)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x2c0(0x10)
	struct FGuid PinnedCFUID; // 0x2d0(0x10)
	struct USceneComponent* PinnedSceneComponent; // 0x2e0(0x08)
	struct UMagicLeapARPinSaveGame* PinData; // 0x2e8(0x08)
	char pad_2F0[0xd0]; // 0x2f0(0xd0)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin // (Final|Native|Public|BlueprintCallable) // @ game+0xab3c40
	bool PinSceneComponent(struct USceneComponent* ComponentToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent // (Final|Native|Public|BlueprintCallable) // @ game+0xab3b10
	bool PinRestoredOrSynced(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xab3ae0
	bool PinActor(struct AActor* ActorToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinActor // (Final|Native|Public|BlueprintCallable) // @ game+0xab3a50
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x163f1c0
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x163f1c0
	bool IsPinned(); // Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xab39f0
	bool GetPinState(struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xab3890
	bool GetPinnedPinID(struct FGuid& PinID); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xab3940
	struct UMagicLeapARPinSaveGame* GetPinData(struct UMagicLeapARPinSaveGame* PinDataClass); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData // (Final|Native|Public|BlueprintCallable) // @ game+0xab3800
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary {

	void UnBindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate& Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xab3ba0
	bool IsTrackerValid(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab3a20
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t& Count); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xab3770
	enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector& SearchPoint, struct FGuid& PinID); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xab3680
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, struct TArray<struct FGuid>& Pins); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xab35a0
	struct FString GetARPinStateToString(struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab34c0
	enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid& PinID, struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xab33c0
	bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid& PinID, struct FVector& Position, struct FRotator& Orientation, bool& PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xab3230
	bool GetARPinPositionAndOrientation(struct FGuid& PinID, struct FVector& Position, struct FRotator& Orientation, bool& PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xab30a0
	enum class EMagicLeapPassableWorldError DestroyTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab3070
	enum class EMagicLeapPassableWorldError CreateTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab3040
	void BindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate& Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xab2fa0
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// Size: 0x40 (Inherited: 0x28)
struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28(0x04)
	struct FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// Size: 0xa0 (Inherited: 0x28)
struct UMagicLeapARPinSaveGame : USaveGame {
	struct FGuid PinnedID; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform ComponentWorldTransform; // 0x40(0x30)
	struct FTransform PinTransform; // 0x70(0x30)
};

