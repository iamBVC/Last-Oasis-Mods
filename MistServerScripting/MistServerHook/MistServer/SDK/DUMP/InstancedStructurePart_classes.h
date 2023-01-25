// BlueprintGeneratedClass InstancedStructurePart.InstancedStructurePart_C
// Size: 0x641 (Inherited: 0x638)
struct AInstancedStructurePart_C : AMistInstancedStructurePart {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x638(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x640(0x01)

	void ReceivePlaceableDestroyed(struct FTransform& Transform, int32_t ItemIndex, enum class EMistDestroyReason Reason); // Function InstancedStructurePart.InstancedStructurePart_C.ReceivePlaceableDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlaceableConstructed(struct AMistPlayer* Player, struct FTransform& Transform, int32_t ItemIndex); // Function InstancedStructurePart.InstancedStructurePart_C.ReceivePlaceableConstructed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePlaceableDamaged(struct FTransform& Transform, int32_t ItemIndex, struct UDamageType* DamageTypeClass); // Function InstancedStructurePart.InstancedStructurePart_C.ReceivePlaceableDamaged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void MulticastDamageEffects(float Damage, struct FVector Damage Location, struct UDamageType* Damage Type); // Function InstancedStructurePart.InstancedStructurePart_C.MulticastDamageEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveRadialDamage(float Damage, struct UDamageType* DamageType, struct FVector Origin, struct FDamageSource& DamageSource, struct TArray<struct FHitResult>& HitInfos); // Function InstancedStructurePart.InstancedStructurePart_C.ReceiveRadialDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FDamageSource& DamageSource, struct FHitResult& HitInfo); // Function InstancedStructurePart.InstancedStructurePart_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ReceiveDecayDamage(struct FTransform& Transform, int32_t ItemIndex); // Function InstancedStructurePart.InstancedStructurePart_C.ReceiveDecayDamage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x163f1c0
	void ExecuteUbergraph_InstancedStructurePart(int32_t EntryPoint); // Function InstancedStructurePart.InstancedStructurePart_C.ExecuteUbergraph_InstancedStructurePart // (Final|UbergraphFunction|HasDefaults) // @ game+0x163f1c0
};

