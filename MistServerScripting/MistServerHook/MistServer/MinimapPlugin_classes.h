#pragma once
#include "MinimapPlugin_struct.h"


// Class MinimapPlugin.MapAreaPrimitiveComponent
// Size: 0x7d0 (Inherited: 0x7c0)
struct UMapAreaPrimitiveComponent : UPrimitiveComponent {
	char pad_7C0[0x10]; // 0x7c0(0x10)
};

// Class MinimapPlugin.MapAreaBase
// Size: 0x3d8 (Inherited: 0x3c0)
struct AMapAreaBase : AActor {
	struct UBoxComponent* AreaBounds; // 0x3c0(0x08)
	struct UMapAreaPrimitiveComponent* AreaPrimitive; // 0x3c8(0x08)
	struct UMapViewComponent* AreaMapView; // 0x3d0(0x08)

	bool GetMapViewCornerUVs(struct UMapViewComponent* MapView, struct TArray<struct FVector2D>& CornerUVs); // Function MinimapPlugin.MapAreaBase.GetMapViewCornerUVs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x70e220
	struct UMapViewComponent* GetMapView(); // Function MinimapPlugin.MapAreaBase.GetMapView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e1f0
	float GetMapAspectRatio(); // Function MinimapPlugin.MapAreaBase.GetMapAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e140
	int32_t GetLevelAtHeight(float WorldZ); // Function MinimapPlugin.MapAreaBase.GetLevelAtHeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e0b0
	struct UBoxComponent* GetAreaBounds(); // Function MinimapPlugin.MapAreaBase.GetAreaBounds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70d6c0
};

// Class MinimapPlugin.MapBackground
// Size: 0x4f8 (Inherited: 0x3d8)
struct AMapBackground : AMapAreaBase {
	struct FMulticastInlineDelegate OnMapBackgroundTextureChanged; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnMapBackgroundMaterialChanged; // 0x3e8(0x10)
	struct FMulticastInlineDelegate OnMapBackgroundAppearanceChanged; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnMapBackgroundRendered; // 0x408(0x10)
	struct FMulticastInlineDelegate OnMapBackgroundOverlayChanged; // 0x418(0x10)
	struct TArray<struct FMapBackgroundLevel> BackgroundLevels; // 0x428(0x10)
	struct UMaterialInterface* BackgroundMaterial_UMG; // 0x438(0x08)
	struct UMaterialInterface* BackgroundMaterial_UMG_HUD; // 0x440(0x08)
	struct UMaterialInterface* BackgroundMaterial_Canvas; // 0x448(0x08)
	bool bBackgroundVisible; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	int32_t BackgroundPriority; // 0x454(0x04)
	int32_t BackgroundZOrder; // 0x458(0x04)
	int32_t DynamicRenderTargetSize; // 0x45c(0x04)
	bool bRenderNavigationMesh; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct TArray<struct AActor*> HiddenActorClasses; // 0x468(0x10)
	struct TArray<struct AActor*> HiddenActors; // 0x478(0x10)
	struct TMap<struct UMapRendererComponent*, struct UMaterialInstanceDynamic*> MaterialInstances; // 0x488(0x50)
	struct TArray<struct UBoxComponent*> LevelVisualizers; // 0x4d8(0x10)
	char pad_4E8[0x8]; // 0x4e8(0x08)
	struct USceneCaptureComponent2D* CaptureComponent2D; // 0x4f0(0x08)

