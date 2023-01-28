#pragma once
//#include "Engine_struct.h"
#include "AnimGraphRuntime_struct.h"
#include "DeviceLighting_struct.h"


// Enum Mist.EMistAchievementStatModificationType
enum class EMistAchievementStatModificationType : uint8 {
	Set = 0,
	Sum = 1,
	Largest = 2,
	Smallest = 3,
	EMistAchievementStatModificationType_MAX = 4
};

// Enum Mist.ECombatDirection
enum class ECombatDirection : uint8 {
	High = 0,
	Right = 1,
	Left = 2,
	Max = 3,
	None = 4
};

// Enum Mist.ECombatAction
enum class ECombatAction : uint8 {
	Idle = 0,
	QuickAttack = 1,
	AttackReady = 2,
	AttackHold = 3,
	HeavyAttack = 4,
	Kick = 5,
	Block = 6,
	BlockImpact = 7,
	HeavyBlockImpact = 8,
	WeaponStun = 9,
	AttackImpactBlock = 10,
	HeavyAttackImpactBlock = 11,
	AttackImpactBody = 12,
	Hurt = 13,
	Dodge = 14,
	ConsumingItem = 15,
	EquippingItem = 16,
	None = 17,
	ECombatAction_MAX = 18
};

// Enum Mist.EMistSkeletalMeshReplacementRange
enum class EMistSkeletalMeshReplacementRange : uint8 {
	Close = 0,
	Medium = 1,
	Far = 2,
	COUNT = 3,
	EMistSkeletalMeshReplacementRange_MAX = 4
};

// Enum Mist.EEquipmentSlot
enum class EEquipmentSlot : uint8 {
	Head = 0,
	Torso = 1,
	Hands = 2,
	Boots = 3,
	Belt = 4,
	PouchLeft = 5,
	PouchRight = 6,
	WeaponRight = 7,
	WeaponLeft = 8,
	GrapplingHook = 9,
	GrapplingHookAttachment = 10,
	Javelin = 11,
	COUNT = 12,
	INVALID = 13,
	EEquipmentSlot_MAX = 14
};

// Enum Mist.ECMM_EventType
enum class ECMM_EventType : uint8 {
	None = 0,
	OneTime = 1,
	Continuous = 2,
	Looped = 3,
	ECMM_MAX = 4
};

// Enum Mist.ECMM_EventTag
enum class ECMM_EventTag : uint8 {
	None = 0,
	Dodge = 1,
	GH_SurfaceContact = 2,
	GH_SurfacePushOff = 3,
	GH_SurfaceRestStart = 4,
	GH_SurfaceRestLoop = 5,
	C_StartClimbingLedge = 6,
	C_StartClimbingWall = 7,
	C_StartClimbingWallOffGround = 8,
	C_StartClimbingPulley = 9,
	C_StartClimbingDown = 10,
	C_ReverseClimbingLedge = 11,
	C_ReverseClimbingWall = 12,
	P_SurfaceContact = 13,
	P_PushOffSurface = 14,
	ECMM_MAX = 15
};

// Enum Mist.EMistCharacterState
enum class EMistCharacterState : uint8 {
	Alive = 0,
	Downed = 1,
	Dead = 2,
	EMistCharacterState_MAX = 3
};

// Enum Mist.EMistCharacterGender
enum class EMistCharacterGender : uint8 {
	Female = 0,
	Male = 1,
	Count = 2,
	EMistCharacterGender_MAX = 3
};

// Enum Mist.EMistInteractionAnimationType
enum class EMistInteractionAnimationType : uint8 {
	None = 0,
	Default = 1,
	EMistInteractionAnimationType_MAX = 2
};

// Enum Mist.EMistInteractionNetworkMode
enum class EMistInteractionNetworkMode : uint8 {
	Server = 0,
	Client = 1,
	Both = 2,
	None = 3,
	EMistInteractionNetworkMode_MAX = 4
};

// Enum Mist.EMistClanPermission
enum class EMistClanPermission : uint8 {
	None = 0,
	InviteMember = 1,
	RemoveMember = 2,
	UpdateClanInformation = 3,
	ModerateClan = 4,
	Build = 5,
	Spawn = 6,
	UseContainer = 7,
	UseInteractable = 8,
	WalkerTravel = 9,
	CollectTradeStationTax = 10,
	ManageWalkerMigrationPreferences = 11,
	HACK_Officers = 12,
	HACK_Leaders = 13,
	Disassemble = 14,
	Pack = 15,
	HACK_Veterans = 16,
	EMistClanPermission_MAX = 17
};

// Enum Mist.EMistPerkAbility
enum class EMistPerkAbility : uint8 {
	None = 0,
	MonkeyHunter = 1,
	MonkeyHater = 2,
	RegenerateHealth = 3,
	BallistaMarksman = 4,
	CatapultMarksman = 5,
	CatapultPrecision = 6,
	RepeaterMarksman = 7,
	ScattershotMarksman = 8,
	SlingshotMarksman = 9,
	NetThrowerMarksman = 10,
	HarvestHand = 11,
	HarvestAxe = 12,
	HarvestPickaxe = 13,
	HarvestTether = 14,
	HarvestCatapult = 15,
	HarvestWaterhose = 16,
	ActiveHarvestHand = 17,
	ActiveHarvestAxe = 18,
	ActiveHarvestPickaxe = 19,
	ActiveHarvestTether = 20,
	ActiveHarvestCatapult = 21,
	ActiveHarvestWaterhose = 22,
	EMistPerkAbility_MAX = 23
};

// Enum Mist.EMistControllableManningSide
enum class EMistControllableManningSide : uint8 {
	Rear = 0,
	Left = 1,
	Right = 2,
	LeftOrRight = 3,
	LeftOrRightOrRear = 4,
	EMistControllableManningSide_MAX = 5
};

// Enum Mist.EMistGimbalControlRollType
enum class EMistGimbalControlRollType : uint8 {
	None = 0,
	Target = 1,
	Keyboard = 2,
	EMistGimbalControlRollType_MAX = 3
};

// Enum Mist.EMistGimbalControlType
enum class EMistGimbalControlType : uint8 {
	None = 0,
	Target = 1,
	Keyboard = 2,
	Mouse = 3,
	Camera = 4,
	EMistGimbalControlType_MAX = 5
};

// Enum Mist.EMistBallistaState
enum class EMistBallistaState : uint8 {
	Unloaded = 0,
	Reloading = 1,
	ReloadingMagazine = 2,
	Loaded = 3,
	Firing = 4,
	Tethered = 5,
	EMistBallistaState_MAX = 6
};

// Enum Mist.EMistCatapultState
enum class EMistCatapultState : uint8 {
	Unloaded = 0,
	Loaded = 1,
	Firing = 2,
	Retracting = 3,
	EMistCatapultState_MAX = 4
};

// Enum Mist.EMistDoubleBarreledGunFireFailedReason
enum class EMistDoubleBarreledGunFireFailedReason : uint8 {
	OutOfAmmo = 0,
	NotAllowedAtThisTime = 1,
	EMistDoubleBarreledGunFireFailedReason_MAX = 2
};

// Enum Mist.EMistDoubleBarreledGunReloadFailedReason
enum class EMistDoubleBarreledGunReloadFailedReason : uint8 {
	NoMatchingAmmo = 0,
	AlreadyReloading = 1,
	EMistDoubleBarreledGunReloadFailedReason_MAX = 2
};

// Enum Mist.EMistDoubleBarreledGunBarrelState
enum class EMistDoubleBarreledGunBarrelState : uint8 {
	Unloaded = 0,
	Reloading = 1,
	Loaded = 2,
	Firing = 3,
	Retracting = 4,
	EMistDoubleBarreledGunBarrelState_MAX = 5
};

// Enum Mist.EMistProjectileHitState
enum class EMistProjectileHitState : uint8 {
	NotHit = 0,
	HitCharacter = 1,
	HitExoskeleton = 2,
	HitDynamicObject = 3,
	HitWorld = 4,
	HiddenPendingDestroy = 5,
	Destroyed = 6,
	EMistProjectileHitState_MAX = 7
};

// Enum Mist.EMistProjectilePostHitCollisionType
enum class EMistProjectilePostHitCollisionType : uint8 {
	ProjectileHit = 0,
	InteractableOnly = 1,
	None = 2,
	EMistProjectilePostHitCollisionType_MAX = 3
};

// Enum Mist.EEquipmentTool
enum class EEquipmentTool : uint8 {
	None = 0,
	TreeCutting = 1,
	Mining = 2,
	Scythe = 3,
	CatapultRock = 4,
	BallistaHarpoon = 5,
	HoseStation = 6,
	Net = 7,
	RepeaterBolt = 8,
	Scattershot = 9,
	SlingshotRock = 10,
	Sawblade = 11,
	Jackhammer = 12,
	Quarrying = 13,
	Lumbermill = 14,
	EEquipmentTool_MAX = 15
};

// Enum Mist.EMistRepeaterState
enum class EMistRepeaterState : uint8 {
	Idle = 0,
	Preparing = 1,
	Firing = 2,
	CoolingDown = 3,
	EMistRepeaterState_MAX = 4
};

// Enum Mist.EMistSlingshotState
enum class EMistSlingshotState : uint8 {
	Idle = 0,
	Active = 1,
	Firing = 2,
	EMistSlingshotState_MAX = 3
};

// Enum Mist.EMistDestroyReason
enum class EMistDestroyReason : uint8 {
	Damaged = 0,
	Disassembled = 1,
	NotSupported = 2,
	COUNT = 3,
	EMistDestroyReason_MAX = 4
};

// Enum Mist.EMistInvalidNameCharacterReason
enum class EMistInvalidNameCharacterReason : uint8 {
	Disallowed = 0,
	DisallowedInStart = 1,
	DisallowedInEnd = 2,
	DisallowedRepetition = 3,
	EMistInvalidNameCharacterReason_MAX = 4
};

// Enum Mist.EMistInvalidNameReason
enum class EMistInvalidNameReason : uint8 {
	Duplicate = 0,
	TooShort = 1,
	TooLong = 2,
	Empty = 3,
	EMistInvalidNameReason_MAX = 4
};

// Enum Mist.EMistInvalidNameError
enum class EMistInvalidNameError : uint8 {
	Name = 0,
	Character = 1,
	ContainsInappropriate = 2,
	GenericError = 3,
	EMistInvalidNameError_MAX = 4
};

// Enum Mist.ETurretState
enum class ETurretState : uint8 {
	Ready = 0,
	WindingUp = 1,
	Reloading = 2,
	ETurretState_MAX = 3
};

// Enum Mist.ETurretYawRotation
enum class ETurretYawRotation : uint8 {
	Idle = 0,
	Right = 1,
	Left = 2,
	ETurretYawRotation_MAX = 3
};

// Enum Mist.EMobMovementState
enum class EMobMovementState : uint8 {
	Idle = 0,
	WalkTowards = 1,
	RunTowards = 2,
	StrafeTowards = 3,
	TurnTowards = 4,
	ReverseTowards = 5,
	EMobMovementState_MAX = 6
};

// Enum Mist.EMistInventoryOperationTargetType
enum class EMistInventoryOperationTargetType : uint8 {
	INVALID = 0,
	Actor = 1,
	Container = 2,
	ContainerSlot = 3,
	EquipmentSlot = 4,
	EquipmentHand = 5,
	QuickSlot = 6,
	EMistInventoryOperationTargetType_MAX = 7
};

// Enum Mist.EEquipmentHand
enum class EEquipmentHand : uint8 {
	Right = 0,
	Left = 1,
	COUNT = 2,
	INVALID = 3,
	EEquipmentHand_MAX = 4
};

// Enum Mist.EMistGrapplingHookReelingMode
enum class EMistGrapplingHookReelingMode : uint8 {
	ReelingIn = 0,
	ReelingOut = 1,
	EMistGrapplingHookReelingMode_MAX = 2
};

// Enum Mist.EMistGrapplingHookResetReason
enum class EMistGrapplingHookResetReason : uint8 {
	Player = 0,
	MaxLengthExceeded = 1,
	HealthIsZero = 2,
	ForbidGrapplingToComponent = 3,
	EMistGrapplingHookResetReason_MAX = 4
};

// Enum Mist.EMistGrapplingHookType
enum class EMistGrapplingHookType : uint8 {
	Standard = 0,
	Gun = 1,
	EMistGrapplingHookType_MAX = 2
};

// Enum Mist.EMistGrapplingHookGunState
enum class EMistGrapplingHookGunState : uint8 {
	Inactive = 0,
	Unloaded = 1,
	Loaded = 2,
	Shooting = 3,
	Reloading = 4,
	EMistGrapplingHookGunState_MAX = 5
};

// Enum Mist.EMistGrapplingHookState
enum class EMistGrapplingHookState : uint8 {
	Detached = 0,
	Shooting = 1,
	Attached = 2,
	Resetting = 3,
	EMistGrapplingHookState_MAX = 4
};

// Enum Mist.EMistGrapplingHookMode
enum class EMistGrapplingHookMode : uint8 {
	Standard = 0,
	Instant = 1,
	Count = 2,
	EMistGrapplingHookMode_MAX = 3
};

// Enum Mist.EMeleeAttackObject
enum class EMeleeAttackObject : uint8 {
	Weapon = 0,
	LeftFoot = 1,
	RightFoot = 2,
	LeftHand = 3,
	RightHand = 4,
	EMeleeAttackObject_MAX = 5
};

// Enum Mist.ECombatAdditionalTrackInfo
enum class ECombatAdditionalTrackInfo : uint8 {
	None = 0,
	Feint = 1,
	AttackEndCancelled = 2,
	ProlongedCombatState = 3,
	Displacement = 4,
	Throwing = 5,
	SameItemConsuming = 6,
	UnequippingItem = 7,
	ECombatAdditionalTrackInfo_MAX = 8
};

// Enum Mist.EMistConstructionPartState
enum class EMistConstructionPartState : uint8 {
	Undefined = 0,
	RequiresOtherParts = 1,
	CanBeConstructed = 2,
	Constructed = 3,
	EMistConstructionPartState_MAX = 4
};

// Enum Mist.EMistCraftingQueueItemState
enum class EMistCraftingQueueItemState : uint8 {
	WaitingToStart = 0,
	NotEnoughResources = 1,
	NotEnoughSpace = 2,
	Working = 3,
	EMistCraftingQueueItemState_MAX = 4
};

// Enum Mist.FurnaceHeat
enum class FurnaceHeat : uint8 {
	ToCold = 0,
	Good = 1,
	ToHot = 2,
	FurnaceHeat_MAX = 3
};

// Enum Mist.EInteractionType
enum class EInteractionType : uint8 {
	Overlapping = 0,
	Collecting = 1,
	EInteractionType_MAX = 2
};

// Enum Mist.EDamageRate
enum class EDamageRate : uint8 {
	Addition = 0,
	Multiplication = 1,
	Power = 2,
	EDamageRate_MAX = 3
};

// Enum Mist.EMistPlayerStat
enum class EMistPlayerStat : uint8 {
	Health = 0,
	Damage = 1,
	Mobility = 2,
	Stamina = 3,
	VitaminDuration = 4,
	VitaminPower = 5,
	COUNT = 6,
	EMistPlayerStat_MAX = 7
};

// Enum Mist.EMistWalkerType
enum class EMistWalkerType : uint8 {
	Spider = 0,
	Dinghy = 1,
	Buffalo = 2,
	Battleship = 3,
	Schmetterling = 4,
	Proxy = 5,
	Tobbogan = 6,
	Falco = 7,
	Tusker = 8,
	Stiletto = 9,
	Titan = 10,
	Hornet = 11,
	Firefly = 12,
	Cabin = 13,
	House = 14,
	Tower = 15,
	Pump = 16,
	Foundation = 17,
	Packing = 18,
	FoundationTier1 = 19,
	Hercule = 20,
	Bird = 21,
	MAX = 22
};

// Enum Mist.EMistGamePlatform
enum class EMistGamePlatform : uint8 {
	Unknown = 0,
	Xbox = 1,
	Pc = 2,
	Cross = 3,
	EMistGamePlatform_MAX = 4
};

// Enum Mist.EMistAccountTier
enum class EMistAccountTier : uint8 {
	Default = 0,
	Trusted = 1,
	Developer = 2,
	Machine = 3,
	EMistAccountTier_MAX = 4
};

// Enum Mist.EMistClanPermissionFlags
enum class EMistClanPermissionFlags : int32 {
	None = 0,
	InviteMember = 1,
	RemoveMember = 2,
	UpdateClanInformation = 4,
	ModerateClan = 8,
	Build = 16,
	Spawn = 32,
	UseContainer = 64,
	UseInteractable = 128,
	WalkerTravel = 256,
	CollectTradeStationTax = 512,
	ManageWalkerMigrationPreferences = 1024,
	HACK_Officers = 2048,
	HACK_Leaders = 4096,
	Disassemble = 8192,
	Pack = 16384,
	HACK_Veterans = 32768,
	All = -1,
	EMistClanPermissionFlags_MAX = 32769
};

// Enum Mist.EMistHoistState
enum class EMistHoistState : uint8 {
	Unloaded = 0,
	Reloading = 1,
	Loaded = 2,
	Firing = 3,
	Tethered = 4,
	EMistHoistState_MAX = 5
};

// Enum Mist.EMistInventoryLeftoversMode
enum class EMistInventoryLeftoversMode : uint8 {
	Default = 0,
	Prevent = 1,
	Override = 2,
	Accumulate = 3,
	EMistInventoryLeftoversMode_MAX = 4
};

// Enum Mist.EMistInventoryOperationSourceType
enum class EMistInventoryOperationSourceType : uint8 {
	INVALID = 0,
	Actor = 1,
	Container = 2,
	ContainerSlot = 3,
	EquipmentSlot = 4,
	EquipmentHand = 5,
	QuickSlot = 6,
	EMistInventoryOperationSourceType_MAX = 7
};

// Enum Mist.EMistWorldCardinalDirection
enum class EMistWorldCardinalDirection : uint8 {
	North = 0,
	NorthEast = 1,
	East = 2,
	SouthEast = 3,
	South = 4,
	SouthWest = 5,
	West = 6,
	NorthWest = 7,
	Center = 8,
	EMistWorldCardinalDirection_MAX = 9
};

// Enum Mist.EMistKillReason
enum class EMistKillReason : uint8 {
	Weapon = 0,
	Suicide = 1,
	OutOfWorld = 2,
	Dehydration = 3,
	Gravity = 4,
	Cactus = 5,
	Other = 6,
	Worm = 7,
	EMistKillReason_MAX = 8
};

// Enum Mist.EPlayerCharacterNotificationType
enum class EPlayerCharacterNotificationType : uint8 {
	ClanInvite = 0,
	EPlayerCharacterNotificationType_MAX = 1
};

// Enum Mist.EMistMobCampState
enum class EMistMobCampState : uint8 {
	Inactive = 0,
	Active = 1,
	EMistMobCampState_MAX = 2
};

// Enum Mist.EMistMobCampAiState
enum class EMistMobCampAiState : uint8 {
	Peaceful = 0,
	Alert = 1,
	Fight = 2,
	EMistMobCampAiState_MAX = 3
};

// Enum Mist.EMistPackingState
enum class EMistPackingState : uint8 {
	None = 0,
	Part = 1,
	Base = 2,
	Walker = 3,
	Exoskeleton = 4,
	EMistPackingState_MAX = 5
};

// Enum Mist.EMistPackingProcess
enum class EMistPackingProcess : uint8 {
	None = 0,
	Unpacking = 1,
	Packing = 2,
	EMistPackingProcess_MAX = 3
};

// Enum Mist.EMistFoliageHarvestingType
enum class EMistFoliageHarvestingType : uint8 {
	Disabled = 0,
	SimpleInteraction = 1,
	SimpleAttacking = 2,
	WalkerHarvesting = 3,
	Tethering = 4,
	RemoteHarvesting = 5,
	WalkerLogging = 6,
	EMistFoliageHarvestingType_MAX = 7
};

// Enum Mist.EMistBattleFanState
enum class EMistBattleFanState : uint8 {
	Idle = 0,
	SpeedingUp = 1,
	SpeedingDown = 2,
	Overheated = 3,
	SuperSuckOverheated = 4,
	SuperCharging = 5,
	SuperSucking = 6,
	SuperBlowing = 7,
	EMistBattleFanState_MAX = 8
};

// Enum Mist.EMistProjectorLensPosition
enum class EMistProjectorLensPosition : uint8 {
	RightLens = 0,
	LeftLens = 1,
	COUNT = 2,
	EMistProjectorLensPosition_MAX = 3
};

// Enum Mist.EMistProjectorLensId
enum class EMistProjectorLensId : uint8 {
	TopLens = 0,
	BottomLens = 1,
	COUNT = 2,
	EMistProjectorLensId_MAX = 3
};

// Enum Mist.EMistStructureType
enum class EMistStructureType : uint8 {
	Terrain = 0,
	Walker = 1,
	Base = 2,
	EMistStructureType_MAX = 3
};

// Enum Mist.EMistWalkerWreckageState
enum class EMistWalkerWreckageState : uint8 {
	Alive = 0,
	CrashedLeft = 1,
	CrashedRight = 2,
	CrashedBoth = 3,
	EMistWalkerWreckageState_MAX = 4
};

// Enum Mist.EMistHoseMode
enum class EMistHoseMode : uint8 {
	Water = 0,
	Fuel = 1,
	EMistHoseMode_MAX = 2
};

// Enum Mist.EMistHoseState
enum class EMistHoseState : uint8 {
	Idle = 0,
	Firing = 1,
	Reloading = 2,
	Climbing = 3,
	EMistHoseState_MAX = 4
};

// Enum Mist.EMistSawbladeState
enum class EMistSawbladeState : uint8 {
	Stopped = 0,
	Spinning = 1,
	Sawing = 2,
	EMistSawbladeState_MAX = 3
};

// Enum Mist.EMistCharacterCustomizationValue
enum class EMistCharacterCustomizationValue : uint8 {
	Set = 0,
	Hair = 2,
	FacialHair = 3,
	HairColor = 4,
	EyeColor = 5,
	ClothingColor = 6,
	BodyDetail = 7,
	HeadDetail = 8,
	COUNT = 9,
	EMistCharacterCustomizationValue_MAX = 10
};

// Enum Mist.EMistUnlockableItemStatus
enum class EMistUnlockableItemStatus : uint8 {
	Active = 0,
	Unlocked = 1,
	CanUnlock = 2,
	SatisfyLevelRequirement = 3,
	Locked = 4,
	EMistUnlockableItemStatus_MAX = 5
};

// Enum Mist.EPumpWalkerState
enum class EPumpWalkerState : uint8 {
	DriveMode = 0,
	RetractingPump = 1,
	ExtendingPump = 2,
	Pumping = 3,
	EPumpWalkerState_MAX = 4
};

// Enum Mist.ETurretWalkerState
enum class ETurretWalkerState : uint8 {
	DriveMode = 0,
	TransitionToDriveMode = 1,
	TransitionToTurretMode = 2,
	TurretMode = 3,
	ETurretWalkerState_MAX = 4
};

// Enum Mist.EMistClimateType
enum class EMistClimateType : uint8 {
	None = 0,
	Desert = 1,
	Tundra = 2,
	MiniOasis = 3,
	LightForest = 4,
	HeavyForest = 5,
	Swamp = 6,
	Canyon = 7,
	Canyon_High = 8,
	Canyon_Low = 9,
	Canyon_Oasis = 10,
	NibiruJungle = 11,
	Volcanic = 12,
	EMistClimateType_MAX = 13
};

// Enum Mist.EMistAccountCharacterState
enum class EMistAccountCharacterState : uint8 {
	OnMap = 0,
	OffMap = 1,
	Unassigned = 2,
	Evading = 3,
	Migrating = 4,
	EMistAccountCharacterState_MAX = 5
};

// Enum Mist.EMistModifierType
enum class EMistModifierType : uint8 {
	Bonus = 0,
	Multiplier = 1,
	None = 2,
	EMistModifierType_MAX = 3
};

// Enum Mist.EMistActionModifier
enum class EMistActionModifier : uint8 {
	QuenchingMultiplier = 0,
	MaxWeightBonus = 1,
	XPKillGainMultiplier = 2,
	LootingLuckMultiplier = 3,
	StaminaRegenSpeedMultiplier = 4,
	CraftingSpeedMultiplier = 5,
	HeavyAttackStaminaCostMultiplier = 6,
	AttackAfterBlockMultiplier = 7,
	SprintingStaminaMultiplier = 8,
	StartSprintingStaminaMultiplier = 9,
	ProjectileDamageMultiplier = 10,
	SiegeWeaponReloadMultiplier = 11,
	RareHarvestChanceModifier = 12,
	EnemyAggroModifier = 13,
	None = 14,
	EMistActionModifier_MAX = 15
};

// Enum Mist.EAnimalMobBehavior
enum class EAnimalMobBehavior : uint8 {
	Patrolling = 0,
	AttackingPlayer = 1,
	AttackingWalker = 2,
	AttackingGrappled = 3,
	NettingSmallWalker = 4,
	Following = 5,
	RunningAway = 6,
	EAnimalMobBehavior_MAX = 7
};

// Enum Mist.ERootMotionCorrectionMarker
enum class ERootMotionCorrectionMarker : uint8 {
	CorrectionStart = 0,
	CorrectionEnd = 1,
	ERootMotionCorrectionMarker_MAX = 2
};

// Enum Mist.EWeaponSheathSlot
enum class EWeaponSheathSlot : uint8 {
	HipRight = 0,
	HipLeft = 1,
	BackRight = 2,
	BackLeft = 3,
	HipRight01 = 4,
	HipRight02 = 5,
	HipLeft01 = 6,
	HipLeft02 = 7,
	Back01 = 8,
	Back02 = 9,
	COUNT = 10,
	EWeaponSheathSlot_MAX = 11
};

// Enum Mist.ECMM_AnimType
enum class ECMM_AnimType : uint8 {
	Normal = 0,
	Event = 1,
	ECMM_MAX = 2
};

// Enum Mist.ECombatStance
enum class ECombatStance : uint8 {
	None = 0,
	Right = 1,
	Left = 2,
	ECombatStance_MAX = 3
};

// Enum Mist.EDisplacementType
enum class EDisplacementType : uint8 {
	Default = 0,
	Dodge = 1,
	EDisplacementType_MAX = 2
};

// Enum Mist.ELocomotionState
enum class ELocomotionState : uint8 {
	Idle = 0,
	Starting = 1,
	Moving = 2,
	Stopping = 3,
	Pivoting = 4,
	AttackStep = 5,
	StanceTransition = 6,
	Displacement = 7,
	JumpStart = 8,
	JumpLoop = 9,
	Landing = 10,
	MAX = 11
};

// Enum Mist.ECardinalDirection
enum class ECardinalDirection : uint8 {
	Fwd = 0,
	Left = 1,
	Right = 2,
	Back = 3,
	ECardinalDirection_MAX = 4
};

// Enum Mist.ETurnDirection
enum class ETurnDirection : uint8 {
	Left = 0,
	Right = 1,
	ETurnDirection_MAX = 2
};

// Enum Mist.EMistLocomotionAnimType
enum class EMistLocomotionAnimType : uint8 {
	Idle = 0,
	Neutral = 1,
	CombatNone = 2,
	CombatRight = 3,
	CombatLeft = 4,
	CombatOverhead = 5,
	CombatDisplacement = 6,
	Jumping = 7,
	EMistLocomotionAnimType_MAX = 8
};

// Enum Mist.EExoGunState
enum class EExoGunState : uint8 {
	Inactive = 0,
	Aiming = 1,
	Firing = 2,
	Reloading = 3,
	ReloadingMagazine = 4,
	EExoGunState_MAX = 5
};

// Enum Mist.EItemUsageEvent
enum class EItemUsageEvent : uint8 {
	ApplyEffects = 0,
	IgniteFlare = 1,
	DropFlareCork = 2,
	DropItem = 3,
	EItemUsageEvent_MAX = 4
};

// Enum Mist.EEffectItemState
enum class EEffectItemState : uint8 {
	None = 0,
	Active = 1,
	Fading = 2,
	Removed = 3,
	EEffectItemState_MAX = 4
};

// Enum Mist.ECompletionTypes
enum class ECompletionTypes : uint8 {
	Compete = 0,
	Win = 1,
	ConsecutiveWin = 2,
	ECompletionTypes_MAX = 3
};

// Enum Mist.EAuctionParticipationState
enum class EAuctionParticipationState : uint8 {
	Winning = 0,
	Losing = 1,
	NotParticipating = 2,
	EAuctionParticipationState_MAX = 3
};

// Enum Mist.EMistAudioTestBallistaMode
enum class EMistAudioTestBallistaMode : uint8 {
	Normal = 0,
	Tethered = 1,
	Count = 2,
	EMistAudioTestBallistaMode_MAX = 3
};

// Enum Mist.EMistBackendErrorType
enum class EMistBackendErrorType : uint8 {
	ConnectionError = 0,
	RequestFailed = 1,
	Timeout = 2,
	BadRequest = 3,
	NotAuthenticated = 4,
	NotAuthorized = 5,
	NotFound = 6,
	ServerError = 7,
	Unknown = 8,
	EMistBackendErrorType_MAX = 9
};

// Enum Mist.FMistBoardingPlankState
enum class FMistBoardingPlankState : uint8 {
	Raised = 0,
	Lowered = 1,
	Raising = 2,
	Lowering = 3,
	FMistBoardingPlankState_MAX = 4
};

// Enum Mist.EMistBoostType
enum class EMistBoostType : uint8 {
	WeightLimit_Add = 0,
	Torque_Multi = 1,
	MaxRPM_Add = 2,
	Armor_Multi = 3,
	GearCapacity_Add = 4,
	CargoCapacity_Add = 5,
	TravelCost_Multi = 6,
	BaseWeight_Multi = 7,
	RespawnTime_Multi = 8,
	RespawnCost_Multi = 9,
	TorqueGeneration_Add = 10,
	TorqueCapacity_Add = 11,
	CraftingTime_Multi = 12,
	SandinessReduction_Multi = 13,
	LegHarvesting_Add = 14,
	LegLogging_Add = 15,
	LegItemLooting_Add = 16,
	LegProtection_Multi = 17,
	ItemRepair_Add = 18,
	PackTime_Multi = 19,
	FireDamageReduction_Multi = 20,
	TetherHp_Multi = 21,
	HullNormalAmmoDmgReduction_Multi = 22,
	BOOST_MAX = 23,
	EMistBoostType_MAX = 24
};

// Enum Mist.ETargetReachedConditionType
enum class ETargetReachedConditionType : uint8 {
	Distance = 0,
	Distance2D = 1,
	Height = 2,
	DistanceAndHeight = 3,
	DistanceOrHeight = 4,
	ETargetReachedConditionType_MAX = 5
};

// Enum Mist.EKillinAttackType
enum class EKillinAttackType : uint8 {
	Damage = 0,
	Grab = 1,
	EKillinAttackType_MAX = 2
};

// Enum Mist.EMobCombatAction
enum class EMobCombatAction : uint8 {
	Attack = 0,
	Defend = 1,
	Jump = 2,
	Wait = 3,
	EMobCombatAction_MAX = 4
};

// Enum Mist.EMovementTrajectoryType
enum class EMovementTrajectoryType : uint8 {
	Spiral = 0,
	Straight = 1,
	EMovementTrajectoryType_MAX = 2
};

// Enum Mist.EMistBuildingMode
enum class EMistBuildingMode : uint8 {
	None = 0,
	Placing = 1,
	Disassembling = 2,
	Renaming = 3,
	Customizing = 4,
	EMistBuildingMode_MAX = 5
};

// Enum Mist.ECustomEventType
enum class ECustomEventType : uint8 {
	None = 0,
	ActionEnded = 1,
	ActionEndedStanceChange = 2,
	AttackCancellablePoint = 3,
	AttackReadyEnded = 4,
	TransitionAnimEnded = 5,
	Throw = 6,
	EquipItem = 7,
	UnequipItem = 8,
	ECustomEventType_MAX = 9
};

