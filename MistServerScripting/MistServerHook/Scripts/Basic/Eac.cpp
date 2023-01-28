#include "Core/Core.h"

Hook("?LoadEACLibrary@FEasyAntiCheatServer@@AEAA_NAEBVFString@@@Z", bool, EacFix, char* self, void* str)
{
	self[56] = 0;	// bAntiCheatEnforcement
	return true;
}