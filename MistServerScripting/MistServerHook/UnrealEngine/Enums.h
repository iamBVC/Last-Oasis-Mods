#pragma once
#include "DataTypes.h"

enum class ELogVerbosity : uint8
{
	NoLogging = 0,
	Fatal,
	Error,
	Warning,
	Display,
	Log,
	Verbose,
	VeryVerbose,
};

enum class EFindName : uint8
{
	FNAME_Find,
	FNAME_Add,
	FNAME_Replace_Not_Safe_For_Threading,
};

enum class EObjectFlags
{
	// Do not add new flags unless they truly belong here. There are alternatives.
	// if you change any the bit of any of the RF_Load flags, then you will need legacy serialization
	RF_NoFlags = 0x00000000,	///< No flags, used to avoid a cast

	// This first group of flags mostly has to do with what kind of object it is. Other than transient, these are the persistent object flags.
	// The garbage collector also tends to look at these.
	RF_Public = 0x00000001,	///< Object is visible outside its package.
	RF_Standalone = 0x00000002,	///< Keep object around for editing even if unreferenced.
	RF_MarkAsNative = 0x00000004,	///< Object (UField) will be marked as native on construction (DO NOT USE THIS FLAG in HasAnyFlags() etc)
	RF_Transactional = 0x00000008,	///< Object is transactional.
	RF_ClassDefaultObject = 0x00000010,	///< This object is its class's default object
	RF_ArchetypeObject = 0x00000020,	///< This object is a template for another object - treat like a class default object
	RF_Transient = 0x00000040,	///< Don't save object.

	// This group of flags is primarily concerned with garbage collection.
	RF_MarkAsRootSet = 0x00000080,	///< Object will be marked as root set on construction and not be garbage collected, even if unreferenced (DO NOT USE THIS FLAG in HasAnyFlags() etc)
	RF_TagGarbageTemp = 0x00000100,	///< This is a temp user flag for various utilities that need to use the garbage collector. The garbage collector itself does not interpret it.

	// The group of flags tracks the stages of the lifetime of a uobject
	RF_NeedInitialization = 0x00000200,	///< This object has not completed its initialization process. Cleared when ~FObjectInitializer completes
	RF_NeedLoad = 0x00000400,	///< During load, indicates object needs loading.
	RF_KeepForCooker = 0x00000800,	///< Keep this object during garbage collection because it's still being used by the cooker
	RF_NeedPostLoad = 0x00001000,	///< Object needs to be postloaded.
	RF_NeedPostLoadSubobjects = 0x00002000,	///< During load, indicates that the object still needs to instance subobjects and fixup serialized component references
	RF_NewerVersionExists = 0x00004000,	///< Object has been consigned to oblivion due to its owner package being reloaded, and a newer version currently exists
	RF_BeginDestroyed = 0x00008000,	///< BeginDestroy has been called on the object.
	RF_FinishDestroyed = 0x00010000,	///< FinishDestroy has been called on the object.

	// Misc. Flags
	RF_BeingRegenerated = 0x00020000,	///< Flagged on UObjects that are used to create UClasses (e.g. Blueprints) while they are regenerating their UClass on load (See FLinkerLoad::CreateExport()), as well as UClass objects in the midst of being created
	RF_DefaultSubObject = 0x00040000,	///< Flagged on subobjects that are defaults
	RF_WasLoaded = 0x00080000,	///< Flagged on UObjects that were loaded
	RF_TextExportTransient = 0x00100000,	///< Do not export object to text form (e.g. copy/paste). Generally used for sub-objects that can be regenerated from data in their parent object.
	RF_LoadCompleted = 0x00200000,	///< Object has been completely serialized by linkerload at least once. DO NOT USE THIS FLAG, It should be replaced with RF_WasLoaded.
	RF_InheritableComponentTemplate = 0x00400000, ///< Archetype of the object can be in its super class
	RF_DuplicateTransient = 0x00800000,	///< Object should not be included in any type of duplication (copy/paste, binary duplication, etc.)
	RF_StrongRefOnFrame = 0x01000000,	///< References to this object from persistent function frame are handled as strong ones.
	RF_NonPIEDuplicateTransient = 0x02000000,	///< Object should not be included for duplication unless it's being duplicated for a PIE session
	RF_Dynamic = 0x04000000,	///< Field Only. Dynamic field - doesn't get constructed during static initialization, can be constructed multiple times
	RF_WillBeLoaded = 0x08000000,	///< This object was constructed during load and will be loaded shortly
	RF_HasExternalPackage = 0x10000000,	///< This object has an external package assigned and should look it up when getting the outermost package
};