// Enum Mist.ECustomStateType
enum class ECustomStateType : uint8 {
	None = 0,
	BlockCheck = 1,
	FeintArea = 2,
	BashArea = 3,
	ReleasePreparationArea = 4,
	AttackRecoveryArea = 5,
	ECustomStateType_MAX = 6
};

// Enum Mist.ECharacterDamageArea
enum class ECharacterDamageArea : uint8 {
	Head = 0,
	Torso = 1,
	Legs = 2,
	Max = 3,
	None = 4
};

// Enum Mist.EMistJogType
enum class EMistJogType : uint8 {
	Jogging = 0,
	Attacking = 1,
	Chasing = 2,
	EMistJogType_MAX = 3
};

// Enum Mist.ECharacterFootstepType
enum class ECharacterFootstepType : uint8 {
	Step = 0,
	StepLight = 1,
	StepHeavy = 2,
	JumpLand = 3,
	ECharacterFootstepType_MAX = 4
};

// Enum Mist.EClimbingState
enum class EClimbingState : uint8 {
	None = 0,
	ReverseClimbing = 1,
	Climbing = 2,
	ClimbingLocked = 3,
	EClimbingState_MAX = 4
};

// Enum Mist.ECustomMovementMode
enum class ECustomMovementMode : uint8 {
	None = 0,
	Tethered = 1,
	Climbing = 2,
	WalkerJumping = 3,
	Wingsuit = 4,
	ECustomMovementMode_MAX = 5
};

// Enum Mist.EMistClaimingWalkerStatus
enum class EMistClaimingWalkerStatus : uint8 {
	Undeployed = 0,
	InProgress_Deprecated = 1,
	Active = 2,
	Destroyed = 3,
	Activating = 4,
	Contested_Deprecated = 5,
	EMistClaimingWalkerStatus_MAX = 6
};

// Enum Mist.EMistClanAction
enum class EMistClanAction : uint8 {
	Query = 0,
	QueryInvites = 1,
	AcceptInvite = 2,
	RemoveInvite = 3,
	Create = 4,
	Invite = 5,
	CancelInvite = 6,
	Kick = 7,
	UpdateClan = 8,
	Leave = 9,
	AddRank = 10,
	SetMemberRank = 11,
	EMistClanAction_MAX = 12
};

// Enum Mist.EMistClanPriority
enum class EMistClanPriority : int32 {
	Member = 0,
	Veteran = 2,
	Officer = 3,
	Leader = 4,
	Founder = 2147483647,
	EMistClanPriority_MAX = 2147483647
};

// Enum Mist.EMistCraneHookInput
enum class EMistCraneHookInput : uint8 {
	None = 0,
	Pull = 1,
	Extend = 2,
	EMistCraneHookInput_MAX = 3
};

// Enum Mist.EMistCraneArmInput
enum class EMistCraneArmInput : uint8 {
	None = 0,
	Contract = 1,
	Extend = 2,
	EMistCraneArmInput_MAX = 3
};

// Enum Mist.EMistCraneBaseInput
enum class EMistCraneBaseInput : uint8 {
	None = 0,
	Left = 1,
	Right = 2,
	EMistCraneBaseInput_MAX = 3
};

// Enum Mist.EMistMaterialProtection
enum class EMistMaterialProtection : uint8 {
	NoProtection = 0,
	Soft = 1,
	Robust = 2,
	Wood = 3,
	Solid = 4,
	Override = 5,
	Hardened = 6,
	EMistMaterialProtection_MAX = 7
};

// Enum Mist.EMistDamageModifier
enum class EMistDamageModifier : uint8 {
	DamageReceivedMultiplier = 0,
	DamageDealtMultiplier = 1,
	None = 2,
	EMistDamageModifier_MAX = 3
};

// Enum Mist.EMistRealmMapTileClaimability
enum class EMistRealmMapTileClaimability : uint8 {
	NotClaimable = 0,
	ProxyClaimable = 1,
	Claimable = 2,
	EMistRealmMapTileClaimability_MAX = 3
};

// Enum Mist.EMistRealmMapTileDifficulty
enum class EMistRealmMapTileDifficulty : uint8 {
	Easy = 0,
	Medium = 1,
	Hard = 2,
	EMistRealmMapTileDifficulty_MAX = 3
};

// Enum Mist.EMistRealmMapTileType
enum class EMistRealmMapTileType : uint8 {
	Oasis = 0,
	MiniOasis = 1,
	EventMap = 2,
	Flotilla = 3,
	EMistRealmMapTileType_MAX = 4
};

// Enum Mist.EDeviceLightingStyle
enum class EDeviceLightingStyle : uint8 {
	Static = 0,
	Blink = 1,
	Breath = 2,
	EDeviceLightingStyle_MAX = 3
};

// Enum Mist.EPlayerAction
enum class EPlayerAction : uint8 {
	OnWalker = 0,
	Grappled = 1,
	Downed = 2,
	Sprinting = 3,
	InWater = 4,
	Idle = 5,
	EPlayerAction_MAX = 6
};

// Enum Mist.EMistDoorRotateSlide
enum class EMistDoorRotateSlide : uint8 {
	Rotate = 0,
	Slide = 1,
	EMistDoorRotateSlide_MAX = 2
};

// Enum Mist.EMistDoorOpeningType
enum class EMistDoorOpeningType : uint8 {
	Both = 0,
	Inward = 1,
	Outward = 2,
	EMistDoorOpeningType_MAX = 3
};

// Enum Mist.FMistDoorState
enum class FMistDoorState : uint8 {
	Closed = 0,
	OpeningInwards = 1,
	OpeningOutwards = 2,
	OpenInwards = 3,
	OpenOutwards = 4,
	ClosingInwards = 5,
	ClosingOutwards = 6,
	FMistDoorState_MAX = 7
};

// Enum Mist.EMistDyeSpecialType
enum class EMistDyeSpecialType : uint8 {
	None = 0,
	BucketEmoticon = 1,
	EMistDyeSpecialType_MAX = 2
};

// Enum Mist.EGrapplingHookAttachmentType
enum class EGrapplingHookAttachmentType : uint8 {
	Gun = 0,
	EGrapplingHookAttachmentType_MAX = 1
};

// Enum Mist.EEquipmentHandRequirement
enum class EEquipmentHandRequirement : uint8 {
	Right = 0,
	Left = 1,
	Any = 2,
	Both = 3,
	EEquipmentHandRequirement_MAX = 4
};

// Enum Mist.EExoskeletonGunSide
enum class EExoskeletonGunSide : uint8 {
	Left = 0,
	Right = 1,
	EExoskeletonGunSide_MAX = 2
};

// Enum Mist.EAnimationEnslavementMode
enum class EAnimationEnslavementMode : uint8 {
	Sequence = 0,
	Montage = 1,
	EAnimationEnslavementMode_MAX = 2
};

// Enum Mist.EGrowState
enum class EGrowState : uint8 {
	Seedling = 0,
	Vegetative = 1,
	Ripening = 2,
	Normal = 3,
	EGrowState_MAX = 4
};

// Enum Mist.EFlotillaQuestDifficulty
enum class EFlotillaQuestDifficulty : uint8 {
	Easy = 0,
	Medium = 1,
	Hard = 2,
	EFlotillaQuestDifficulty_MAX = 3
};

// Enum Mist.EMistFoliageAttackableType
enum class EMistFoliageAttackableType : uint8 {
	Disabled = 0,
	Simple = 1,
	Tree = 2,
	Custom = 3,
	EMistFoliageAttackableType_MAX = 4
};

// Enum Mist.EMistFoliageInteractionType
enum class EMistFoliageInteractionType : uint8 {
	Disabled = 0,
	Simple = 1,
	Custom = 2,
	VisualOnly = 3,
	EMistFoliageInteractionType_MAX = 4
};

// Enum Mist.EHarvestingIcon
enum class EHarvestingIcon : uint8 {
	None = 0,
	Hand = 1,
	SimpleAttack = 2,
	TreeCutting = 3,
	Mining = 4,
	Scythe = 5,
	SiegeWeapon = 6,
	Tethering = 7,
	Sawblade = 8,
	Jackhammer = 9,
	Quarrying = 10,
	Lumbermill = 11,
	EHarvestingIcon_MAX = 12
};

// Enum Mist.EFragmentMachineState
enum class EFragmentMachineState : uint8 {
	Collapsed = 0,
	Ready = 1,
	Working = 2,
	PostWork = 3,
	Broken = 4,
	EFragmentMachineState_MAX = 5
};

// Enum Mist.EMistGameClientContextState
enum class EMistGameClientContextState : uint8 {
	None = 0,
	PlayNew = 1,
	Play = 2,
	DelayedPlay = 3,
	OffMapLobby = 4,
	JoinQueue = 5,
	Connect = 6,
	EMistGameClientContextState_MAX = 7
};

// Enum Mist.EMistGameClientContextFollowUpAction
enum class EMistGameClientContextFollowUpAction : uint8 {
	None = 0,
	Play = 1,
	DelayedPlay = 2,
	OffMapLobby = 3,
	ShowRealm = 4,
	EMistGameClientContextFollowUpAction_MAX = 5
};

// Enum Mist.EGrapplingHookPullerState
enum class EGrapplingHookPullerState : uint8 {
	Available = 0,
	Occupied = 1,
	Pulling = 2,
	Hanging = 3,
	Swinging = 4,
	Blocked = 5,
	EGrapplingHookPullerState_MAX = 6
};

// Enum Mist.EMistHUDElementFlags
enum class EMistHUDElementFlags : uint8 {
	LowerBar = 0,
	MessageArea = 1,
	MainArea = 2,
	InformationArea = 3,
	HudArea = 4,
	ExpArea = 5,
	HudLogMessage = 6,
	HUDShortcuts = 7,
	CharacterState = 8,
	QuickSlotBar = 9,
	EMistHUDElementFlags_MAX = 10
};

// Enum Mist.EHumanoidMobDifficulty
enum class EHumanoidMobDifficulty : uint8 {
	Easy = 0,
	Normal = 1,
	Hard = 2,
	EHumanoidMobDifficulty_MAX = 3
};

// Enum Mist.EGamepadPlatformType
enum class EGamepadPlatformType : uint8 {
	Unspecified = 0,
	Microsoft = 1,
	Sony = 2,
	EGamepadPlatformType_MAX = 3
};

// Enum Mist.EMistItemUseNetworkMode
enum class EMistItemUseNetworkMode : uint8 {
	None = 0,
	Server = 1,
	Client = 2,
	Both = 3,
	EMistItemUseNetworkMode_MAX = 4
};

// Enum Mist.EMistBuildCategory
enum class EMistBuildCategory : uint8 {
	Utility = 0,
	Structure = 1,
	COUNT = 2,
	EMistBuildCategory_MAX = 3
};

// Enum Mist.EMistItemDragDropAction
enum class EMistItemDragDropAction : uint8 {
	Default = 0,
	SingleItem = 1,
	HalfStack = 2,
	EMistItemDragDropAction_MAX = 3
};

// Enum Mist.EMistItemProperty
enum class EMistItemProperty : uint8 {
	None = 0,
	MaxDurability = 1,
	Weight = 2,
	Damage = 3,
	Penetration = 4,
	VsSoak = 5,
	VsReduce = 6,
	Speed = 7,
	ArmorSoak = 8,
	ArmorReduce = 9,
	ContainerSlots = 10,
	Max = 11
};

// Enum Mist.EMistItemSlotDropType
enum class EMistItemSlotDropType : uint8 {
	Invalid = 0,
	CantStack = 1,
	CantPut = 2,
	NotEnoughSpace = 3,
	WrongContainerType = 4,
	CraftingStationIsActive = 5,
	WrongEquipmentType = 6,
	CantHoldInHand = 7,
	NotUsableForQuickslot = 8,
	Valid = 9,
	Stack = 10,
	Swap = 11,
	Merge = 12,
	Repair = 13,
	EMistItemSlotDropType_MAX = 14
};

// Enum Mist.EMistJoinQueueError
enum class EMistJoinQueueError : uint8 {
	LoadFailed = 0,
	InvalidIdentifier = 1,
	EMistJoinQueueError_MAX = 2
};

// Enum Mist.EMistJoinQueueStatus
enum class EMistJoinQueueStatus : uint8 {
	Unknown = 0,
	Queued = 1,
	Connect = 2,
	Canceling = 3,
	Canceled = 4,
	Error = 5,
	EMistJoinQueueStatus_MAX = 6
};

// Enum Mist.EMistJoinQueueActionType
enum class EMistJoinQueueActionType : uint8 {
	None = 0,
	Cancel = 1,
	Evade = 2,
	EMistJoinQueueActionType_MAX = 3
};

// Enum Mist.EMistJoinRealmRegionWidgetState
enum class EMistJoinRealmRegionWidgetState : uint8 {
	Default = 0,
	Active = 1,
	Inactive = 2,
	EMistJoinRealmRegionWidgetState_MAX = 3
};

// Enum Mist.EMistCraneState
enum class EMistCraneState : uint8 {
	Unloaded = 0,
	Loaded = 1,
	EMistCraneState_MAX = 2
};

// Enum Mist.ECombatDelay
enum class ECombatDelay : uint8 {
	QuickAttackPostBlockTime = 0,
	MediumAttackPostBlockTime = 1,
	HeavyAttackPostBlockTime = 2,
	QuickAttackPostHitTime = 3,
	MediumAttackPostHitTime = 4,
	HeavyAttackPostHitTime = 5,
	BashPostHitTime = 6,
	DefendPostQuickAttackBlockTime = 7,
	DefendPostMediumAttackBlockTime = 8,
	DefendPostHeavyAttackBlockTime = 9,
	DefendPostQuickAttackHitTime = 10,
	DefendPostMediumAttackHitTime = 11,
	DefendPostHeavyAttackHitTime = 12,
	DefendPostBashHitTime = 13,
	DodgeDelay = 14,
	ECombatDelay_MAX = 15
};

// Enum Mist.ECombatDodgeInput
enum class ECombatDodgeInput : uint8 {
	None = 0,
	Forward = 1,
	Right = 2,
	Left = 3,
	Back = 4,
	ECombatDodgeInput_MAX = 5
};

// Enum Mist.EAttackRecoveryType
enum class EAttackRecoveryType : uint8 {
	QuickAttack = 0,
	MediumAttack = 1,
	HeavyAttack = 2,
	SprintAttack = 3,
	EAttackRecoveryType_MAX = 4
};

// Enum Mist.EThrowingWeaponType
enum class EThrowingWeaponType : uint8 {
	Javelin = 0,
	Net = 1,
	EThrowingWeaponType_MAX = 2
};

// Enum Mist.ECombatAnimationType
enum class ECombatAnimationType : uint8 {
	Unarmed = 0,
	Saber = 1,
	Shield = 2,
	Staff = 3,
	TwoHand = 4,
	HeavyTwoHand = 5,
	Throwing = 6,
	Max = 7
};

// Enum Mist.EMistMessageType
enum class EMistMessageType : uint8 {
	MapChat = 0,
	ClanChat = 1,
	Announcement = 2,
	Kill = 3,
	GotItem = 4,
	GotExperience = 5,
	GotStatPoints = 6,
	MoneyChanged = 7,
	IntermediateCurrencyChanged = 8,
	ReachedLevel = 9,
	Information = 10,
	ClaimMurderReport = 11,
	CombatLog = 12,
	MapChatShadowMuted = 13,
	WalkerLogOut = 14,
	KillBoss = 15,
	EMistMessageType_MAX = 16
};

// Enum Mist.EMistMessageLogChatType
enum class EMistMessageLogChatType : uint8 {
	Automatic = 0,
	Map = 1,
	Clan = 2,
	EMistMessageLogChatType_MAX = 3
};

// Enum Mist.EMistMessageLogCategory
enum class EMistMessageLogCategory : uint8 {
	Custom = 0,
	MapChat = 1,
	ClanChat = 2,
	Combat = 3,
	Event = 4,
	LogCategorySize = 5,
	EMistMessageLogCategory_MAX = 6
};

// Enum Mist.EMistNestState
enum class EMistNestState : uint8 {
	Alive = 0,
	Burning = 1,
	Dead = 2,
	EMistNestState_MAX = 3
};

// Enum Mist.EMistMusicSyncEvent
enum class EMistMusicSyncEvent : uint8 {
	Blank = 0,
	AlmostLandAHit = 1,
	AlmostGotHit = 2,
	ReceivedHit = 3,
	LandHit = 4,
	BlockHit = 5,
	GotBlocked = 6,
	Targeted = 7,
	WalkerDamaged = 8,
	WalkerNetted = 9,
	WalkerUnetted = 10,
	MemberDowned = 11,
	CauserActivated = 12,
	CauserKilled = 13,
	CauserDowned = 14,
	CauserOutside = 15,
	NoMoreCausers = 16,
	PlayerHealthDropped = 17,
	PlayerDowned = 18,
	PlayerDead = 19,
	PlayerRevived = 20,
	PlayerLoggedOut = 21,
	PlayerHitByProjectile = 22,
	ProjectileFlyBy = 23,
	PlayerProjectileHitCharacter = 24,
	PlayerProjectileFlyByPlayer = 25,
	NurrTargetedPlayer = 26,
	NurrTargetedPlayerWalker = 27,
	OkkamTargetedPlayer = 28,
	OkkamTargetedWalker = 29,
	KillinTargetedPlayer = 30,
	KillinTargetedPlayerWalker = 31,
	None = 32,
	Count = 33,
	EMistMusicSyncEvent_MAX = 34
};

// Enum Mist.EMistNotificationItemType
enum class EMistNotificationItemType : uint8 {
	Error = 0,
	EMistNotificationItemType_MAX = 1
};

// Enum Mist.ETravelPermissionState
enum class ETravelPermissionState : uint8 {
	Allowed = 0,
	TargetNotOasis = 1,
	TargetTooEasy = 2,
	TargetTooDifficult = 3,
	CannotSwitchEasy = 4,
	TargetOffline = 5,
	NotACaptain = 6,
	NotEnoughWater = 7,
	TooMuchSand = 8,
	ETravelPermissionState_MAX = 9
};

// Enum Mist.EMistOffMapLobbyWalkerEmbarkNotAllowedReason
enum class EMistOffMapLobbyWalkerEmbarkNotAllowedReason : uint8 {
	None = 0,
	NoPermission = 1,
	RankTooLow = 2,
	EMistOffMapLobbyWalkerEmbarkNotAllowedReason_MAX = 3
};

// Enum Mist.EMistOffMapLobbyAction
enum class EMistOffMapLobbyAction : uint8 {
	Query = 0,
	Embark = 1,
	Disembark = 2,
	Recruit = 3,
	Dismiss = 4,
	SetTarget = 5,
	ClearTarget = 6,
	Travel = 7,
	Respawn = 8,
	Transfer = 9,
	EMistOffMapLobbyAction_MAX = 10
};

// Enum Mist.EMistOffMapLobbyPlayerState
enum class EMistOffMapLobbyPlayerState : uint8 {
	Online = 0,
	Standby = 1,
	Offline = 2,
	EMistOffMapLobbyPlayerState_MAX = 3
};

// Enum Mist.EMistPersistencePostLoadStage
enum class EMistPersistencePostLoadStage : uint8 {
	GenericFirstPass = 0,
	RegisterStructureParts = 1,
	CleanStructurePartConnections = 2,
	UpdateGimbalRotations = 3,
	SetPlayerStates = 4,
	UpdatePlayerStats = 5,
	SetCharacterDownedState = 6,
	SetCharacterThirst = 7,
	SetCharacterHealth = 8,
	SetCharacterMannedComponent = 9,
	SetPlayerCarriedPlayer = 10,
	SetTradingStationUniqueId = 11,
	RecalculateWeight = 12,
	InitializeTradeStationAi = 13,
	InitializeClaim = 14,
	InitializeClaimManager = 15,
	InitializeTradeStationClaim = 16,
	RestoreTethers = 17,
	ResumeCraftingStations = 18,
	BroadcastContainerUpdates = 19,
	EvaluateWalkerModules = 20,
	StartQuests = 21,
	GenericLastPass = 22,
	COUNT = 23,
	EMistPersistencePostLoadStage_MAX = 24
};

// Enum Mist.EMistPhotoStageScalingMode
enum class EMistPhotoStageScalingMode : uint8 {
	Horizontal = 0,
	Vertical = 1,
	Auto = 2,
	EMistPhotoStageScalingMode_MAX = 3
};

// Enum Mist.EPhysicalMobLimbState
enum class EPhysicalMobLimbState : uint8 {
	Planted = 0,
	Lifted = 1,
	EPhysicalMobLimbState_MAX = 2
};

// Enum Mist.EPhysicalMobLimb
enum class EPhysicalMobLimb : uint8 {
	FrontRight = 0,
	FrontLeft = 1,
	BackLeft = 2,
	BackRight = 3,
	EPhysicalMobLimb_MAX = 4
};

// Enum Mist.EPhysicalMobMovementMode
enum class EPhysicalMobMovementMode : uint8 {
	Normal = 0,
	Strafing = 1,
	EPhysicalMobMovementMode_MAX = 2
};

// Enum Mist.EMistAiTargetType
enum class EMistAiTargetType : uint8 {
	Walker = 0,
	Mob = 1,
	Player = 2,
	StructurePart = 3,
	EMistAiTargetType_MAX = 4
};

// Enum Mist.EMobBehaviourStateFighting
enum class EMobBehaviourStateFighting : uint8 {
	Thinking = 0,
	AdvancingToTarget = 1,
	TramplingTarget = 2,
	HittingTarget = 3,
	RammingTarget = 4,
	ReversingFromTarget = 5,
	EMobBehaviourStateFighting_MAX = 6
};

// Enum Mist.EMobBehaviourStateRoaming
enum class EMobBehaviourStateRoaming : uint8 {
	Idle = 0,
	Walking = 1,
	EMobBehaviourStateRoaming_MAX = 2
};

// Enum Mist.EMobBehaviourState
enum class EMobBehaviourState : uint8 {
	Roaming = 0,
	Attacking = 1,
	Fleeing = 2,
	EMobBehaviourState_MAX = 3
};

// Enum Mist.EMobMovementMode
enum class EMobMovementMode : uint8 {
	Walking = 0,
	Flying = 1,
	Custom = 2,
	COUNT = 3,
	EMobMovementMode_MAX = 4
};

// Enum Mist.EPlaceableCategoryStyle
enum class EPlaceableCategoryStyle : uint8 {
	Default = 0,
	Selected = 1,
	Disabled = 2,
	EPlaceableCategoryStyle_MAX = 3
};

// Enum Mist.EMistPlayerAnimationState
enum class EMistPlayerAnimationState : uint8 {
	Default = 0,
	LoggedOut = 1,
	KnockedOut = 2,
	PlayingFullbodyMontage = 3,
	UsingSlingshot = 4,
	EMistPlayerAnimationState_MAX = 5
};

// Enum Mist.EHACK_AnimationAssetType
enum class EHACK_AnimationAssetType : uint8 {
	Sequence = 0,
	BlendSpace1D = 1,
	BlendSpace = 2,
	EHACK_MAX = 3
};

// Enum Mist.EMistPlayerConnectionStatus
enum class EMistPlayerConnectionStatus : uint8 {
	Online = 0,
	Away = 1,
	Offline = 2,
	EMistPlayerConnectionStatus_MAX = 3
};

// Enum Mist.EMistPlayerThrowingState
enum class EMistPlayerThrowingState : uint8 {
	Idle = 0,
	Equipping = 1,
	ReadyForAiming = 2,
	Aiming = 3,
	Throwing = 4,
	Canceled = 5,
	Unequipping = 6,
	Count = 7,
	EMistPlayerThrowingState_MAX = 8
};

// Enum Mist.EMistRespawnableObjectType
enum class EMistRespawnableObjectType : uint8 {
	Migrating = 0,
	AlwaysSpawn = 1,
	EMistRespawnableObjectType_MAX = 2
};

// Enum Mist.EMistProjectorType
enum class EMistProjectorType : uint8 {
	Elements = 0,
	Animals = 1,
	Celestial = 2,
	EMistProjectorType_MAX = 3
};

// Enum Mist.EMistWalkerMigrationPreferenceAction
enum class EMistWalkerMigrationPreferenceAction : uint8 {
	None = 0,
	SetPreference = 1,
	DeletePreference = 2,
	EMistWalkerMigrationPreferenceAction_MAX = 3
};

// Enum Mist.EMistRealmMapTileSelectionState
enum class EMistRealmMapTileSelectionState : uint8 {
	None = 0,
	Hovered = 1,
	Selected = 2,
	Targeted = 3,
	EMistRealmMapTileSelectionState_MAX = 4
};

// Enum Mist.EMistRealmMapTileState
enum class EMistRealmMapTileState : uint8 {
	None = 0,
	Valid = 1,
	Invalid = 2,
	EMistRealmMapTileState_MAX = 3
};

// Enum Mist.EMistRepeaterAnimGunState
enum class EMistRepeaterAnimGunState : uint8 {
	Idle = 0,
	Turning = 1,
	Shooting = 2,
	TurningAndShooting = 3,
	EMistRepeaterAnimGunState_MAX = 4
};

// Enum Mist.EMistReplicationGraphNodeType
enum class EMistReplicationGraphNodeType : uint8 {
	AlwaysRelevant = 0,
	OwnerRelevant = 1,
	Static = 2,
	Dynamic = 3,
	Dormancy = 4,
	EMistReplicationGraphNodeType_MAX = 5
};

// Enum Mist.ERoamingMobBehavior
enum class ERoamingMobBehavior : uint8 {
	Patrolling = 0,
	AttackingOnGround = 1,
	AttackingPlayer = 2,
	AttackingWalker = 3,
	AttackingGrappled = 4,
	NettingSmallWalker = 5,
	Following = 6,
	RunningAway = 7,
	ERoamingMobBehavior_MAX = 8
};

// Enum Mist.ERunnerMobBehavior
enum class ERunnerMobBehavior : uint8 {
	Idle = 0,
	Patrolling = 1,
	Hunting = 2,
	RunAway = 3,
	ERunnerMobBehavior_MAX = 4
};

// Enum Mist.EMistShopItemType
enum class EMistShopItemType : uint8 {
	Unknown = 0,
	Durable = 1,
	Consumable = 2,
	EMistShopItemType_MAX = 3
};

// Enum Mist.EMistSnapRotationAxis
enum class EMistSnapRotationAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	EMistSnapRotationAxis_MAX = 3
};

// Enum Mist.ESparePartsSlot
enum class ESparePartsSlot : uint8 {
	Legs = 0,
	Wings = 1,
	Armor = 2,
	Gears = 3,
	Cargo = 4,
	Hatch = 5,
	Water = 6,
	Torque = 7,
	Module = 8,
	SafeLogout = 9,
	PartPacking = 10,
	MAX = 11
};

// Enum Mist.ESparePartsTier
enum class ESparePartsTier : uint8 {
	Wood = 0,
	Bone = 1,
	Clay = 2,
	Iron = 3,
	MAX = 4
};

// Enum Mist.ESparePartsAttribute
enum class ESparePartsAttribute : uint8 {
	Acceleration = 0,
	Braking = 1,
	TopSpeed = 2,
	RotationSpeed = 3,
	TorqueDuration = 4,
	HealthPoints = 5,
	ConditionsResistance = 6,
	Load = 7,
	HatchSlots = 8,
	WaterCapacity = 9,
	TorqueCapacity = 10,
	ModuleEnable = 11,
	PackingSlots = 12,
	PackingNumberOfParts = 13,
	SafeLogoutTimer = 14,
	Weight = 15,
	MAX = 16
};

// Enum Mist.EMistStatusEffectStackingMode
enum class EMistStatusEffectStackingMode : uint8 {
	Stack = 0,
	Refresh = 1,
	Extend = 2,
	Unique = 3,
	EMistStatusEffectStackingMode_MAX = 4
};

// Enum Mist.ESunsetMatchStage
enum class ESunsetMatchStage : uint8 {
	WaitingForPlayers = 0,
	CountdownToStart = 1,
	InProgress = 2,
	Ended = 3,
	ESunsetMatchStage_MAX = 4
};

// Enum Mist.EMistTextRenderBillboardMode
enum class EMistTextRenderBillboardMode : uint8 {
	None = 0,
	PlayerCamera = 1,
	PlayerCamera2D = 2,
	EMistTextRenderBillboardMode_MAX = 3
};

// Enum Mist.ETradeProtectionState
enum class ETradeProtectionState : uint8 {
	Unprotected = 0,
	DoesntDealDamage = 1,
	DoesntDealNorTakeDamage = 2,
	PlayerOutside = 3,
	ETradeProtectionState_MAX = 4
};

// Enum Mist.EArenaDuelResult
enum class EArenaDuelResult : uint8 {
	Default = 0,
	DoubleKnockOut = 1,
	LeftArena = 2,
	EArenaDuelResult_MAX = 3
};

// Enum Mist.EMistTradeStationActionResponseState
enum class EMistTradeStationActionResponseState : uint8 {
	AddedOrder = 0,
	UpdatedOrder = 1,
	DeletedOrder = 2,
	ExecutedOrder = 3,
	TookFromVault = 4,
	OrderNotFound = 5,
	NotEnoughMoney = 6,
	NotEnoughItems = 7,
	OrderChanged = 8,
	OrderQuantityChanged = 9,
	OrderPriceChanged = 10,
	InvalidOrder = 11,
	EMistTradeStationActionResponseState_MAX = 12
};

// Enum Mist.EMistTradeStationDetailsState
enum class EMistTradeStationDetailsState : uint8 {
	SelectCreateAction = 0,
	CreateBuyOrder = 1,
	CreateSellOrder = 2,
	EMistTradeStationDetailsState_MAX = 3
};

// Enum Mist.EMistTradeStationMerchantFilter
enum class EMistTradeStationMerchantFilter : uint8 {
	Any = 0,
	WithPlayerOrders = 1,
	OnlyPlayerOrders = 2,
	EMistTradeStationMerchantFilter_MAX = 3
};

// Enum Mist.EMistTradeStationOrderTypeFilter
enum class EMistTradeStationOrderTypeFilter : uint8 {
	BuyOrders = 0,
	SellOrders = 1,
	EMistTradeStationOrderTypeFilter_MAX = 2
};

// Enum Mist.EMistTradeStationCategoryGroupFilterState
enum class EMistTradeStationCategoryGroupFilterState : uint8 {
	All = 0,
	Partial = 1,
	None = 2,
	EMistTradeStationCategoryGroupFilterState_MAX = 3
};

// Enum Mist.ETaskState
enum class ETaskState : uint8 {
	Optional = 0,
	Obligatory = 1,
	ETaskState_MAX = 2
};

// Enum Mist.EMistDialogResult
enum class EMistDialogResult : uint8 {
	None = 0,
	OK = 1,
	Cancel = 2,
	Yes = 3,
	No = 4,
	EMistDialogResult_MAX = 5
};

// Enum Mist.EMistInputMode
enum class EMistInputMode : uint8 {
	None = 0,
	GameOnly = 1,
	GameAndUI = 2,
	UIOnly = 3,
	EMistInputMode_MAX = 4
};

// Enum Mist.ETabScrollBehaviour
enum class ETabScrollBehaviour : uint8 {
	ResetToStart = 0,
	ResetToEnd = 1,
	PreserveIndependentScroll = 2,
	PreserveScrollBetweenTabs = 3,
	ETabScrollBehaviour_MAX = 4
};

// Enum Mist.EMistTechTreeTier
enum class EMistTechTreeTier : int32 {
	Tier1 = 10,
	Tier2 = 20,
	Tier3 = 30,
	Tier4 = 40,
	Tier5 = 50,
	Tier6 = 2147483647,
	EMistTechTreeTier_MAX = 2147483647
};

