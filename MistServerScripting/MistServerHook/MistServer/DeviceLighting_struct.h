#pragma once
#include "UnrealEngine/DataTypes.h"

// Enum DeviceLighting.EDeviceLightingGradient
enum class EDeviceLightingGradient : uint8 {
	Horizontal = 0,
	Vertical = 1,
	Diagonal_TopToBottom = 2,
	Diagonal_BottomToTop = 3,
	EDeviceLightingGradient_MAX = 4
};

// Enum DeviceLighting.EDeviceLightingDevice
enum class EDeviceLightingDevice : uint8 {
	All = 0,
	Keyboard = 1,
	Mouse = 2,
	Motherboard = 3,
	GraphicsCard = 4,
	Display = 5,
	Headset = 6,
	Memory = 7,
	Case = 8,
	Other = 9,
	EDeviceLightingDevice_MAX = 10
};

