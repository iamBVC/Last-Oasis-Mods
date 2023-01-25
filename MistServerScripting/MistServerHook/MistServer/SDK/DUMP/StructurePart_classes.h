// BlueprintGeneratedClass StructurePart.StructurePart_C
// Size: 0x5c1 (Inherited: 0x5b8)
struct AStructurePart_C : AMistStructurePart {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b8(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x5c0(0x01)

	void FadeOutAudio(struct UAudioComponent* AudioComponent, float FadeOutTime); // Function StructurePart.StructurePart_C.FadeOutAudio // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlaceableDestroyed(struct FTransform& Transform, int32_t ItemIndex, enum class EMistDestroyReason Reason); // Function StructurePart.StructurePart_C.ReceivePlaceableDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlaceableConstructed(struct AMistPlayer* Player, struct FTransform& Transform, int32_t ItemIndex); // Function StructurePart.StructurePart_C.ReceivePlaceableConstructed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlaceableDamaged(struct FTransform& Transform, int32_t ItemIndex, struct UDamageType* DamageTypeClass); // Function StructurePart.StructurePart_C.ReceivePlaceableDamaged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveRadialDamage(float Damage, struct UDamageType* DamageType, struct FVector Origin, struct FDamageSource& DamageSource, struct TArray<struct FHitResult>& HitInfos); // Function StructurePart.StructurePart_C.ReceiveRadialDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastDamageEffects(float Damage, struct FVector Damage Location, struct UDamageType* Damage Type); // Function StructurePart.StructurePart_C.MulticastDamageEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource, struct FHitResult& HitInfo); // Function StructurePart.StructurePart_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_StructurePart(int32_t EntryPoint); // Function StructurePart.StructurePart_C.ExecuteUbergraph_StructurePart // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