	void SetBackgroundZOrder(int32_t NewBackgroundZOrder); // Function MinimapPlugin.MapBackground.SetBackgroundZOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x70ed80
	void SetBackgroundVisible(bool bNewVisible); // Function MinimapPlugin.MapBackground.SetBackgroundVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x70ecf0
	void SetBackgroundTexture(int32_t Level, struct UTexture2D* NewBackgroundTexture); // Function MinimapPlugin.MapBackground.SetBackgroundTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x70ec30
	void SetBackgroundPriority(int32_t NewBackgroundPriority); // Function MinimapPlugin.MapBackground.SetBackgroundPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x70ebb0
	void SetBackgroundOverlay(int32_t Level, struct UTextureRenderTarget2D* NewBackgroundOverlay); // Function MinimapPlugin.MapBackground.SetBackgroundOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0x70eaf0
	void SetBackgroundMaterialForUMGHUD(struct UMaterialInterface* NewMaterial); // Function MinimapPlugin.MapBackground.SetBackgroundMaterialForUMGHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x70ea70
	void SetBackgroundMaterialForUMG(struct UMaterialInterface* NewMaterial); // Function MinimapPlugin.MapBackground.SetBackgroundMaterialForUMG // (Final|Native|Public|BlueprintCallable) // @ game+0x70e9f0
	void SetBackgroundMaterialForCanvas(struct UMaterialInterface* NewMaterial); // Function MinimapPlugin.MapBackground.SetBackgroundMaterialForCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0x70e970
	void RerenderBackground(); // Function MinimapPlugin.MapBackground.RerenderBackground // (Final|Native|Public|BlueprintCallable) // @ game+0x70e910
	bool IsMultiLevel(); // Function MinimapPlugin.MapBackground.IsMultiLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e4d0
	bool IsBackgroundVisible(); // Function MinimapPlugin.MapBackground.IsBackgroundVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e440
	int32_t GetBackgroundZOrder(); // Function MinimapPlugin.MapBackground.GetBackgroundZOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70d9c0
	struct UTexture* GetBackgroundTextureAtHeight(float WorldZ); // Function MinimapPlugin.MapBackground.GetBackgroundTextureAtHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70d930
	struct UTexture* GetBackgroundTexture(int32_t Level); // Function MinimapPlugin.MapBackground.GetBackgroundTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70d8a0
	int32_t GetBackgroundPriority(); // Function MinimapPlugin.MapBackground.GetBackgroundPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70d870
	struct UTextureRenderTarget2D* GetBackgroundOverlay(int32_t Level); // Function MinimapPlugin.MapBackground.GetBackgroundOverlay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70d7e0
	struct UMaterialInstanceDynamic* GetBackgroundMaterialInstanceForCanvas(struct UMapRendererComponent* Renderer); // Function MinimapPlugin.MapBackground.GetBackgroundMaterialInstanceForCanvas // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x70d750
	struct UMaterialInterface* GetBackgroundMaterialForUMGHUD(); // Function MinimapPlugin.MapBackground.GetBackgroundMaterialForUMGHUD // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70d720
	struct UMaterialInterface* GetBackgroundMaterialForUMG(); // Function MinimapPlugin.MapBackground.GetBackgroundMaterialForUMG // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70d6f0
};

// Class MinimapPlugin.MapFog
// Size: 0x508 (Inherited: 0x3d8)
struct AMapFog : AMapAreaBase {
	struct FMulticastInlineDelegate OnMapFogMaterialChanged; // 0x3d8(0x10)
	int32_t FogRenderTargetSize; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UMaterialInterface* FogMaterial_UMG; // 0x3f0(0x08)
	struct UMaterialInterface* FogMaterial_Canvas; // 0x3f8(0x08)
	float MinimapOpacityHidden; // 0x400(0x04)
	float MinimapOpacityExplored; // 0x404(0x04)
	float MinimapOpacityRevealing; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct UMaterialInterface* FogCombineMaterial; // 0x410(0x08)
	float FogCacheLifetime; // 0x418(0x04)
	bool bEnableWorldFog; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	struct UMaterialInterface* FogPostProcessMaterial; // 0x420(0x08)
	float WorldOpacityHidden; // 0x428(0x04)
	float WorldOpacityExplored; // 0x42c(0x04)
	float WorldOpacityRevealing; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct APostProcessVolume* PostProcessVolume; // 0x438(0x08)
	enum class EFogPostProcessVolumeOption AutoLocatePostProcessVolume; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UTextureRenderTarget2D* PermanentRevealRT_A; // 0x448(0x08)
	struct UTextureRenderTarget2D* PermanentRevealRT_B; // 0x450(0x08)
	struct UTextureRenderTarget2D* RevealRT_Staging; // 0x458(0x08)
	char pad_460[0x8]; // 0x460(0x08)
	struct TMap<struct UMapRendererComponent*, struct UMaterialInstanceDynamic*> MaterialInstances; // 0x468(0x50)
	struct UMaterialInstanceDynamic* FogCombineMatInst; // 0x4b8(0x08)
	struct UMaterialInstanceDynamic* FogPostProcessMatInst; // 0x4c0(0x08)
	char pad_4C8[0x30]; // 0x4c8(0x30)
	struct TArray<struct UMapRevealerComponent*> MapRevealers; // 0x4f8(0x10)

