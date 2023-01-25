// BlueprintGeneratedClass PostProcessControler.PostProcessControler_C
// Size: 0x2c0 (Inherited: 0xf0)
struct UPostProcessControler_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct TArray<struct FPostProcessDataSet> PP_BlendablesDataSets; // 0xf8(0x10)
	struct UPostProcessComponent* PostProcessStack; // 0x108(0x08)
	struct FTimerHandle damageTimer_Handel; // 0x110(0x08)
	float Tick; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UMistCharacterHealthComponent* CharacterHealth; // 0x120(0x08)
	struct TArray<enum class PostProEnumeration> PPOrder; // 0x128(0x10)
	struct TArray<int32_t> PPReOrdered; // 0x138(0x10)
	bool DamagePermamentOn; // 0x148(0x01)
	enum class PostProEnumeration DamagePPNumber; // 0x149(0x01)
	char pad_14A[0x6]; // 0x14a(0x06)
	struct AMistPlayer* Player; // 0x150(0x08)
	float FalloffMin; // 0x158(0x04)
	float FalloffBegin; // 0x15c(0x04)
	float FalloffAct; // 0x160(0x04)
	enum class PostProEnumeration BleedPPNumber; // 0x164(0x01)
	bool initFinish; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
	struct FTimerHandle BasicTick_Timer; // 0x168(0x08)
	bool ForceInstanceName; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct FTimerHandle Basic_Timer; // 0x178(0x08)
	float BasicDelayParticle; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct UParticleSystemComponent* P_Basic; // 0x188(0x08)
	float BasicTime; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct UTexture* Basic_LUT; // 0x198(0x08)
	struct UCurveFloat* BasicBlur_Curve; // 0x1a0(0x08)
	struct UCurveFloat* BasicLUT_Curve; // 0x1a8(0x08)
	struct UCurveFloat* BasicBloom_Curve; // 0x1b0(0x08)
	struct TMap<enum class PostProEnumeration, struct UMaterialInterface*> PPOrderMap; // 0x1b8(0x50)
	float HarvesterDelayParticle; // 0x208(0x04)
	float HarvesterTime; // 0x20c(0x04)
	struct FTimerHandle HarvesterTick_Timer; // 0x210(0x08)
	struct FTimerHandle Harvester_Timer; // 0x218(0x08)
	struct UParticleSystemComponent* P_Harvester; // 0x220(0x08)
	float WarriorDelayParticle; // 0x228(0x04)
	float WarriorTime; // 0x22c(0x04)
	struct UParticleSystemComponent* P_Warrior; // 0x230(0x08)
	struct UTexture* Warrior_LUT; // 0x238(0x08)
	struct FTimerHandle WarriorTick_Timer; // 0x240(0x08)
	struct FTimerHandle Warrior_Timer; // 0x248(0x08)
	struct UTexture* Harvester_LUT; // 0x250(0x08)
	struct UCurveFloat* HarvesterBlur_Curve; // 0x258(0x08)
	struct UCurveFloat* HarvesterBloomCurve; // 0x260(0x08)
	struct UCurveFloat* HarvesterLUT_Curve; // 0x268(0x08)
	struct UCurveFloat* WarriorBlur_Curve; // 0x270(0x08)
	struct UCurveFloat* WarriorBloom_Curve; // 0x278(0x08)
	struct UCurveFloat* WarriorLUT_Curve; // 0x280(0x08)
	struct UCurveFloat* WarriorShake_Curve; // 0x288(0x08)
	struct UCameraShake* WarriorShake; // 0x290(0x08)
	struct UCurveFloat* HarvesterDistort_Curve; // 0x298(0x08)
	struct TArray<struct UMaterialInterface*> MaterialsTest; // 0x2a0(0x10)
	bool IsPlayingEffect; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UAudioComponent* BloodOverlay; // 0x2b8(0x08)

	void ClearTimers(); // Function PostProcessControler.PostProcessControler_C.ClearTimers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EndHarvesterDrug(); // Function PostProcessControler.PostProcessControler_C.EndHarvesterDrug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void HarvesterDrugTick(); // Function PostProcessControler.PostProcessControler_C.HarvesterDrugTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EndWarriorDrug(); // Function PostProcessControler.PostProcessControler_C.EndWarriorDrug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void WarriorDrugTick(); // Function PostProcessControler.PostProcessControler_C.WarriorDrugTick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void EndBasicDrug(); // Function PostProcessControler.PostProcessControler_C.EndBasicDrug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void BasicDrugTick(); // Function PostProcessControler.PostProcessControler_C.BasicDrugTick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GetIndexByEnum(enum class PostProEnumeration PostProEnum, int32_t& Index); // Function PostProcessControler.PostProcessControler_C.GetIndexByEnum // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x163f1c0
	void MakeDynaMatInst_Func(struct UMaterialInterface* SourceMat, struct FString Sufix, struct UMaterialInstanceDynamic*& Output_Get); // Function PostProcessControler.PostProcessControler_C.MakeDynaMatInst_Func // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void PlayBleeding(bool State); // Function PostProcessControler.PostProcessControler_C.PlayBleeding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetDamagePP(float OpacityMinimum, float Opacity, float BorderMulti, float Dying, float Falloff); // Function PostProcessControler.PostProcessControler_C.SetDamagePP // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetRef(struct AMistPlayer* Player, struct UPostProcessComponent* PostProcessStack, struct UMistCharacterHealthComponent* CharacterHealth); // Function PostProcessControler.PostProcessControler_C.SetRef // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void HealthUpdate(float ActHealth, float PrevHealth); // Function PostProcessControler.PostProcessControler_C.HealthUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void SetDamageTimer(struct FString FunctionName); // Function PostProcessControler.PostProcessControler_C.SetDamageTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void PlayDamage(); // Function PostProcessControler.PostProcessControler_C.PlayDamage // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void CreateDataSet(); // Function PostProcessControler.PostProcessControler_C.CreateDataSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StartBasicDrug(); // Function PostProcessControler.PostProcessControler_C.StartBasicDrug // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StartHarvesterDrug(); // Function PostProcessControler.PostProcessControler_C.StartHarvesterDrug // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void StartWarriorDrug(); // Function PostProcessControler.PostProcessControler_C.StartWarriorDrug // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void PlayDrugEffect(struct UMistVitaminItemTemplate* VitaminTemplate); // Function PostProcessControler.PostProcessControler_C.PlayDrugEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_PostProcessControler(int32_t EntryPoint); // Function PostProcessControler.PostProcessControler_C.ExecuteUbergraph_PostProcessControler // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

