// Enum SimpleUPNP.ESimpleUPNPErrorCode
enum class ESimpleUPNPErrorCode : uint8 {
	SUCCESS = 0,
	UNKNOWN = 1,
	IGD_NETWORK_INIT_FAILED = 2,
	IGD_REQUEST_FAILED = 3,
	IGD_GET_VALID_FAILED = 4,
	IGD_GET_STATUS_FAILED = 5,
	IGD_INVALID_DEVICE_LIST = 6,
	GET_EXTERNALIP_FAILED = 7,
	GET_COMMANLINK_PROPERTIES_FAILED = 8,
	GET_CONNECTION_INFO_FAILED = 9,
	GET_GENERIC_PORTMAPPING_ENTRY_FAILED = 10,
	GET_DEVICE_LIST_FAILED = 11,
	ADD_MAPPING_FAILED = 12,
	DELETE_MAPPING_FAILED = 13,
	REQUEST_TIMEOUT = 14,
	NOT_FINISHED_PREVIOUS_REQUEST = 15,
	ESimpleUPNPErrorCode_MAX = 16
};

// Enum SimpleUPNP.UPNPAction
enum class UPNPAction : uint8 {
	UPNPAction_ADD_Port = 0,
	UPNPAction_DELETE_Port = 1,
	UPNPAction_MAX = 2
};

// Enum SimpleUPNP.UPNPState
enum class UPNPState : uint8 {
	UPNPState_IDLE = 0,
	UPNPState_DiscoverDevice = 1,
	UPNPState_GetValidIGD = 2,
	UPNPState_GetStatus = 3,
	UPNPState_GetExternalIP = 4,
	UPNPState_GetConnectionTypeInfo = 5,
	UPNPState_GetCommonLinkProperties = 6,
	UPNPState_AddPortMapping = 7,
	UPNPState_DeletePortMapping = 8,
	UPNPState_GetGenericPortMappingEntry = 9,
	UPNPState_MAX = 10
};

// ScriptStruct SimpleUPNP.SimpleUPNPInfo
// Size: 0x78 (Inherited: 0x00)
struct FSimpleUPNPInfo {
	struct FString Protocol; // 0x00(0x10)
	struct FString ExternalPort; // 0x10(0x10)
	struct FString InternalPort; // 0x20(0x10)
	struct FString InAddress; // 0x30(0x10)
	struct FString RemoteHost; // 0x40(0x10)
	struct FString Desc; // 0x50(0x10)
	struct FString Duration; // 0x60(0x10)
	bool Enabled; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct SimpleUPNP.UPNPDeviceInfo
// Size: 0x170 (Inherited: 0x00)
struct FUPNPDeviceInfo {
	struct FManufactureInfo Manufacture; // 0x00(0x90)
	struct FDeviceStatusInfo DeviceStatusInfo; // 0x90(0x78)
	struct FCommonLinkProperties CommonLinkProperties; // 0x108(0x40)
	struct TArray<struct FDeviceInfo> DeviceList; // 0x148(0x10)
	int32_t CurrentDeviceIndex; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FString ErrorCode; // 0x160(0x10)
};

// ScriptStruct SimpleUPNP.DeviceInfo
// Size: 0x70 (Inherited: 0x00)
struct FDeviceInfo {
	struct FString Location; // 0x00(0x10)
	struct FString Server; // 0x10(0x10)
	struct FString CacheContorl; // 0x20(0x10)
	struct FString Ext; // 0x30(0x10)
	struct FString ST; // 0x40(0x10)
	struct FString USN; // 0x50(0x10)
	struct FString Date; // 0x60(0x10)
};

// ScriptStruct SimpleUPNP.CommonLinkProperties
// Size: 0x40 (Inherited: 0x00)
struct FCommonLinkProperties {
	struct FString WANAccessType; // 0x00(0x10)
	struct FString Layer1UpstreamMaxBitRate; // 0x10(0x10)
	struct FString Layer1DownstreamMaxBitRate; // 0x20(0x10)
	struct FString PhysicalLinkStatus; // 0x30(0x10)
};

// ScriptStruct SimpleUPNP.DeviceStatusInfo
// Size: 0x78 (Inherited: 0x00)
struct FDeviceStatusInfo {
	int32_t Uptime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ConnectionStatus; // 0x08(0x10)
	struct FString LastConnectionError; // 0x18(0x10)
	struct FString ExternalIPAddress; // 0x28(0x10)
	struct FString LocalIPAddress; // 0x38(0x10)
	struct FString DeviceLocation; // 0x48(0x10)
	struct FString ConnectionType; // 0x58(0x10)
	struct FString PossibleConnectionTypes; // 0x68(0x10)
};

// ScriptStruct SimpleUPNP.ManufactureInfo
// Size: 0x90 (Inherited: 0x00)
struct FManufactureInfo {
	struct FString SpecVersion; // 0x00(0x10)
	struct FString FriendlyName; // 0x10(0x10)
	struct FString Manufacturer; // 0x20(0x10)
	struct FString ManufacturerURL; // 0x30(0x10)
	struct FString ModelDescription; // 0x40(0x10)
	struct FString ModelName; // 0x50(0x10)
	struct FString ModelNumber; // 0x60(0x10)
	struct FString ModelURL; // 0x70(0x10)
	struct FString SerialNumber; // 0x80(0x10)
};

