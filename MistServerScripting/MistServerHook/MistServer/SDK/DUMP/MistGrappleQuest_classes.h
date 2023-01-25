// BlueprintGeneratedClass MistGrappleQuest.MistGrappleQuest_C
// Size: 0x140 (Inherited: 0x130)
struct UMistGrappleQuest_C : UMistGrappleQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x130(0x08)
	struct UAudioComponent* SpokenVO; // 0x138(0x08)

	void OnWalkerAdded(struct AMistWalker* Walker); // Function MistGrappleQuest.MistGrappleQuest_C.OnWalkerAdded // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void OnWalkerRemoved(struct AMistWalker* Walker); // Function MistGrappleQuest.MistGrappleQuest_C.OnWalkerRemoved // (Event|Public|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_MistGrappleQuest(int32_t EntryPoint); // Function MistGrappleQuest.MistGrappleQuest_C.ExecuteUbergraph_MistGrappleQuest // (Final|UbergraphFunction) // @ game+0x163f1c0
};