	void SetFogMaterialForUMG(struct UMaterialInterface* NewMaterial); // Function MinimapPlugin.MapFog.SetFogMaterialForUMG // (Final|Native|Public|BlueprintCallable) // @ game+0x70ef00
	void SetFogMaterialForCanvas(struct UMaterialInterface* NewMaterial); // Function MinimapPlugin.MapFog.SetFogMaterialForCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0x70ee80
	void OnMapRevealerUnregistered(struct UMapRevealerComponent* MapRevealer); // Function MinimapPlugin.MapFog.OnMapRevealerUnregistered // (Final|Native|Private) // @ game+0x70e700
	void OnMapRevealerRegistered(struct UMapRevealerComponent* MapRevealer); // Function MinimapPlugin.MapFog.OnMapRevealerRegistered // (Final|Native|Private) // @ game+0x70e680
	float GetWorldToPixelRatio(); // Function MinimapPlugin.MapFog.GetWorldToPixelRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e410
	struct UTextureRenderTarget2D* GetSourceFogRenderTarget(); // Function MinimapPlugin.MapFog.GetSourceFogRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e3e0
	struct UMaterialInstanceDynamic* GetFogMaterialInstanceForCanvas(struct UMapRendererComponent* Renderer); // Function MinimapPlugin.MapFog.GetFogMaterialInstanceForCanvas // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x70dc30
	struct UMaterialInterface* GetFogMaterialForUMG(); // Function MinimapPlugin.MapFog.GetFogMaterialForUMG // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x70dc00
	bool GetFogAtLocation(struct FVector& WorldLocation, bool bRequireCurrentlyRevealing, float& RevealFactor); // Function MinimapPlugin.MapFog.GetFogAtLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x70dad0
	struct UTextureRenderTarget2D* GetDestinationFogRenderTarget(); // Function MinimapPlugin.MapFog.GetDestinationFogRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70da20
};

// Class MinimapPlugin.MapFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMapFunctionLibrary : UBlueprintFunctionLibrary {

	struct UMapTrackerComponent* GetMapTracker(struct UObject* WorldContextObject); // Function MinimapPlugin.MapFunctionLibrary.GetMapTracker // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70e170
	struct AMapBackground* GetFirstMapBackground(struct UObject* WorldContextObject); // Function MinimapPlugin.MapFunctionLibrary.GetFirstMapBackground // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70da50
	struct UMapViewComponent* FindMapView(struct UObject* WorldContextObject, enum class EMapViewSearchOption MapViewSearchOption); // Function MinimapPlugin.MapFunctionLibrary.FindMapView // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x70d600
	bool DetectIsInView(struct FVector2D& UV, struct FVector2D& OuterRadiusUV, bool bIsCircular); // Function MinimapPlugin.MapFunctionLibrary.DetectIsInView // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x70d480
	bool ComputeViewFrustum(struct UObject* WorldContextObject, struct UMapViewComponent* MapView, bool bIsCircular, struct TArray<struct FVector2D>& CornerUVs, float FloorDistance); // Function MinimapPlugin.MapFunctionLibrary.ComputeViewFrustum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x70d2b0
	struct FVector2D ClampIntoView(struct FVector2D& UV, float OuterRadiusUV, bool bIsCircular); // Function MinimapPlugin.MapFunctionLibrary.ClampIntoView // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x70d190
	struct TArray<struct UMapIconComponent*> BoxSelectInView(struct FVector2D& StartUV, struct FVector2D& EndUV, struct UMapViewComponent* MapView, bool bIsCircular); // Function MinimapPlugin.MapFunctionLibrary.BoxSelectInView // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x70cfd0
};

