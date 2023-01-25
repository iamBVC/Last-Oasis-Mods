// WidgetBlueprintGeneratedClass ClanNameTextWidget.ClanNameTextWidget_C
// Size: 0x320 (Inherited: 0x308)
struct UClanNameTextWidget_C : UMistTextWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UBorder* ClanColorBG; // 0x310(0x08)
	struct UTextBlock* TextBlock_123; // 0x318(0x08)

	void OnTextChange(struct FText& InText); // Function ClanNameTextWidget.ClanNameTextWidget_C.OnTextChange // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void OnColorChange(struct FSlateColor& InColor); // Function ClanNameTextWidget.ClanNameTextWidget_C.OnColorChange // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_ClanNameTextWidget(int32_t EntryPoint); // Function ClanNameTextWidget.ClanNameTextWidget_C.ExecuteUbergraph_ClanNameTextWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

