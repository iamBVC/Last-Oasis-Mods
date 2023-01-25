// BlueprintGeneratedClass HideComponent.HideComponent_C
// Size: 0x118 (Inherited: 0xf0)
struct UHideComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct TArray<struct USceneComponent*> Components; // 0xf8(0x10)
	float HideDistance; // 0x108(0x04)
	bool bHidden; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct UStaticMeshComponent* ReplacementMeshComponent; // 0x110(0x08)

	void GetChildActorComponents(struct TArray<struct UChildActorComponent*>& ChildActorsComponents, struct USceneComponent* ComponentClass, struct TArray<struct USceneComponent*>& SceneComponents); // Function HideComponent.HideComponent_C.GetChildActorComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void SetHidden(bool bHidden); // Function HideComponent.HideComponent_C.SetHidden // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CheckHide(); // Function HideComponent.HideComponent_C.CheckHide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void Initialize(struct UStaticMeshComponent* ReplacementMeshComponent, struct TArray<struct USceneComponent*>& ComponentsToHide); // Function HideComponent.HideComponent_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveBeginPlay(); // Function HideComponent.HideComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void StartCheckHide(); // Function HideComponent.HideComponent_C.StartCheckHide // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StopCheckHide(); // Function HideComponent.HideComponent_C.StopCheckHide // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_HideComponent(int32_t EntryPoint); // Function HideComponent.HideComponent_C.ExecuteUbergraph_HideComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