enum class EConsoleVariableFlags : uint32
{
	ECVF_FlagMask = 0x0000ffff,
	ECVF_Default = 0x0,
	ECVF_Cheat = 0x1,
	ECVF_ReadOnly = 0x4,
	ECVF_Unregistered = 0x8,
	ECVF_CreatedFromIni = 0x10,
	ECVF_RenderThreadSafe = 0x20,
	ECVF_Scalability = 0x40,
	ECVF_ScalabilityGroup = 0x80,
	ECVF_Preview = 0x100,
	ECVF_GeneralShaderChange = 0x200,
	ECVF_MobileShaderChange = 0x400,
	ECVF_DesktopShaderChange = 0x800,
	ECVF_SetFlagMask = 0x00ff0000,
	ECVF_Set_NoSinkCall_Unsafe = 0x00010000,
	ECVF_SetByMask = 0xff000000,
	ECVF_SetByConstructor = 0x00000000,
	ECVF_SetByScalability = 0x01000000,
	ECVF_SetByGameSetting = 0x02000000,
	ECVF_SetByProjectSetting = 0x03000000,
	ECVF_SetBySystemSettingsIni = 0x04000000,
	ECVF_SetByDeviceProfile = 0x05000000,
	ECVF_SetByGameOverride = 0x06000000,
	ECVF_SetByConsoleVariablesIni = 0x07000000,
	ECVF_SetByCommandline = 0x08000000,
	ECVF_SetByCode = 0x09000000,
	ECVF_SetByConsole = 0x0A000000,
};

inline EConsoleVariableFlags operator|(EConsoleVariableFlags a, EConsoleVariableFlags b)
{
	return static_cast<EConsoleVariableFlags>(static_cast<int>(a) | static_cast<int>(b));
}


/**
 * Enumerates the days of the week in 7-day calendars.
 */
enum class EDayOfWeek
{
	Monday = 0,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};


/**
 * Enumerates the months of the year in 12-month calendars.
 */
enum class EMonthOfYear
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};


/**
 * Time span related constants.
 */
namespace ETimespan
{
	/** The maximum number of ticks that can be represented in FTimespan. */
	const int64 MaxTicks = 9223372036854775807;

	/** The minimum number of ticks that can be represented in FTimespan. */
	const int64 MinTicks = -9223372036854775807 - 1;

	/** The number of nanoseconds per tick. */
	const int64 NanosecondsPerTick = 100;

	/** The number of timespan ticks per day. */
	const int64 TicksPerDay = 864000000000;

	/** The number of timespan ticks per hour. */
	const int64 TicksPerHour = 36000000000;

	/** The number of timespan ticks per microsecond. */
	const int64 TicksPerMicrosecond = 10;

	/** The number of timespan ticks per millisecond. */
	const int64 TicksPerMillisecond = 10000;

	/** The number of timespan ticks per minute. */
	const int64 TicksPerMinute = 600000000;

	/** The number of timespan ticks per second. */
	const int64 TicksPerSecond = 10000000;

	/** The number of timespan ticks per week. */
	const int64 TicksPerWeek = 6048000000000;

	const int64 TicksPerYear = 315360000000000;
	const int64 TicksPerMonth = 129600000000000;
	
}