// Class MinimapPlugin.MapIconComponent
// Size: 0xa60 (Inherited: 0x7e0)
struct UMapIconComponent : UBillboardComponent {
	struct FMulticastInlineDelegate OnIconAppearanceChanged; // 0x7d8(0x10)
	struct FMulticastInlineDelegate OnIconMaterialChanged; // 0x7e8(0x10)
	struct FMulticastInlineDelegate OnIconMaterialInstancesChanged; // 0x7f8(0x10)
	struct FMulticastInlineDelegate OnIconEnteredView; // 0x808(0x10)
	struct FMulticastInlineDelegate OnIconLeftView; // 0x818(0x10)
	struct FMulticastInlineDelegate OnIconDestroyed; // 0x828(0x10)
	struct FMulticastInlineDelegate OnIconHoverStart; // 0x838(0x10)
	struct FMulticastInlineDelegate OnIconHoverEnd; // 0x848(0x10)
	struct FMulticastInlineDelegate OnIconClicked; // 0x858(0x10)
	struct FName IconCategory; // 0x868(0x08)
	struct UTexture2D* IconTexture; // 0x870(0x08)
	struct UMaterialInterface* IconMaterial_UMG; // 0x878(0x08)
	struct UMaterialInterface* IconMaterial_Canvas; // 0x880(0x08)
	bool bIconVisible; // 0x888(0x01)
	bool bIconRotates; // 0x889(0x01)
	enum class EIconSizeUnit IconSizeUnit; // 0x88a(0x01)
	float IconSize; // 0x88c(0x04)
	struct FLinearColor IconDrawColor; // 0x890(0x10)
	int32_t IconZOrder; // 0x8a0(0x04)
	bool bObjectiveArrowEnabled; // 0x8a4(0x01)
	struct UTexture2D* ObjectiveArrowTexture; // 0x8a8(0x08)
	struct UMaterialInterface* ObjectiveArrowMaterial_UMG; // 0x8b0(0x08)
	struct UMaterialInterface* ObjectiveArrowMaterial_Canvas; // 0x8b8(0x08)
	bool bObjectiveArrowRotates; // 0x8c0(0x01)
	float ObjectiveArrowSize; // 0x8c4(0x04)
	bool bIconInteractable; // 0x8c8(0x01)
	char pad_8CA[0x6]; // 0x8ca(0x06)
	struct FText IconTooltipText; // 0x8d0(0x18)
	enum class EIconBackgroundInteraction IconBackgroundInteraction; // 0x8e8(0x01)
	enum class EIconFogInteraction IconFogInteraction; // 0x8e9(0x01)
	char pad_8EA[0x2]; // 0x8ea(0x02)
	float IconFogRevealThreshold; // 0x8ec(0x04)
	bool bHideOwnerInsideFog; // 0x8f0(0x01)
	char pad_8F1[0x7]; // 0x8f1(0x07)
	struct TMap<struct UMapViewComponent*, bool> IsRenderedPerView; // 0x8f8(0x50)
	struct UMaterialInterface* InitialIconMaterial_UMG; // 0x948(0x08)
	struct UMaterialInterface* InitialIconMaterial_Canvas; // 0x950(0x08)
	struct TMap<struct UUserWidget*, struct UMaterialInstanceDynamic*> IconMaterialInstances_UMG; // 0x958(0x50)
	struct TMap<struct UMapRendererComponent*, struct UMaterialInstanceDynamic*> IconMaterialInstances_Canvas; // 0x9a8(0x50)
	struct TMap<struct UMapRendererComponent*, struct UMaterialInstanceDynamic*> ObjectiveArrowMaterialInstances_Canvas; // 0x9f8(0x50)
	struct UWidget* CustomTooltipWidget; // 0xa48(0x08)
	char pad_A50[0x10]; // 0xa50(0x10)