// Enum Mist.EMistUnlockableTreeCategory
enum class EMistUnlockableTreeCategory : uint8 {
	Vitamins = 0,
	Equipment = 1,
	Crafting = 2,
	Construction = 3,
	Walkers = 4,
	MAX = 5
};

// Enum Mist.EMistCameraPosition
enum class EMistCameraPosition : uint8 {
	Center = 0,
	Right = 1,
	Left = 2,
	EMistCameraPosition_MAX = 3
};

// Enum Mist.ETutorialVisibility
enum class ETutorialVisibility : uint8 {
	Hidden = 0,
	Show = 1,
	ShowFull = 2,
	ETutorialVisibility_MAX = 3
};

// Enum Mist.EMistVerifyRealmPasswordDialogState
enum class EMistVerifyRealmPasswordDialogState : uint8 {
	None = 0,
	Invalid = 1,
	Valid = 2,
	Checking = 3,
	EMistVerifyRealmPasswordDialogState_MAX = 4
};

// Enum Mist.EVitaminUserClass
enum class EVitaminUserClass : uint8 {
	Basic = 0,
	Harvester = 1,
	Warrior = 2,
	EVitaminUserClass_MAX = 3
};

// Enum Mist.EMistWalkerPartAttachmentSide
enum class EMistWalkerPartAttachmentSide : uint8 {
	Left = 0,
	Right = 1,
	EMistWalkerPartAttachmentSide_MAX = 2
};

// Enum Mist.EMistWalkerPartAttachmentType
enum class EMistWalkerPartAttachmentType : uint8 {
	Legs = 0,
	Wings = 1,
	ExoskeletonWeapon = 2,
	EMistWalkerPartAttachmentType_MAX = 3
};

// Enum Mist.EMistWingsuitState
enum class EMistWingsuitState : uint8 {
	Closed = 0,
	Open = 1,
	EMistWingsuitState_MAX = 2
};

// Enum Mist.EMistWorldTravelError
enum class EMistWorldTravelError : uint8 {
	None = 0,
	Custom = 1,
	CaptainInvalid = 2,
	CaptainRequired = 3,
	CaptainOutsideZone = 4,
	CaptainNoPermission = 5,
	WalkerRequired = 6,
	WalkerDamagedRecently = 7,
	WalkerNotFitForTravel = 8,
	WalkerNotOwned = 9,
	OperatingExoskeleton = 10,
	PlayerDamagedRecently = 11,
	MemberInvalid = 12,
	MemberNotAlive = 13,
	MemberDifferentClan = 14,
	MemberExoskeleton = 15,
	SafeLogOutCaptainLeft = 16,
	SafeLogOutWalkerMoved = 17,
	SafeLogOutWalkerDamaged = 18,
	SafeLogOutMembersChanged = 19,
	SafeLogOutMemberHurt = 20,
	ChangeRespawnTileNotDead = 21,
	ChangeRespawnTileInvalidTile = 22,
	ChangeRespawnTileNotEnoughMoney = 23,
	EMistWorldTravelError_MAX = 24
};

// Enum Mist.EMistWorldTravelZoneState
enum class EMistWorldTravelZoneState : uint8 {
	Outside = 0,
	Inside = 1,
	Initiate = 2,
	Execute = 3,
	EMistWorldTravelZoneState_MAX = 4
};

// Enum Mist.EMistWorldTravelOperationState
enum class EMistWorldTravelOperationState : uint8 {
	None = 0,
	Request = 1,
	Failed = 2,
	InProgress = 3,
	Process = 4,
	Recover = 5,
	EMistWorldTravelOperationState_MAX = 6
};

// Enum Mist.EMistWorldTravelOperationType
enum class EMistWorldTravelOperationType : uint8 {
	None = 0,
	Park = 1,
	SafeLogOut = 2,
	ChangeRespawnTile = 3,
	Arrival = 4,
	EMistWorldTravelOperationType_MAX = 5
};

// Enum Mist.EWindType
enum class EWindType : uint8 {
	None = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EWindType_MAX = 4
};

// Enum Mist.EMouthStatus
enum class EMouthStatus : uint8 {
	Closed = 0,
	OpenCharge = 1,
	OpenResurface = 2,
	OpenSlap = 3,
	ClosedCharge = 4,
	EMouthStatus_MAX = 5
};

// Enum Mist.ESurfaceStatus
enum class ESurfaceStatus : uint8 {
	Surface = 0,
	AboveSurface = 1,
	BelowSurface = 2,
	ESurfaceStatus_MAX = 3
};

// Enum Mist.EWormMovement
enum class EWormMovement : uint8 {
	Steer = 0,
	Dive = 1,
	Resurface = 2,
	RecoverStamina = 3,
	Sprint = 4,
	VerticalSlap = 5,
	HorizontalSlap = 6,
	EWormMovement_MAX = 7
};

// Enum Mist.EWormAgression
enum class EWormAgression : uint8 {
	Roaming = 0,
	Attacking = 1,
	Fleeing = 2,
	EWormAgression_MAX = 3
};

// Enum Mist.EMistWormMovementState
enum class EMistWormMovementState : uint8 {
	OnSurface = 0,
	Diving = 1,
	Resurfacing = 2,
	Underground = 3,
	EMistWormMovementState_MAX = 4
};

// Enum Mist.EWalkerDifferential
enum class EWalkerDifferential : uint8 {
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	EWalkerDifferential_MAX = 6
};

// Enum Mist.EWalkerWheelSweepType
enum class EWalkerWheelSweepType : uint8 {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWalkerWheelSweepType_MAX = 3
};

// ScriptStruct Mist.MistAchievementStat
// Size: 0x28 (Inherited: 0x00)
struct FMistAchievementStat {
	struct FString ID; // 0x00(0x10)
	int32_t MaxValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FMistAchievementStatUnlockable> Unlockables; // 0x18(0x10)
};

// ScriptStruct Mist.MistAchievementStatUnlockable
// Size: 0x0c (Inherited: 0x00)
struct FMistAchievementStatUnlockable {
	struct FName UnlockAchievementName; // 0x00(0x08)
	int32_t UnlockAmount; // 0x08(0x04)
};

// ScriptStruct Mist.MistAchievement
// Size: 0x10 (Inherited: 0x00)
struct FMistAchievement {
	struct FString ID; // 0x00(0x10)
};

// ScriptStruct Mist.MeleeHitInfo
// Size: 0xe8 (Inherited: 0x00)
struct FMeleeHitInfo {
	char pad_0[0x4]; // 0x00(0x04)
	struct FHitResult HitResult; // 0x04(0x88)
	bool bBlocked; // 0x8c(0x01)
	char pad_8D[0x1]; // 0x8d(0x01)
	bool bChamberBlock; // 0x8e(0x01)
	bool bGlance; // 0x8f(0x01)
	struct AActor* SourceActor; // 0x90(0x08)
	enum class ECombatAction AttackersAction; // 0x98(0x01)
	enum class ECombatAction DefendersAction; // 0x99(0x01)
	enum class ECombatDirection AttackersDirection; // 0x9a(0x01)
	enum class ECombatDirection DefendersDirection; // 0x9b(0x01)
	float RawDamage; // 0x9c(0x04)
	float ArmorAbsorbedDamage; // 0xa0(0x04)
	float ActualInflictedDamage; // 0xa4(0x04)
	float Damage; // 0xa8(0x04)
	float TimeSweetspot; // 0xac(0x04)
	float PowerAlpha; // 0xb0(0x04)
	float WeaponImpactValue; // 0xb4(0x04)
	float SpeedBonus; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UPhysicalMaterial* WeaponMaterial; // 0xc0(0x08)
	struct UPhysicalMaterial* TargetMaterial; // 0xc8(0x08)
	struct UDamageType* DamageType; // 0xd0(0x08)
	bool bRepairHit; // 0xd8(0x01)
	bool bKnockOutHit; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	struct FVector WeaponForward; // 0xdc(0x0c)
};

