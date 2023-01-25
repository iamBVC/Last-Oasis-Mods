// Class FieldSystemEngine.FieldSystemActor
// Size: 0x3c8 (Inherited: 0x3c0)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x3c0(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x800 (Inherited: 0x7c0)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x7b8(0x08)
	char pad_7C8[0x8]; // 0x7c8(0x08)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x7d0(0x10)
	char pad_7E0[0x20]; // 0x7e0(0x20)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x2efe4a0
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2efe2f0
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2efe140
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2efe020
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2efdeb0
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2efdd90
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x2efdc40
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2efdb20
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x2efd9d0
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xf0 (Inherited: 0xf0)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xf8 (Inherited: 0xf0)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2efe7f0
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xf8 (Inherited: 0xf0)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2efe880
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xf0 (Inherited: 0xf0)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xf0 (Inherited: 0xf0)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xf0 (Inherited: 0xf0)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xf0 (Inherited: 0xf0)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xf8 (Inherited: 0xf0)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2efe7f0
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0x110 (Inherited: 0xf0)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xf0(0x04)
	struct FVector Position; // 0xf4(0x0c)
	int32_t InteriorValue; // 0x100(0x04)
	int32_t ExteriorValue; // 0x104(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2eff080
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xf8 (Inherited: 0xf0)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2eff320
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0x118 (Inherited: 0xf0)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xf0(0x04)
	float MinRange; // 0xf4(0x04)
	float MaxRange; // 0xf8(0x04)
	float Default; // 0xfc(0x04)
	float Radius; // 0x100(0x04)
	struct FVector Position; // 0x104(0x0c)
	enum class EFieldFalloffType Falloff; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2efee60
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0x120 (Inherited: 0xf0)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xf0(0x04)
	float MinRange; // 0xf4(0x04)
	float MaxRange; // 0xf8(0x04)
	float Default; // 0xfc(0x04)
	float Distance; // 0x100(0x04)
	struct FVector Position; // 0x104(0x0c)
	struct FVector Normal; // 0x110(0x0c)
	enum class EFieldFalloffType Falloff; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2efebe0
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x140 (Inherited: 0xf0)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xf0(0x04)
	float MinRange; // 0xf4(0x04)
	float MaxRange; // 0xf8(0x04)
	float Default; // 0xfc(0x04)
	struct FTransform Transform; // 0x100(0x30)
	enum class EFieldFalloffType Falloff; // 0x130(0x01)
	char pad_131[0xf]; // 0x131(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2efe4c0
};

// Class FieldSystemEngine.NoiseField
// Size: 0x130 (Inherited: 0xf0)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xf0(0x04)
	float MaxRange; // 0xf4(0x04)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FTransform Transform; // 0x100(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2efe910
};

// Class FieldSystemEngine.UniformVector
// Size: 0x100 (Inherited: 0xf0)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xf0(0x04)
	struct FVector Direction; // 0xf4(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2eff240
};

// Class FieldSystemEngine.RadialVector
// Size: 0x100 (Inherited: 0xf0)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xf0(0x04)
	struct FVector Position; // 0xf4(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2eff240
};

// Class FieldSystemEngine.RandomVector
// Size: 0xf8 (Inherited: 0xf0)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2eff320
};

// Class FieldSystemEngine.OperatorField
// Size: 0x110 (Inherited: 0xf0)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct UFieldNodeBase* RightField; // 0xf8(0x08)
	struct UFieldNodeBase* LeftField; // 0x100(0x08)
	enum class EFieldOperationType Operation; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2efea90
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xf8 (Inherited: 0xf0)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xf0(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2eff3e0
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xf8 (Inherited: 0xf0)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xf0(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2eff3e0
};

// Class FieldSystemEngine.CullingField
// Size: 0x108 (Inherited: 0xf0)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xf0(0x08)
	struct UFieldNodeBase* Field; // 0xf8(0x08)
	enum class EFieldCullingOperationType Operation; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2efe6f0
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xf0 (Inherited: 0xf0)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2eff3b0
};

