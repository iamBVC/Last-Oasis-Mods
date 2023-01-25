// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// Size: 0x578 (Inherited: 0x4a8)
struct AMagicLeapSharedWorldGameMode : AGameMode {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x4a8(0x10)
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x4b8(0x10)
	float PinSelectionConfidenceThreshold; // 0x4c8(0x04)
	char pad_4CC[0xa4]; // 0x4cc(0xa4)
	struct AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x570(0x08)

	bool SendSharedWorldDataToClients(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xab92f0
	void SelectChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xab92d0
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x163f1c0
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData& NewSharedWorldData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData // (BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xab91b0
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// Size: 0x470 (Inherited: 0x430)
struct AMagicLeapSharedWorldGameState : AGameState {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x430(0x10)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x440(0x10)
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x450(0x10)
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x460(0x10)

	void OnReplicate_SharedWorldData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData // (Final|Native|Private) // @ game+0xab92b0
	void OnReplicate_AlignmentTransforms(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms // (Final|Native|Private) // @ game+0xab9290
	void MagicLeapSharedWorldEvent__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x163f1c0
	struct FTransform CalculateXRCameraRootTransform(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xab9060
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// Size: 0x720 (Inherited: 0x708)
struct AMagicLeapSharedWorldPlayerController : APlayerController {
	char pad_708[0x18]; // 0x708(0x18)

	void ServerSetLocalWorldData(struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xab93c0
	void ServerSetAlignmentTransforms(struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xab9320
	bool IsChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xab9260
	void ClientSetChosenOne(bool bChosenOne); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0xab9120
	void ClientMarkReadyForSendingLocalData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xab9100
	bool CanSendLocalDataToServer(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xab90d0
};

