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



void TestFn1(AActor* self, float value, UDamageType* type, FDamageSource* source) {



	GHooker.OrigFn(TestFn1)(self, value, type, source);
}



void TestFn2(AActor* self, float value, UDamageType* type, FDamageSource* source, FHitResult* result) {


	GHooker.OrigFn(TestFn2)(self, value, type, source, result);
}


void TestFn3(AActor* self, float value, UDamageType* type, FVector position, FDamageSource* source, FHitResult* result) {


	GHooker.OrigFn(TestFn3)(self, value, type, position, source, result);
}







//scripts to hook
void MyNativeHooksInit()
{
	GHooker.Add(LoadEACLibrary, SYM_F07A1BDA51CE9EFDB8928D276758DB92); //ok
	GHooker.Add(WorldTickScriptFn, SYM_B99534308E50B377C3FB2F8EB7784D90); //ok


	GHooker.Add(TestFn1, SYM_1E64BE1FDF7C2C9CB8AD7BBA4F5CBC81); //AActor_ReceiveAnyDamage

	GHooker.Add(TestFn2, SYM_53499B412D063CE6BB892E5296FEA8D2); //AActor_ReceivePointDamage

	GHooker.Add(TestFn3, SYM_32EC2E02C426193760664F5938894B53); //AActor_ReceiveRadialDamage

	
}