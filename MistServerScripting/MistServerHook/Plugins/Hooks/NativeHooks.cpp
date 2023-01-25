#include "NativeHooks.h"

#include "Native/Symbol.h"
#include "Util.h"


bool LoadEACLibrary(char* self, FString* str)
{
	self[56] = 0;	// bAntiCheatEnforcement
	return true;
}


void InitAutocomplete(void* self)
{
	Warning(L"nothing to see here");
	DebugBreak();
	GHooker.OrigFn(InitAutocomplete)(self);
}

//world tick callback
void* WorldTickScriptFn(UWorld* world, int level, float delta) {

	for (int i = 0; i < funcToTick.size(); i++) {
		funcToTick[i](world, level, delta);
	}

	//original function
	return GHooker.OrigFn(WorldTickScriptFn)(world, level, delta);
}


//scripts to hook
void MyNativeHooksInit()
{
	GHooker.Add(LoadEACLibrary, SYM_F07A1BDA51CE9EFDB8928D276758DB92); //ok
	GHooker.Add(WorldTickScriptFn, SYM_B99534308E50B377C3FB2F8EB7784D90); //ok
}