	void SetObjectiveArrowTexture(struct UTexture2D* NewTexture); // Function MinimapPlugin.MapIconComponent.SetObjectiveArrowTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x70f880
	void SetObjectiveArrowSize(float NewObjectiveArrowSize); // Function MinimapPlugin.MapIconComponent.SetObjectiveArrowSize // (Final|Native|Public|BlueprintCallable) // @ game+0x70f800
	void SetObjectiveArrowRotates(bool bNewRotates); // Function MinimapPlugin.MapIconComponent.SetObjectiveArrowRotates // (Final|Native|Public|BlueprintCallable) // @ game+0x70f770
	void SetObjectiveArrowEnabled(bool bNewObjectiveArrowEnabled); // Function MinimapPlugin.MapIconComponent.SetObjectiveArrowEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x70f6e0
	void SetIconZOrder(int32_t NewZOrder); // Function MinimapPlugin.MapIconComponent.SetIconZOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x70f660
	void SetIconVisible(bool bNewVisible); // Function MinimapPlugin.MapIconComponent.SetIconVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x70f5d0
	void SetIconTooltipText(struct FText NewIconName); // Function MinimapPlugin.MapIconComponent.SetIconTooltipText // (Final|Native|Public|BlueprintCallable) // @ game+0x70f4f0
	void SetIconTexture(struct UTexture2D* NewIcon); // Function MinimapPlugin.MapIconComponent.SetIconTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x70f470
	void SetIconSize(float NewIconSize, enum class EIconSizeUnit NewIconSizeUnit); // Function MinimapPlugin.MapIconComponent.SetIconSize // (Final|Native|Public|BlueprintCallable) // @ game+0x70f3b0
	void SetIconRotates(bool bNewRotates); // Function MinimapPlugin.MapIconComponent.SetIconRotates // (Final|Native|Public|BlueprintCallable) // @ game+0x70f320
	void SetIconMaterialForUMG(struct UMaterialInterface* NewMaterial); // Function MinimapPlugin.MapIconComponent.SetIconMaterialForUMG // (Final|Native|Public|BlueprintCallable) // @ game+0x70f2a0
	void SetIconMaterialForCanvas(struct UMaterialInterface* NewMaterial); // Function MinimapPlugin.MapIconComponent.SetIconMaterialForCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0x70f220
	void SetIconInteractable(bool bNewInteractable); // Function MinimapPlugin.MapIconComponent.SetIconInteractable // (Final|Native|Public|BlueprintCallable) // @ game+0x70f190
	void SetIconFogRevealThreshold(float NewFogRevealThreshold); // Function MinimapPlugin.MapIconComponent.SetIconFogRevealThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x70f110
	void SetIconFogInteraction(enum class EIconFogInteraction NewFogInteraction); // Function MinimapPlugin.MapIconComponent.SetIconFogInteraction // (Final|Native|Public|BlueprintCallable) // @ game+0x70f090
	void SetIconDrawColor(struct FLinearColor& NewDrawColor); // Function MinimapPlugin.MapIconComponent.SetIconDrawColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x70f000
	void SetIconBackgroundInteraction(enum class EIconBackgroundInteraction NewBackgroundInteraction); // Function MinimapPlugin.MapIconComponent.SetIconBackgroundInteraction // (Final|Native|Public|BlueprintCallable) // @ game+0x70ef80
	void SetCustomTooltipWidget(struct UWidget* Widget); // Function MinimapPlugin.MapIconComponent.SetCustomTooltipWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x70ee00
	void ResetIconMaterialForUMG(); // Function MinimapPlugin.MapIconComponent.ResetIconMaterialForUMG // (Final|Native|Public|BlueprintCallable) // @ game+0x70e950
	void ResetIconMaterialForCanvas(); // Function MinimapPlugin.MapIconComponent.ResetIconMaterialForCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0x70e930
	void RegisterMaterialInstanceFromUMG(struct UUserWidget* IconWidget, struct UMaterialInstanceDynamic* MatInst); // Function MinimapPlugin.MapIconComponent.RegisterMaterialInstanceFromUMG // (Final|Native|Public|BlueprintCallable) // @ game+0x70e850
	void ReceiveHoverStart(); // Function MinimapPlugin.MapIconComponent.ReceiveHoverStart // (Final|Native|Public|BlueprintCallable) // @ game+0x70e830
	void ReceiveHoverEnd(); // Function MinimapPlugin.MapIconComponent.ReceiveHoverEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x70e810
	void ReceiveClicked(bool bIsLeftMouseButton); // Function MinimapPlugin.MapIconComponent.ReceiveClicked // (Final|Native|Public|BlueprintCallable) // @ game+0x70e780
	bool MarkRenderedInView(struct UMapViewComponent* View, bool bNewIsRendered); // Function MinimapPlugin.MapIconComponent.MarkRenderedInView // (Final|Native|Public|BlueprintCallable) // @ game+0x70e5c0
	bool IsRenderedInView(struct UMapViewComponent* View); // Function MinimapPlugin.MapIconComponent.IsRenderedInView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e530
	bool IsObjectiveArrowEnabled(); // Function MinimapPlugin.MapIconComponent.IsObjectiveArrowEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e500
	bool IsIconVisible(); // Function MinimapPlugin.MapIconComponent.IsIconVisible // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e4a0
	bool IsIconInteractable(); // Function MinimapPlugin.MapIconComponent.IsIconInteractable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e470
	struct UTexture2D* GetObjectiveArrowTexture(); // Function MinimapPlugin.MapIconComponent.GetObjectiveArrowTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e3b0
	float GetObjectiveArrowSize(); // Function MinimapPlugin.MapIconComponent.GetObjectiveArrowSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e380
	struct UMaterialInterface* GetObjectiveArrowMaterialForUMG(); // Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForUMG // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e350
	struct UMaterialInterface* GetObjectiveArrowMaterialForCanvas(); // Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForCanvas // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e320
	int32_t GetIconZOrder(); // Function MinimapPlugin.MapIconComponent.GetIconZOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e080
	struct FText GetIconTooltipText(); // Function MinimapPlugin.MapIconComponent.GetIconTooltipText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70dfe0
	struct UTexture2D* GetIconTexture(); // Function MinimapPlugin.MapIconComponent.GetIconTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70dfb0
	enum class EIconSizeUnit GetIconSizeUnit(); // Function MinimapPlugin.MapIconComponent.GetIconSizeUnit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70df80
	float GetIconSize(); // Function MinimapPlugin.MapIconComponent.GetIconSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70df50
	void GetIconMaterialInstancesForUMG(struct TArray<struct UMaterialInstanceDynamic*>& MaterialInstances); // Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForUMG // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x70dea0
	void GetIconMaterialInstancesForCanvas(struct TArray<struct UMaterialInstanceDynamic*>& MaterialInstances); // Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForCanvas // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x70ddf0
	struct UMaterialInterface* GetIconMaterialForUMG(); // Function MinimapPlugin.MapIconComponent.GetIconMaterialForUMG // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70ddc0
	struct UMaterialInterface* GetIconMaterialForCanvas(); // Function MinimapPlugin.MapIconComponent.GetIconMaterialForCanvas // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70dd90
	float GetIconFogRevealThreshold(); // Function MinimapPlugin.MapIconComponent.GetIconFogRevealThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70dd60
	enum class EIconFogInteraction GetIconFogInteraction(); // Function MinimapPlugin.MapIconComponent.GetIconFogInteraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70dd30
	struct FLinearColor GetIconDrawColor(); // Function MinimapPlugin.MapIconComponent.GetIconDrawColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x70dcf0
	enum class EIconBackgroundInteraction GetIconBackgroundInteraction(); // Function MinimapPlugin.MapIconComponent.GetIconBackgroundInteraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70dcc0
	struct UWidget* GetCustomTooltipWidget(); // Function MinimapPlugin.MapIconComponent.GetCustomTooltipWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x70d9f0
	bool DoesObjectiveArrowRotate(); // Function MinimapPlugin.MapIconComponent.DoesObjectiveArrowRotate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70d5d0
	bool DoesIconRotate(); // Function MinimapPlugin.MapIconComponent.DoesIconRotate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70d5a0
};

