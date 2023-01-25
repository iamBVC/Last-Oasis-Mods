// Class DeviceLighting.DeviceLightingBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDeviceLightingBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetUniformEffect(struct FLinearColor Color, enum class EDeviceLightingDevice DeviceType); // Function DeviceLighting.DeviceLightingBlueprintLibrary.SetUniformEffect // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x78d550
	void SetGradientEffect(struct FLinearColor Color1, struct FLinearColor Color2, enum class EDeviceLightingGradient GradientType, enum class EDeviceLightingDevice DeviceType); // Function DeviceLighting.DeviceLightingBlueprintLibrary.SetGradientEffect // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x78d400
	void SetCornersGradientEffect(struct FLinearColor ColorTopLeft, struct FLinearColor ColorBottomLeft, struct FLinearColor ColorTopRight, struct FLinearColor ColorBottomRight, enum class EDeviceLightingDevice DeviceType); // Function DeviceLighting.DeviceLightingBlueprintLibrary.SetCornersGradientEffect // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x78d270
	bool IsEnabled(); // Function DeviceLighting.DeviceLightingBlueprintLibrary.IsEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x78d240
};

