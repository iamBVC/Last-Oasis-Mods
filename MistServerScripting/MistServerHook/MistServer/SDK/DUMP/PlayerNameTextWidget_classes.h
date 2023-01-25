// WidgetBlueprintGeneratedClass PlayerNameTextWidget.PlayerNameTextWidget_C
// Size: 0x318 (Inherited: 0x308)
struct UPlayerNameTextWidget_C : UMistTextWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct URichTextBlock* RichTextBlock_113; // 0x310(0x08)

	void OnTextChange(struct FText& InText); // Function PlayerNameTextWidget.PlayerNameTextWidget_C.OnTextChange // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void OnColorChange(struct FSlateColor& InColor); // Function PlayerNameTextWidget.PlayerNameTextWidget_C.OnColorChange // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_PlayerNameTextWidget(int32_t EntryPoint); // Function PlayerNameTextWidget.PlayerNameTextWidget_C.ExecuteUbergraph_PlayerNameTextWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