// Class MinimapPlugin.MapRendererComponent
// Size: 0x1d0 (Inherited: 0xf0)
struct UMapRendererComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMapClicked; // 0xf0(0x10)
	enum class EMapViewSearchOption AutoLocateMapView; // 0x100(0x01)
	bool bIsCircular; // 0x101(0x01)
	bool bIsRendered; // 0x102(0x01)
	bool bDrawFrustum; // 0x103(0x01)
	float FrustumFloorDistance; // 0x104(0x04)
	struct FLinearColor BackgroundFillColor; // 0x108(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x118(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	struct FMargin Margin; // 0x11c(0x10)
	struct FVector2D Size; // 0x12c(0x08)
	char pad_134[0x4]; // 0x134(0x04)
	struct UMaterialInterface* FillMaterial; // 0x138(0x08)
	struct UMaterialInstanceDynamic* FillMaterialInstance; // 0x140(0x08)
	struct UMapTrackerComponent* MapTracker; // 0x148(0x08)
	struct UMapViewComponent* MapView; // 0x150(0x08)
	struct TSet<struct UMapIconComponent*> HoveringIcons; // 0x158(0x50)
	struct TArray<struct UMapIconComponent*> BufferedHoverStartEvents; // 0x1a8(0x10)
	struct TArray<struct UMapIconComponent*> BufferedHoverEndEvents; // 0x1b8(0x10)
	struct UCanvas* LastCanvas; // 0x1c8(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function MinimapPlugin.MapRendererComponent.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x712050
	void SetSize(int32_t Width, int32_t Height); // Function MinimapPlugin.MapRendererComponent.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x711f90
	void SetMargin(int32_t Left, int32_t Top, int32_t Right, int32_t Bottom); // Function MinimapPlugin.MapRendererComponent.SetMargin // (Final|Native|Public|BlueprintCallable) // @ game+0x711c90
	void SetMapView(struct UMapViewComponent* InMapView); // Function MinimapPlugin.MapRendererComponent.SetMapView // (Final|Native|Public|BlueprintCallable) // @ game+0x711c10
	void SetIsRendered(bool bNewIsRendered); // Function MinimapPlugin.MapRendererComponent.SetIsRendered // (Final|Native|Public|BlueprintCallable) // @ game+0x711b80
	void SetIsCircular(bool bNewIsCircular); // Function MinimapPlugin.MapRendererComponent.SetIsCircular // (Final|Native|Public|BlueprintCallable) // @ game+0x711af0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function MinimapPlugin.MapRendererComponent.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x7119a0
	void SetFrustumFloorDistance(float NewFrustumFloorDistance); // Function MinimapPlugin.MapRendererComponent.SetFrustumFloorDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x711920
	void SetDrawFrustum(bool bNewDrawFrustum); // Function MinimapPlugin.MapRendererComponent.SetDrawFrustum // (Final|Native|Public|BlueprintCallable) // @ game+0x711890
	void SetBackgroundFillColor(struct FLinearColor& NewBackgroundFillColor); // Function MinimapPlugin.MapRendererComponent.SetBackgroundFillColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x711800
	void SetAutoLocateMapView(enum class EMapViewSearchOption InAutoLocateMapView); // Function MinimapPlugin.MapRendererComponent.SetAutoLocateMapView // (Final|Native|Public|BlueprintCallable) // @ game+0x711780
	bool IsRendered(); // Function MinimapPlugin.MapRendererComponent.IsRendered // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x711640
	bool IsCircular(); // Function MinimapPlugin.MapRendererComponent.IsCircular // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x711580
	float GetFrustumFloorDistance(); // Function MinimapPlugin.MapRendererComponent.GetFrustumFloorDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x710e40
	bool GetDrawFrustum(); // Function MinimapPlugin.MapRendererComponent.GetDrawFrustum // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x710ce0
	struct FLinearColor GetBackgroundFillColor(); // Function MinimapPlugin.MapRendererComponent.GetBackgroundFillColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x710ca0
};

