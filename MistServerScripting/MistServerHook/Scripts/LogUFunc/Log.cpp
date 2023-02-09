#include "../ChatConsole/ChatConsole.h"
#include "Core/Config.h"
#include "Core/Util.h"
#include "vector"

using namespace std;
using namespace Config;
using namespace ChatConsole;
using namespace Util;


namespace LogUFunc
{
	int32 IsEnabled = 0;
	vector<FName> IgnoredClasses;
	vector<FName> IgnoredFunctions;
	vector<FName> SlowedData;



	OnEngineInit(Init)
	{
		FHeapString cvarClasses;
		FHeapString cvarFunctions;
		FHeapString cvarSlowed;
		RegisterVariable(L"LogUFunc.IsEnabled", IsEnabled, false);
		RegisterVariable(L"LogUFunc.IgnoredClasses", cvarClasses, false);
		RegisterVariable(L"LogUFunc.IgnoredFunctions", cvarFunctions, false);
		RegisterVariable(L"LogUFunc.Slowed", cvarSlowed, false);
		LoadIniSection(L"ScriptHook", L"Development");
		Tokenize(cvarClasses, IgnoredClasses);
		Tokenize(cvarFunctions, IgnoredFunctions);
		Tokenize(cvarSlowed, SlowedData);


		RegisterCommand(EMistAccountTier::Trusted, L"log", [](auto caller, auto args)
			{

				if (wcscmp(args, L"1") == 0) IsEnabled = 1;

				if (wcscmp(args, L"0") == 0) IsEnabled = 0;

			}, L"");

	}



	



	Hook("?ProcessEvent@UObject@@UEAAXPEAVUFunction@@PEAX@Z",
		void, ProcessEvent, UObject* self, UFunction* fn, void* params)
	{

		//LogUFunc.IgnoredClasses = MistPatrollingBehavior,WalkerVehicleMovementComponent,SunsetMasterTether_C,SunsetSkywalker_C,Character_AnimBP_C,MistSoundAnimNotify,
		//							BTDIsFloatLowerThen_C,A_Rupu_AnimBP_C,PhemkeMob_C,ChairInteraction_AnimBP_C
		// 
		//LogUFunc.IgnoredFunctions = ReadyToEndMatch, ServerMoveNoBase, ClientAckGoodMove, ReceiveExecuteAI, ServerUpdateCamera, OnActorBump, HandleComponentSleep,
		//							  HandleComponentWake, MulticastSetCurrentAnimTrack, MulticastSetInCombatState, ServerMoveOld

		if (IsEnabled){


			for (auto slowed : SlowedData) {
				if (slowed == fn->NamePrivate || slowed == self->OuterPrivate->ClassPrivate->NamePrivate || slowed == self->ClassPrivate->NamePrivate) {

					static uint64 lastTick = 0;
					uint64 ticks = GetTickCount64();

					if (ticks >= lastTick + 100) {
						lastTick = ticks;
						Warning(L"SLOWED: [PtCls] = %s  \t[Cls] = %s  \t[Fn] = %s", self->OuterPrivate->Name_c_str(), self->ClassPrivate->Name_c_str(), fn->Name_c_str());
						OrigProcessEvent(self, fn, params);
						return;
					}
					else {
						return;
					}

				}
			}


			auto isIgnored = false;

			for (auto ignoreCls : IgnoredClasses){
				if (ignoreCls == self->OuterPrivate->ClassPrivate->NamePrivate || ignoreCls == self->ClassPrivate->NamePrivate){
					isIgnored = true;
					break;
				}
			}

			if (isIgnored == false){
				for (auto ignoreFn : IgnoredFunctions){
					if (ignoreFn == fn->NamePrivate){
						isIgnored = true;
						break;
					}
				}
			}

			if (isIgnored == false) {
				Warning(L"ProcEvt: [PtCls] = %s  \t[Cls] = %s  \t[Fn] = %s", self->OuterPrivate->Name_c_str(), self->ClassPrivate->Name_c_str(), fn->Name_c_str());
			}

		}

		OrigProcessEvent(self, fn, params);

	}





}