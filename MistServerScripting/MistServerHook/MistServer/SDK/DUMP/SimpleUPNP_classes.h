// Class SimpleUPNP.AddPortCallbackProxy
// Size: 0xf8 (Inherited: 0x30)
struct UAddPortCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xa8]; // 0x50(0xa8)

	struct UAddPortCallbackProxy* CreateProxyObjectForAddPort(struct FSimpleUPNPInfo PNPInfo); // Function SimpleUPNP.AddPortCallbackProxy.CreateProxyObjectForAddPort // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x986920
};

// Class SimpleUPNP.GetPortListCallbackProxy
// Size: 0x110 (Inherited: 0x30)
struct UGetPortListCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xc0]; // 0x50(0xc0)

	struct UGetPortListCallbackProxy* CreateProxyObjectForGetPortList(struct UObject* WorldContextObject, bool Refresh, bool AllowRetry, bool OnlySearchDevices, struct FString Location); // Function SimpleUPNP.GetPortListCallbackProxy.CreateProxyObjectForGetPortList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x986c10
};

// Class SimpleUPNP.PerformAllDevicesCallbackProxy
// Size: 0x278 (Inherited: 0x30)
struct UPerformAllDevicesCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x228]; // 0x50(0x228)

	struct UPerformAllDevicesCallbackProxy* CreateProxyObjectForPerformAllDevices(struct UObject* WorldContextObject, struct FSimpleUPNPInfo PNPInfo, enum class UPNPAction Action); // Function SimpleUPNP.PerformAllDevicesCallbackProxy.CreateProxyObjectForPerformAllDevices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x986e00
};

// Class SimpleUPNP.RemovePortCallbackProxy
// Size: 0xf0 (Inherited: 0x30)
struct URemovePortCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xa0]; // 0x50(0xa0)

	struct URemovePortCallbackProxy* CreateProxyObjectForRemovePort(struct FSimpleUPNPInfo PNPInfo); // Function SimpleUPNP.RemovePortCallbackProxy.CreateProxyObjectForRemovePort // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x987160
};

// Class SimpleUPNP.SimpleUPNPBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USimpleUPNPBlueprintLibrary : UBlueprintFunctionLibrary {

	bool GetUPNPState(enum class UPNPState& State); // Function SimpleUPNP.SimpleUPNPBlueprintLibrary.GetUPNPState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x987690
	bool GetDeviceInfo(struct FUPNPDeviceInfo& DeviceInfo); // Function SimpleUPNP.SimpleUPNPBlueprintLibrary.GetDeviceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x987570
	bool GetCurrentPortMappingList(struct TArray<struct FSimpleUPNPInfo>& PortList); // Function SimpleUPNP.SimpleUPNPBlueprintLibrary.GetCurrentPortMappingList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x987450
};

// Class SimpleUPNP.UPNPModule
// Size: 0x38 (Inherited: 0x28)
struct UUPNPModule : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