// Class MinimapPlugin.MapRevealerComponent
// Size: 0x800 (Inherited: 0x7e0)
struct UMapRevealerComponent : UBoxComponent {
	struct UMaterialInterface* RevealMaterial; // 0x7e0(0x08)
	enum class EMapFogRevealMode RevealMode; // 0x7e8(0x01)
	char pad_7E9[0x3]; // 0x7e9(0x03)
	float RevealDropOffDistance; // 0x7ec(0x04)
	struct UMaterialInstanceDynamic* RevealMaterialInstance; // 0x7f0(0x08)
	char pad_7F8[0x8]; // 0x7f8(0x08)

	void SetRevealMode(enum class EMapFogRevealMode NewRevealMode); // Function MinimapPlugin.MapRevealerComponent.SetRevealMode // (Final|Native|Public|BlueprintCallable) // @ game+0x711f10
	void SetRevealExtent(float NewRevealExtentX, float NewRevealExtentY); // Function MinimapPlugin.MapRevealerComponent.SetRevealExtent // (Final|Native|Public|BlueprintCallable) // @ game+0x711e50
	void SetRevealDropOffDistance(float NewRevealDropOffDistance); // Function MinimapPlugin.MapRevealerComponent.SetRevealDropOffDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x711dd0
	enum class EMapFogRevealMode GetRevealMode(); // Function MinimapPlugin.MapRevealerComponent.GetRevealMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7111c0
	void GetRevealExtent(float& RevealExtentX, float& RevealExtentY); // Function MinimapPlugin.MapRevealerComponent.GetRevealExtent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7110e0
	float GetRevealDropOffDistance(); // Function MinimapPlugin.MapRevealerComponent.GetRevealDropOffDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7110b0
};

// Class MinimapPlugin.MapTrackerComponent
// Size: 0x1b0 (Inherited: 0xf0)
struct UMapTrackerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMapIconRegistered; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnMapIconUnregistered; // 0x100(0x10)
	struct FMulticastInlineDelegate OnMapBackgroundRegistered; // 0x110(0x10)
	struct FMulticastInlineDelegate OnMapBackgroundUnregistered; // 0x120(0x10)
	struct FMulticastInlineDelegate OnMapFogRegistered; // 0x130(0x10)
	struct FMulticastInlineDelegate OnMapFogUnregistered; // 0x140(0x10)
	struct FMulticastInlineDelegate OnMapRevealerRegistered; // 0x150(0x10)
	struct FMulticastInlineDelegate OnMapRevealerUnregistered; // 0x160(0x10)
	struct TArray<struct UMapIconComponent*> MapIcons; // 0x170(0x10)
	struct TArray<struct AMapBackground*> MapBackgrounds; // 0x180(0x10)
	struct TArray<struct AMapFog*> MapFogs; // 0x190(0x10)
	struct TArray<struct UMapRevealerComponent*> MapRevealers; // 0x1a0(0x10)

	bool HasMapFog(); // Function MinimapPlugin.MapTrackerComponent.HasMapFog // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x711550
	struct TArray<struct UMapRevealerComponent*> GetMapRevealers(); // Function MinimapPlugin.MapTrackerComponent.GetMapRevealers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x711020
	struct TArray<struct UMapIconComponent*> GetMapIcons(); // Function MinimapPlugin.MapTrackerComponent.GetMapIcons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x710f90
	struct TArray<struct AMapFog*> GetMapFogs(); // Function MinimapPlugin.MapTrackerComponent.GetMapFogs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x710f00
	struct TArray<struct AMapBackground*> GetMapBackgrounds(); // Function MinimapPlugin.MapTrackerComponent.GetMapBackgrounds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x710e70
	float GetFogRevealedFactor(struct FVector& WorldLocation, bool bRequireCurrentlyRevealing, bool& bIsInsideFogVolume); // Function MinimapPlugin.MapTrackerComponent.GetFogRevealedFactor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x710d10
};

