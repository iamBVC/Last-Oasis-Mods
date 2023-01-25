// Enum MinimapPlugin.EMapViewRotationMode
enum class EMapViewRotationMode : uint8 {
	UseFixedRotation = 0,
	InheritYaw = 1,
	EMapViewRotationMode_MAX = 2
};

// Enum MinimapPlugin.EFogPostProcessVolumeOption
enum class EFogPostProcessVolumeOption : uint8 {
	AutoLocate = 0,
	AutoLocateOrCreate = 1,
	Manual = 2,
	EFogPostProcessVolumeOption_MAX = 3
};

// Enum MinimapPlugin.EMapViewSearchOption
enum class EMapViewSearchOption : uint8 {
	Any = 0,
	OnPlayer = 1,
	OnMapBackground = 2,
	OnMapFog = 3,
	Disabled = 4,
	EMapViewSearchOption_MAX = 5
};

// Enum MinimapPlugin.EIconBackgroundInteraction
enum class EIconBackgroundInteraction : uint8 {
	AlwaysRender = 0,
	OnlyRenderInSameVolume = 1,
	OnlyRenderOnSameFloor = 2,
	OnlyRenderInPriorityVolume = 3,
	OnlyRenderOnPriorityFloor = 4,
	EIconBackgroundInteraction_MAX = 5
};

// Enum MinimapPlugin.EIconFogInteraction
enum class EIconFogInteraction : uint8 {
	OnlyRenderWhenRevealing = 0,
	OnlyRenderWhenExplored = 1,
	AlwaysRenderUnderFog = 2,
	AlwaysRenderAboveFog = 3,
	EIconFogInteraction_MAX = 4
};

// Enum MinimapPlugin.EMapFogRevealMode
enum class EMapFogRevealMode : uint8 {
	Off = 0,
	Temporary = 1,
	Permanent = 2,
	EMapFogRevealMode_MAX = 3
};

// Enum MinimapPlugin.EIconSizeUnit
enum class EIconSizeUnit : uint8 {
	ScreenSpace = 0,
	WorldSpace = 1,
	EIconSizeUnit_MAX = 2
};

// ScriptStruct MinimapPlugin.MapBackgroundLevel
// Size: 0x28 (Inherited: 0x00)
struct FMapBackgroundLevel {
	struct UTexture2D* BackgroundTexture; // 0x00(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x08(0x08)
	struct UTextureRenderTarget2D* Overlay; // 0x10(0x08)
	float LevelHeight; // 0x18(0x04)
	struct FVector2D SamplingResolution; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

