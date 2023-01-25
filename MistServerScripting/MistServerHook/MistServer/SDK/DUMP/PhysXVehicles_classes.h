// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x2e8 (Inherited: 0x190)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char pad_190[0x8]; // 0x190(0x08)
	char bDeprecatedSpringOffsetMode : 1; // 0x198(0x01)
	char bReverseAsBrake : 1; // 0x198(0x01)
	char bUseRVOAvoidance : 1; // 0x198(0x01)
	char bRawHandbrakeInput : 1; // 0x198(0x01)
	char bRawGearUpInput : 1; // 0x198(0x01)
	char bRawGearDownInput : 1; // 0x198(0x01)
	char pad_198_6 : 2; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	char bWasAvoidanceUpdated : 1; // 0x19c(0x01)
	char pad_19C_1 : 7; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	float Mass; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x1a8(0x10)
	float DragCoefficient; // 0x1b8(0x04)
	float ChassisWidth; // 0x1bc(0x04)
	float ChassisHeight; // 0x1c0(0x04)
	float DragArea; // 0x1c4(0x04)
	float EstimatedMaxEngineSpeed; // 0x1c8(0x04)
	float MaxEngineRPM; // 0x1cc(0x04)
	float DebugDragMagnitude; // 0x1d0(0x04)
	struct FVector InertiaTensorScale; // 0x1d4(0x0c)
	float MinNormalizedTireLoad; // 0x1e0(0x04)
	float MinNormalizedTireLoadFiltered; // 0x1e4(0x04)
	float MaxNormalizedTireLoad; // 0x1e8(0x04)
	float MaxNormalizedTireLoadFiltered; // 0x1ec(0x04)
	float ThresholdLongitudinalSpeed; // 0x1f0(0x04)
	int32_t LowForwardSpeedSubStepCount; // 0x1f4(0x04)
	int32_t HighForwardSpeedSubStepCount; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x200(0x10)
	char pad_210[0x18]; // 0x210(0x18)
	float RVOAvoidanceRadius; // 0x228(0x04)
	float RVOAvoidanceHeight; // 0x22c(0x04)
	float AvoidanceConsiderationRadius; // 0x230(0x04)
	float RVOSteeringStep; // 0x234(0x04)
	float RVOThrottleStep; // 0x238(0x04)
	int32_t AvoidanceUID; // 0x23c(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x240(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x244(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x248(0x04)
	float AvoidanceWeight; // 0x24c(0x04)
	struct FVector PendingLaunchVelocity; // 0x250(0x0c)
	struct FReplicatedVehicleState ReplicatedState; // 0x25c(0x14)
	char pad_270[0x4]; // 0x270(0x04)
	float RawSteeringInput; // 0x274(0x04)
	float RawThrottleInput; // 0x278(0x04)
	float RawBrakeInput; // 0x27c(0x04)
	float SteeringInput; // 0x280(0x04)
	float ThrottleInput; // 0x284(0x04)
	float BrakeInput; // 0x288(0x04)
	float HandbrakeInput; // 0x28c(0x04)
	float IdleBrakeInput; // 0x290(0x04)
	float StopThreshold; // 0x294(0x04)
	float WrongDirectionThreshold; // 0x298(0x04)
	struct FVehicleInputRate ThrottleInputRate; // 0x29c(0x08)
	struct FVehicleInputRate BrakeInputRate; // 0x2a4(0x08)
	struct FVehicleInputRate HandbrakeInputRate; // 0x2ac(0x08)
	struct FVehicleInputRate SteeringInputRate; // 0x2b4(0x08)
	char pad_2BC[0x24]; // 0x2bc(0x24)
	struct AController* OverrideController; // 0x2e0(0x08)

	void SetUseAutoGears(bool bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears // (Final|Native|Public|BlueprintCallable) // @ game+0xb070b0
	void SetThrottleInput(float Throttle); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput // (Final|Native|Public|BlueprintCallable) // @ game+0xb07030
	void SetTargetGear(int32_t GearNum, bool bImmediate); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear // (Final|Native|Public|BlueprintCallable) // @ game+0xb06f70
	void SetSteeringInput(float Steering); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput // (Final|Native|Public|BlueprintCallable) // @ game+0xb06ef0
	void SetHandbrakeInput(bool bNewHandbrake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput // (Final|Native|Public|BlueprintCallable) // @ game+0xb06d90
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb06d00
	void SetGroupsToIgnore(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore // (Final|Native|Public|BlueprintCallable) // @ game+0xb06c80
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb06bf0
	void SetGroupsToAvoid(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid // (Final|Native|Public|BlueprintCallable) // @ game+0xb06b70
	void SetGearUp(bool bNewGearUp); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp // (Final|Native|Public|BlueprintCallable) // @ game+0xb06ae0
	void SetGearDown(bool bNewGearDown); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown // (Final|Native|Public|BlueprintCallable) // @ game+0xb06a50
	void SetBrakeInput(float Brake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput // (Final|Native|Public|BlueprintCallable) // @ game+0xb06830
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb067a0
	void SetAvoidanceGroup(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup // (Final|Native|Public|BlueprintCallable) // @ game+0xb06720
	void SetAvoidanceEnabled(bool bEnable); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xb06690
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xb064c0
	bool GetUseAutoGears(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb06430
	int32_t GetTargetGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb06400
	float GetForwardSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb06340
	float GetEngineRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb06310
	float GetEngineMaxRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb062e0
	int32_t GetCurrentGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb062b0
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x2e8 (Inherited: 0x2e8)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {

	void SetSteerAngle(float SteerAngle, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle // (Final|Native|Public|BlueprintCallable) // @ game+0xb06e20
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque // (Final|Native|Public|BlueprintCallable) // @ game+0xb06980
	void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque // (Final|Native|Public|BlueprintCallable) // @ game+0xb068b0
};

// Class PhysXVehicles.TireConfig
// Size: 0x50 (Inherited: 0x30)
struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x990 (Inherited: 0x270)
struct UVehicleAnimInstance : UAnimInstance {
	char pad_270[0x710]; // 0x270(0x710)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x980(0x08)
	char pad_988[0x8]; // 0x988(0x08)

	struct AWheeledVehicle* GetVehicle(); // Function PhysXVehicles.VehicleAnimInstance.GetVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0xb06460
};

// Class PhysXVehicles.VehicleWheel
// Size: 0xf0 (Inherited: 0x28)
struct UVehicleWheel : UObject {
	struct UStaticMesh* CollisionMesh; // 0x28(0x08)
	bool bDontCreateShape; // 0x30(0x01)
	bool bAutoAdjustCollisionSize; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FVector Offset; // 0x34(0x0c)
	float ShapeRadius; // 0x40(0x04)
	float ShapeWidth; // 0x44(0x04)
	float Mass; // 0x48(0x04)
	float DampingRate; // 0x4c(0x04)
	float SteerAngle; // 0x50(0x04)
	bool bAffectedByHandbrake; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct UTireType* TireType; // 0x58(0x08)
	struct UTireConfig* TireConfig; // 0x60(0x08)
	float LatStiffMaxLoad; // 0x68(0x04)
	float LatStiffValue; // 0x6c(0x04)
	float LongStiffValue; // 0x70(0x04)
	float SuspensionForceOffset; // 0x74(0x04)
	float SuspensionMaxRaise; // 0x78(0x04)
	float SuspensionMaxDrop; // 0x7c(0x04)
	float SuspensionNaturalFrequency; // 0x80(0x04)
	float SuspensionDampingRatio; // 0x84(0x04)
	enum class EWheelSweepType SweepType; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float MaxBrakeTorque; // 0x8c(0x04)
	float MaxHandBrakeTorque; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0x98(0x08)
	int32_t WheelIndex; // 0xa0(0x04)
	float DebugLongSlip; // 0xa4(0x04)
	float DebugLatSlip; // 0xa8(0x04)
	float DebugNormalizedTireLoad; // 0xac(0x04)
	char pad_B0[0x4]; // 0xb0(0x04)
	float DebugWheelTorque; // 0xb4(0x04)
	float DebugLongForce; // 0xb8(0x04)
	float DebugLatForce; // 0xbc(0x04)
	struct FVector Location; // 0xc0(0x0c)
	struct FVector OldLocation; // 0xcc(0x0c)
	struct FVector Velocity; // 0xd8(0x0c)
	char pad_E4[0xc]; // 0xe4(0x0c)

	bool IsInAir(); // Function PhysXVehicles.VehicleWheel.IsInAir // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb06490
	float GetSuspensionOffset(); // Function PhysXVehicles.VehicleWheel.GetSuspensionOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb063d0
	float GetSteerAngle(); // Function PhysXVehicles.VehicleWheel.GetSteerAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb063a0
	float GetRotationAngle(); // Function PhysXVehicles.VehicleWheel.GetRotationAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb06370
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x430 (Inherited: 0x420)
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x420(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x428(0x08)
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x460 (Inherited: 0x2e8)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct FVehicleEngineData EngineSetup; // 0x2e8(0xa0)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x388(0x1c)
	float AckermannAccuracy; // 0x3a4(0x04)
	struct FVehicleTransmissionData TransmissionSetup; // 0x3a8(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x3d8(0x88)
};