// Class MinimapPlugin.MapViewComponent
// Size: 0x9e0 (Inherited: 0x7e0)
struct UMapViewComponent : UBoxComponent {
	struct FMulticastInlineDelegate OnVisibleCategoriesChanged; // 0x7e0(0x10)
	struct FMulticastInlineDelegate OnViewSizeChanged; // 0x7f0(0x10)
	struct FMulticastInlineDelegate OnViewDestroyed; // 0x800(0x10)
	enum class EMapViewRotationMode RotationMode; // 0x810(0x01)
	char pad_811[0x3]; // 0x811(0x03)
	struct FRotator FixedRotation; // 0x814(0x0c)
	float InheritedYawOffset; // 0x820(0x04)
	bool bSupportZooming; // 0x824(0x01)
	char pad_825[0x3]; // 0x825(0x03)
	struct USceneComponent* HeightProxy; // 0x828(0x08)
	float BackgoundLevelCacheLifetime; // 0x830(0x04)
	char pad_834[0xb4]; // 0x834(0xb4)
	struct TSet<struct AMapBackground*> MapBackgrounds; // 0x8e8(0x50)
	struct TMap<struct AMapBackground*, int32_t> PositionOnMultiLevelBackgrounds; // 0x938(0x50)
	char pad_988[0x58]; // 0x988(0x58)

	bool ViewContains(struct FVector& WorldPos, float WorldRadius); // Function MinimapPlugin.MapViewComponent.ViewContains // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x712290
	void UnregisterMultiLevelMapBackground(struct AMapBackground* MapBackground); // Function MinimapPlugin.MapViewComponent.UnregisterMultiLevelMapBackground // (Final|Native|Private) // @ game+0x712210
	void SetZoomScale(float NewZoomScale); // Function MinimapPlugin.MapViewComponent.SetZoomScale // (Final|Native|Public|BlueprintCallable) // @ game+0x712190
	void SetViewExtent(float NewViewExtentX, float NewViewExtentY); // Function MinimapPlugin.MapViewComponent.SetViewExtent // (Final|Native|Public|BlueprintCallable) // @ game+0x7120d0
	void SetIconCategoryVisible(struct FName IconCategory, bool bNewVisible); // Function MinimapPlugin.MapViewComponent.SetIconCategoryVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x711a20
	void RegisterMultiLevelMapBackground(struct AMapBackground* MapBackground); // Function MinimapPlugin.MapViewComponent.RegisterMultiLevelMapBackground // (Final|Native|Private) // @ game+0x711700
	bool IsSameBackgroundLevel(struct UMapIconComponent* MapIcon); // Function MinimapPlugin.MapViewComponent.IsSameBackgroundLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x711670
	bool IsIconCategoryVisible(struct FName IconCategory); // Function MinimapPlugin.MapViewComponent.IsIconCategoryVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7115b0
	float GetZoomScale(); // Function MinimapPlugin.MapViewComponent.GetZoomScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x711520
	struct TArray<struct FVector> GetWorldCorners(); // Function MinimapPlugin.MapViewComponent.GetWorldCorners // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7114a0
	void GetViewYaw(float WorldYaw, float& Yaw); // Function MinimapPlugin.MapViewComponent.GetViewYaw // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7113c0
	void GetViewExtent(float& ViewExtentX, float& ViewExtentY); // Function MinimapPlugin.MapViewComponent.GetViewExtent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7110e0
	bool GetViewCoordinates(struct FVector& WorldPos, bool bForceRectangular, float& U, float& V); // Function MinimapPlugin.MapViewComponent.GetViewCoordinates // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x711220
	float GetViewAspectRatio(); // Function MinimapPlugin.MapViewComponent.GetViewAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7111f0
	int32_t GetActiveBackgroundPriority(bool& IsInsideAnyBackground); // Function MinimapPlugin.MapViewComponent.GetActiveBackgroundPriority // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x710c00
	int32_t GetActiveBackgroundLevel(struct AMapBackground* MapBackground); // Function MinimapPlugin.MapViewComponent.GetActiveBackgroundLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x710b70
	void DeprojectViewVectorToWorld(struct FVector2D ViewVector, struct FVector2D& WorldVector); // Function MinimapPlugin.MapViewComponent.DeprojectViewVectorToWorld // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x710aa0
	void DeprojectViewToWorld(float U, float V, struct FVector& WorldPos); // Function MinimapPlugin.MapViewComponent.DeprojectViewToWorld // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x710980
};