// ScriptStruct Mist.MistInteraction
// Size: 0x18 (Inherited: 0x00)
struct FMistInteraction {
	struct AMistPlayer* Player; // 0x00(0x08)
	struct UObject* Target; // 0x08(0x08)
	int32_t InstanceId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Mist.MistItem
// Size: 0x18 (Inherited: 0x00)
struct FMistItem {
	struct UMistItemTemplate* Template; // 0x00(0x08)
	char pad_8[0x02]; // 0x08(0x02)
	uint8 Quality; // 0x0A(0x01)
	char pad_B[0x0D]; // 0x0B(0x0D)
};

// ScriptStruct Mist.MistAnimEventRequest
// Size: 0x70 (Inherited: 0x00)
struct FMistAnimEventRequest {
	char pad_0[0x40]; // 0x00(0x40)
	struct FVector AdditionalInfo1; // 0x40(0x0c)
	struct FVector AdditionalInfo2; // 0x4c(0x0c)
	enum class ECMM_EventTag Tag; // 0x58(0x01)
	enum class ECMM_EventType Type; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float EventStartTime; // 0x5c(0x04)
	float EventDuration; // 0x60(0x04)
	bool bForceOverride; // 0x64(0x01)
	char pad_65[0x7]; // 0x65(0x07)
	int8_t Priority; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Mist.MistCharacterAttachInfo
// Size: 0x28 (Inherited: 0x00)
struct FMistCharacterAttachInfo {
	bool bAttached; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USceneComponent* Component; // 0x08(0x08)
	struct AActor* HACK_AttachActor; // 0x10(0x08)
	struct FName SocketName; // 0x18(0x08)
	bool bSnap; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Mist.MistInteractionQuery
// Size: 0x68 (Inherited: 0x00)
struct FMistInteractionQuery {
	bool bCanUse; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName UseTag; // 0x04(0x08)
	struct FName UniqueTag; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText UseText; // 0x18(0x18)
	struct FText CantUseReason; // 0x30(0x18)
	struct FBox UseBox; // 0x48(0x1c)
	bool bAlwaysAlone; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct Mist.MistInteractableProperties
// Size: 0x14 (Inherited: 0x00)
struct FMistInteractableProperties {
	float Duration; // 0x00(0x04)
	float InteractDistance; // 0x04(0x04)
	float BreakDistance; // 0x08(0x04)
	int32_t Priority; // 0x0c(0x04)
	enum class EMistInteractionNetworkMode NetworkMode; // 0x10(0x01)
	enum class EMistInteractionAnimationType InteractAnimation; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct Mist.MistComponentReference
// Size: 0x28 (Inherited: 0x00)
struct FMistComponentReference {
	struct AActor* Actor; // 0x00(0x08)
	struct FName ComponentName; // 0x08(0x08)
	struct FName SocketName; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Mist.MannedControlPostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FMannedControlPostPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Mist.MistProjectileItem
// Size: 0x18 (Inherited: 0x00)
struct FMistProjectileItem {
	struct UMistProjectileItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.MistContainerSlot
// Size: 0x20 (Inherited: 0x00)
struct FMistContainerSlot {
	struct FMistItem Item; // 0x00(0x18)
	int32_t Count; // 0x18(0x04)
	bool bDirty; // 0x1c(0x01)
	bool bNewEntry; // 0x1d(0x01)
	uint16 pad_1e; // 0x1e(0x02)
};

// ScriptStruct Mist.MistContainerSlotInitialItem
// Size: 0x10 (Inherited: 0x00)
struct FMistContainerSlotInitialItem {
	struct UMistItemTemplate* Template; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.MistDoubleBarreledGunBarrel
// Size: 0x30 (Inherited: 0x00)
struct FMistDoubleBarreledGunBarrel {
	enum class EMistDoubleBarreledGunBarrelState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMistProjectileItem ProjectileItem; // 0x08(0x18)
	int32_t ProjectileCount; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct Mist.MistDoubleBarreledGunNestedComponentRefs
// Size: 0x10 (Inherited: 0x00)
struct FMistDoubleBarreledGunNestedComponentRefs {
	struct TArray<struct FMistComponentReference> Refs; // 0x00(0x10)
};

// ScriptStruct Mist.MistToolTier
// Size: 0x08 (Inherited: 0x00)
struct FMistToolTier {
	enum class EEquipmentTool ToolType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Tier; // 0x04(0x04)
};

// ScriptStruct Mist.MistInvalidNameData
// Size: 0x20 (Inherited: 0x00)
struct FMistInvalidNameData {
	enum class EMistInvalidNameError Error; // 0x00(0x01)
	enum class EMistInvalidNameReason NameReason; // 0x01(0x01)
	enum class EMistInvalidNameCharacterReason CharacterReason; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FString Value; // 0x08(0x10)
	int32_t Length; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.MistSnapPointTemplateDesc
// Size: 0x10 (Inherited: 0x00)
struct FMistSnapPointTemplateDesc {
	struct FName SocketName; // 0x00(0x08)
	struct UMistSnapPointTemplate* SnapPointClass; // 0x08(0x08)
};

// ScriptStruct Mist.MistPlacementSnapState
// Size: 0x70 (Inherited: 0x00)
struct FMistPlacementSnapState {
	bool bSnapped; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMistSnapPointTemplateDesc SnappedToPoint; // 0x08(0x10)
	struct FMistSnapPointTemplateDesc SnappedPoint; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform SocketTransform; // 0x30(0x30)
	struct FRotator Rotation; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Mist.MistPlacementState
// Size: 0x50 (Inherited: 0x00)
struct FMistPlacementState {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	int32_t ItemIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator Rotation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Mist.MistStructurePartConnectionNode
// Size: 0x10 (Inherited: 0x00)
struct FMistStructurePartConnectionNode {
	struct AMistBaseStructurePart* Actor; // 0x00(0x08)
	int32_t ConnectionId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.ConnectedNodesSet
// Size: 0x50 (Inherited: 0x00)
struct FConnectedNodesSet {
	struct TSet<struct FMistStructurePartConnectionNode> Set; // 0x00(0x50)
};

// ScriptStruct Mist.MistExoskeletonPilotSuitSettings
// Size: 0x10 (Inherited: 0x00)
struct FMistExoskeletonPilotSuitSettings {
	struct USkeletalMesh* SuitMesh; // 0x00(0x08)
	struct UTexture2D* BodyMask; // 0x08(0x08)
};

// ScriptStruct Mist.MobMovementInput
// Size: 0x05 (Inherited: 0x00)
struct FMobMovementInput {
	bool bTurn; // 0x00(0x01)
	bool bTurnRight; // 0x01(0x01)
	bool bMove; // 0x02(0x01)
	bool bStrafe; // 0x03(0x01)
	bool bBackward; // 0x04(0x01)
};

// ScriptStruct Mist.MobInput
// Size: 0x10 (Inherited: 0x00)
struct FMobInput {
	struct FVector2D FrontLegForceScalar; // 0x00(0x08)
	struct FVector2D BackLegForceScalar; // 0x08(0x08)
};

// ScriptStruct Mist.MistInventoryOperationTarget
// Size: 0x20 (Inherited: 0x00)
struct FMistInventoryOperationTarget {
	enum class EMistInventoryOperationTargetType Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AActor* Actor; // 0x08(0x08)
	struct UMistContainerComponent* Container; // 0x10(0x08)
	int32_t SlotIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.MistStatValues
// Size: 0x20 (Inherited: 0x00)
struct FMistStatValues {
	float MaxHealth; // 0x00(0x04)
	float MaxStamina; // 0x04(0x04)
	float DamageModifierBeforeArmor; // 0x08(0x04)
	float DamageModifierAfterArmor; // 0x0c(0x04)
	float MaxSpeedModifier; // 0x10(0x04)
	float AccelerationModifier; // 0x14(0x04)
	float VitaminDurationFactor; // 0x18(0x04)
	float VitaminPower; // 0x1c(0x04)
};

// ScriptStruct Mist.MistGrapplingHookNetState
// Size: 0x60 (Inherited: 0x00)
struct FMistGrapplingHookNetState {
	enum class EMistGrapplingHookState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AMistGrapplingHookProjectile* hook; // 0x08(0x08)
	struct USceneComponent* AttachComponent; // 0x10(0x08)
	struct AActor* HACK_AttachActor; // 0x18(0x08)
	int32_t AttachComponentInstanceIndex; // 0x20(0x04)
	struct FName AttachBone; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform AttachTransform; // 0x30(0x30)
};

// ScriptStruct Mist.MistSoundBasicParams
// Size: 0x28 (Inherited: 0x00)
struct FMistSoundBasicParams {
	struct USoundBase* Sound; // 0x00(0x08)
	float Volume; // 0x08(0x04)
	float Pitch; // 0x0c(0x04)
	float StartTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundAttenuation* Attenuation; // 0x18(0x08)
	struct USoundConcurrency* Concurrency; // 0x20(0x08)
};

// ScriptStruct Mist.GroundThirstModifier
// Size: 0x10 (Inherited: 0x00)
struct FGroundThirstModifier {
	struct UVirtualLandscapeLayer* LandscapeLayer; // 0x00(0x08)
	float ThirstModifier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.CombatAnimTrack
// Size: 0x38 (Inherited: 0x00)
struct FCombatAnimTrack {
	int32_t ClientActionId; // 0x00(0x04)
	int32_t ServerActionId; // 0x04(0x04)
	int32_t HACK_StateIndex; // 0x08(0x04)
	enum class ECombatAction Action; // 0x0c(0x01)
	enum class ECombatDirection Direction; // 0x0d(0x01)
	enum class ECombatAdditionalTrackInfo AdditionalInfo; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct UAnimationAsset* AnimationAsset; // 0x10(0x08)
	struct UAnimationAsset* TransitionAnim; // 0x18(0x08)
	enum class EMeleeAttackObject AttackObject; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float WeaponSpeed; // 0x24(0x04)
	float Param1; // 0x28(0x04)
	float StartingPosition; // 0x2c(0x04)
	float PlayRate; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Mist.FoliageHitEntry
// Size: 0x10 (Inherited: 0x00)
struct FFoliageHitEntry {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	int32_t InstanceId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.CharacterDisplacementParameters
// Size: 0x30 (Inherited: 0x00)
struct FCharacterDisplacementParameters {
	float DisplacementDuration; // 0x00(0x04)
	float BlendInOutRatio; // 0x04(0x04)
	float AdditiveSpeed; // 0x08(0x04)
	enum class EAlphaBlendOption SpeedBlendOption; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct UCurveFloat* SpeedCustomCurve; // 0x10(0x08)
	float MaxInputAcceleration; // 0x18(0x04)
	enum class EAlphaBlendOption AccelerationBlendOption; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct UCurveFloat* AccelerationCustomCurve; // 0x20(0x08)
	float RotationRate; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Mist.MistWeaponDamage
// Size: 0x10 (Inherited: 0x00)
struct FMistWeaponDamage {
	float Damage; // 0x00(0x04)
	float Penetration; // 0x04(0x04)
	float EffectivenessVsSoak; // 0x08(0x04)
	float EffectivenessVsReduce; // 0x0c(0x04)
};

// ScriptStruct Mist.PostAttackRecoveryParams
// Size: 0x0c (Inherited: 0x00)
struct FPostAttackRecoveryParams {
	float RecoveryDuration; // 0x00(0x04)
	float SpeedModifier; // 0x04(0x04)
	float AccelModifier; // 0x08(0x04)
};

// ScriptStruct Mist.PostAttackRecoveryConfig
// Size: 0x30 (Inherited: 0x00)
struct FPostAttackRecoveryConfig {
	struct FPostAttackRecoveryParams QuickAttackRecovery; // 0x00(0x0c)
	struct FPostAttackRecoveryParams MediumAttackRecovery; // 0x0c(0x0c)
	struct FPostAttackRecoveryParams HeavyAttackRecovery; // 0x18(0x0c)
	struct FPostAttackRecoveryParams SprintAttackRecovery; // 0x24(0x0c)
};

// ScriptStruct Mist.MistWeaponItem
// Size: 0x18 (Inherited: 0x00)
struct FMistWeaponItem {
	struct UMistWeaponItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.CombatDelays
// Size: 0x10 (Inherited: 0x00)
struct FCombatDelays {
	float AttackDelay; // 0x00(0x04)
	float BlockDelay; // 0x04(0x04)
	float DodgeDelay; // 0x08(0x04)
	float BashDelay; // 0x0c(0x04)
};

// ScriptStruct Mist.CombatDelaysContainer
// Size: 0xe0 (Inherited: 0x00)
struct FCombatDelaysContainer {
	struct FCombatDelays QuickAttackPostBlockTime; // 0x00(0x10)
	struct FCombatDelays MediumAttackPostBlockTime; // 0x10(0x10)
	struct FCombatDelays HeavyAttackPostBlockTime; // 0x20(0x10)
	struct FCombatDelays QuickAttackPostHitTime; // 0x30(0x10)
	struct FCombatDelays MediumAttackPostHitTime; // 0x40(0x10)
	struct FCombatDelays HeavyAttackPostHitTime; // 0x50(0x10)
	struct FCombatDelays BashPostHitTime; // 0x60(0x10)
	struct FCombatDelays DefendPostQuickAttackBlockTime; // 0x70(0x10)
	struct FCombatDelays DefendPostMediumAttackBlockTime; // 0x80(0x10)
	struct FCombatDelays DefendPostHeavyAttackBlockTime; // 0x90(0x10)
	struct FCombatDelays DefendPostQuickAttackHitTime; // 0xa0(0x10)
	struct FCombatDelays DefendPostMediumAttackHitTime; // 0xb0(0x10)
	struct FCombatDelays DefendPostHeavyAttackHitTime; // 0xc0(0x10)
	struct FCombatDelays DefendPostBashHitTime; // 0xd0(0x10)
};

// ScriptStruct Mist.MistBlockAngles
// Size: 0x18 (Inherited: 0x00)
struct FMistBlockAngles {
	struct FFloatInterval UpAttackAngles; // 0x00(0x08)
	struct FFloatInterval LeftAttackAngles; // 0x08(0x08)
	struct FFloatInterval RightAttackAngles; // 0x10(0x08)
};

// ScriptStruct Mist.MistBlockAnglesConfiguration
// Size: 0x60 (Inherited: 0x00)
struct FMistBlockAnglesConfiguration {
	struct FMistBlockAngles UpBlockAngles; // 0x00(0x18)
	struct FMistBlockAngles LeftBlockAngles; // 0x18(0x18)
	struct FMistBlockAngles RightBlockAngles; // 0x30(0x18)
	struct FMistBlockAngles OmnidirectionalBlockAngles; // 0x48(0x18)
};

// ScriptStruct Mist.MistMeleeHitReactions
// Size: 0x20 (Inherited: 0x00)
struct FMistMeleeHitReactions {
	struct UAnimationAsset* HitReactionFront; // 0x00(0x08)
	struct UAnimationAsset* HitReactionLeft; // 0x08(0x08)
	struct UAnimationAsset* HitReactionRight; // 0x10(0x08)
	struct UAnimationAsset* HitReactionBack; // 0x18(0x08)
};

// ScriptStruct Mist.MeleeCombatPostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FMeleeCombatPostPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Mist.MistCraftingRequirements
// Size: 0x60 (Inherited: 0x00)
struct FMistCraftingRequirements {
	struct TMap<struct UMistItemTemplate*, int32_t> Inputs; // 0x00(0x50)
	struct UMistUnlockableTreeItem* RequiredUnlockable; // 0x50(0x08)
	int32_t ExperienceRewardCrafting; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Mist.FinishedActorInfo
// Size: 0x30 (Inherited: 0x00)
struct FFinishedActorInfo {
	struct AActor* Class; // 0x00(0x08)
	struct FMistComponentReference PositioningRef; // 0x08(0x28)
};

// ScriptStruct Mist.MistCraftingSection
// Size: 0x18 (Inherited: 0x00)
struct FMistCraftingSection {
	struct UMistItemCategory* Category; // 0x00(0x08)
	struct TArray<struct FMistCraftingRecipes> Items; // 0x08(0x10)
};

// ScriptStruct Mist.MistCraftingRecipes
// Size: 0x18 (Inherited: 0x00)
struct FMistCraftingRecipes {
	struct UMistItemTemplate* ItemTemplate; // 0x00(0x08)
	struct TArray<uint32_t> ItemRecipes; // 0x08(0x10)
};

// ScriptStruct Mist.MistCraftingQueueItem
// Size: 0x58 (Inherited: 0x00)
struct FMistCraftingQueueItem {
	uint64_t ID; // 0x00(0x08)
	struct UMistItemTemplate* ItemTemplate; // 0x08(0x08)
	int32_t RecipeIndex; // 0x10(0x04)
	float StartingTime; // 0x14(0x04)
	int32_t RemainingQuantity; // 0x18(0x04)
	int32_t OrdersNumberLeft; // 0x1c(0x04)
	int32_t TargetQuality; // 0x20(0x04)
	enum class EMistCraftingQueueItemState State; // 0x24(0x04)
	struct AMistPlayer* Creator; // 0x28(0x08)
	bool bDirty; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	int64_t CreatorCharacterId; // 0x38(0x08)
	struct TArray<struct FMistItemWithQuantity> ItemsBeingConsumed; // 0x40(0x10)
	struct AMistWalker* WalkerBase; // 0x50(0x08)
};

// ScriptStruct Mist.MistItemWithQuantity
// Size: 0x20 (Inherited: 0x00)
struct FMistItemWithQuantity {
	struct FMistItem Item; // 0x00(0x18)
	int32_t Quantity; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.MistFurnaceRecipe
// Size: 0x88 (Inherited: 0x00)
struct FMistFurnaceRecipe {
	struct TMap<struct UMistItemTemplate*, int32_t> Inputs; // 0x00(0x50)
	struct UMistUnlockableTreeItem* RequiredUnlockable; // 0x50(0x08)
	int32_t OutputCount; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UMistItemTemplate* GoodOutputItem; // 0x60(0x08)
	struct UMistItemTemplate* BadOutputItem; // 0x68(0x08)
	struct UCurveFloat* UnitYieldChance; // 0x70(0x08)
	float MinTemp; // 0x78(0x04)
	float MaxTemp; // 0x7c(0x04)
	float MaxExp; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Mist.MistCachedAutoStationRecipe
// Size: 0x10 (Inherited: 0x00)
struct FMistCachedAutoStationRecipe {
	struct UMistItemTemplate* ItemTemplate; // 0x00(0x08)
	int32_t RecipeIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.MistFurnaceSmeltingAction
// Size: 0x08 (Inherited: 0x00)
struct FMistFurnaceSmeltingAction {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Mist.MistAltFurnaceRecipe
// Size: 0xb0 (Inherited: 0x00)
struct FMistAltFurnaceRecipe {
	struct TMap<struct UMistItemTemplate*, float> BadOutputItemsChance; // 0x00(0x50)
	struct TMap<struct UMistItemTemplate*, float> GoodOutputItemsChance; // 0x50(0x50)
	float SmeltingTimeMultiMin; // 0xa0(0x04)
	float SmeltingTimeMultiMax; // 0xa4(0x04)
	float CurvePow; // 0xa8(0x04)
	float FailChanceOnSmelting; // 0xac(0x04)
};

// ScriptStruct Mist.ForceAreaEffectTimeInterval
// Size: 0x08 (Inherited: 0x00)
struct FForceAreaEffectTimeInterval {
	float TimeInterval; // 0x00(0x04)
	float NextTick; // 0x04(0x04)
};

// ScriptStruct Mist.TargetInteraction
// Size: 0xd0 (Inherited: 0x00)
struct FTargetInteraction {
	enum class EDamageRate DamageRate; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UDamageType* DamageType; // 0x08(0x08)
	float TickInterval; // 0x10(0x04)
	bool bIsMaxHPDependent; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float AlphaValue; // 0x18(0x04)
	float StartDamageMultiplier; // 0x1c(0x04)
	float RawDamage; // 0x20(0x04)
	float HealthPercentage; // 0x24(0x04)
	struct TMap<struct AActor*, float> Targets; // 0x28(0x50)
	struct TSet<struct AActor*> TargetsToRemove; // 0x78(0x50)
	float LastDamageTime; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct Mist.MistEquipmentItem
// Size: 0x18 (Inherited: 0x00)
struct FMistEquipmentItem {
	struct UMistEquipmentItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.EquipmentSlotUpdateData
// Size: 0x30 (Inherited: 0x00)
struct FEquipmentSlotUpdateData {
	enum class EEquipmentSlot Index; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMistEquipmentItem Item; // 0x08(0x18)
	struct UActorComponent* Component; // 0x20(0x08)
	enum class EEquipmentHand ActiveHand; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Mist.AccountTierEquipmentSets
// Size: 0x40 (Inherited: 0x00)
struct FAccountTierEquipmentSets {
	struct TArray<struct FEquipmentSet> Tier0; // 0x00(0x10)
	struct TArray<struct FEquipmentSet> Tier1; // 0x10(0x10)
	struct TArray<struct FEquipmentSet> Tier2; // 0x20(0x10)
	struct TArray<struct FEquipmentSet> Tier3; // 0x30(0x10)
};

// ScriptStruct Mist.EquipmentSet
// Size: 0x10 (Inherited: 0x00)
struct FEquipmentSet {
	struct TArray<struct UMistEquipmentItemTemplate*> Items; // 0x00(0x10)
};

// ScriptStruct Mist.EquipmentSlotMeshes
// Size: 0x30 (Inherited: 0x00)
struct FEquipmentSlotMeshes {
	struct UMeshComponent* Mesh; // 0x00(0x08)
	struct UMeshComponent* SheathMesh; // 0x08(0x08)
	struct UMeshComponent* WeaponMesh; // 0x10(0x08)
	struct AActor* WeaponActor; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
	struct UTexture2D* MaskOverride; // 0x28(0x08)
};

// ScriptStruct Mist.EquipmentSlotState
// Size: 0x68 (Inherited: 0x00)
struct FEquipmentSlotState {
	struct FMistEquipmentItem Item; // 0x00(0x18)
	struct UActorComponent* Component; // 0x18(0x08)
	struct TScriptInterface<IMistEquipmentItemComponent> EquipmentItemComponent; // 0x20(0x10)
	char pad_30[0x30]; // 0x30(0x30)
	enum class EEquipmentHand ActiveHand; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Mist.MistClanInfo
// Size: 0x20 (Inherited: 0x00)
struct FMistClanInfo {
	int64_t ID; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	int32_t ColorIndex; // 0x18(0x04)
	int32_t EmblemIndex; // 0x1c(0x04)
};

// ScriptStruct Mist.MistOwnedShopItem
// Size: 0x0c (Inherited: 0x00)
struct FMistOwnedShopItem {
	struct FName ShopItemId; // 0x00(0x08)
	int32_t Amount; // 0x08(0x04)
};

// ScriptStruct Mist.MistCharacterCustomizationValues
// Size: 0x24 (Inherited: 0x00)
struct FMistCharacterCustomizationValues {
	float Values[0x9]; // 0x00(0x24)
};

// ScriptStruct Mist.MistAttachmentMonitor
// Size: 0x80 (Inherited: 0x00)
struct FMistAttachmentMonitor {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Mist.MistTetherParameters
// Size: 0x90 (Inherited: 0x00)
struct FMistTetherParameters {
	struct AMistTetherCable* CableActorClass; // 0x00(0x08)
	struct UMaterial* RopeDebugMaterial; // 0x08(0x08)
	struct FLinearColor MaxTensionRopeColor; // 0x10(0x10)
	struct UMistTensionDamageType* TensionDamageTypeClass; // 0x20(0x08)
	float MaxHealth; // 0x28(0x04)
	float MaxStretchForce; // 0x2c(0x04)
	float BlockedReelOutSpeed; // 0x30(0x04)
	float BlockedReelOutStretchThreshold; // 0x34(0x04)
	bool bStretchDamageEnabled; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float StretchDamageThreshold; // 0x3c(0x04)
	float MinStretchDamage; // 0x40(0x04)
	float MaxStretchDamage; // 0x44(0x04)
	bool bRopeDamageEnabled; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float RopeDamageFactor; // 0x4c(0x04)
	float MinForceForRopeDamage; // 0x50(0x04)
	bool bPullDamageEnabled; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float PullDamageFactor; // 0x58(0x04)
	float MinForceForPullDamage; // 0x5c(0x04)
	float SnappedTetherLifetime; // 0x60(0x04)
	float SagFactor; // 0x64(0x04)
	float InitialSlack; // 0x68(0x04)
	int32_t MinStiffness; // 0x6c(0x04)
	int32_t MaxStiffness; // 0x70(0x04)
	bool bSpringEnabled; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float SpringStiffness; // 0x78(0x04)
	float SpringDamping; // 0x7c(0x04)
	float MinLength; // 0x80(0x04)
	float MaxLength; // 0x84(0x04)
	bool bSnapOnMaxLengthExceeded; // 0x88(0x01)
	bool bSnapOnZeroHealth; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	float MaxStretch; // 0x8c(0x04)
};

// ScriptStruct Mist.MistInteractableObject
// Size: 0x18 (Inherited: 0x00)
struct FMistInteractableObject {
	struct UObject* Provider; // 0x00(0x08)
	struct UObject* Target; // 0x08(0x08)
	int32_t InstanceId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Mist.ReplaceInteractablesEntry
// Size: 0x18 (Inherited: 0x00)
struct FReplaceInteractablesEntry {
	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Mist.MistInteractableData
// Size: 0x88 (Inherited: 0x00)
struct FMistInteractableData {
	struct FMistInteractionQuery Query; // 0x00(0x68)
	struct FMistInteractableProperties Properties; // 0x68(0x14)
	char pad_7C[0xc]; // 0x7c(0x0c)
};

// ScriptStruct Mist.MistSortedInteractable
// Size: 0x88 (Inherited: 0x00)
struct FMistSortedInteractable {
	struct FMistInteractableObject Interactable; // 0x00(0x18)
	struct FMistInteractionQuery Query; // 0x18(0x68)
	int32_t Priority; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Mist.MistContainerSlotUpdateData
// Size: 0x28 (Inherited: 0x00)
struct FMistContainerSlotUpdateData {
	int32_t SlotIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMistItem Item; // 0x08(0x18)
	int32_t Count; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Mist.MistInventoryOperationParams
// Size: 0x30 (Inherited: 0x00)
struct FMistInventoryOperationParams {
	bool bNotify; // 0x00(0x01)
	char pad_1[0x17]; // 0x01(0x17)
	bool bReliableClientCompletionEvent; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct AActor* LeftoversOverrideActor; // 0x20(0x08)
	enum class EMistInventoryLeftoversMode LeftoversHandlingMode; // 0x28(0x04)
	bool bCountLeftovers; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Mist.MistInventoryOperationSource
// Size: 0x38 (Inherited: 0x00)
struct FMistInventoryOperationSource {
	enum class EMistInventoryOperationSourceType Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AActor* Actor; // 0x08(0x08)
	struct UMistContainerComponent* Container; // 0x10(0x08)
	int32_t SlotIndex; // 0x18(0x04)
	int32_t NumItems; // 0x1c(0x04)
	struct FMistItem Item; // 0x20(0x18)
};

// ScriptStruct Mist.MistInventoryOperationLeftovers
// Size: 0x20 (Inherited: 0x00)
struct FMistInventoryOperationLeftovers {
	struct FMistItem Item; // 0x00(0x18)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.MistClanOwnershipMonitor
// Size: 0x60 (Inherited: 0x00)
struct FMistClanOwnershipMonitor {
	char pad_0[0x48]; // 0x00(0x48)
	struct UMistClanOwnershipComponent* ActiveOwnershipComponent; // 0x48(0x08)
	struct TArray<struct FMistInactiveOwnershipEntry> InactiveOwnershipStack; // 0x50(0x10)
};

// ScriptStruct Mist.MistInactiveOwnershipEntry
// Size: 0x10 (Inherited: 0x00)
struct FMistInactiveOwnershipEntry {
	struct UMistClanOwnershipComponent* Component; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Mist.MistLootDesc
// Size: 0x30 (Inherited: 0x00)
struct FMistLootDesc {
	bool bUseTables; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMistLootTable> Tables; // 0x08(0x10)
	bool bEnsureAtLeastOneTableRunning; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FMistSimpleLootOutput> Outputs; // 0x20(0x10)
};

// ScriptStruct Mist.MistSimpleLootOutput
// Size: 0x10 (Inherited: 0x00)
struct FMistSimpleLootOutput {
	struct UMistItemTemplate* ItemClass; // 0x00(0x08)
	int32_t MinQuantity; // 0x08(0x04)
	int32_t MaxQuantity; // 0x0c(0x04)
};

// ScriptStruct Mist.MistLootTable
// Size: 0x20 (Inherited: 0x00)
struct FMistLootTable {
	struct UDataTable* Table; // 0x00(0x08)
	int32_t MinIterations; // 0x08(0x04)
	int32_t MaxIterations; // 0x0c(0x04)
	float RunChance; // 0x10(0x04)
	float PerIterationRunChance; // 0x14(0x04)
	float MinQuantityMultiplier; // 0x18(0x04)
	float MaxQuantityMultiplier; // 0x1c(0x04)
};

// ScriptStruct Mist.MistMessageCharacterData
// Size: 0x38 (Inherited: 0x00)
struct FMistMessageCharacterData {
	struct FString Name; // 0x00(0x10)
	struct FString AccountName; // 0x10(0x10)
	enum class EMistGamePlatform AccountPlatform; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	int64_t CharacterId; // 0x28(0x08)
	int64_t ClanId; // 0x30(0x08)
};

// ScriptStruct Mist.IntruderEntry
// Size: 0x18 (Inherited: 0x00)
struct FIntruderEntry {
	struct AActor* Actor; // 0x00(0x08)
	bool bIsHostile; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float LastTimeHostileAction; // 0x0c(0x04)
	int32_t GuardsAssigned; // 0x10(0x04)
	bool bIsOnWalker; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Mist.MistMobGuardEntry
// Size: 0x10 (Inherited: 0x00)
struct FMistMobGuardEntry {
	struct AMistHumanoidMob* Mob; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Mist.MistMobSpawnEntry
// Size: 0x28 (Inherited: 0x00)
struct FMistMobSpawnEntry {
	struct AMistHumanoidMob* MobClass; // 0x00(0x08)
	struct AMistMobController* MobController; // 0x08(0x08)
	int32_t Amount; // 0x10(0x04)
	float RespawnPeriod; // 0x14(0x04)
	struct TArray<struct FMistComponentReference> OverrideSpawnLocations; // 0x18(0x10)
};

// ScriptStruct Mist.MistPackedPart
// Size: 0x40 (Inherited: 0x00)
struct FMistPackedPart {
	struct FTransform RelativeTransform; // 0x00(0x30)
	struct UMistPlaceableTemplate* Template; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Mist.MistPackingRestrictionsTableRow
// Size: 0x140 (Inherited: 0x08)
struct FMistPackingRestrictionsTableRow : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Summary; // 0x20(0x18)
	struct FText Warning; // 0x38(0x18)
	bool bCanPackParts; // 0x50(0x01)
	bool bCanPackBases; // 0x51(0x01)
	bool bCanPackWalkers; // 0x52(0x01)
	bool bCanPackExoskeletons; // 0x53(0x01)
	bool bListsAreBlacklists; // 0x54(0x01)
	bool bChildListsAreBlacklists; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct TArray<struct UMistPlaceableTemplate*> PlaceablesList; // 0x58(0x10)
	struct TSet<struct FName> TagsList; // 0x68(0x50)
	struct TArray<struct UMistPlaceableTemplate*> ChildPlaceablesList; // 0xb8(0x10)
	struct TSet<struct FName> ChildTagsList; // 0xc8(0x50)
	struct TArray<struct UMistPlaceableTemplate*> Walls; // 0x118(0x10)
	int32_t MaxWalls; // 0x128(0x04)
	int32_t MaxNonWalls; // 0x12c(0x04)
	float MaxWeight; // 0x130(0x04)
	bool bLimitToMaxWeightPenalty; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	float MaxDistance; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct Mist.MistFoliageHarvestingEntry
// Size: 0x38 (Inherited: 0x00)
struct FMistFoliageHarvestingEntry {
	enum class EMistFoliageHarvestingType HarvestingType; // 0x00(0x01)
	enum class EEquipmentTool ToolType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t ToolTier; // 0x04(0x04)
	float ToolLevelDamageBonus; // 0x08(0x04)
	float ToolLevelDamagePenalty; // 0x0c(0x04)
	struct AActor* ReplacementActorOnDestruction; // 0x10(0x08)
	int32_t MaxOutputs; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FMistFoliageResourceEntry> ResourceEntries; // 0x20(0x10)
	float DurabilityDamage; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Mist.MistFoliageResourceEntry
// Size: 0x38 (Inherited: 0x00)
struct FMistFoliageResourceEntry {
	int32_t Outputs; // 0x00(0x04)
	int32_t ToolLevel; // 0x04(0x04)
	struct UMistItemTemplate* ItemClass; // 0x08(0x08)
	float ExpPerItem; // 0x10(0x04)
	int32_t MinQuantity; // 0x14(0x04)
	int32_t MaxQuantity; // 0x18(0x04)
	float ToolLevelQuantityBonus; // 0x1c(0x04)
	struct FName InteractionDiscoveryId; // 0x20(0x08)
	float DiscoveryXP; // 0x28(0x04)
	float Chance; // 0x2c(0x04)
	float ToolLevelChanceBonus; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Mist.MistSyncCauserData
// Size: 0x18 (Inherited: 0x00)
struct FMistSyncCauserData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Mist.ProjectorLensState
// Size: 0x30 (Inherited: 0x00)
struct FProjectorLensState {
	enum class EMistProjectorLensPosition Position; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMistComponentReference Interactable; // 0x08(0x28)
};

// ScriptStruct Mist.MistWalkerReplicatedDestroyedPart
// Size: 0x40 (Inherited: 0x00)
struct FMistWalkerReplicatedDestroyedPart {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct FRepMovement Data; // 0x08(0x34)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Mist.MistWalkerReplicatedSparePartValues
// Size: 0x10 (Inherited: 0x00)
struct FMistWalkerReplicatedSparePartValues {
	float BonusHealthPoints; // 0x00(0x04)
	int32_t WaterCapacity; // 0x04(0x04)
	float Acceleration; // 0x08(0x04)
	float TorqueDuration; // 0x0c(0x04)
};

// ScriptStruct Mist.MistHoseCharacterAffect
// Size: 0x10 (Inherited: 0x00)
struct FMistHoseCharacterAffect {
	struct FVector Direction; // 0x00(0x0c)
	float TimeLeft; // 0x0c(0x04)
};

// ScriptStruct Mist.MistHoseAmmoProperties
// Size: 0x48 (Inherited: 0x00)
struct FMistHoseAmmoProperties {
	struct UMistProjectileItemTemplate* ProjectileItem; // 0x00(0x08)
	struct TArray<struct UMistItemTemplate*> AmmoItems; // 0x08(0x10)
	struct FMistComponentReference ParticleComponentRef; // 0x18(0x28)
	float ProjectilesPerSecond; // 0x40(0x04)
	float MaxCharge; // 0x44(0x04)
};

// ScriptStruct Mist.MistTooltipInfo
// Size: 0x60 (Inherited: 0x00)
struct FMistTooltipInfo {
	struct FName ParentWidget; // 0x00(0x08)
	bool bHideSeparators; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText HeadlineText; // 0x10(0x18)
	struct FText SubHeadlineText; // 0x28(0x18)
	struct FText DescriptionText; // 0x40(0x18)
	struct UTexture2D* HeadlineImage; // 0x58(0x08)
};

// ScriptStruct Mist.MistActiveVitamin
// Size: 0x18 (Inherited: 0x00)
struct FMistActiveVitamin {
	struct UMistVitaminItemTemplate* ItemTemplate; // 0x00(0x08)
	float UseTime; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
	struct FTimerHandle TimerHandle; // 0x10(0x08)
};

// ScriptStruct Mist.MistOpenScreenData
// Size: 0x48 (Inherited: 0x00)
struct FMistOpenScreenData {
	struct UMistUIScreen* Screen; // 0x00(0x08)
	struct UMistUIBackgroundWidget* BackgroundWidget; // 0x08(0x08)
	struct UInputComponent* ScreenInputComponent; // 0x10(0x08)
	struct TArray<struct UInputComponent*> WidgetInputComponents; // 0x18(0x10)
	struct TArray<int32_t> WidgetInputPriorities; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct Mist.MistUISelectionDialogItem
// Size: 0x20 (Inherited: 0x00)
struct FMistUISelectionDialogItem {
	struct UObject* Object; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Mist.PumpingData
// Size: 0x0c (Inherited: 0x00)
struct FPumpingData {
	int32_t MinQuantity; // 0x00(0x04)
	int32_t MaxQuantity; // 0x04(0x04)
	float Interval; // 0x08(0x04)
};

// ScriptStruct Mist.SceneData
// Size: 0x350 (Inherited: 0x00)
struct FSceneData {
	struct UMistSceneAsset* ParentSceneAsset; // 0x00(0x08)
	struct TMap<struct FName, bool> LayerMap; // 0x08(0x50)
	struct TArray<enum class EMistClimateType> ClimatesTypes; // 0x58(0x10)
	struct FRotator Rotation; // 0x68(0x0c)
	float Intensity; // 0x74(0x04)
	struct FLinearColor LightColor; // 0x78(0x10)
	float IndirectLightingIntensity; // 0x88(0x04)
	float FadeDistance; // 0x8c(0x04)
	float DisabledBrightness; // 0x90(0x04)
	float SpecularScale; // 0x94(0x04)
	float SourceAngle; // 0x98(0x04)
	float SoftSourceAngle; // 0x9c(0x04)
	struct FRotator PlayerRotation; // 0xa0(0x0c)
	float PlayerIntensity; // 0xac(0x04)
	struct FLinearColor PlayerLightColor; // 0xb0(0x10)
	float PlayerIndirectLightingIntensity; // 0xc0(0x04)
	float PlayerFadeDistance; // 0xc4(0x04)
	float SkylightBrightness; // 0xc8(0x04)
	struct FLinearColor SkylightColor; // 0xcc(0x10)
	struct FColor OcclusionTint; // 0xdc(0x04)
	float LocationZ; // 0xe0(0x04)
	float FogDensity; // 0xe4(0x04)
	float FogHeightFalloff; // 0xe8(0x04)
	float StartDistanceHeightFog; // 0xec(0x04)
	struct FLinearColor FogInscatteringColor; // 0xf0(0x10)
	float DirectionalInscatteringExponent; // 0x100(0x04)
	float DirectionalInscatteringStartDistance; // 0x104(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x108(0x10)
	float ScatteringDistribution; // 0x118(0x04)
	struct FLinearColor Emissive; // 0x11c(0x10)
	float ExtinctionScale; // 0x12c(0x04)
	float SunMultiplier; // 0x130(0x04)
	float FogMultiplier; // 0x134(0x04)
	float DensityMultiplier; // 0x138(0x04)
	float DensityOffset; // 0x13c(0x04)
	float GroundOffset; // 0x140(0x04)
	float StartDistanceAtmosphere; // 0x144(0x04)
	float DefaultBrightness; // 0x148(0x04)
	struct FLinearColor DefaultLightColor; // 0x14c(0x10)
	struct FExponentialHeightFogData SecondFog; // 0x15c(0x0c)
	float TimeOfDay; // 0x168(0x04)
	float OverallIntensity; // 0x16c(0x04)
	float CloudSpeed; // 0x170(0x04)
	float CloudDensity; // 0x174(0x04)
	float CloudWispsOpacity; // 0x178(0x04)
	float CloudOpacity; // 0x17c(0x04)
	float SunLightIntensity; // 0x180(0x04)
	float CloudShadowsIntensity; // 0x184(0x04)
	float CloudDirection; // 0x188(0x04)
	float CloudHeight1; // 0x18c(0x04)
	float CloudHeight2; // 0x190(0x04)
	struct FLinearColor HorizonBaseColor; // 0x194(0x10)
	struct FLinearColor ZenithBaseColor; // 0x1a4(0x10)
	struct FLinearColor CloudLightColor; // 0x1b4(0x10)
	struct FLinearColor CloudDarkColor; // 0x1c4(0x10)
	struct FLinearColor SunColor; // 0x1d4(0x10)
	float CloudShineIntensity; // 0x1e4(0x04)
	float LightHazeIntensity; // 0x1e8(0x04)
	float LightHazeExponent; // 0x1ec(0x04)
	float LightHazeWrapMin; // 0x1f0(0x04)
	float ExposureCompensation; // 0x1f4(0x04)
	float Temp; // 0x1f8(0x04)
	float Tint; // 0x1fc(0x04)
	float VignetteIntensity; // 0x200(0x04)
	struct FLinearColor SaturationGlobal; // 0x204(0x10)
	struct FLinearColor ContrastGlobal; // 0x214(0x10)
	struct FLinearColor GammaGlobal; // 0x224(0x10)
	struct FLinearColor GainGlobal; // 0x234(0x10)
	struct FLinearColor OffsetGlobal; // 0x244(0x10)
	struct FLinearColor SaturationShadows; // 0x254(0x10)
	struct FLinearColor ContrastShadows; // 0x264(0x10)
	struct FLinearColor GammaShadows; // 0x274(0x10)
	struct FLinearColor GainShadows; // 0x284(0x10)
	struct FLinearColor OffsetShadows; // 0x294(0x10)
	float ShadowsMax; // 0x2a4(0x04)
	struct FLinearColor SaturationMidtones; // 0x2a8(0x10)
	struct FLinearColor ContrastMidtones; // 0x2b8(0x10)
	struct FLinearColor GammaMidtones; // 0x2c8(0x10)
	struct FLinearColor GainMidtones; // 0x2d8(0x10)
	struct FLinearColor OffsetMidtones; // 0x2e8(0x10)
	struct FLinearColor SaturationHighlights; // 0x2f8(0x10)
	struct FLinearColor ContrastHighlights; // 0x308(0x10)
	struct FLinearColor GammaHighlights; // 0x318(0x10)
	struct FLinearColor GainHighlights; // 0x328(0x10)
	struct FLinearColor OffsetHighlights; // 0x338(0x10)
	float HighlightsMin; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
};

// ScriptStruct Mist.MistPresetData
// Size: 0x30 (Inherited: 0x00)
struct FMistPresetData {
	struct TArray<struct UMistSceneAsset*> SceneAssets; // 0x00(0x10)
	struct TArray<struct UMistParticleAsset*> ParticleAssets; // 0x10(0x10)
	float TransitionValue; // 0x20(0x04)
	float TransitionValueDeviation; // 0x24(0x04)
	float DurationValue; // 0x28(0x04)
	float DurationValueDeviation; // 0x2c(0x04)
};

// ScriptStruct Mist.DebugSettings
// Size: 0x14 (Inherited: 0x00)
struct FDebugSettings {
	bool bDrawDebug; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FColor DebugColor; // 0x04(0x04)
	float DebugRadius; // 0x08(0x04)
	float DebugLifeTime; // 0x0c(0x04)
	float HalfHeight; // 0x10(0x04)
};

// ScriptStruct Mist.FoliageSoundInstanceData
// Size: 0x90 (Inherited: 0x00)
struct FFoliageSoundInstanceData {
	struct TMap<uint64_t, struct FMistAudioComponentData> ActiveAudioComponents; // 0x00(0x50)
	char pad_50[0x8]; // 0x50(0x08)
	struct UStaticMesh* StaticMesh; // 0x58(0x08)
	char pad_60[0x30]; // 0x60(0x30)
};

// ScriptStruct Mist.MistAudioComponentData
// Size: 0x10 (Inherited: 0x00)
struct FMistAudioComponentData {
	struct UAudioComponent* AudioComponent; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Mist.FoliageSoundData
// Size: 0x78 (Inherited: 0x00)
struct FFoliageSoundData {
	struct TArray<struct UStaticMesh*> FoliageStaticMeshes; // 0x00(0x10)
	bool bUseNewMeshData; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FMistSoundFoliageMeshData> FoliageMeshData; // 0x18(0x10)
	struct USoundBase* Sound; // 0x28(0x08)
	struct FVector SoundRelativeOffset; // 0x30(0x0c)
	float Range; // 0x3c(0x04)
	float LeaveRange; // 0x40(0x04)
	float Probability; // 0x44(0x04)
	bool bShowAdvancedSettings; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float VolumeMultiplier; // 0x4c(0x04)
	float PitchMultiplier; // 0x50(0x04)
	float StartTime; // 0x54(0x04)
	float FadeOut; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x60(0x08)
	struct USoundConcurrency* ConcurrencySettings; // 0x68(0x08)
	bool bCheckGrass; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Mist.MistSoundFoliageMeshData
// Size: 0x60 (Inherited: 0x00)
struct FMistSoundFoliageMeshData {
	struct UStaticMesh* FoliageMesh; // 0x00(0x08)
	bool bCheckBiome; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float BiomeCheckRadius; // 0x0c(0x04)
	struct TSet<struct FName> BiomeNames; // 0x10(0x50)
};

// ScriptStruct Mist.FoliageParticleInstanceData
// Size: 0xa8 (Inherited: 0x00)
struct FFoliageParticleInstanceData {
	struct TMap<uint64_t, struct AEmitter*> ActiveEmitters; // 0x00(0x50)
	char pad_50[0x58]; // 0x50(0x58)
};

// ScriptStruct Mist.FoliageParticleData
// Size: 0x58 (Inherited: 0x00)
struct FFoliageParticleData {
	struct TArray<struct UStaticMesh*> FoliageMeshes; // 0x00(0x10)
	struct UParticleSystem* ParticleSystem; // 0x10(0x08)
	float Probability; // 0x18(0x04)
	bool bDisabled; // 0x1c(0x01)
	bool bCheckFoliage; // 0x1d(0x01)
	bool bCheckGrass; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float Range; // 0x20(0x04)
	float LeaveRange; // 0x24(0x04)
	float Threshold; // 0x28(0x04)
	bool bPreferNearest; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float MaxEmitterRatio; // 0x30(0x04)
	float MaxEmitterCount; // 0x34(0x04)
	float EmitterScale; // 0x38(0x04)
	struct FVector EmitterRelativeOffset; // 0x3c(0x0c)
	struct FRotator EmitterRotation; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Mist.AnimNode_BlendListByFloatRange
// Size: 0xb0 (Inherited: 0x98)
struct FAnimNode_BlendListByFloatRange : FAnimNode_BlendListBase {
	struct TArray<struct FVector2D> PoseRange; // 0x98(0x10)
	float ActiveValue; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Mist.AnimNode_LocomotionAnimPlayer
// Size: 0xf0 (Inherited: 0x30)
struct FAnimNode_LocomotionAnimPlayer : FAnimNode_AssetPlayerBase {
	struct UAnimationAsset* Asset; // 0x30(0x08)
	float PlayRate; // 0x38(0x04)
	bool bLoop; // 0x3c(0x01)
	bool bForceNewEntry; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float StartPosition; // 0x40(0x04)
	float XInput; // 0x44(0x04)
	float YInput; // 0x48(0x04)
	float BlendInDuration; // 0x4c(0x04)
	bool bContinuePlayingFadingOutAnims; // 0x50(0x01)
	bool bIsBlending; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct FLocomotionAnimBlendEntry> Entries; // 0x58(0x10)
	struct FBlendFilter BlendFilter; // 0x68(0x78)
	struct TArray<struct UAnimNotify*> FiredNotifies; // 0xe0(0x10)
};

// ScriptStruct Mist.LocomotionAnimBlendEntry
// Size: 0x48 (Inherited: 0x00)
struct FLocomotionAnimBlendEntry {
	struct UAnimationAsset* Asset; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
	struct TArray<struct FBlendSampleData> BlendSampleData; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct Mist.AnimNode_MeleeAnimPlayer
// Size: 0xf8 (Inherited: 0x30)
struct FAnimNode_MeleeAnimPlayer : FAnimNode_AssetPlayerBase {
	struct UAnimationAsset* Asset; // 0x30(0x08)
	float PlayRate; // 0x38(0x04)
	bool bLoop; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float StartPosition; // 0x40(0x04)
	float AnimPosition; // 0x44(0x04)
	float XInput; // 0x48(0x04)
	float YInput; // 0x4c(0x04)
	float BlendInDuration; // 0x50(0x04)
	int32_t ActionId; // 0x54(0x04)
	bool bContinuePlayingFadingOutAnims; // 0x58(0x01)
	bool bIsBlending; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TArray<struct FMeleeAnimBlendEntry> Entries; // 0x60(0x10)
	struct FBlendFilter BlendFilter; // 0x70(0x78)
	struct TArray<struct UAnimNotify*> FiredNotifies; // 0xe8(0x10)
};

// ScriptStruct Mist.MeleeAnimBlendEntry
// Size: 0x48 (Inherited: 0x00)
struct FMeleeAnimBlendEntry {
	struct UAnimationAsset* Asset; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
	struct TArray<struct FBlendSampleData> BlendSampleData; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct Mist.AnimNode_MultiWayBlendSingleAlpha
// Size: 0x98 (Inherited: 0x10)
struct FAnimNode_MultiWayBlendSingleAlpha : FAnimNode_Base {
	struct TArray<struct FPoseLink> Poses; // 0x10(0x10)
	struct TArray<float> PoseValues; // 0x20(0x10)
	float CurrentValue; // 0x30(0x04)
	bool bAdditiveNode; // 0x34(0x01)
	bool bResetChildOnActivation; // 0x35(0x01)
	char pad_36[0x12]; // 0x36(0x12)
	bool bAIsRelevant; // 0x48(0x01)
	bool bBIsRelevant; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float InternalBlendAlpha; // 0x4c(0x04)
	char pad_50[0x48]; // 0x50(0x48)
};

// ScriptStruct Mist.AnimNode_SlopeWarping
// Size: 0x3d0 (Inherited: 0xc8)
struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase {
	struct FBoneReference Pelvis; // 0xc8(0x10)
	struct FBoneReference Root_IK; // 0xd8(0x10)
	struct FBoneReference LeftFoot_IK; // 0xe8(0x10)
	struct FBoneReference RightFoot_IK; // 0xf8(0x10)
	struct FBoneReference RightFoot_FK; // 0x108(0x10)
	struct FBoneReference LeftFoot_FK; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)
	struct FBoneSocketTarget LeftLegJointTarget; // 0x130(0x60)
	struct FBoneSocketTarget RightLegJointTarget; // 0x190(0x60)
	struct FVector LeftLegJointTargetLocation; // 0x1f0(0x0c)
	struct FVector RightLegJointTargetLocation; // 0x1fc(0x0c)
	enum class EBoneControlSpace JointTargetLocationSpace; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	struct FVector FloorNormal; // 0x20c(0x0c)
	float MaxSlopeAngle; // 0x218(0x04)
	enum class EBoneModificationMode TranslationMode; // 0x21c(0x01)
	enum class EBoneModificationMode RotationMode; // 0x21d(0x01)
	enum class EBoneModificationMode ScaleMode; // 0x21e(0x01)
	enum class EBoneControlSpace TranslationSpace; // 0x21f(0x01)
	enum class EBoneControlSpace RotationSpace; // 0x220(0x01)
	enum class EBoneControlSpace ScaleSpace; // 0x221(0x01)
	char pad_222[0x1ae]; // 0x222(0x1ae)
};

// ScriptStruct Mist.AnimNode_SpeedWarping
// Size: 0x128 (Inherited: 0xc8)
struct FAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase {
	struct FBoneReference RootBoneToLook; // 0xc8(0x10)
	struct FBoneReference PelvisBoneToModify; // 0xd8(0x10)
	struct FBoneReference LeftFootBoneToModify; // 0xe8(0x10)
	struct FBoneReference RightFootBoneToModify; // 0xf8(0x10)
	float SpeedRate; // 0x108(0x04)
	struct FVector ManualSpeedWarpingDir; // 0x10c(0x0c)
	float PelvisRate; // 0x118(0x04)
	enum class EBoneModificationMode TranslationMode; // 0x11c(0x01)
	enum class EBoneModificationMode RotationMode; // 0x11d(0x01)
	enum class EBoneModificationMode ScaleMode; // 0x11e(0x01)
	enum class EBoneControlSpace TranslationSpace; // 0x11f(0x01)
	enum class EBoneControlSpace RotationSpace; // 0x120(0x01)
	enum class EBoneControlSpace ScaleSpace; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
};

// ScriptStruct Mist.MistAccountAuthStubData
// Size: 0x20 (Inherited: 0x00)
struct FMistAccountAuthStubData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.MistAccountCharacterRealmTileData
// Size: 0x28 (Inherited: 0x00)
struct FMistAccountCharacterRealmTileData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Mist.MistAccountCharacterClanData
// Size: 0x48 (Inherited: 0x00)
struct FMistAccountCharacterClanData {
	char pad_0[0x30]; // 0x00(0x30)
	struct UTexture2D* Emblem; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct Mist.MistAccountStubData
// Size: 0x20 (Inherited: 0x00)
struct FMistAccountStubData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.AggroEntry
// Size: 0x20 (Inherited: 0x00)
struct FAggroEntry {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.TargetDescription
// Size: 0x10 (Inherited: 0x00)
struct FTargetDescription {
	struct AActor* AllowedTargetType; // 0x00(0x08)
	float AggroMultiplier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.MistAiBehavior
// Size: 0x10 (Inherited: 0x00)
struct FMistAiBehavior {
	struct UMistAiBehaviorHandler* BehaviorHandler; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
};

// ScriptStruct Mist.AiScanTarget
// Size: 0x20 (Inherited: 0x00)
struct FAiScanTarget {
	struct AActor* Target; // 0x00(0x08)
	float Distance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAiScanComponent* ScanComponent; // 0x10(0x08)
	bool bShouldAttack; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float TargetSignificance; // 0x1c(0x04)
};

// ScriptStruct Mist.MistAmbietSoundSettings
// Size: 0x28 (Inherited: 0x00)
struct FMistAmbietSoundSettings {
	struct FName BiomeAName; // 0x00(0x08)
	struct FName BiomeBName; // 0x08(0x08)
	struct USoundBase* Sound; // 0x10(0x08)
	struct TArray<struct FMistSoundInstanceParams> Params; // 0x18(0x10)
};

// ScriptStruct Mist.MistSoundInstanceParams
// Size: 0x10 (Inherited: 0x00)
struct FMistSoundInstanceParams {
	float MinRadius; // 0x00(0x04)
	float MaxRadius; // 0x04(0x04)
	float Delay; // 0x08(0x04)
	float Possibility; // 0x0c(0x04)
};

// ScriptStruct Mist.AnimPose_CMM
// Size: 0x3c (Inherited: 0x00)
struct FAnimPose_CMM {
	char pad_0[0x34]; // 0x00(0x34)
	int32_t AnimSequenceIndex; // 0x34(0x04)
	char pad_38[0x4]; // 0x38(0x04)
};

// ScriptStruct Mist.LocomotionAnimContainer
// Size: 0x18 (Inherited: 0x00)
struct FLocomotionAnimContainer {
	struct TArray<struct FMistAnimMap> Anims; // 0x00(0x10)
	enum class EMistLocomotionAnimType AnimType; // 0x10(0x01)
	enum class ELocomotionState AnimState; // 0x11(0x01)
	enum class ECombatDirection CombatDirection; // 0x12(0x01)
	bool bCombat; // 0x13(0x01)
	bool bCycle; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Mist.MistAnimMap
// Size: 0x50 (Inherited: 0x00)
struct FMistAnimMap {
	struct UAnimationAsset* AnimationAsset; // 0x00(0x08)
	struct UBlendSpaceBase* SlopeMovementAsset; // 0x08(0x08)
	struct TArray<enum class ECardinalDirection> Directions; // 0x10(0x10)
	struct TArray<struct FCMM_Event> Events; // 0x20(0x10)
	float VerticalAnimAngle; // 0x30(0x04)
	enum class EMistLocomotionAnimType AnimType; // 0x34(0x01)
	enum class ELocomotionState AnimState; // 0x35(0x01)
	bool bCombat; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	struct FIntPoint PoseRange; // 0x38(0x08)
	enum class ECombatDirection CombatDirection; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector AdditionalInfo; // 0x44(0x0c)
};

// ScriptStruct Mist.CMM_Event
// Size: 0x18 (Inherited: 0x00)
struct FCMM_Event {
	enum class ECMM_EventTag Tag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FIntPoint EventRange; // 0x04(0x08)
	int32_t AnimIndex; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Mist.MistAnimLink
// Size: 0x10 (Inherited: 0x00)
struct FMistAnimLink {
	struct UAnimationAsset* LinkedAnim; // 0x00(0x08)
	enum class ECardinalDirection MovementDirection; // 0x08(0x01)
	int8_t LinkDirection; // 0x09(0x01)
	char LinkPoseIndex; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct Mist.MotionMatchingMetaData
// Size: 0x20 (Inherited: 0x00)
struct FMotionMatchingMetaData {
	struct TArray<struct FAnimPose> Poses; // 0x00(0x10)
	struct TArray<struct FPoseSimilarities> Similarities; // 0x10(0x10)
};

// ScriptStruct Mist.PoseSimilarities
// Size: 0x20 (Inherited: 0x00)
struct FPoseSimilarities {
	struct TArray<float> Similarities; // 0x00(0x10)
	struct TArray<int32_t> SimilarityIndexRanges; // 0x10(0x10)
};

// ScriptStruct Mist.CharacterMinimalPoseDesc
// Size: 0xb0 (Inherited: 0x00)
struct FCharacterMinimalPoseDesc {
	struct FVector LocalVelocity; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat PelvisRot; // 0x10(0x10)
	struct FVector PelvisPos; // 0x20(0x0c)
	struct FVector PelvisVel; // 0x2c(0x0c)
	struct FVector LeftFootPos; // 0x38(0x0c)
	struct FVector LeftFootVel; // 0x44(0x0c)
	struct FVector RightFootPos; // 0x50(0x0c)
	struct FVector RightFootVel; // 0x5c(0x0c)
	struct FVector LeftHandPos; // 0x68(0x0c)
	struct FVector LeftHandVel; // 0x74(0x0c)
	struct FVector RightHandPos; // 0x80(0x0c)
	struct FVector RightHandVel; // 0x8c(0x0c)
	struct FVector HeadPos; // 0x98(0x0c)
	struct FVector HeadVel; // 0xa4(0x0c)
};

// ScriptStruct Mist.AnimPose
// Size: 0xf0 (Inherited: 0x00)
struct FAnimPose {
	struct FVector FuturePositions[0x3]; // 0x00(0x24)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FCharacterMinimalPoseDesc MinimalPoseDesc; // 0x30(0xb0)
	float Time; // 0xe0(0x04)
	struct FVector AdditionalInfo; // 0xe4(0x0c)
};

// ScriptStruct Mist.CharacterBonePoseDesc
// Size: 0x58 (Inherited: 0x00)
struct FCharacterBonePoseDesc {
	int32_t OwnerSequenceIndex; // 0x00(0x04)
	float PoseTime; // 0x04(0x04)
	struct FVector LocalVelocity; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVector> BonePositions; // 0x18(0x10)
	struct TArray<struct FQuat> BoneRotations; // 0x28(0x10)
	struct TArray<struct FVector> BoneLinearVelocities; // 0x38(0x10)
	struct TArray<struct FQuat> BoneAngularVelocities; // 0x48(0x10)
};

// ScriptStruct Mist.BoneImportanceMultipliers
// Size: 0x38 (Inherited: 0x00)
struct FBoneImportanceMultipliers {
	struct TArray<struct FName> BoneNames; // 0x00(0x10)
	struct TArray<float> TranslationMults; // 0x10(0x10)
	struct TArray<float> RotationMults; // 0x20(0x10)
	float RootVelocityMultiplier; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Mist.MistMotionMatchingUpdateContext
// Size: 0x08 (Inherited: 0x00)
struct FMistMotionMatchingUpdateContext {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Mist.MistMotionMatchingSearchContext
// Size: 0x48 (Inherited: 0x00)
struct FMistMotionMatchingSearchContext {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Mist.MistStanceDirectionMap
// Size: 0x50 (Inherited: 0x00)
struct FMistStanceDirectionMap {
	struct TMap<enum class ECombatDirection, enum class ECombatStance> StanceMap; // 0x00(0x50)
};

// ScriptStruct Mist.MistLocomotionDebugMessage
// Size: 0x18 (Inherited: 0x00)
struct FMistLocomotionDebugMessage {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Mist.MistMeleeAttackAnimData
// Size: 0x40 (Inherited: 0x00)
struct FMistMeleeAttackAnimData {
	struct UAnimationAsset* AnimationAsset; // 0x00(0x08)
	struct UAnimationAsset* ImpactAnimationAsset; // 0x08(0x08)
	enum class EMeleeAttackObject WeaponObject; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FMistMeleeAttackData> WeaponTransforms; // 0x18(0x10)
	bool bIsEnabled; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DamageMod; // 0x2c(0x04)
	float FullPowerDamageMod; // 0x30(0x04)
	struct FName OverrideWeaponTipSocket; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Mist.MistMeleeAttackData
// Size: 0x50 (Inherited: 0x00)
struct FMistMeleeAttackData {
	struct UAnimSequence* Animation; // 0x00(0x08)
	float RateScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> Timestamps; // 0x10(0x10)
	struct TArray<float> SweetspotValues; // 0x20(0x10)
	struct TArray<struct FTransform> WeaponTransform; // 0x30(0x10)
	struct TArray<struct FTransform> PelvisTransform; // 0x40(0x10)
};

// ScriptStruct Mist.MistAnimPosition
// Size: 0x14 (Inherited: 0x00)
struct FMistAnimPosition {
	float Position; // 0x00(0x04)
	bool bLoop; // 0x04(0x01)
	bool bBreakOut; // 0x05(0x01)
	char pad_6[0xe]; // 0x06(0x0e)
};

// ScriptStruct Mist.MistAnimCardinalDirectionParams
// Size: 0x38 (Inherited: 0x00)
struct FMistAnimCardinalDirectionParams {
	struct FName StructName; // 0x00(0x08)
	struct FVector2D VelocityForwardAngle; // 0x08(0x08)
	struct FVector2D VelocityRightAngle; // 0x10(0x08)
	struct FVector2D VelocityLeftAngle; // 0x18(0x08)
	struct FVector2D AccelForwardAngle; // 0x20(0x08)
	struct FVector2D AccelRightAngle; // 0x28(0x08)
	struct FVector2D AccelLeftAngle; // 0x30(0x08)
};

// ScriptStruct Mist.MistAreaDamageEvent
// Size: 0x28 (Inherited: 0x10)
struct FMistAreaDamageEvent : FDamageEvent {
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Mist.MistAreaEffectItem
// Size: 0x38 (Inherited: 0x00)
struct FMistAreaEffectItem {
	struct USceneComponent* AttachComponent; // 0x00(0x08)
	struct UMistAreaEffectComponent* EffectComponent; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	float Width; // 0x28(0x04)
	float Height; // 0x2c(0x04)
	float LifeTimeLeft; // 0x30(0x04)
	enum class EEffectItemState EffectItemState; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Mist.MistAreaEffectAffectedActor
// Size: 0x10 (Inherited: 0x00)
struct FMistAreaEffectAffectedActor {
	struct AActor* Actor; // 0x00(0x08)
	float Time; // 0x08(0x04)
	float TotalTime; // 0x0c(0x04)
};

// ScriptStruct Mist.MistDebrisSpawnEntry
// Size: 0x30 (Inherited: 0x00)
struct FMistDebrisSpawnEntry {
	struct UCurveFloat* MinDebrisHeadsUp; // 0x00(0x08)
	struct UCurveFloat* MaxDebrisHeadsUp; // 0x08(0x08)
	struct UCurveFloat* MaxDebrisSplitAngle; // 0x10(0x08)
	struct AMistAsteroidActor* DebrisAsteroidClass; // 0x18(0x08)
	struct UCurveFloat* DebrisSpawnProbability; // 0x20(0x08)
	bool StartFromOrigin; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Mist.MistConsideredWidgetComponentsData
// Size: 0x10 (Inherited: 0x00)
struct FMistConsideredWidgetComponentsData {
	struct UMistAttackDirectionWidgetComponent* Component; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Mist.MistAudioLevelVisualisationStyle
// Size: 0x1a0 (Inherited: 0x08)
struct FMistAudioLevelVisualisationStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImage; // 0x08(0x88)
	struct FSlateBrush FillImage; // 0x90(0x88)
	struct FSlateBrush BarImage; // 0x118(0x88)
};

// ScriptStruct Mist.MistOcclusionSettings
// Size: 0x10 (Inherited: 0x00)
struct FMistOcclusionSettings {
	bool bEnableOcclusion; // 0x00(0x01)
	enum class ECollisionChannel OcclusionTraceChannel; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float OcclusionLowPassFilterFrequency; // 0x04(0x04)
	float OcclusionVolumeAttenuation; // 0x08(0x04)
	float OcclusionInterpolationTime; // 0x0c(0x04)
};

// ScriptStruct Mist.MistAudioTestSettings
// Size: 0x18 (Inherited: 0x00)
struct FMistAudioTestSettings {
	float MinRandomTime; // 0x00(0x04)
	float MaxRandomTime; // 0x04(0x04)
	struct UBehaviorTree* Tree; // 0x08(0x08)
	struct UBlackboardData* Blackboard; // 0x10(0x08)
};

// ScriptStruct Mist.MistSiegeWeapon
// Size: 0x38 (Inherited: 0x00)
struct FMistSiegeWeapon {
	char pad_0[0x10]; // 0x00(0x10)
	struct AMistStructurePart* Structure; // 0x10(0x08)
	struct TScriptInterface<IMistBotControllableInterface> BotControllable; // 0x18(0x10)
	struct AMistSiegeWeaponTestBot* Bot; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Mist.MistApiRealmTileIdentifier
// Size: 0x10 (Inherited: 0x00)
struct FMistApiRealmTileIdentifier {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Mist.MistApiRealmCharacterIdentifier
// Size: 0x10 (Inherited: 0x00)
struct FMistApiRealmCharacterIdentifier {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Mist.MistBackendError
// Size: 0x38 (Inherited: 0x00)
struct FMistBackendError {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Mist.MistStructurePartData
// Size: 0x10 (Inherited: 0x00)
struct FMistStructurePartData {
	struct AMistBaseStructurePart* Part; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Mist.MistRandomizingTableRow
// Size: 0x10 (Inherited: 0x08)
struct FMistRandomizingTableRow : FTableRowBase {
	float ProbabilityWeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.BringItemQuestGeneratorRow
// Size: 0x28 (Inherited: 0x10)
struct FBringItemQuestGeneratorRow : FMistRandomizingTableRow {
	struct UMistItemTemplate* ItemClass; // 0x10(0x08)
	int32_t MinQuantity; // 0x18(0x04)
	int32_t MaxQuantity; // 0x1c(0x04)
	int32_t FlotsPerItem; // 0x20(0x04)
	int32_t ExpPerItem; // 0x24(0x04)
};

// ScriptStruct Mist.MistPlacementSnapPoint
// Size: 0x20 (Inherited: 0x00)
struct FMistPlacementSnapPoint {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	int32_t ItemIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMistSnapPointTemplateDesc Point; // 0x10(0x10)
};

// ScriptStruct Mist.MistBuildingCategory
// Size: 0x18 (Inherited: 0x00)
struct FMistBuildingCategory {
	struct UMistItemCategory* Category; // 0x00(0x08)
	struct TArray<struct UMistPlaceableTemplate*> PlaceableTemplates; // 0x08(0x10)
};

// ScriptStruct Mist.MistCraftingPartsInformation
// Size: 0x0c (Inherited: 0x00)
struct FMistCraftingPartsInformation {
	enum class EMistMaterialProtection Protection; // 0x00(0x04)
	float MaxHp; // 0x04(0x04)
	float Torque; // 0x08(0x04)
};

// ScriptStruct Mist.MistCharacterCustomizationStaticMesh
// Size: 0x78 (Inherited: 0x00)
struct FMistCharacterCustomizationStaticMesh {
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x00(0x28)
	struct TMap<struct FName, struct TSoftObjectPtr<UMaterialInterface>> Materials; // 0x28(0x50)
};

// ScriptStruct Mist.MistCharacterCustomizationSkeletalMesh
// Size: 0x78 (Inherited: 0x00)
struct FMistCharacterCustomizationSkeletalMesh {
	struct TSoftObjectPtr<USkeletalMesh> Mesh; // 0x00(0x28)
	struct TMap<struct FName, struct TSoftObjectPtr<UMaterialInterface>> Materials; // 0x28(0x50)
};

// ScriptStruct Mist.ParticleSystemTemplate
// Size: 0x18 (Inherited: 0x00)
struct FParticleSystemTemplate {
	struct UFXSystemAsset* ParticleSystem; // 0x00(0x08)
	float MinimumVelocity; // 0x08(0x04)
	float MinimumVelocityDelta; // 0x0c(0x04)
	float MinimumTimeBetweenTriggers; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Mist.MistCharacterVFXSystem
// Size: 0x90 (Inherited: 0x00)
struct FMistCharacterVFXSystem {
	struct TMap<enum class ECharacterFootstepType, struct FParticleSystemTemplate> ParticleSystemTemplates; // 0x00(0x50)
	struct FParticleSystemTemplate DefaultParticleSystemTemplate; // 0x50(0x18)
	struct FParticleSystemTemplate DirectionChangeParticleSystemTemplate; // 0x68(0x18)
	struct TArray<struct UVirtualLandscapeLayer*> LandscapeLayers; // 0x80(0x10)
};

// ScriptStruct Mist.MistCharacterDisplacementTrack
// Size: 0x98 (Inherited: 0x00)
struct FMistCharacterDisplacementTrack {
	struct FVector Direction; // 0x00(0x0c)
	struct FRotator RotationRate; // 0x0c(0x0c)
	float Duration; // 0x18(0x04)
	float BlendInOutRatio; // 0x1c(0x04)
	float CurrentTime; // 0x20(0x04)
	float DefaultInputAcceleration; // 0x24(0x04)
	float Alpha; // 0x28(0x04)
	float SpeedReduction; // 0x2c(0x04)
	struct FAlphaBlend SpeedBlend; // 0x30(0x30)
	struct FAlphaBlend AccelerationBlend; // 0x60(0x30)
	char pad_90[0x8]; // 0x90(0x08)
};

// ScriptStruct Mist.MistGrapplingStateParams
// Size: 0x1a0 (Inherited: 0x00)
struct FMistGrapplingStateParams {
	struct AActor* hook; // 0x00(0x08)
	char pad_8[0x150]; // 0x08(0x150)
	struct UMistTetherSlaveComponent* LinkedTetherComponent; // 0x158(0x08)
	char pad_160[0x40]; // 0x160(0x40)
};

// ScriptStruct Mist.MistDisplacementTrackParams
// Size: 0x38 (Inherited: 0x00)
struct FMistDisplacementTrackParams {
	float TargetVelocity; // 0x00(0x04)
	float TargetAcceleration; // 0x04(0x04)
	float Duration; // 0x08(0x04)
	float BlendInOutRatio; // 0x0c(0x04)
	float RotationRate; // 0x10(0x04)
	struct FVector Direction; // 0x14(0x0c)
	float Alpha; // 0x20(0x04)
	enum class EAlphaBlendOption SpeedBlendOption; // 0x24(0x01)
	enum class EAlphaBlendOption AccelBlendOption; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct UCurveFloat* SpeedCustomCurve; // 0x28(0x08)
	struct UCurveFloat* AccelCustomCurve; // 0x30(0x08)
};

// ScriptStruct Mist.MistRootMotionCorrectionData
// Size: 0x28 (Inherited: 0x00)
struct FMistRootMotionCorrectionData {
	float AnimPosition; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	float CorrectionWindowStart; // 0x08(0x04)
	struct FVector TotalTranslationError; // 0x0c(0x0c)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Mist.CheatLog
// Size: 0x30 (Inherited: 0x00)
struct FCheatLog {
	struct FName CheatFName; // 0x00(0x08)
	struct FString PlayerName; // 0x08(0x10)
	struct FDateTime TimeUsed; // 0x18(0x08)
	struct FString ValueSet; // 0x20(0x10)
};

// ScriptStruct Mist.MistAdminData
// Size: 0xa0 (Inherited: 0x00)
struct FMistAdminData {
	struct TMap<struct FString, struct FMistCheatingItemSet> ItemSets; // 0x00(0x50)
	struct TMap<struct FString, struct FMistCheatingCommandsList> CommandSets; // 0x50(0x50)
};

// ScriptStruct Mist.MistCheatingCommandsList
// Size: 0x10 (Inherited: 0x00)
struct FMistCheatingCommandsList {
	struct TArray<struct FString> Commands; // 0x00(0x10)
};

// ScriptStruct Mist.MistCheatingItemSet
// Size: 0x50 (Inherited: 0x00)
struct FMistCheatingItemSet {
	struct TMap<struct UMistItemTemplate*, int32_t> Items; // 0x00(0x50)
};

// ScriptStruct Mist.MistIntroSceneAllowedMap
// Size: 0x20 (Inherited: 0x00)
struct FMistIntroSceneAllowedMap {
	struct FString MapName; // 0x00(0x10)
	struct FVector MapOffset; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.MistTrackingHutData
// Size: 0x50 (Inherited: 0x00)
struct FMistTrackingHutData {
	int64_t CharacterId; // 0x00(0x08)
	struct FString CharacterName; // 0x08(0x10)
	int64_t ClanId; // 0x18(0x08)
	struct FString ClanName; // 0x20(0x10)
	struct FVector HutLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UMistMapIconComponent* IconComponent; // 0x40(0x08)
	float EndTrackingTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Mist.MistClaimCharacterInfo
// Size: 0x18 (Inherited: 0x00)
struct FMistClaimCharacterInfo {
	struct FDateTime HarvestedDate; // 0x00(0x08)
	int32_t HarvestedAmount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FDateTime MurderedDate; // 0x10(0x08)
};

// ScriptStruct Mist.MistClaimMurderInfo
// Size: 0x18 (Inherited: 0x00)
struct FMistClaimMurderInfo {
	struct UMistMapIconComponent* IconComponent; // 0x00(0x08)
	struct FVector MurderLocation; // 0x08(0x0c)
	float MurderTime; // 0x14(0x04)
};

// ScriptStruct Mist.MistClaimContenderInfo
// Size: 0x48 (Inherited: 0x00)
struct FMistClaimContenderInfo {
	struct UMistClaimingWalkerComponent* Owner; // 0x00(0x08)
	struct UMistMapIconComponent* IconComponent; // 0x08(0x08)
	struct FVector ClaimLocation; // 0x10(0x0c)
	float ActivationTime; // 0x1c(0x04)
	struct FMistClanInfo OwnerClan; // 0x20(0x20)
	int32_t ContenderId; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Mist.MistClanEmblemTableRow
// Size: 0x30 (Inherited: 0x08)
struct FMistClanEmblemTableRow : FTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x08(0x28)
};

// ScriptStruct Mist.MistClanColorTableRow
// Size: 0x18 (Inherited: 0x08)
struct FMistClanColorTableRow : FTableRowBase {
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct Mist.MistOwnershipCharacter
// Size: 0x30 (Inherited: 0x00)
struct FMistOwnershipCharacter {
	int64_t ID; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	struct FString AccountName; // 0x18(0x10)
	enum class EMistGamePlatform AccountPlatform; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Mist.MistClanActionData
// Size: 0x38 (Inherited: 0x00)
struct FMistClanActionData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Mist.MistClanGetConfigStubData
// Size: 0x20 (Inherited: 0x00)
struct FMistClanGetConfigStubData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.MistClanGetBankBalanceStubData
// Size: 0x20 (Inherited: 0x00)
struct FMistClanGetBankBalanceStubData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.ClearRupuCampGeneratorRow
// Size: 0x28 (Inherited: 0x10)
struct FClearRupuCampGeneratorRow : FMistRandomizingTableRow {
	struct AMistMobCamp* CampType; // 0x10(0x08)
	int32_t MinAmount; // 0x18(0x04)
	int32_t MaxAmount; // 0x1c(0x04)
	int32_t FlotsPerCamp; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Mist.MistDebugCombatLogItemWeaponData
// Size: 0x90 (Inherited: 0x00)
struct FMistDebugCombatLogItemWeaponData {
	bool bHasWeapon; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
	enum class ECombatAction Action; // 0x18(0x01)
	enum class ECombatDirection Direction; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float TimeSweetspot; // 0x1c(0x04)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FQuat Rotation; // 0x30(0x10)
	int32_t Substeps; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FTransform PrevWeaponPos; // 0x50(0x30)
	struct UMistWeaponItemTemplate* Template; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct Mist.MistDebugCombatLogItemSkeletonData
// Size: 0x138 (Inherited: 0x00)
struct FMistDebugCombatLogItemSkeletonData {
	struct TArray<struct FMistDebugCapsuleData> CollisionCapsules; // 0x00(0x10)
	struct FName HighlightedBone; // 0x10(0x08)
	struct FVector Pelvis; // 0x18(0x0c)
	struct FVector Spine01; // 0x24(0x0c)
	struct FVector Spine02; // 0x30(0x0c)
	struct FVector Spine03; // 0x3c(0x0c)
	struct FVector Neck01; // 0x48(0x0c)
	struct FVector Head; // 0x54(0x0c)
	struct FVector ClavicleLeft; // 0x60(0x0c)
	struct FVector UpperArmLeft; // 0x6c(0x0c)
	struct FVector LowerArmLeft; // 0x78(0x0c)
	struct FVector HandLeft; // 0x84(0x0c)
	struct FVector ClavicleRight; // 0x90(0x0c)
	struct FVector UpperArmRight; // 0x9c(0x0c)
	struct FVector LowerArmRight; // 0xa8(0x0c)
	struct FVector HandRight; // 0xb4(0x0c)
	struct FVector ThighLeft; // 0xc0(0x0c)
	struct FVector CalfLeft; // 0xcc(0x0c)
	struct FVector FootLeft; // 0xd8(0x0c)
	struct FVector BallLeft; // 0xe4(0x0c)
	struct FVector ThighRight; // 0xf0(0x0c)
	struct FVector CalfRight; // 0xfc(0x0c)
	struct FVector FootRight; // 0x108(0x0c)
	struct FVector BallRight; // 0x114(0x0c)
	struct FVector Origin; // 0x120(0x0c)
	struct FVector Direction; // 0x12c(0x0c)
};

// ScriptStruct Mist.MistDebugCombatLogItem
// Size: 0x3f0 (Inherited: 0x00)
struct FMistDebugCombatLogItem {
	bool bHasData; // 0x00(0x01)
	bool bHasHitData; // 0x01(0x01)
	bool bHasDefenderData; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t Number; // 0x04(0x04)
	bool bWasBlocked; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Damage; // 0x0c(0x04)
	struct FVector ImpactLocation; // 0x10(0x0c)
	struct FVector HitShapeLocation; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
	struct FQuat HitShapeRotation; // 0x30(0x10)
	float HitShapeRadius; // 0x40(0x04)
	float HitShapeHalfHeight; // 0x44(0x04)
	float PenetrationDepth; // 0x48(0x04)
	struct FName HitBoneName; // 0x4c(0x08)
	bool bHasHitHappened; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FMistDebugCombatLogItemSkeletonData AttackerSkeleton; // 0x58(0x138)
	struct FMistDebugCombatLogItemWeaponData AttackerWeapon; // 0x190(0x90)
	struct FMistDebugCombatLogItemSkeletonData DefenderSkeleton; // 0x220(0x138)
	char pad_358[0x8]; // 0x358(0x08)
	struct FMistDebugCombatLogItemWeaponData DefenderWeapon; // 0x360(0x90)
};

// ScriptStruct Mist.MistDebugCapsuleData
// Size: 0x40 (Inherited: 0x00)
struct FMistDebugCapsuleData {
	struct FName BoneName; // 0x00(0x08)
	float Radius; // 0x08(0x04)
	float HalfHeight; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Mist.MistHitObjectEffects
// Size: 0x48 (Inherited: 0x08)
struct FMistHitObjectEffects : FTableRowBase {
	enum class EPhysicalSurface WeaponSurfaceType; // 0x08(0x01)
	enum class EPhysicalSurface TargetSurfaceType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct USoundCue* SoundCue; // 0x10(0x08)
	struct USoundCue* ChamberedSoundCue; // 0x18(0x08)
	struct UParticleSystem* Particles; // 0x20(0x08)
	float Volume; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UMaterialInstance* HitDecal; // 0x30(0x08)
	struct FVector DecalScale; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Mist.MistCombatLandedHitEffects
// Size: 0x20 (Inherited: 0x08)
struct FMistCombatLandedHitEffects : FTableRowBase {
	enum class EPhysicalSurface WeaponSurfaceType; // 0x08(0x01)
	enum class EPhysicalSurface TargetSurfaceType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float Threshold1; // 0x0c(0x04)
	float Threshold2; // 0x10(0x04)
	float Threshold3; // 0x14(0x04)
	struct USoundCue* SoundCue; // 0x18(0x08)
};

// ScriptStruct Mist.MistConsumableItem
// Size: 0x18 (Inherited: 0x00)
struct FMistConsumableItem {
	struct UMistConsumableItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.MistEdibleItem
// Size: 0x18 (Inherited: 0x00)
struct FMistEdibleItem {
	struct UMistEdibleItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.MistContainerFilterParams
// Size: 0xa0 (Inherited: 0x00)
struct FMistContainerFilterParams {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Mist.MistContainerDecayItem
// Size: 0x10 (Inherited: 0x00)
struct FMistContainerDecayItem {
	struct UMistItemTemplate* ItemClass; // 0x00(0x08)
	int32_t Quantity; // 0x08(0x04)
	int32_t MinimalQuantityToDecay; // 0x0c(0x04)
};

// ScriptStruct Mist.MistControlScheme
// Size: 0x10 (Inherited: 0x00)
struct FMistControlScheme {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* Object; // 0x08(0x08)
};

// ScriptStruct Mist.MistCraftingState
// Size: 0xa0 (Inherited: 0x00)
struct FMistCraftingState {
	struct TArray<struct FMistCraftingSlot> Slots; // 0x00(0x10)
	struct TArray<struct UMistContainerComponent*> Containers; // 0x10(0x10)
	struct TArray<struct UMistUnlockableTreeItem*> RequiredUnlockables; // 0x20(0x10)
	struct TMap<struct FName, int32_t> RequiredShopItems; // 0x30(0x50)
	int32_t TargetQuality; // 0x80(0x04)
	int32_t CraftingStationQuality; // 0x84(0x04)
	bool bUseHighestQualityInput; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t TargetQuantity; // 0x8c(0x04)
	struct AActor* Actor; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct Mist.MistCraftingSlot
// Size: 0x18 (Inherited: 0x00)
struct FMistCraftingSlot {
	struct UMistItemTemplate* ItemTemplate; // 0x00(0x08)
	int32_t RequiredQuantity; // 0x08(0x04)
	int32_t AvailableQuantity; // 0x0c(0x04)
	float AvailableAverageQuality; // 0x10(0x04)
	bool bUseItemFromGround; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Mist.MistArmorDefense
// Size: 0x08 (Inherited: 0x00)
struct FMistArmorDefense {
	float Soak; // 0x00(0x04)
	float Reduce; // 0x04(0x04)
};

// ScriptStruct Mist.MistDataSubscription
// Size: 0x60 (Inherited: 0x00)
struct FMistDataSubscription {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Mist.MistDataState
// Size: 0x70 (Inherited: 0x00)
struct FMistDataState {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct Mist.MistStringTableRow
// Size: 0x18 (Inherited: 0x08)
struct FMistStringTableRow : FTableRowBase {
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Mist.DeviceLightingStruct
// Size: 0x28 (Inherited: 0x00)
struct FDeviceLightingStruct {
	struct FLinearColor InitialColor; // 0x00(0x10)
	struct FLinearColor FinalColor; // 0x10(0x10)
	enum class EDeviceLightingDevice DeviceType; // 0x20(0x01)
	enum class EDeviceLightingStyle Style; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float Speed; // 0x24(0x04)
};

// ScriptStruct Mist.MistDistanceConstraint
// Size: 0xb0 (Inherited: 0x00)
struct FMistDistanceConstraint {
	float MinDistance; // 0x00(0x04)
	float MaxDistance; // 0x04(0x04)
	bool bMinDistanceEnabled; // 0x08(0x01)
	bool bMaxDistanceEnabled; // 0x09(0x01)
	bool bCollisionEnabled; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct UPrimitiveComponent* SourceComponent; // 0x10(0x08)
	struct UPrimitiveComponent* TargetComponent; // 0x18(0x08)
	struct FName SourceSocketName; // 0x20(0x08)
	struct FName TargetSocketName; // 0x28(0x08)
	struct FTransform SourceRefFrame; // 0x30(0x30)
	struct FTransform TargetRefFrame; // 0x60(0x30)
	bool bSpringEnabled; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float SpringStiffness; // 0x94(0x04)
	float SpringDamping; // 0x98(0x04)
	char pad_9C[0x14]; // 0x9c(0x14)
};

// ScriptStruct Mist.MistDormancyGridDebugEntry
// Size: 0x10 (Inherited: 0x00)
struct FMistDormancyGridDebugEntry {
	struct AMistPlayer* Player; // 0x00(0x08)
	int16_t CellX; // 0x08(0x02)
	int16_t CellY; // 0x0a(0x02)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.MistMapFilterEntry
// Size: 0x10 (Inherited: 0x00)
struct FMistMapFilterEntry {
	struct UCheckBox* FilterCheck; // 0x00(0x08)
	struct FName FilterName; // 0x08(0x08)
};

// ScriptStruct Mist.MistPouchItem
// Size: 0x18 (Inherited: 0x00)
struct FMistPouchItem {
	struct UMistPouchItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.MistGrapplingHookAttachmentItem
// Size: 0x18 (Inherited: 0x00)
struct FMistGrapplingHookAttachmentItem {
	struct UMistGrapplingHookAttachmentItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.MistArmorItem
// Size: 0x18 (Inherited: 0x00)
struct FMistArmorItem {
	struct UMistArmorItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.MistGrapplingHookItem
// Size: 0x18 (Inherited: 0x00)
struct FMistGrapplingHookItem {
	struct UMistGrapplingHookItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.MistExoskeletonGunState
// Size: 0x48 (Inherited: 0x00)
struct FMistExoskeletonGunState {
	struct FMistComponentReference GunShotPoint; // 0x00(0x28)
	enum class EExoskeletonGunSide Side; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TScriptInterface<IMistExoskeletonWeaponControlInterface> GunInteface; // 0x30(0x10)
	struct AMistExoskeletonWeapon* WeaponActor; // 0x40(0x08)
};

// ScriptStruct Mist.MistExpandableSelectionCategory
// Size: 0x28 (Inherited: 0x00)
struct FMistExpandableSelectionCategory {
	struct FText Name; // 0x00(0x18)
	struct TArray<struct UObject*> Items; // 0x18(0x10)
};

// ScriptStruct Mist.MistFallingTreeCueSettings
// Size: 0x38 (Inherited: 0x00)
struct FMistFallingTreeCueSettings {
	struct USoundBase* Sound; // 0x00(0x08)
	float Offset; // 0x08(0x04)
	float StartingTime; // 0x0c(0x04)
	float FadeOutTime; // 0x10(0x04)
	float Volume; // 0x14(0x04)
	float Pitch; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct USoundAttenuation* Attenuation; // 0x20(0x08)
	struct USoundConcurrency* Concurrency; // 0x28(0x08)
	struct UAudioComponent* SpawnedAudioComponent; // 0x30(0x08)
};

// ScriptStruct Mist.MistFallingTreeSoundSettings
// Size: 0xa8 (Inherited: 0x00)
struct FMistFallingTreeSoundSettings {
	struct FMistFallingTreeCueSettings StartFallingSound; // 0x00(0x38)
	struct FMistFallingTreeCueSettings StartFallingSound2; // 0x38(0x38)
	struct FMistFallingTreeCueSettings EndFallingSound; // 0x70(0x38)
};

// ScriptStruct Mist.MistGrowingFoliageServer
// Size: 0x28 (Inherited: 0x00)
struct FMistGrowingFoliageServer {
	bool Active; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t InstanceIndex; // 0x04(0x04)
	struct UMistFarmableTemplate* Template; // 0x08(0x08)
	enum class EGrowState GrowState; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float WaterLevel; // 0x14(0x04)
	float Efficiency; // 0x18(0x04)
	float StageCompleation; // 0x1c(0x04)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Mist.MistGrowingFoliageClient
// Size: 0x05 (Inherited: 0x00)
struct FMistGrowingFoliageClient {
	bool Active; // 0x00(0x01)
	char PosX; // 0x01(0x01)
	char PosY; // 0x02(0x01)
	char FoliageId; // 0x03(0x01)
	enum class EGrowState GrowState; // 0x04(0x01)
};

// ScriptStruct Mist.HarvestingCapabilities
// Size: 0x28 (Inherited: 0x00)
struct FHarvestingCapabilities {
	enum class EMistFoliageHarvestingType HarvestingType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMistToolTier> ToolTiers; // 0x08(0x10)
	bool bIgnoreDamage; // 0x18(0x01)
	bool bRequireHarvestingEntry; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct UObject* TargetActorOrContainer; // 0x20(0x08)
};

// ScriptStruct Mist.MistFoliageInteractionInfoRow
// Size: 0x68 (Inherited: 0x08)
struct FMistFoliageInteractionInfoRow : FTableRowBase {
	struct UMistFoliageComponent* FoliageComponent; // 0x08(0x08)
	enum class EMistFoliageHarvestingType HarvestingType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MaxLootOutputs; // 0x14(0x04)
	struct UMistItemTemplate* LootItem; // 0x18(0x08)
	int32_t LootMinCount; // 0x20(0x04)
	int32_t LootMaxCount; // 0x24(0x04)
	int32_t ExperienceReward; // 0x28(0x04)
	enum class EEquipmentTool ToolType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t ToolTier; // 0x30(0x04)
	float ToolLevelDamageBonus; // 0x34(0x04)
	float ToolLevelQuantityBonus; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct AActor* ReplacementActorOnDestruction; // 0x40(0x08)
	float DurabilityDamage; // 0x48(0x04)
	int32_t DiscoveryReward; // 0x4c(0x04)
	float Chance; // 0x50(0x04)
	float ToolLevelChanceBonus; // 0x54(0x04)
	struct FName InteractionDiscoveryId; // 0x58(0x08)
	enum class EHarvestingIcon HarvestingIcon; // 0x60(0x01)
	bool bHideDiscovery; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct Mist.MistFoliageTypeInfoRow
// Size: 0x98 (Inherited: 0x08)
struct FMistFoliageTypeInfoRow : FTableRowBase {
	struct UMistFoliageComponent* FoliageComponent; // 0x08(0x08)
	struct FText InteractionText; // 0x10(0x18)
	struct FName InteractionTag; // 0x28(0x08)
	float MaxHealth; // 0x30(0x04)
	float Armor; // 0x34(0x04)
	bool bRespawn; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t RespawnMin; // 0x3c(0x04)
	int32_t RespawnMax; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FText InfoName; // 0x48(0x18)
	struct FName FoliageGroupName; // 0x60(0x08)
	struct FText InfoDescription; // 0x68(0x18)
	struct UTexture2D* InfoImage; // 0x80(0x08)
	struct AActor* ClientInstanceDestroyedActorClass; // 0x88(0x08)
	bool bDestructibleByRamming; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Mist.RuntimeSoundData
// Size: 0x38 (Inherited: 0x00)
struct FRuntimeSoundData {
	char pad_0[0x18]; // 0x00(0x18)
	struct UCurveFloat* SpeedCurve; // 0x18(0x08)
	struct UAudioComponent* AudioComponent; // 0x20(0x08)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct Mist.RuntimeSoundCharacterData
// Size: 0x58 (Inherited: 0x38)
struct FRuntimeSoundCharacterData : FRuntimeSoundData {
	struct AMistCharacter* Character; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
};

// ScriptStruct Mist.MistFoliageRustleSoundData
// Size: 0x70 (Inherited: 0x00)
struct FMistFoliageRustleSoundData {
	struct FString RowName; // 0x00(0x10)
	bool bOverrideMeshes; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UMistItemTemplate* LootItem; // 0x18(0x08)
	struct TArray<struct UStaticMesh*> Meshes; // 0x20(0x10)
	struct USoundBase* RustleSound; // 0x30(0x08)
	float Radius; // 0x38(0x04)
	float CheckingZOffset; // 0x3c(0x04)
	float Volume; // 0x40(0x04)
	float FadeOutTime; // 0x44(0x04)
	float FadeOutVolume; // 0x48(0x04)
	float DecreaseSpeed; // 0x4c(0x04)
	float IncreaseSpeed; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UCurveFloat* SpeedCurve; // 0x58(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x60(0x08)
	struct USoundConcurrency* ConcurrencySettings; // 0x68(0x08)
};

// ScriptStruct Mist.MistGameClientContext
// Size: 0x80 (Inherited: 0x00)
struct FMistGameClientContext {
	char pad_0[0x40]; // 0x00(0x40)
	struct UMistJoinQueueStatusData* JoinQueueData; // 0x40(0x08)
	char pad_48[0x38]; // 0x48(0x38)
};

// ScriptStruct Mist.MistHudCountdownOptions
// Size: 0x40 (Inherited: 0x00)
struct FMistHudCountdownOptions {
	struct FText Text; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	float Seconds; // 0x30(0x04)
	float HideAfterSeconds; // 0x34(0x04)
	bool bKeep; // 0x38(0x01)
	bool bRemoveOnBind; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Mist.MistHudMessageOptions
// Size: 0x20 (Inherited: 0x00)
struct FMistHudMessageOptions {
	struct FText MessageText; // 0x00(0x18)
	float DisplayDuration; // 0x18(0x04)
	bool bRequiresConfirmation; // 0x1c(0x01)
	bool bCountEvenIfInvisible; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Mist.MistHudLogEntryTableRow
// Size: 0xb0 (Inherited: 0x08)
struct FMistHudLogEntryTableRow : FTableRowBase {
	struct FSlateBrush Icon; // 0x08(0x88)
	struct FText Text; // 0x90(0x18)
	struct UMistFontColorAsset* FontColor; // 0xa8(0x08)
};

// ScriptStruct Mist.TargetHealthState
// Size: 0x20 (Inherited: 0x00)
struct FTargetHealthState {
	float PreviousHealth; // 0x00(0x04)
	float CurrentHealth; // 0x04(0x04)
	float RepairHealth; // 0x08(0x04)
	float MaxHealth; // 0x0c(0x04)
	float CurrentUnlock; // 0x10(0x04)
	float PreviousUnlock; // 0x14(0x04)
	float CustomHpUnlock; // 0x18(0x04)
	enum class EMistMaterialProtection HealthProtection; // 0x1c(0x04)
};

// ScriptStruct Mist.MistStructurePartInstanceConnectionMap
// Size: 0x50 (Inherited: 0x00)
struct FMistStructurePartInstanceConnectionMap {
	struct TMap<int32_t, struct FMistStructurePartInstanceConnection> Map; // 0x00(0x50)
};

// ScriptStruct Mist.MistStructurePartInstanceConnection
// Size: 0x58 (Inherited: 0x00)
struct FMistStructurePartInstanceConnection {
	int32_t InstanceIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSet<struct FMistStructurePartConnectionNode> ConnectedNodes; // 0x08(0x50)
};

// ScriptStruct Mist.MistStructurePartInstance
// Size: 0x40 (Inherited: 0x00)
struct FMistStructurePartInstance {
	struct FTransform Transform; // 0x00(0x30)
	float Health; // 0x30(0x04)
	int32_t ConnectionId; // 0x34(0x04)
	int32_t Quality; // 0x38(0x04)
	bool bIsTakingDecayDamage; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Mist.MistInteractionInfoRow
// Size: 0x40 (Inherited: 0x08)
struct FMistInteractionInfoRow : FTableRowBase {
	struct FName Key; // 0x08(0x08)
	enum class EGamepadPlatformType PlatformType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UTexture2D* Texture; // 0x18(0x08)
	struct FString ActionName; // 0x20(0x10)
	struct FLinearColor Tint; // 0x30(0x10)
};

// ScriptStruct Mist.MistICTraderItemInfo
// Size: 0x70 (Inherited: 0x00)
struct FMistICTraderItemInfo {
	struct FName ItemStoreID; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x38(0x28)
	int32_t Amount; // 0x60(0x04)
	int32_t Price; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Mist.MistInventoryTakeParams
// Size: 0xa0 (Inherited: 0x00)
struct FMistInventoryTakeParams {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Mist.MistItemCraftingRecipe
// Size: 0x68 (Inherited: 0x00)
struct FMistItemCraftingRecipe {
	struct UMistCraftingCategory* Category; // 0x00(0x08)
	struct UMistUnlockableTreeItem* RequiredUnlockable; // 0x08(0x08)
	struct TMap<struct UMistItemTemplate*, int32_t> Inputs; // 0x10(0x50)
	int32_t Quantity; // 0x60(0x04)
	float CraftingTime; // 0x64(0x04)
};

// ScriptStruct Mist.MistItemCollectionMesh
// Size: 0x30 (Inherited: 0x00)
struct FMistItemCollectionMesh {
	int32_t MinQuantity; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x08(0x28)
};

// ScriptStruct Mist.MistItemCategoryTreeCategoryCache
// Size: 0x50 (Inherited: 0x00)
struct FMistItemCategoryTreeCategoryCache {
	struct TMap<struct UMistItemCategoryGroup*, bool> BelongsToAny; // 0x00(0x50)
};

// ScriptStruct Mist.MistItemCategoryTreeGroupCache
// Size: 0x98 (Inherited: 0x00)
struct FMistItemCategoryTreeGroupCache {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct UMistItemCategoryGroup*, bool> IsChildOfAny; // 0x08(0x50)
	struct TArray<struct UMistItemCategoryGroup*> ChildGroups; // 0x58(0x10)
	struct TArray<struct UMistItemCategoryGroup*> AllChildGroups; // 0x68(0x10)
	struct TArray<struct UMistItemCategory*> ChildCategories; // 0x78(0x10)
	struct TArray<struct UMistItemCategory*> AllChildCategories; // 0x88(0x10)
};

// ScriptStruct Mist.MistItemSearchEntry
// Size: 0x18 (Inherited: 0x00)
struct FMistItemSearchEntry {
	struct UMistItemTemplate* ItemTemplate; // 0x00(0x08)
	struct FString LowerCaseName; // 0x08(0x10)
};

// ScriptStruct Mist.MistItemPropertyModifier
// Size: 0x10 (Inherited: 0x00)
struct FMistItemPropertyModifier {
	enum class EMistItemProperty Property; // 0x00(0x01)
	enum class EMistModifierType Type; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Value; // 0x04(0x04)
	struct UCurveFloat* EffectByLevelCurve; // 0x08(0x08)
};

// ScriptStruct Mist.MistJavelinItem
// Size: 0x18 (Inherited: 0x00)
struct FMistJavelinItem {
	struct UMistJavelinItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.MistJoinQueueStatusError
// Size: 0x20 (Inherited: 0x00)
struct FMistJoinQueueStatusError {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.MistJoinQueueStatusCanceled
// Size: 0x02 (Inherited: 0x00)
struct FMistJoinQueueStatusCanceled {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Mist.MistJoinQueueStatusCanceling
// Size: 0x02 (Inherited: 0x00)
struct FMistJoinQueueStatusCanceling {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Mist.MistJoinQueueStatusConnect
// Size: 0x10 (Inherited: 0x00)
struct FMistJoinQueueStatusConnect {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Mist.MistJoinQueueStatusQueued
// Size: 0x18 (Inherited: 0x00)
struct FMistJoinQueueStatusQueued {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Mist.MistJoinQueueAction
// Size: 0x10 (Inherited: 0x00)
struct FMistJoinQueueAction {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Mist.MistJoinRealmSearchCriteria
// Size: 0x40 (Inherited: 0x00)
struct FMistJoinRealmSearchCriteria {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Mist.KillCreatureGeneratorRow
// Size: 0x28 (Inherited: 0x10)
struct FKillCreatureGeneratorRow : FMistRandomizingTableRow {
	struct APawn* CreatureType; // 0x10(0x08)
	int32_t MinAmount; // 0x18(0x04)
	int32_t MaxAmount; // 0x1c(0x04)
	int32_t FlotsPerKill; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Mist.MistKnowledgeItem
// Size: 0x18 (Inherited: 0x00)
struct FMistKnowledgeItem {
	struct UMistKnowledgeItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.MistGatheredKnowledge
// Size: 0x10 (Inherited: 0x00)
struct FMistGatheredKnowledge {
	struct TArray<struct FMistGatheredKnowledgeEntry> KnowledgeTypes; // 0x00(0x10)
};

// ScriptStruct Mist.MistGatheredKnowledgeEntry
// Size: 0x10 (Inherited: 0x00)
struct FMistGatheredKnowledgeEntry {
	struct UMistKnowledgeType* KnowledgeType; // 0x00(0x08)
	int32_t Gathered; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.MistLegendEntryRecord
// Size: 0x48 (Inherited: 0x00)
struct FMistLegendEntryRecord {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Mist.MistCurrentFoliageEntry
// Size: 0x20 (Inherited: 0x00)
struct FMistCurrentFoliageEntry {
	int32_t CurrentAmountOnMap; // 0x00(0x04)
	char pad_4[0x1c]; // 0x04(0x1c)
};

// ScriptStruct Mist.MistLevelFoliageTypeInfoRow
// Size: 0x30 (Inherited: 0x08)
struct FMistLevelFoliageTypeInfoRow : FTableRowBase {
	struct FString MapPath; // 0x08(0x10)
	struct UMistFoliageComponent* FoliageComponent; // 0x18(0x08)
	int32_t AmountOnMap; // 0x20(0x04)
	int32_t MinAmount; // 0x24(0x04)
	int32_t MaxAmount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Mist.InviteBlockQuery
// Size: 0x10 (Inherited: 0x00)
struct FInviteBlockQuery {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Mist.MistLocomotionAnimStorage
// Size: 0x50 (Inherited: 0x00)
struct FMistLocomotionAnimStorage {
	struct TMap<enum class ECardinalDirection, struct UAnimationAsset*> AssetMap; // 0x00(0x50)
};

// ScriptStruct Mist.MistLootOutput
// Size: 0x10 (Inherited: 0x00)
struct FMistLootOutput {
	struct UMistItemTemplate* Template; // 0x00(0x08)
	int32_t Quantity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.MistLootRuinQuestSubtask
// Size: 0x40 (Inherited: 0x00)
struct FMistLootRuinQuestSubtask {
	struct TArray<struct AActor*> AcceptedRuinClasses; // 0x00(0x10)
	int32_t MinAmount; // 0x10(0x04)
	int32_t MaxAmount; // 0x14(0x04)
	int32_t FlotsPerRuin; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText DisplayTypeText; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Mist.MistLootTableRow
// Size: 0x20 (Inherited: 0x08)
struct FMistLootTableRow : FTableRowBase {
	struct UMistItemTemplate* Item; // 0x08(0x08)
	float Chance; // 0x10(0x04)
	int32_t MinQuantity; // 0x14(0x04)
	int32_t MaxQuantity; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.MistWalkerHarvestingPair
// Size: 0x10 (Inherited: 0x00)
struct FMistWalkerHarvestingPair {
	struct UMistFoliageComponent* FoliageComponent; // 0x00(0x08)
	int32_t InstanceIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.MistMannedWeaponInventoryItemData
// Size: 0x20 (Inherited: 0x00)
struct FMistMannedWeaponInventoryItemData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.MistCombatAnimPosition
// Size: 0x28 (Inherited: 0x00)
struct FMistCombatAnimPosition {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Mist.CombatStaminaCost
// Size: 0x01 (Inherited: 0x00)
struct FCombatStaminaCost {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Mist.MistCombatAnimTransition
// Size: 0x18 (Inherited: 0x00)
struct FMistCombatAnimTransition {
	enum class ECombatAction CombatAction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMistCombatAnimTransitionMap> Transitions; // 0x08(0x10)
};

// ScriptStruct Mist.MistCombatAnimTransitionMap
// Size: 0x18 (Inherited: 0x00)
struct FMistCombatAnimTransitionMap {
	enum class ECombatAction CombatAction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMistCombatAnimDirectionalTransitionMap> TransitionsMap; // 0x08(0x10)
};

// ScriptStruct Mist.MistCombatAnimDirectionalTransitionMap
// Size: 0x10 (Inherited: 0x00)
struct FMistCombatAnimDirectionalTransitionMap {
	enum class ECombatDirection SourceDirection; // 0x00(0x01)
	enum class ECombatDirection TargetDirection; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UAnimationAsset* AnimAsset; // 0x08(0x08)
};

// ScriptStruct Mist.MistMobEnemyEntry
// Size: 0x18 (Inherited: 0x00)
struct FMistMobEnemyEntry {
	struct AActor* Target; // 0x00(0x08)
	float EstimatedStrength; // 0x08(0x04)
	float SquaredDistance; // 0x0c(0x04)
	bool bIsReachable; // 0x10(0x01)
	bool bIsGrappled; // 0x11(0x01)
	bool bIsOnWalker; // 0x12(0x01)
	bool bIsInSmallWalker; // 0x13(0x01)
	bool bWasTaunted; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Mist.MistAiFootworkState
// Size: 0x38 (Inherited: 0x08)
struct FMistAiFootworkState : FTableRowBase {
	struct FString Name; // 0x08(0x10)
	float MinDistance; // 0x18(0x04)
	float MinOptimalDistance; // 0x1c(0x04)
	float MaxDistance; // 0x20(0x04)
	float MaxOptimalDistance; // 0x24(0x04)
	float weight; // 0x28(0x04)
	float MinDuration; // 0x2c(0x04)
	float MaxDuration; // 0x30(0x04)
	bool bStrafingEnabled; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Mist.StaminaMovementByWeightValues
// Size: 0x30 (Inherited: 0x00)
struct FStaminaMovementByWeightValues {
	float SprintStaminaDepletion; // 0x00(0x04)
	float SprintStaminaDepletionLimit; // 0x04(0x04)
	float StaminaSprintActivationCost; // 0x08(0x04)
	float StaminaAllowSprintThreshold; // 0x0c(0x04)
	float WalkStaminaDepletion; // 0x10(0x04)
	float WalkStaminaDepletionLimit; // 0x14(0x04)
	float JumpStaminaCost; // 0x18(0x04)
	float DodgeStaminaCost; // 0x1c(0x04)
	float LowStaminaSpeedMod; // 0x20(0x04)
	float LowStaminaAccelMod; // 0x24(0x04)
	float ExhaustionSpeedMod; // 0x28(0x04)
	float ExhaustionAccelMod; // 0x2c(0x04)
};

// ScriptStruct Mist.StaminaMovementValues
// Size: 0x90 (Inherited: 0x00)
struct FStaminaMovementValues {
	struct FStaminaMovementByWeightValues NormalStaminaValues; // 0x00(0x30)
	struct FStaminaMovementByWeightValues MinEncumberedStaminaValues; // 0x30(0x30)
	struct FStaminaMovementByWeightValues MaxEncumberedStaminaValues; // 0x60(0x30)
};

// ScriptStruct Mist.MistIntensityCauserLevelSettings
// Size: 0x30 (Inherited: 0x00)
struct FMistIntensityCauserLevelSettings {
	float CauserActivateDistance; // 0x00(0x04)
	float CauserDeactivateDistance; // 0x04(0x04)
	float CauserResetDistance; // 0x08(0x04)
	float CauserIntensityFloor; // 0x0c(0x04)
	float CauserShrinkingDelayIntensityFloor; // 0x10(0x04)
	float CauserDeactivateShrinkSpeed; // 0x14(0x04)
	bool bIsCauserInClan; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ClanMemberModifier; // 0x1c(0x04)
	float IntensityCapMember; // 0x20(0x04)
	float CauserIntensityFloorClanOverride; // 0x24(0x04)
	float CauserShrinkingDelayIntensityFloorClanOverride; // 0x28(0x04)
	float CauserDeactivateShrinkSpeedClanOverride; // 0x2c(0x04)
};

// ScriptStruct Mist.MistIntensityLevelSettings
// Size: 0x44 (Inherited: 0x00)
struct FMistIntensityLevelSettings {
	float IntensityChange; // 0x00(0x04)
	float IntensityLevelCap; // 0x04(0x04)
	float IntensityDecreasingDelay; // 0x08(0x04)
	float MinApplicalableLevel; // 0x0c(0x04)
	bool bHasCauser; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FMistIntensityCauserLevelSettings CauserSettings; // 0x14(0x30)
};

// ScriptStruct Mist.MistSlotReservationSyncData
// Size: 0x48 (Inherited: 0x00)
struct FMistSlotReservationSyncData {
	char pad_0[0x28]; // 0x00(0x28)
	struct TArray<struct AMistOasisPlayerController*> RemainingKickableControllers; // 0x28(0x10)
	struct TArray<struct AMistOasisPlayerController*> RemainingBeingKickedControllers; // 0x38(0x10)
};

// ScriptStruct Mist.MistSlotReservationSlice
// Size: 0x38 (Inherited: 0x00)
struct FMistSlotReservationSlice {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct AMistOasisPlayerController*> KickableControllers; // 0x18(0x10)
	struct TArray<struct AMistOasisPlayerController*> BeingKickedControllers; // 0x28(0x10)
};

// ScriptStruct Mist.MistSlotLeaseWindow
// Size: 0x28 (Inherited: 0x00)
struct FMistSlotLeaseWindow {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Mist.MistPendingShopItemConsumptionData
// Size: 0x28 (Inherited: 0x00)
struct FMistPendingShopItemConsumptionData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Mist.MistPendingClanBankDepositSnapshotData
// Size: 0x18 (Inherited: 0x00)
struct FMistPendingClanBankDepositSnapshotData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Mist.MistPlayerStateIdentifier
// Size: 0x20 (Inherited: 0x00)
struct FMistPlayerStateIdentifier {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.MistClanLookupData
// Size: 0x18 (Inherited: 0x00)
struct FMistClanLookupData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Mist.MistCharacterLookupData
// Size: 0x38 (Inherited: 0x00)
struct FMistCharacterLookupData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Mist.MistRealmTileInformation
// Size: 0x50 (Inherited: 0x00)
struct FMistRealmTileInformation {
	int64_t ID; // 0x00(0x08)
	int32_t X; // 0x08(0x04)
	int32_t Y; // 0x0c(0x04)
	int32_t MaxPlayerCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)
	enum class EMistRealmMapTileType Type; // 0x28(0x01)
	bool bIsSpawnable; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FDateTime DecayDate; // 0x30(0x08)
	char pad_38[0x18]; // 0x38(0x18)
};

// ScriptStruct Mist.MistRealmInformation
// Size: 0x88 (Inherited: 0x00)
struct FMistRealmInformation {
	int64_t ID; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	struct FString Status; // 0x18(0x10)
	float ShutdownTimeSeconds; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FMistRealmTileInformation Tile; // 0x30(0x50)
	bool bPresentationModeEnabled; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float ResearchCostMultiplier; // 0x84(0x04)
};

// ScriptStruct Mist.WalkerGearItemInfo
// Size: 0x20 (Inherited: 0x00)
struct FWalkerGearItemInfo {
	struct FMistItem Item; // 0x00(0x18)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.FoliageSyncQueueEntry
// Size: 0x28 (Inherited: 0x00)
struct FFoliageSyncQueueEntry {
	struct AMistFoliageActor* FoliageActor; // 0x00(0x08)
	int32_t CurrentComponentIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> CurrentRemovedInstances; // 0x10(0x10)
	bool bCurrentComponentInProgress; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Mist.FoliageSyncMessage
// Size: 0x20 (Inherited: 0x00)
struct FFoliageSyncMessage {
	struct UMistFoliageComponent* Component; // 0x00(0x08)
	struct TArray<int32_t> RemovedInstances; // 0x08(0x10)
	bool bAnyLeft; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Mist.MistOffMapLobbyDataSnapshot
// Size: 0x138 (Inherited: 0x00)
struct FMistOffMapLobbyDataSnapshot {
	struct TMap<int64_t, struct FMistOffMapLobbyWalkerDataSnapshot> Walkers; // 0x00(0x50)
	struct TMap<int64_t, struct FMistOffMapLobbyCharacterDataSnapshot> Characters; // 0x50(0x50)
	struct TMap<int64_t, struct FMistOffMapLobbyCrewDataSnapshot> Crews; // 0xa0(0x50)
	char pad_F0[0x48]; // 0xf0(0x48)
};

// ScriptStruct Mist.MistOffMapLobbyCrewDataSnapshot
// Size: 0x30 (Inherited: 0x00)
struct FMistOffMapLobbyCrewDataSnapshot {
	struct UMistOffMapLobby2CrewData* Data; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct Mist.MistOffMapLobbyCharacterDataSnapshot
// Size: 0x38 (Inherited: 0x00)
struct FMistOffMapLobbyCharacterDataSnapshot {
	struct UMistOffMapLobby2CharacterData* Data; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Mist.MistOffMapLobbyWalkerDataSnapshot
// Size: 0x48 (Inherited: 0x00)
struct FMistOffMapLobbyWalkerDataSnapshot {
	struct UMistOffMapLobby2WalkerData* Data; // 0x00(0x08)
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Mist.MistOffMapLobbyPlayerDataSnapshot
// Size: 0x20 (Inherited: 0x00)
struct FMistOffMapLobbyPlayerDataSnapshot {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.MistOffMapLobbyTravelCostData
// Size: 0x28 (Inherited: 0x00)
struct FMistOffMapLobbyTravelCostData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Mist.MistOffMapLobbyWaterData
// Size: 0x08 (Inherited: 0x00)
struct FMistOffMapLobbyWaterData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Mist.MistOffMapLobbyAction
// Size: 0x18 (Inherited: 0x00)
struct FMistOffMapLobbyAction {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Mist.MistPackingProcessStep
// Size: 0x50 (Inherited: 0x00)
struct FMistPackingProcessStep {
	struct UMistPlaceableTemplate* Template; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
	bool bPacking; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
};

// ScriptStruct Mist.MistChildFoliageSpawnedInstances
// Size: 0x60 (Inherited: 0x00)
struct FMistChildFoliageSpawnedInstances {
	struct TMap<int32_t, struct FMistFoliageChildrenInfo> ChildInstances; // 0x00(0x50)
	struct UMistFoliageComponent* ChildFoliageComponent; // 0x50(0x08)
	struct UFoliageType* ChildFoliageType; // 0x58(0x08)
};

// ScriptStruct Mist.MistFoliageChildrenInfo
// Size: 0x10 (Inherited: 0x00)
struct FMistFoliageChildrenInfo {
	struct TArray<int32_t> Instances; // 0x00(0x10)
};

// ScriptStruct Mist.MistChildFoliageEntry
// Size: 0x78 (Inherited: 0x00)
struct FMistChildFoliageEntry {
	struct FString SocketPrefix; // 0x00(0x10)
	struct UMistFoliageComponent* ChildFoliageComponent; // 0x10(0x08)
	struct UFoliageType* ChildFoliageType; // 0x18(0x08)
	float ChanceToSpawn; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<struct FName, float> ChanceToSpawnOverride; // 0x28(0x50)
};

// ScriptStruct Mist.ParentQuestGeneratorRow
// Size: 0x20 (Inherited: 0x10)
struct FParentQuestGeneratorRow : FMistRandomizingTableRow {
	struct UMistBaseQuestGenerator* GeneratorClass; // 0x10(0x08)
	struct UMistFlotillaQuest* SpecificQuestClass; // 0x18(0x08)
};

// ScriptStruct Mist.MistPerkInfo
// Size: 0x08 (Inherited: 0x00)
struct FMistPerkInfo {
	enum class EMistPerkAbility Ability; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PerkLevelTier; // 0x04(0x04)
};

// ScriptStruct Mist.MistPhyicalMobLegIKState
// Size: 0x24 (Inherited: 0x00)
struct FMistPhyicalMobLegIKState {
	enum class EPhysicalMobLimb LimbType; // 0x00(0x01)
	enum class EPhysicalMobLimbState LimbAction; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector IKTarget; // 0x04(0x0c)
	float Alpha; // 0x10(0x04)
	bool IKEnabled; // 0x14(0x01)
	char pad_15[0xf]; // 0x15(0x0f)
};

// ScriptStruct Mist.MobForcePoint
// Size: 0x20 (Inherited: 0x00)
struct FMobForcePoint {
	struct UMobLimb* Limb; // 0x00(0x08)
	bool bFrontLeg; // 0x08(0x01)
	bool bBackLeg; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FVector SuspensionPosition; // 0x0c(0x0c)
	float SprungMass; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.MobMovementPreset
// Size: 0x2c (Inherited: 0x00)
struct FMobMovementPreset {
	struct FName PresetName; // 0x00(0x08)
	struct FVector MaxForces; // 0x08(0x0c)
	struct FVector DeltaForces; // 0x14(0x0c)
	struct FVector ForceDrag; // 0x20(0x0c)
};

// ScriptStruct Mist.MistPlaceableDisassemblingThreshold
// Size: 0x08 (Inherited: 0x00)
struct FMistPlaceableDisassemblingThreshold {
	float HealthThreshold; // 0x00(0x04)
	float RecycledFraction; // 0x04(0x04)
};

// ScriptStruct Mist.MistPreviewActorInstance
// Size: 0x70 (Inherited: 0x00)
struct FMistPreviewActorInstance {
	struct TArray<struct UMeshComponent*> MeshComponents; // 0x00(0x10)
	struct TArray<struct UShapeComponent*> ShapeComponents; // 0x10(0x10)
	struct TArray<struct UPrimitiveComponent*> AllComponents; // 0x20(0x10)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Mist.MistPlayerAnimInstanceProxy
// Size: 0x10c0 (Inherited: 0x6f0)
struct FMistPlayerAnimInstanceProxy : FAnimInstanceProxy {
	struct UMistCharacterMovementComponent* MovementComponent; // 0x6f0(0x08)
	enum class EMistPlayerAnimationState PlayerState; // 0x6f8(0x01)
	bool bIsBlendingCombatAnim; // 0x6f9(0x01)
	bool bIsInAir; // 0x6fa(0x01)
	bool bIsUsingWingsuit; // 0x6fb(0x01)
	bool bIsInDisplacement; // 0x6fc(0x01)
	bool bIsCrouching; // 0x6fd(0x01)
	bool bIsSprinting; // 0x6fe(0x01)
	bool bFightIsActive; // 0x6ff(0x01)
	bool bIsStanding; // 0x700(0x01)
	bool bIsStandingAndFighting; // 0x701(0x01)
	bool bAttackReady; // 0x702(0x01)
	bool bReinitStateIsNeeded; // 0x703(0x01)
	float Speed; // 0x704(0x04)
	float Direction; // 0x708(0x04)
	float CombatActionAlpha; // 0x70c(0x04)
	bool bForceNewLocomotionEntry; // 0x710(0x01)
	bool bJumped; // 0x711(0x01)
	bool bJustLanded; // 0x712(0x01)
	bool bIsDownedPending; // 0x713(0x01)
	float WingsuitDiveFactor; // 0x714(0x04)
	float WingsuitRollFactor; // 0x718(0x04)
	bool bIsGettingUp; // 0x71c(0x01)
	bool bIsDead; // 0x71d(0x01)
	bool bUsingGrapplingHook; // 0x71e(0x01)
	bool bReloadingGrapplingHook; // 0x71f(0x01)
	enum class ECombatAction PreviousCombatAction; // 0x720(0x01)
	enum class ECombatAction CurrentCombatAction; // 0x721(0x01)
	enum class ECombatDirection CurrentCombatDirection; // 0x722(0x01)
	char pad_723[0x1]; // 0x723(0x01)
	float CombatActionPlayRate; // 0x724(0x04)
	bool bIsInCombatState; // 0x728(0x01)
	bool bLoopCombatAnimation; // 0x729(0x01)
	enum class ECombatAnimationType WeaponTypeEnum; // 0x72a(0x01)
	enum class EMeleeAttackObject WeaponObject; // 0x72b(0x01)
	int32_t HACK_CombatPlayIndex; // 0x72c(0x04)
	struct UMistWeaponTypeBase* WeaponType; // 0x730(0x08)
	struct UAnimationAsset* CurrentAnimAsset; // 0x738(0x08)
	struct FCombatAnimTrack CurrentAnimTrack; // 0x740(0x38)
	struct FCombatAnimTrack PreviousAnimTrack; // 0x778(0x38)
	float CombatAnimStartTime; // 0x7b0(0x04)
	float CombatAnimPosition; // 0x7b4(0x04)
	float CombatAnimBlendTime; // 0x7b8(0x04)
	char pad_7BC[0x4]; // 0x7bc(0x04)
	struct UAnimSequence* CurrentIdleAnim; // 0x7c0(0x08)
	struct UAnimSequence* CurrentCombatIdleAnim; // 0x7c8(0x08)
	struct UAnimSequence* DefaultIdleAnim; // 0x7d0(0x08)
	bool bInCombatAnimTransition; // 0x7d8(0x01)
	bool bInLocomotionTransition; // 0x7d9(0x01)
	bool bForceCombatAnimOverlap; // 0x7da(0x01)
	char pad_7DB[0x2]; // 0x7db(0x02)
	enum class EMistInteractionAnimationType InteractionAnimTypeToPlay; // 0x7dd(0x01)
	bool bIsInteracting; // 0x7de(0x01)
	bool bUseSecondInteractionAnim; // 0x7df(0x01)
	float InteractionHeightOffset; // 0x7e0(0x04)
	float InteractionDirectionOffset; // 0x7e4(0x04)
	float InteractableAnimStartPosition; // 0x7e8(0x04)
	char pad_7EC[0x14]; // 0x7ec(0x14)
	struct UMistLocomotionTypeBase* CurrentLocomotionType; // 0x800(0x08)
	char pad_808[0x10]; // 0x808(0x10)
	struct UAnimationAsset* ActiveTransitionAnim; // 0x818(0x08)
	struct UBlendSpaceBase* SlopeMovementAsset; // 0x820(0x08)
	float TransitionAnimPlayRate; // 0x828(0x04)
	float TransitionAnimBlendTime; // 0x82c(0x04)
	struct FMistAnimPosition ActiveTransitionAnimPosition; // 0x830(0x14)
	bool bCombatLocomotionAnim; // 0x844(0x01)
	bool bIsMoving; // 0x845(0x01)
	char pad_846[0x2a]; // 0x846(0x2a)
	enum class ECardinalDirection CardinalDirection; // 0x870(0x01)
	char pad_871[0x17]; // 0x871(0x17)
	enum class ELocomotionState LocomotionState; // 0x888(0x01)
	enum class ECombatStance CombatStance; // 0x889(0x01)
	char pad_88A[0x172]; // 0x88a(0x172)
	struct FRotator IKRootRotation; // 0x9fc(0x0c)
	char pad_A08[0x29]; // 0xa08(0x29)
	bool bWantsToMove; // 0xa31(0x01)
	bool bWantsToTurn; // 0xa32(0x01)
	bool bIsTurning; // 0xa33(0x01)
	struct FRotator RotationYawDelta; // 0xa34(0x0c)
	float TurnLeftAngle; // 0xa40(0x04)
	float TurnRightAngle; // 0xa44(0x04)
	enum class ETurnDirection TurnDirection; // 0xa48(0x01)
	bool bShootingGrapplingHook; // 0xa49(0x01)
	bool bRootOffsetEnabled; // 0xa4a(0x01)
	char pad_A4B[0x5]; // 0xa4b(0x05)
	float TurnAnimPlayRate; // 0xa50(0x04)
	char pad_A54[0x4]; // 0xa54(0x04)
	float SimilarityImportanceFactor; // 0xa58(0x04)
	float DistanceImportanceFactor; // 0xa5c(0x04)
	char pad_A60[0xc]; // 0xa60(0x0c)
	struct FVector FloorNormal; // 0xa6c(0x0c)
	float MaxSlopeAngle; // 0xa78(0x04)
	float SlopeAngle; // 0xa7c(0x04)
	float SlopeWarpingAlpha; // 0xa80(0x04)
	float SlopeMovementAlpha; // 0xa84(0x04)
	char pad_A88[0x61]; // 0xa88(0x61)
	bool bIsSliding; // 0xae9(0x01)
	bool bSlidingLoop; // 0xaea(0x01)
	char pad_AEB[0xa6]; // 0xaeb(0xa6)
	bool bGrapplingHookSwinging; // 0xb91(0x01)
	enum class EMistGrapplingHookState GrapplingHookState; // 0xb92(0x01)
	char pad_B93[0x5]; // 0xb93(0x05)
	struct UGrapplingHookLocomotionType* GrapplingLocomotionType; // 0xb98(0x08)
	char pad_BA0[0x518]; // 0xba0(0x518)
	struct UMistMeleeCombatComponent* CombatComponent; // 0x10b8(0x08)
};

// ScriptStruct Mist.MistQuestDataHolder
// Size: 0x08 (Inherited: 0x00)
struct FMistQuestDataHolder {
	struct UMistFlotillaQuest* QuestInstance; // 0x00(0x08)
};

// ScriptStruct Mist.MistMapIconKeyValueUpdateData
// Size: 0x20 (Inherited: 0x00)
struct FMistMapIconKeyValueUpdateData {
	uint64_t IconId; // 0x00(0x08)
	struct FName Key; // 0x08(0x08)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Mist.MistMapIconLocationUpdateData
// Size: 0x18 (Inherited: 0x00)
struct FMistMapIconLocationUpdateData {
	uint64_t IconId; // 0x00(0x08)
	struct FVector_NetQuantize LocationAndRotation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Mist.MistMapIconUpdateData
// Size: 0x20 (Inherited: 0x00)
struct FMistMapIconUpdateData {
	uint64_t IconId; // 0x00(0x08)
	struct UMistMapIconComponent* Class; // 0x08(0x08)
	struct FVector_NetQuantize LocationAndRotation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.MistMapIconData
// Size: 0xd0 (Inherited: 0x00)
struct FMistMapIconData {
	struct AActor* Actor; // 0x00(0x08)
	struct UMistMapIconComponent* Class; // 0x08(0x08)
	char pad_10[0xc0]; // 0x10(0xc0)
};

// ScriptStruct Mist.MistPlayerRespawnTimer
// Size: 0x30 (Inherited: 0x00)
struct FMistPlayerRespawnTimer {
	char pad_0[0x8]; // 0x00(0x08)
	float MinTimerValue; // 0x08(0x04)
	float ActivationPeriod; // 0x0c(0x04)
	float TimerIncreaseStep; // 0x10(0x04)
	float TimerIncreaseStepWhenOutOfWater; // 0x14(0x04)
	float TimerDecreaseSpeed; // 0x18(0x04)
	float TimerDecreaseCooldown; // 0x1c(0x04)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct Mist.MistBaseStatRow
// Size: 0x10 (Inherited: 0x08)
struct FMistBaseStatRow : FTableRowBase {
	int32_t Level; // 0x08(0x04)
	int32_t Requirement; // 0x0c(0x04)
};

// ScriptStruct Mist.MistMobilityStatRow
// Size: 0x18 (Inherited: 0x10)
struct FMistMobilityStatRow : FMistBaseStatRow {
	float MaxSpeed; // 0x10(0x04)
	float Acceleration; // 0x14(0x04)
};

// ScriptStruct Mist.MistDamageStatRow
// Size: 0x18 (Inherited: 0x10)
struct FMistDamageStatRow : FMistBaseStatRow {
	float DamageBeforeArmor; // 0x10(0x04)
	float DamageAfterArmor; // 0x14(0x04)
};

// ScriptStruct Mist.MistStatRow
// Size: 0x18 (Inherited: 0x10)
struct FMistStatRow : FMistBaseStatRow {
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Mist.MistExperienceLevel
// Size: 0x20 (Inherited: 0x08)
struct FMistExperienceLevel : FTableRowBase {
	int32_t Level; // 0x08(0x04)
	int32_t XP; // 0x0c(0x04)
	int32_t StatReward; // 0x10(0x04)
	int32_t TechPointReward; // 0x14(0x04)
	int32_t PerkPointReward; // 0x18(0x04)
	int32_t MoneyReward; // 0x1c(0x04)
};

// ScriptStruct Mist.MistSpawnPositionGroupData
// Size: 0x20 (Inherited: 0x00)
struct FMistSpawnPositionGroupData {
	struct TArray<struct FTransform> PossiblePositions; // 0x00(0x10)
	struct TArray<struct AActor*> SpawnedPersistentActors; // 0x10(0x10)
};

// ScriptStruct Mist.MistObjectWaitingForRespawn
// Size: 0x40 (Inherited: 0x00)
struct FMistObjectWaitingForRespawn {
	struct AActor* ObjectClass; // 0x00(0x08)
	float RespawnTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Position; // 0x10(0x30)
};

// ScriptStruct Mist.MistRespawnableGroupData
// Size: 0x30 (Inherited: 0x00)
struct FMistRespawnableGroupData {
	struct TArray<struct AActor*> ActorsInGroup; // 0x00(0x10)
	struct FName GroupName; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct Mist.MistRespawnableObjectEntry
// Size: 0x10 (Inherited: 0x00)
struct FMistRespawnableObjectEntry {
	struct TArray<struct FTransform> PossiblePositions; // 0x00(0x10)
};

// ScriptStruct Mist.AlwaysSpawningActorsData
// Size: 0x10 (Inherited: 0x00)
struct FAlwaysSpawningActorsData {
	struct AActor* ActorClass; // 0x00(0x08)
	struct FFloatInterval RespawnTime; // 0x08(0x08)
};

// ScriptStruct Mist.MigratingRespawnGroupData
// Size: 0x20 (Inherited: 0x00)
struct FMigratingRespawnGroupData {
	struct TArray<struct FMistActorWithWeight> GroupActors; // 0x00(0x10)
	int32_t NumActorsToSpawn; // 0x10(0x04)
	float RespawnDelay; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Mist.MistActorWithWeight
// Size: 0x10 (Inherited: 0x00)
struct FMistActorWithWeight {
	struct AActor* ActorClass; // 0x00(0x08)
	float weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.SpawnPositionGroupData
// Size: 0x38 (Inherited: 0x00)
struct FSpawnPositionGroupData {
	struct FName GroupName; // 0x00(0x08)
	struct TSoftObjectPtr<UProceduralFoliageSpawner> OverrideFoliageSpawnerToUse; // 0x08(0x28)
	struct UFoliageType_InstancedStaticMesh* FoliageTypeToSpawn; // 0x30(0x08)
};

// ScriptStruct Mist.RespawnableObjectSpawnInfo
// Size: 0x48 (Inherited: 0x00)
struct FRespawnableObjectSpawnInfo {
	struct TSoftObjectPtr<UProceduralFoliageSpawner> OverrideFoliageSpawnerToUse; // 0x00(0x28)
	struct UFoliageType_InstancedStaticMesh* FoliageTypeToSpawn; // 0x28(0x08)
	enum class EMistRespawnableObjectType Type; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName Group; // 0x34(0x08)
	float SpawnWeight; // 0x3c(0x04)
	struct FFloatInterval RespawnTime; // 0x40(0x08)
};

// ScriptStruct Mist.BlockPractiseContunue
// Size: 0x20 (Inherited: 0x00)
struct FBlockPractiseContunue {
	struct TArray<enum class ECombatAction> Action; // 0x00(0x10)
	enum class ECombatDirection Direction; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName TaskName; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.BlockPractise
// Size: 0x20 (Inherited: 0x00)
struct FBlockPractise {
	struct TArray<enum class ECombatAction> Action; // 0x00(0x10)
	enum class ECombatDirection Direction; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName TaskName; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.QualityTrackingRecipe
// Size: 0x20 (Inherited: 0x00)
struct FQualityTrackingRecipe {
	int32_t RecipeIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMistItemTemplate* RecipeItem; // 0x08(0x08)
	float RadiusInM; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UParticleSystem* CraftingParticle; // 0x18(0x08)
};

// ScriptStruct Mist.MistRandomizedItemEntry
// Size: 0x10 (Inherited: 0x00)
struct FMistRandomizedItemEntry {
	struct UMistItemTemplate* Item; // 0x00(0x08)
	float weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.MistWalkerMigrationPreferenceRecordData
// Size: 0x60 (Inherited: 0x00)
struct FMistWalkerMigrationPreferenceRecordData {
	char pad_0[0x30]; // 0x00(0x30)
	struct UTexture2D* Icon; // 0x30(0x08)
	char pad_38[0x28]; // 0x38(0x28)
};

// ScriptStruct Mist.MistRealmMapDisplayedTiles
// Size: 0x20 (Inherited: 0x00)
struct FMistRealmMapDisplayedTiles {
	struct TArray<struct FMistRealmMapTileDetails> ClaimTiles; // 0x00(0x10)
	struct TArray<struct FMistRealmMapTileDetails> ActiveTiles; // 0x10(0x10)
};

// ScriptStruct Mist.MistRealmMapTileDetails
// Size: 0x2c (Inherited: 0x00)
struct FMistRealmMapTileDetails {
	struct FVector2D Coords; // 0x00(0x08)
	struct FIntVector CubeCoords; // 0x08(0x0c)
	bool bIsClaimed; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FLinearColor ClanColor; // 0x18(0x10)
	int32_t ClaimRadius; // 0x28(0x04)
};

// ScriptStruct Mist.MistRealmMapDisplayInfo
// Size: 0x14 (Inherited: 0x00)
struct FMistRealmMapDisplayInfo {
	float MapScale; // 0x00(0x04)
	struct FVector2D ContentDisplayRectFrom; // 0x04(0x08)
	struct FVector2D ContentDisplayRectTo; // 0x0c(0x08)
};

// ScriptStruct Mist.MistRealmMapPath
// Size: 0x20 (Inherited: 0x00)
struct FMistRealmMapPath {
	struct TArray<struct FIntVector> Coords; // 0x00(0x10)
	int32_t PossibleSteps; // 0x10(0x04)
	int32_t Cost; // 0x14(0x04)
	enum class EMistRealmMapTileState State; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Mist.MistRealmMapStubResponseProto
// Size: 0x2a0 (Inherited: 0x00)
struct FMistRealmMapStubResponseProto {
	char pad_0[0x2a0]; // 0x00(0x2a0)
};

// ScriptStruct Mist.MistRealmMapTileClaimWidgetClaimConfig
// Size: 0xd0 (Inherited: 0x00)
struct FMistRealmMapTileClaimWidgetClaimConfig {
	struct FText StateTitle; // 0x00(0x18)
	struct FSlateBrush StateBrush; // 0x18(0x88)
	struct FText ChangeInLabel; // 0xa0(0x18)
	struct FText ChangeDateLabel; // 0xb8(0x18)
};

// ScriptStruct Mist.MistRealmMapTileDetailsWidgetDifficultyConfig
// Size: 0xa0 (Inherited: 0x00)
struct FMistRealmMapTileDetailsWidgetDifficultyConfig {
	struct FText LabelText; // 0x00(0x18)
	struct FSlateBrush BackgroundBrush; // 0x18(0x88)
};

// ScriptStruct Mist.MistRealmRegionTableRow
// Size: 0xd8 (Inherited: 0x08)
struct FMistRealmRegionTableRow : FTableRowBase {
	struct FString Key; // 0x08(0x10)
	struct FText Name; // 0x18(0x18)
	struct FText FilterName; // 0x30(0x18)
	bool bShowFilter; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FSlateBrush BackgroundImage; // 0x50(0x88)
};

// ScriptStruct Mist.MistRealmTileMapTableRow
// Size: 0x128 (Inherited: 0x08)
struct FMistRealmTileMapTableRow : FTableRowBase {
	struct FString MapPath; // 0x08(0x10)
	struct FSlateBrush TileImage; // 0x18(0x88)
	struct FSlateBrush ThumbImage; // 0xa0(0x88)
};

// ScriptStruct Mist.MistRealmTileNeighborsStubResponseProto
// Size: 0x38 (Inherited: 0x00)
struct FMistRealmTileNeighborsStubResponseProto {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Mist.MistRealmTileUsedSlotsTableRow
// Size: 0xb8 (Inherited: 0x08)
struct FMistRealmTileUsedSlotsTableRow : FTableRowBase {
	float UsedSlotsPercentageThreshold; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Text; // 0x10(0x18)
	bool bDisplayAvailableSlots; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSlateBrush BackgroundImage; // 0x30(0x88)
};

// ScriptStruct Mist.MistQaData
// Size: 0x28 (Inherited: 0x00)
struct FMistQaData {
	struct FName QAParentCollection; // 0x00(0x08)
	struct FName NeedsQaCollection; // 0x08(0x08)
	struct TArray<struct FName> QACollections; // 0x10(0x10)
	struct FName QaDoneCollection; // 0x20(0x08)
};

// ScriptStruct Mist.MistLandscapeLayersList
// Size: 0x10 (Inherited: 0x00)
struct FMistLandscapeLayersList {
	struct TArray<struct FName> LayerNames; // 0x00(0x10)
};

// ScriptStruct Mist.CampfireItems
// Size: 0x18 (Inherited: 0x00)
struct FCampfireItems {
	struct UMistItemTemplate* ItemTemplate; // 0x00(0x08)
	struct FName TaskName; // 0x08(0x08)
	struct FName ContainerTag; // 0x10(0x08)
};

// ScriptStruct Mist.MistShopItemRow
// Size: 0x88 (Inherited: 0x08)
struct FMistShopItemRow : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FDataTableRowHandle Category; // 0x38(0x10)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x48(0x28)
	int32_t IcOfferQuantity; // 0x70(0x04)
	int32_t IcOfferPrice; // 0x74(0x04)
	float IcOfferWeight; // 0x78(0x04)
	bool ConsumableBool; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	int32_t IcVoucherAmount; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Mist.MistShopOfferItemData
// Size: 0x98 (Inherited: 0x00)
struct FMistShopOfferItemData {
	char pad_0[0x10]; // 0x00(0x10)
	struct FMistShopItemRow DataRow; // 0x10(0x88)
};

// ScriptStruct Mist.MistShopCurrencyBundleRow
// Size: 0xa8 (Inherited: 0x08)
struct FMistShopCurrencyBundleRow : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText NameWithBonus; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
	struct FText DescriptionWithBonus; // 0x50(0x18)
	struct FText InvoiceDescription; // 0x68(0x18)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x80(0x28)
};

// ScriptStruct Mist.MistShopOfferRow
// Size: 0x60 (Inherited: 0x08)
struct FMistShopOfferRow : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x38(0x28)
};

// ScriptStruct Mist.MistShopCategoryRow
// Size: 0x48 (Inherited: 0x08)
struct FMistShopCategoryRow : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x20(0x28)
};

// ScriptStruct Mist.MistSlotLeaseAuctionSetWindowBidStubData
// Size: 0x28 (Inherited: 0x00)
struct FMistSlotLeaseAuctionSetWindowBidStubData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Mist.MistSlotLeaseAuctionGetWindowListStubData
// Size: 0x38 (Inherited: 0x00)
struct FMistSlotLeaseAuctionGetWindowListStubData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Mist.MistSnapPairDesc
// Size: 0x10 (Inherited: 0x00)
struct FMistSnapPairDesc {
	enum class EMistSnapRotationAxis RotationAxis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FRotator RotationOffset; // 0x04(0x0c)
};

// ScriptStruct Mist.MistSparePartGenericData
// Size: 0x70 (Inherited: 0x00)
struct FMistSparePartGenericData {
	char pad_0[0x8]; // 0x00(0x08)
	struct UMistSparePartTemplate* SparePartTemplate; // 0x08(0x08)
	struct UMistUnlockableTreeItem* RequiredUnlockable; // 0x10(0x08)
	struct TMap<struct UMistItemTemplate*, int32_t> Inputs; // 0x18(0x50)
	float CraftingTime; // 0x68(0x04)
	bool bIsEnabled; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Mist.MistPackingSparePartData
// Size: 0x78 (Inherited: 0x70)
struct FMistPackingSparePartData : FMistSparePartGenericData {
	int32_t AdditionalParts; // 0x70(0x04)
	int32_t AdditionalSlots; // 0x74(0x04)
};

// ScriptStruct Mist.MistArmorSparePartData
// Size: 0x80 (Inherited: 0x70)
struct FMistArmorSparePartData : FMistSparePartGenericData {
	int32_t BonusHp; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct UMistDamageOverrideTable* OverrideDamageTable; // 0x78(0x08)
};

// ScriptStruct Mist.MistGearsSparePartData
// Size: 0x78 (Inherited: 0x70)
struct FMistGearsSparePartData : FMistSparePartGenericData {
	float EngineTorqueMultiplier; // 0x70(0x04)
	float SprintingTorqueDiscount; // 0x74(0x04)
};

// ScriptStruct Mist.MistTorqueSparePartData
// Size: 0x78 (Inherited: 0x70)
struct FMistTorqueSparePartData : FMistSparePartGenericData {
	int32_t StackSizeOverride; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Mist.MistWaterSparePartData
// Size: 0x78 (Inherited: 0x70)
struct FMistWaterSparePartData : FMistSparePartGenericData {
	int32_t StackSizeOverride; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Mist.MistHatchSparePartData
// Size: 0x78 (Inherited: 0x70)
struct FMistHatchSparePartData : FMistSparePartGenericData {
	int32_t ContainerSlots; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Mist.MistCargoSparePartData
// Size: 0x78 (Inherited: 0x70)
struct FMistCargoSparePartData : FMistSparePartGenericData {
	int32_t ContainerSlots; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Mist.MistSpawnObsidianArea
// Size: 0x28 (Inherited: 0x00)
struct FMistSpawnObsidianArea {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Mist.MistParticleInfo
// Size: 0x58 (Inherited: 0x00)
struct FMistParticleInfo {
	struct UMistParticleAsset* ParticleAsset; // 0x00(0x08)
	bool bOverridePlacement; // 0x08(0x01)
	bool bGlobal; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<enum class EMistClimateType> ClimateTypes; // 0x10(0x10)
	struct TArray<struct UVirtualLandscapeLayer*> LandscapeLayers; // 0x20(0x10)
	struct TArray<struct FName> SubBiomesNames; // 0x30(0x10)
	float ParticleTimer; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UParticleSystemComponent*> ActiveParticleComponents; // 0x48(0x10)
};

// ScriptStruct Mist.LakeData
// Size: 0x24 (Inherited: 0x00)
struct FLakeData {
	struct FBox2D Bounds; // 0x00(0x14)
	float MaxHeight; // 0x14(0x04)
	float MinHeight; // 0x18(0x04)
	struct FName LayerName; // 0x1c(0x08)
};

// ScriptStruct Mist.MistQuestGiverPlayerData
// Size: 0x18 (Inherited: 0x00)
struct FMistQuestGiverPlayerData {
	struct FDateTime ReloadTime; // 0x00(0x08)
	struct TArray<struct UMistFlotillaQuest*> AvailableQuests; // 0x08(0x10)
};

// ScriptStruct Mist.MistActiveStatusEffectHolder
// Size: 0x10 (Inherited: 0x00)
struct FMistActiveStatusEffectHolder {
	struct TArray<struct FMistActiveStatusEffect> StatusEffects; // 0x00(0x10)
};

// ScriptStruct Mist.MistStatusEffectSource
// Size: 0x10 (Inherited: 0x00)
struct FMistStatusEffectSource {
	struct UObject* Object; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.MistActiveStatusEffect
// Size: 0x48 (Inherited: 0x00)
struct FMistActiveStatusEffect {
	uint64_t ID; // 0x00(0x08)
	struct UMistStatusEffect* Effect; // 0x08(0x08)
	float StartTime; // 0x10(0x04)
	float Duration; // 0x14(0x04)
	struct FMistStatusEffectSource Source; // 0x18(0x10)
	float AccumulatedMagnitudeTime; // 0x28(0x04)
	float Magnitude; // 0x2c(0x04)
	float LastTickTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FTimerHandle TimerHandle; // 0x38(0x08)
	struct FTimerHandle IntervalTimerHandle; // 0x40(0x08)
};

// ScriptStruct Mist.MistStatusEffectStartParameters
// Size: 0x08 (Inherited: 0x00)
struct FMistStatusEffectStartParameters {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Mist.MistStructureCustomization
// Size: 0x28 (Inherited: 0x00)
struct FMistStructureCustomization {
	struct UMistStructureDecorationTemplate* Decoration; // 0x00(0x08)
	struct UMistDyeTemplate* ForegroundDye; // 0x08(0x08)
	struct UMistDyeTemplate* BackgroundDye; // 0x10(0x08)
	struct UMistEmblemTemplate* Emblem; // 0x18(0x08)
	struct UMistEdgePatternTemplate* EdgePattern; // 0x20(0x08)
};

// ScriptStruct Mist.MistStubActionsPanelWidgetActionGroup
// Size: 0x20 (Inherited: 0x00)
struct FMistStubActionsPanelWidgetActionGroup {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FMistStubActionsPanelWidgetActionItem> Items; // 0x10(0x10)
};

// ScriptStruct Mist.MistStubActionsPanelWidgetActionItem
// Size: 0x20 (Inherited: 0x00)
struct FMistStubActionsPanelWidgetActionItem {
	struct FString Action; // 0x00(0x10)
	struct FString Label; // 0x10(0x10)
};

// ScriptStruct Mist.MistEditableTextBoxStyle
// Size: 0x08 (Inherited: 0x00)
struct FMistEditableTextBoxStyle {
	struct UMistEditableTextBoxTypeAsset* EditableTextBoxType; // 0x00(0x08)
};

// ScriptStruct Mist.MistBrushStyle
// Size: 0x08 (Inherited: 0x00)
struct FMistBrushStyle {
	struct UMistBrushTypeAsset* BrushType; // 0x00(0x08)
};

// ScriptStruct Mist.MistPanelStyle
// Size: 0x08 (Inherited: 0x00)
struct FMistPanelStyle {
	struct UMistPanelTypeAsset* PanelType; // 0x00(0x08)
};

// ScriptStruct Mist.MistLabelCheckBoxStyle
// Size: 0x08 (Inherited: 0x00)
struct FMistLabelCheckBoxStyle {
	struct UMistLabelCheckBoxTypeAsset* CheckBoxType; // 0x00(0x08)
};

// ScriptStruct Mist.MistCheckBoxStyle
// Size: 0x08 (Inherited: 0x00)
struct FMistCheckBoxStyle {
	struct UMistCheckBoxTypeAsset* CheckBoxType; // 0x00(0x08)
};

// ScriptStruct Mist.MistProgressBarStyle
// Size: 0x08 (Inherited: 0x00)
struct FMistProgressBarStyle {
	struct UMistProgressBarTypeAsset* ProgressBarType; // 0x00(0x08)
};

// ScriptStruct Mist.MistLabelButtonStyle
// Size: 0x08 (Inherited: 0x00)
struct FMistLabelButtonStyle {
	struct UMistLabelButtonTypeAsset* ButtonType; // 0x00(0x08)
};

// ScriptStruct Mist.MistButtonStyle
// Size: 0x08 (Inherited: 0x00)
struct FMistButtonStyle {
	struct UMistButtonTypeAsset* ButtonType; // 0x00(0x08)
};

// ScriptStruct Mist.MistFontStyle
// Size: 0x10 (Inherited: 0x00)
struct FMistFontStyle {
	struct UMistFontTypeAsset* FontType; // 0x00(0x08)
	struct UMistFontColorAsset* FontColor; // 0x08(0x08)
};

// ScriptStruct Mist.MistTermsAndConditionsScreenEntryConfig
// Size: 0x40 (Inherited: 0x00)
struct FMistTermsAndConditionsScreenEntryConfig {
	struct FText Name; // 0x00(0x18)
	struct FText Content; // 0x18(0x18)
	struct TArray<struct FText> CheckBoxLabels; // 0x30(0x10)
};

// ScriptStruct Mist.MistFoliageTileOptionsRow
// Size: 0x20 (Inherited: 0x08)
struct FMistFoliageTileOptionsRow : FTableRowBase {
	struct UMistFoliageComponent* FoliageComponent; // 0x08(0x08)
	float RespawnBoost; // 0x10(0x04)
	float BoostChance; // 0x14(0x04)
	float MinCountToConsider; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.MistTraderRandomOfferRow
// Size: 0x28 (Inherited: 0x10)
struct FMistTraderRandomOfferRow : FMistRandomizingTableRow {
	struct UMistItemTemplate* ItemClass; // 0x10(0x08)
	int32_t MinQuantity; // 0x18(0x04)
	int32_t MaxQuantity; // 0x1c(0x04)
	int32_t Price; // 0x20(0x04)
	bool bSellOrder; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Mist.MistTraderOffer
// Size: 0x10 (Inherited: 0x00)
struct FMistTraderOffer {
	struct UMistItemTemplate* Item; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	int32_t Price; // 0x0c(0x04)
};

// ScriptStruct Mist.MistArenaDuelState
// Size: 0x20 (Inherited: 0x00)
struct FMistArenaDuelState {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.MistTradePlayerHistory
// Size: 0x10 (Inherited: 0x00)
struct FMistTradePlayerHistory {
	struct TArray<struct FMistTradeHistoryEntry> Entries; // 0x00(0x10)
};

// ScriptStruct Mist.MistTradeHistoryEntry
// Size: 0x48 (Inherited: 0x00)
struct FMistTradeHistoryEntry {
	int64_t CharacterId; // 0x00(0x08)
	struct FString CharacterName; // 0x08(0x10)
	struct FMistItem Item; // 0x18(0x18)
	int32_t Quantity; // 0x30(0x04)
	int32_t TotalPrice; // 0x34(0x04)
	bool bBuyOrder; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FDateTime Time; // 0x40(0x08)
};

// ScriptStruct Mist.MistTradeStationVaultContent
// Size: 0x10 (Inherited: 0x00)
struct FMistTradeStationVaultContent {
	struct TArray<struct FMistTradeStationVaultItem> Items; // 0x00(0x10)
};

// ScriptStruct Mist.MistTradeStationSyncData
// Size: 0x88 (Inherited: 0x00)
struct FMistTradeStationSyncData {
	bool bHasVaultContent; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMistTradeStationVaultContent VaultContent; // 0x08(0x10)
	bool bHasVaultTax; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t VaultTax; // 0x1c(0x04)
	bool bAuctionScheduleChanged; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float AuctionScheduledServerTime; // 0x24(0x04)
	struct TArray<struct FMistTradeStationOrderAddedDto> AddedOrders; // 0x28(0x10)
	struct TArray<struct FMistTradeStationOrderUpdatedDto> UpdatedOrders; // 0x38(0x10)
	struct TArray<struct FString> DeletedOrders; // 0x48(0x10)
	struct TArray<struct FMistTradeStationAuctionAddedDto> AddedAuctions; // 0x58(0x10)
	struct TArray<struct FMistTradeStationAuctionUpdatedDto> UpdatedAuctions; // 0x68(0x10)
	struct TArray<struct FString> DeletedAuctions; // 0x78(0x10)
};

// ScriptStruct Mist.MistTradeStationAuctionUpdatedDto
// Size: 0x38 (Inherited: 0x00)
struct FMistTradeStationAuctionUpdatedDto {
	struct FString AuctionGuid; // 0x00(0x10)
	int32_t CurrentHighestBid; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t WinnerId; // 0x18(0x08)
	struct TArray<int64_t> ParticipantsIds; // 0x20(0x10)
	float SecondsToFinish; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Mist.MistTradeStationAuctionAddedDto
// Size: 0x50 (Inherited: 0x00)
struct FMistTradeStationAuctionAddedDto {
	struct FString AuctionGuid; // 0x00(0x10)
	struct FMistItem Item; // 0x10(0x18)
	int32_t Quantity; // 0x28(0x04)
	int32_t CurrentHighestBid; // 0x2c(0x04)
	int64_t WinnerId; // 0x30(0x08)
	struct TArray<int64_t> ParticipantsIds; // 0x38(0x10)
	float SecondsToFinish; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Mist.MistTradeStationOrderUpdatedDto
// Size: 0x28 (Inherited: 0x00)
struct FMistTradeStationOrderUpdatedDto {
	struct FString OrderGuid; // 0x00(0x10)
	int64_t ItemCustomValue1; // 0x10(0x08)
	int64_t ItemCustomValue2; // 0x18(0x08)
	int32_t Quantity; // 0x20(0x04)
	float Price; // 0x24(0x04)
};

// ScriptStruct Mist.MistTradeStationOrderAddedDto
// Size: 0x88 (Inherited: 0x00)
struct FMistTradeStationOrderAddedDto {
	struct FString OrderGuid; // 0x00(0x10)
	bool bIsBuyOrder; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	int64_t CharacterId; // 0x18(0x08)
	struct FString CharacterName; // 0x20(0x10)
	int64_t ClanId; // 0x30(0x08)
	struct FString ClanName; // 0x38(0x10)
	int32_t ClanColorIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString AccountName; // 0x50(0x10)
	enum class EMistGamePlatform AccountPlatform; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FMistItem Item; // 0x68(0x18)
	int32_t Quantity; // 0x80(0x04)
	float Price; // 0x84(0x04)
};

// ScriptStruct Mist.MistTradeStationVaultItem
// Size: 0x20 (Inherited: 0x00)
struct FMistTradeStationVaultItem {
	struct FMistItem Item; // 0x00(0x18)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.MistTradeStationOrderTransactionList
// Size: 0x18 (Inherited: 0x00)
struct FMistTradeStationOrderTransactionList {
	struct UMistTradeStationServerOrder* Order; // 0x00(0x08)
	struct TArray<struct FMistTradeStationOrderTransaction> Items; // 0x08(0x10)
};

// ScriptStruct Mist.MistTradeStationOrderTransaction
// Size: 0x20 (Inherited: 0x00)
struct FMistTradeStationOrderTransaction {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.MistAuctionGenerationRow
// Size: 0x38 (Inherited: 0x10)
struct FMistAuctionGenerationRow : FMistRandomizingTableRow {
	struct UMistItemTemplate* AuctionItem; // 0x10(0x08)
	int32_t StartingPrice; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FTimespan MinAuctionTime; // 0x20(0x08)
	struct FTimespan MaxAuctionTime; // 0x28(0x08)
	int32_t MinQuantity; // 0x30(0x04)
	int32_t MaxQuantity; // 0x34(0x04)
};

// ScriptStruct Mist.MistTradeStationAuctionChangeList
// Size: 0x18 (Inherited: 0x00)
struct FMistTradeStationAuctionChangeList {
	struct UMistTradeStationAuctionObject* Auction; // 0x00(0x08)
	struct TArray<struct FMistTradeStationAuctionChange> Changes; // 0x08(0x10)
};

// ScriptStruct Mist.MistTradeStationAuctionChange
// Size: 0x20 (Inherited: 0x00)
struct FMistTradeStationAuctionChange {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Mist.TradeStationAuctionItem
// Size: 0x48 (Inherited: 0x00)
struct FTradeStationAuctionItem {
	struct FMistItem Item; // 0x00(0x18)
	int32_t Quantity; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FDateTime FinishDateAndTime; // 0x20(0x08)
	int32_t CurrentHighestBid; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64_t WinnerId; // 0x30(0x08)
	struct TArray<int64_t> ParticipantsIds; // 0x38(0x10)
};

// ScriptStruct Mist.MistTradeStationVaultMoney
// Size: 0x08 (Inherited: 0x00)
struct FMistTradeStationVaultMoney {
	int32_t Deposits; // 0x00(0x04)
	int32_t PendingDeposits; // 0x04(0x04)
};

// ScriptStruct Mist.MistTradeStationActionResponse
// Size: 0x18 (Inherited: 0x00)
struct FMistTradeStationActionResponse {
	struct FString TrackingGuid; // 0x00(0x10)
	enum class EMistTradeStationActionResponseState State; // 0x10(0x01)
	bool bLeftoversAddedToVault; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Mist.MistTradeStationExecuteOrderActionData
// Size: 0x40 (Inherited: 0x00)
struct FMistTradeStationExecuteOrderActionData {
	struct FString TrackingGuid; // 0x00(0x10)
	struct FString OrderGuid; // 0x10(0x10)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	int64_t CurrentItemCustomValue1; // 0x28(0x08)
	int64_t CurrentItemCustomValue2; // 0x30(0x08)
	float CurrentPrice; // 0x38(0x04)
	bool IsQuickSell; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Mist.MistTradeStationDeleteOrderActionData
// Size: 0x38 (Inherited: 0x00)
struct FMistTradeStationDeleteOrderActionData {
	struct FString TrackingGuid; // 0x00(0x10)
	struct FString OrderGuid; // 0x10(0x10)
	int64_t CurrentItemCustomValue1; // 0x20(0x08)
	int64_t CurrentItemCustomValue2; // 0x28(0x08)
	int32_t CurrentQuantity; // 0x30(0x04)
	float CurrentPrice; // 0x34(0x04)
};

// ScriptStruct Mist.MistTradeStationUpdateOrderActionData
// Size: 0x58 (Inherited: 0x00)
struct FMistTradeStationUpdateOrderActionData {
	struct FString TrackingGuid; // 0x00(0x10)
	struct FString OrderGuid; // 0x10(0x10)
	int64_t ItemCustomValue1; // 0x20(0x08)
	int64_t ItemCustomValue2; // 0x28(0x08)
	int32_t Quantity; // 0x30(0x04)
	float Price; // 0x34(0x04)
	int64_t CurrentItemCustomValue1; // 0x38(0x08)
	int64_t CurrentItemCustomValue2; // 0x40(0x08)
	int32_t CurrentQuantity; // 0x48(0x04)
	float CurrentPrice; // 0x4c(0x04)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Mist.MistTradeStationAddOrderActionData
// Size: 0x38 (Inherited: 0x00)
struct FMistTradeStationAddOrderActionData {
	struct FString TrackingGuid; // 0x00(0x10)
	bool bIsBuyOrder; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FMistItem Item; // 0x18(0x18)
	int32_t Quantity; // 0x30(0x04)
	float Price; // 0x34(0x04)
};

// ScriptStruct Mist.MistTriggerActorPair
// Size: 0x10 (Inherited: 0x00)
struct FMistTriggerActorPair {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Mist.MistTutorialEntry
// Size: 0x58 (Inherited: 0x08)
struct FMistTutorialEntry : FTableRowBase {
	struct FName Name; // 0x08(0x08)
	struct UMistTutorialQuest* Quest; // 0x10(0x08)
	int32_t ExperienceReward; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FMistLootDesc LootReward; // 0x20(0x30)
	uint32_t SoundCueId; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Mist.MistQuestSubtask
// Size: 0x48 (Inherited: 0x00)
struct FMistQuestSubtask {
	struct FName Name; // 0x00(0x08)
	int32_t RequiredProgress; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Description; // 0x10(0x18)
	struct FName BindingName; // 0x28(0x08)
	struct FName AltBindingName; // 0x30(0x08)
	enum class ETaskState TaskState; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName ParentName; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Mist.MistQuestSubtaskState
// Size: 0x0c (Inherited: 0x00)
struct FMistQuestSubtaskState {
	struct FName Name; // 0x00(0x08)
	int32_t TimesOccured; // 0x08(0x04)
};

// ScriptStruct Mist.ItemToHarvest
// Size: 0x10 (Inherited: 0x00)
struct FItemToHarvest {
	struct FName TaskName; // 0x00(0x08)
	struct UMistItemTemplate* ItemTemplate; // 0x08(0x08)
};

// ScriptStruct Mist.TechToUnlock
// Size: 0x10 (Inherited: 0x00)
struct FTechToUnlock {
	struct UMistTechTreeItem* TechToUnlock; // 0x00(0x08)
	struct FName TechTaskName; // 0x08(0x08)
};

// ScriptStruct Mist.MistTabInfo
// Size: 0x20 (Inherited: 0x00)
struct FMistTabInfo {
	struct UMistUITabButton* ButtonWidget; // 0x00(0x08)
	struct UWidget* ContentWidget; // 0x08(0x08)
	bool bEnabled; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
};

// ScriptStruct Mist.MistUnlockableTierInfo
// Size: 0x60 (Inherited: 0x00)
struct FMistUnlockableTierInfo {
	enum class EMistTechTreeTier SmallerOrEqualToTier; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSlateColor BackgroundColorUnlockable; // 0x08(0x28)
	struct FSlateColor BackgroundColorNotUnlockable; // 0x30(0x28)
	struct UMistKnowledgeItemTemplate* KnowledgeItemRequired; // 0x58(0x08)
};

// ScriptStruct Mist.MistAxisMappingBinding
// Size: 0xb0 (Inherited: 0x00)
struct FMistAxisMappingBinding {
	struct FName Name; // 0x00(0x08)
	struct FInputAxisKeyMapping Mapping[0x2]; // 0x08(0x50)
	struct FInputAxisKeyMapping AlternativeMapping[0x2]; // 0x58(0x50)
	bool bModified; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct Mist.MistActionMappingBinding
// Size: 0x60 (Inherited: 0x00)
struct FMistActionMappingBinding {
	struct FName Name; // 0x00(0x08)
	struct FInputActionKeyMapping Mapping; // 0x08(0x28)
	struct FInputActionKeyMapping AlternativeMapping; // 0x30(0x28)
	bool bModified; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct Mist.CollisionBodiesIndicesHolder
// Size: 0x38 (Inherited: 0x00)
struct FCollisionBodiesIndicesHolder {
	struct UMistVirtualCollisionBodiesComponent* VirtualCollisionBodyComponent; // 0x00(0x08)
	struct USkeletalMeshComponent* SkelMesh; // 0x08(0x08)
	char pad_10[0x28]; // 0x10(0x28)
};

// ScriptStruct Mist.MistVirtualSkeletalMesh
// Size: 0xa0 (Inherited: 0x00)
struct FMistVirtualSkeletalMesh {
	struct USkeletalMeshComponent* SkelMesh; // 0x00(0x08)
	struct UPhysicsAsset* PhysAsset; // 0x08(0x08)
	struct UAnimationAsset* Asset; // 0x10(0x08)
	char pad_18[0x88]; // 0x18(0x88)
};

// ScriptStruct Mist.CollisionBoneNamesHolder
// Size: 0x38 (Inherited: 0x00)
struct FCollisionBoneNamesHolder {
	struct FMistComponentReference CompRef; // 0x00(0x28)
	struct TArray<struct FName> BoneNames; // 0x28(0x10)
};

// ScriptStruct Mist.MistVitaminItem
// Size: 0x18 (Inherited: 0x00)
struct FMistVitaminItem {
	struct UMistVitaminItemTemplate* Template; // 0x00(0x08)
	int64_t CustomValue1; // 0x08(0x08)
	int64_t CustomValue2; // 0x10(0x08)
};

// ScriptStruct Mist.MistWFloat
// Size: 0x20 (Inherited: 0x00)
struct FMistWFloat {
	struct FString Name; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float Max; // 0x14(0x04)
	float Value; // 0x18(0x04)
	bool IsVariable; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Mist.MistWGraph
// Size: 0x10 (Inherited: 0x00)
struct FMistWGraph {
	struct TArray<struct FMistWGraphPoint> Points; // 0x00(0x10)
};

// ScriptStruct Mist.MistWInputThresholds
// Size: 0xc0 (Inherited: 0x00)
struct FMistWInputThresholds {
	struct FMistWFloat InputForwardSpeedThresholdSoftHardTurn; // 0x00(0x20)
	struct FMistWFloat InputSidewaysSpeedThresholdMin; // 0x20(0x20)
	struct FMistWFloat InputSidewaysSpeedThresholdMax; // 0x40(0x20)
	struct FMistWFloat InputSidewaysSpeedSoftThresholdMin; // 0x60(0x20)
	struct FMistWFloat InputSidewaysSpeedSoftThresholdMax; // 0x80(0x20)
	struct FMistWFloat InputForwardSpeedThresholdNoAccel; // 0xa0(0x20)
};

// ScriptStruct Mist.MistWInputRate
// Size: 0x40 (Inherited: 0x00)
struct FMistWInputRate {
	struct FMistWFloat RiseRate; // 0x00(0x20)
	struct FMistWFloat FallRate; // 0x20(0x20)
};

// ScriptStruct Mist.MistWalkerCalculatorData
// Size: 0x7a0 (Inherited: 0x00)
struct FMistWalkerCalculatorData {
	struct FString Name; // 0x00(0x10)
	struct FMistWFloat Mass; // 0x10(0x20)
	struct FMistWFloat PeakTorque; // 0x30(0x20)
	struct FMistWFloat PeakRpm; // 0x50(0x20)
	struct FMistWGraph TorqueCurve; // 0x70(0x10)
	struct FMistWFloat Final_Gear_Ratio; // 0x80(0x20)
	struct FMistWFloat RollingResistance; // 0xa0(0x20)
	struct FMistWFloat AirDrag; // 0xc0(0x20)
	struct FMistWFloat FrontArea; // 0xe0(0x20)
	struct FMistWFloat DampingRateFullThrottle; // 0x100(0x20)
	struct FMistWFloat EngineMOI; // 0x120(0x20)
	struct FMistWFloat ClutchStrength; // 0x140(0x20)
	struct FMistWFloat WheelMass; // 0x160(0x20)
	struct FMistWFloat WheelDampingRate; // 0x180(0x20)
	struct FMistWFloat WheelRadius; // 0x1a0(0x20)
	struct FMistWFloat WheelWidth; // 0x1c0(0x20)
	struct FMistWFloat WheelMaxSteer; // 0x1e0(0x20)
	struct FMistWFloat WheelMaxBrakeTorque; // 0x200(0x20)
	struct FMistWFloat WheelSuspensionMaxRaise; // 0x220(0x20)
	struct FMistWFloat WheelSuspensionMaxDrop; // 0x240(0x20)
	struct FMistWFloat WheelSuspensionNaturalFrequency; // 0x260(0x20)
	struct FMistWFloat WheelSuspensionDampingRatio; // 0x280(0x20)
	struct FMistWFloat WheelSuspensionForceOffset; // 0x2a0(0x20)
	struct FMistWFloat WheelSuspensionForceHorizontalOffsetX; // 0x2c0(0x20)
	struct FMistWFloat WheelSuspensionForceHorizontalOffsetY; // 0x2e0(0x20)
	struct FMistWFloat TireFrictionScale; // 0x300(0x20)
	struct FMistWFloat LongStiffValue; // 0x320(0x20)
	struct FMistWFloat LatStiffX; // 0x340(0x20)
	struct FMistWFloat LatStiffY; // 0x360(0x20)
	struct FMistWGraph FrictionVsSlipGraph; // 0x380(0x10)
	struct FVector CmOffset; // 0x390(0x0c)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct FMistWFloat InertiaTensorX; // 0x3a0(0x20)
	struct FMistWFloat InertiaTensorY; // 0x3c0(0x20)
	struct FMistWFloat InertiaTensorZ; // 0x3e0(0x20)
	struct TArray<struct FVector> WheelRestingPos; // 0x400(0x10)
	struct TArray<struct FVector> ChassisVertices; // 0x410(0x10)
	struct FMistWInputThresholds InputThresholds; // 0x420(0xc0)
	struct FMistWInputRate ThrottleInputRate; // 0x4e0(0x40)
	struct FMistWInputRate SteeringInputRate; // 0x520(0x40)
	struct FMistWInputRate BrakeInputRate; // 0x560(0x40)
	struct FMistWFloat DampingRateZeroThrottleClutchDisengaged; // 0x5a0(0x20)
	struct FMistWFloat DampingRateZeroThrottleClutchEngaged; // 0x5c0(0x20)
	struct TArray<struct FMistWGear> ForwardGearData; // 0x5e0(0x10)
	struct FMistWFloat ReverseGearRatio; // 0x5f0(0x20)
	struct FMistWFloat MinNormalizedLoad; // 0x610(0x20)
	struct FMistWFloat MinFilteredNormalizedLoad; // 0x630(0x20)
	struct FMistWFloat MaxNormalizedLoad; // 0x650(0x20)
	struct FMistWFloat MaxFilteredNormalizedLoad; // 0x670(0x20)
	struct FMistWFloat AckermannAccuracy; // 0x690(0x20)
	struct FMistWFloat DifferentialRearSplit; // 0x6b0(0x20)
	struct FMistWFloat DifferentialFrontRearSplit; // 0x6d0(0x20)
	struct FMistWFloat DifferentialFrontLeftRightSplit; // 0x6f0(0x20)
	struct FMistWFloat DifferentialRearLeftRightSplit; // 0x710(0x20)
	struct FMistWFloat DifferentialCentreBias; // 0x730(0x20)
	struct FMistWFloat DifferentialFrontBias; // 0x750(0x20)
	struct FMistWFloat DifferentialRearBias; // 0x770(0x20)
	struct FMistWGraph SteeringCurve; // 0x790(0x10)
};

// ScriptStruct Mist.MistWGraphPoint
// Size: 0x40 (Inherited: 0x00)
struct FMistWGraphPoint {
	struct FMistWFloat X; // 0x00(0x20)
	struct FMistWFloat Y; // 0x20(0x20)
};

// ScriptStruct Mist.MistWGear
// Size: 0x68 (Inherited: 0x00)
struct FMistWGear {
	int32_t Gear; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMistWFloat Ratio; // 0x08(0x20)
	struct FMistWFloat UpRpmPercentage; // 0x28(0x20)
	struct FMistWFloat DownRpmPercentage; // 0x48(0x20)
};

// ScriptStruct Mist.MistWalkerTierUpgradesRow
// Size: 0x40 (Inherited: 0x08)
struct FMistWalkerTierUpgradesRow : FTableRowBase {
	struct TSoftClassPtr<UObject> Walker; // 0x08(0x28)
	enum class ESparePartsSlot UpgradeType; // 0x30(0x01)
	enum class ESparePartsTier Tier; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t StackSize; // 0x34(0x04)
	int32_t SlotAmount; // 0x38(0x04)
	float CustomValue; // 0x3c(0x04)
};

// ScriptStruct Mist.MistWalkerCraftingSkillRow
// Size: 0x18 (Inherited: 0x08)
struct FMistWalkerCraftingSkillRow : FTableRowBase {
	enum class EMistWalkerType WalkerType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t InitialCost; // 0x0c(0x04)
	int32_t CostMultiplier; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Mist.MistWalkerModularParameters
// Size: 0xd0 (Inherited: 0x00)
struct FMistWalkerModularParameters {
	char pad_0[0xa8]; // 0x00(0xa8)
	struct UMistDamageOverrideTable* SparePartsDamageOverride; // 0xa8(0x08)
	char pad_B0[0x20]; // 0xb0(0x20)
};

// ScriptStruct Mist.MistWalkerPartRecipe
// Size: 0x70 (Inherited: 0x00)
struct FMistWalkerPartRecipe {
	struct FName Name; // 0x00(0x08)
	struct AMistWalkerPart* Part; // 0x08(0x08)
	struct FMistCraftingRequirements Requirements; // 0x10(0x60)
};

// ScriptStruct Mist.MistWalkerPartAttachment
// Size: 0x10 (Inherited: 0x00)
struct FMistWalkerPartAttachment {
	struct AMistWalker* Walker; // 0x00(0x08)
	bool bAttached; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Mist.MistWalkerStructureAllowanceData
// Size: 0x40 (Inherited: 0x08)
struct FMistWalkerStructureAllowanceData : FTableRowBase {
	struct TSoftClassPtr<UObject> Walker; // 0x08(0x28)
	struct TArray<struct UMistPlaceableTemplate*> NotAllowedStructures; // 0x30(0x10)
};

// ScriptStruct Mist.MistCarryInfo
// Size: 0x50 (Inherited: 0x00)
struct FMistCarryInfo {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName SocketName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x30)
	struct FName WeaponSocketName; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Mist.HitTargetStruct
// Size: 0x18 (Inherited: 0x00)
struct FHitTargetStruct {
	struct UPhysicalMaterial* WeaponMaterial; // 0x00(0x08)
	struct UPhysicalMaterial* TargetMaterial; // 0x08(0x08)
	struct FName TemplateToHitTaskName; // 0x10(0x08)
};

// ScriptStruct Mist.MistWeatherTransitionSettingsData
// Size: 0x10 (Inherited: 0x00)
struct FMistWeatherTransitionSettingsData {
	float TransitionTime; // 0x00(0x04)
	float TransitionTimeDeviation; // 0x04(0x04)
	float Duration; // 0x08(0x04)
	float DurationDeviation; // 0x0c(0x04)
};

// ScriptStruct Mist.MistWeatherGateData
// Size: 0xb0 (Inherited: 0x00)
struct FMistWeatherGateData {
	struct TArray<struct FMistWeatherGate> Gate; // 0x00(0x10)
	struct TMap<struct UMistWeatherTypeData*, float> WeatherGateMap; // 0x10(0x50)
	struct TMap<struct UMistWeatherTypeData*, float> FilteredMap; // 0x60(0x50)
};

// ScriptStruct Mist.MistWeatherType
// Size: 0xd0 (Inherited: 0x00)
struct FMistWeatherType {
	struct UMistWeatherTypeData* Type; // 0x00(0x08)
	bool bOverrideSettings; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FMistWeatherTransitionSettingsData Settings; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FMistWeatherGateData GateSettings; // 0x20(0xb0)
};

// ScriptStruct Mist.MistWeatherGate
// Size: 0x0c (Inherited: 0x00)
struct FMistWeatherGate {
	struct FName Name; // 0x00(0x08)
	float Probability; // 0x08(0x04)
};

// ScriptStruct Mist.WeightMapPointInfo
// Size: 0x0c (Inherited: 0x00)
struct FWeightMapPointInfo {
	char Data[0xc]; // 0x00(0x0c)
};

// ScriptStruct Mist.MistComponentLocationEntry
// Size: 0x14 (Inherited: 0x00)
struct FMistComponentLocationEntry {
	struct FName ComponentName; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
};

// ScriptStruct Mist.MistWorldTravelOperation
// Size: 0x20 (Inherited: 0x00)
struct FMistWorldTravelOperation {
	enum class EMistWorldTravelOperationType Type; // 0x00(0x01)
	enum class EMistWorldTravelOperationState State; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t Direction; // 0x04(0x04)
	float EndTime; // 0x08(0x04)
	enum class EMistWorldTravelError Error; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString ErrorMessage; // 0x10(0x10)
};

// ScriptStruct Mist.MistWorldTravelErrorTableRow
// Size: 0xb0 (Inherited: 0x08)
struct FMistWorldTravelErrorTableRow : FTableRowBase {
	enum class EMistWorldTravelError Error; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSlateBrush Icon; // 0x10(0x88)
	struct FText HudMessage; // 0x98(0x18)
};

// ScriptStruct Mist.MistWorldTravelPartyValidation
// Size: 0x01 (Inherited: 0x00)
struct FMistWorldTravelPartyValidation {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Mist.MistTravelParty
// Size: 0x60 (Inherited: 0x00)
struct FMistTravelParty {
	struct AMistCharacter* Captain; // 0x00(0x08)
	struct AMistWalker* Walker; // 0x08(0x08)
	struct TSet<struct AMistCharacter*> Members; // 0x10(0x50)
};

// ScriptStruct Mist.MistArrivedWorldTravelParty
// Size: 0x40 (Inherited: 0x00)
struct FMistArrivedWorldTravelParty {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Mist.MistOffMapTransferCharacter
// Size: 0x48 (Inherited: 0x00)
struct FMistOffMapTransferCharacter {
	char pad_0[0x38]; // 0x00(0x38)
	struct AMistOasisPlayerState* PlayerState; // 0x38(0x08)
	struct AMistOasisPlayerController* PlayerController; // 0x40(0x08)
};

// ScriptStruct Mist.MistTransferCharacter
// Size: 0x48 (Inherited: 0x00)
struct FMistTransferCharacter {
	char pad_0[0x38]; // 0x00(0x38)
	struct AMistOasisPlayerState* PlayerState; // 0x38(0x08)
	struct AMistOasisPlayerController* PlayerController; // 0x40(0x08)
};

// ScriptStruct Mist.MistDepartingWorldTravelParty
// Size: 0xb8 (Inherited: 0x00)
struct FMistDepartingWorldTravelParty {
	char pad_0[0x98]; // 0x00(0x98)
	struct TArray<struct AMistOasisPlayerState*> PlayerStates; // 0x98(0x10)
	struct TArray<struct AMistOasisPlayerController*> PlayerControllers; // 0xa8(0x10)
};

// ScriptStruct Mist.MistWorldTravelCharacterTransferSettings
// Size: 0x08 (Inherited: 0x00)
struct FMistWorldTravelCharacterTransferSettings {
	int32_t Cost; // 0x00(0x04)
	int32_t NoCostCoolDownDuration; // 0x04(0x04)
};

// ScriptStruct Mist.MistCachedWorldTravelSettings
// Size: 0x28 (Inherited: 0x00)
struct FMistCachedWorldTravelSettings {
	struct UParticleSystem* BorderParticleSystem; // 0x00(0x08)
	struct FVector BorderParticleSystemOffset; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct UMistSceneAsset* SandstormSceneAsset; // 0x18(0x08)
	float MaxSandstormWeight; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Mist.MistParticleData
// Size: 0x80 (Inherited: 0x00)
struct FMistParticleData {
	struct TArray<struct UParticleSystem*> ParticlesAround; // 0x00(0x10)
	struct TArray<struct UParticleSystem*> ParticlesHere; // 0x10(0x10)
	float DelayToSpawnParticles; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct USoundBase*> Sounds; // 0x28(0x10)
	bool bGlobal; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<enum class EMistClimateType> ClimateTypes; // 0x40(0x10)
	struct TArray<struct UVirtualLandscapeLayer*> LandscapeLayers; // 0x50(0x10)
	struct TArray<struct FName> SubBiomesNames; // 0x60(0x10)
	bool bIsKillOnDeactivate; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float StartTransitionDelay; // 0x74(0x04)
	float EndTransitionDelay; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Mist.MistWormDebugChainPart
// Size: 0x20 (Inherited: 0x00)
struct FMistWormDebugChainPart {
	struct TArray<struct FTransform> BodyPositions; // 0x00(0x10)
	struct TArray<struct FMistWormDebugLine> ContactInfo; // 0x10(0x10)
};

// ScriptStruct Mist.MistWormDebugLine
// Size: 0x20 (Inherited: 0x00)
struct FMistWormDebugLine {
	struct FVector StartPosition; // 0x00(0x0c)
	struct FVector EndPosition; // 0x0c(0x0c)
	struct FColor LineColor; // 0x18(0x04)
	float Thickness; // 0x1c(0x04)
};

// ScriptStruct Mist.MistWormScaleHealth
// Size: 0x10 (Inherited: 0x00)
struct FMistWormScaleHealth {
	struct UMistWormScaleComponent* WormScale; // 0x00(0x08)
	float Health; // 0x08(0x04)
	float Stiffness; // 0x0c(0x04)
};

// ScriptStruct Mist.WalkerContactConfigMaterialFriction
// Size: 0x10 (Inherited: 0x00)
struct FWalkerContactConfigMaterialFriction {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float FrictionScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Mist.WalkerInputRate
// Size: 0x08 (Inherited: 0x00)
struct FWalkerInputRate {
	float RiseRate; // 0x00(0x04)
	float FallRate; // 0x04(0x04)
};

// ScriptStruct Mist.ReplicatedWalkerState
// Size: 0x14 (Inherited: 0x00)
struct FReplicatedWalkerState {
	float SteeringInput; // 0x00(0x04)
	float ThrottleInput; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float HandbrakeInput; // 0x0c(0x04)
	int32_t CurrentGear; // 0x10(0x04)
};

// ScriptStruct Mist.WalkerAntiRollBarSetup
// Size: 0x0c (Inherited: 0x00)
struct FWalkerAntiRollBarSetup {
	int32_t Wheel0; // 0x00(0x04)
	int32_t Wheel1; // 0x04(0x04)
	float Stiffness; // 0x08(0x04)
};

// ScriptStruct Mist.WalkerWheelSetup
// Size: 0x20 (Inherited: 0x00)
struct FWalkerWheelSetup {
	struct UWalkerWheel* WheelClass; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector AdditionalOffset; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Mist.WalkerSteeringData
// Size: 0x90 (Inherited: 0x00)
struct FWalkerSteeringData {
	struct FRuntimeFloatCurve SteeringCurve; // 0x00(0x88)
	float AckermannAccuracy; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Mist.WalkerDifferentialData
// Size: 0x1c (Inherited: 0x00)
struct FWalkerDifferentialData {
	enum class EWalkerDifferential DifferentialType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FrontRearSplit; // 0x04(0x04)
	float FrontLeftRightSplit; // 0x08(0x04)
	float RearLeftRightSplit; // 0x0c(0x04)
	float CentreBias; // 0x10(0x04)
	float FrontBias; // 0x14(0x04)
	float RearBias; // 0x18(0x04)
};

// ScriptStruct Mist.WalkerTransmissionData
// Size: 0x30 (Inherited: 0x00)
struct FWalkerTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GearSwitchTime; // 0x04(0x04)
	float GearAutoBoxLatency; // 0x08(0x04)
	float FinalRatio; // 0x0c(0x04)
	struct TArray<struct FWalkerGearData> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x04)
	float NeutralGearUpRatio; // 0x24(0x04)
	float ClutchStrength; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Mist.WalkerGearData
// Size: 0x0c (Inherited: 0x00)
struct FWalkerGearData {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct Mist.WalkerClutchData
// Size: 0xa0 (Inherited: 0x00)
struct FWalkerClutchData {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x88)
	float PeakTorque; // 0x88(0x04)
	float MaxRPM; // 0x8c(0x04)
	float MOI; // 0x90(0x04)
	float DampingRateFullThrottle; // 0x94(0x04)
	float DampingRateZeroThrottleClutchEngaged; // 0x98(0x04)
	float DampingRateZeroThrottleClutchDisengaged; // 0x9c(0x04)
};

// ScriptStruct Mist.WalkerEngineData
// Size: 0xa0 (Inherited: 0x00)
struct FWalkerEngineData {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x88)
	float PeakTorque; // 0x88(0x04)
	float MaxRPM; // 0x8c(0x04)
	float MOI; // 0x90(0x04)
	float DampingRateFullThrottle; // 0x94(0x04)
	float DampingRateZeroThrottleClutchEngaged; // 0x98(0x04)
	float DampingRateZeroThrottleClutchDisengaged; // 0x9c(0x04)
};

// ScriptStruct Mist.WalkerCalculatorEntry
// Size: 0x28 (Inherited: 0x00)
struct FWalkerCalculatorEntry {
	struct FName Component; // 0x00(0x08)
	struct FName Variable; // 0x08(0x08)
	struct FName Property; // 0x10(0x08)
	struct FName Additional; // 0x18(0x08)
	float Value; // 0x20(0x04)
	float AdditionalValue; // 0x24(0x04)
};

