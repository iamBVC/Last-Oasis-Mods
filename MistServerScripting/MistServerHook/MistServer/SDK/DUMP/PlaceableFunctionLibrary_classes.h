// BlueprintGeneratedClass PlaceableFunctionLibrary.PlaceableFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UPlaceableFunctionLibrary_C : UBlueprintFunctionLibrary {

	void GenericPlaceableDamaged(struct FTransform Transform, enum class EPhysicalSurface SurfaceType, struct UDamageType* DamageType, struct UObject* __WorldContext); // Function PlaceableFunctionLibrary.PlaceableFunctionLibrary_C.GenericPlaceableDamaged // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GenericPlaceableConstructed(struct FTransform Transform, enum class EPhysicalSurface SurfaceType, struct UObject* __WorldContext); // Function PlaceableFunctionLibrary.PlaceableFunctionLibrary_C.GenericPlaceableConstructed // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GenericPlaceableDestroyed(struct FTransform Transform, enum class EPhysicalSurface SurfaceType, enum class EMistDestroyReason DestroyReason, struct UObject* __WorldContext); // Function PlaceableFunctionLibrary.PlaceableFunctionLibrary_C.GenericPlaceableDestroyed // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
	void GenericPlaceableHit(float Damage, struct FVector Location, enum class EPhysicalSurface SurfaceType, struct UDamageType* DamageType, struct UObject* __WorldContext); // Function PlaceableFunctionLibrary.PlaceableFunctionLibrary_C.GenericPlaceableHit // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x163f1c0
};

