// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x792ee0
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x792e20
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xea0 (Inherited: 0xe60)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	char pad_E60[0x20]; // 0xe60(0x20)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xe80(0x01)
	char bAutoCalculateSignificance : 1; // 0xe80(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xe80(0x01)
	char pad_E80_3 : 5; // 0xe80(0x01)
	char pad_E81[0x3]; // 0xe81(0x03)
	float BaseSignificance; // 0xe84(0x04)
	char bScreenSizeBasedSignificance : 1; // 0xe88(0x01)
	char pad_E88_1 : 7; // 0xe88(0x01)
	char pad_E89[0x3]; // 0xe89(0x03)
	float MinSignificanceScreenSizeFactor; // 0xe8c(0x04)
	float MaxSignificanceScreenSizeFactor; // 0xe90(0x04)
	float SignificanceMultiplierAtMinScreenSizeFactor; // 0xe94(0x04)
	float SignificanceMultiplierAtMaxScreenSizeFactor; // 0xe98(0x04)
	char pad_E9C[0x4]; // 0xe9c(0x04)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (Final|Native|Public|BlueprintCallable) // @ game+0x793070
};

