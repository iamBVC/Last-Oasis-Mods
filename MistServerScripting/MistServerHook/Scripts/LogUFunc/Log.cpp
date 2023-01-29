#include "Core/Config.h"
#include "Core/Util.h"
#include "vector"

using namespace std;
using namespace Config;
using namespace Util;




namespace LogUFunc
{
	int32 IsEnabled = 0;
	vector<FName> IgnoredClasses;
	vector<FName> IgnoredFunctions;

	OnEngineInit(Init)
	{
		FHeapString cvarClasses;
		FHeapString cvarFunctions;
		RegisterVariable(L"LogUFunc.IsEnabled", IsEnabled, false);
		RegisterVariable(L"LogUFunc.IgnoredClasses", cvarClasses, false);
		RegisterVariable(L"LogUFunc.IgnoredFunctions", cvarFunctions, false);
		LoadIniSection(L"ScriptHook", L"Development");
		Tokenize(cvarClasses, IgnoredClasses);
		Tokenize(cvarFunctions, IgnoredFunctions);
	}

	Hook("?ProcessEvent@UObject@@UEAAXPEAVUFunction@@PEAX@Z",
		void, ProcessEvent, UObject* self, UFunction* fn, void* params)
	{
		OrigProcessEvent(self, fn, params);

		if (IsEnabled)
		{
			auto isIgnored = false;

			for (auto ignoreCls : IgnoredClasses)
			{
				if (ignoreCls == self->OuterPrivate->ClassPrivate->NamePrivate
					|| ignoreCls == self->ClassPrivate->NamePrivate)
				{
					isIgnored = true;
					break;
				}
			}

			if (!isIgnored)
			{
				for (auto ignoreFn : IgnoredFunctions)
				{
					if (ignoreFn == fn->NamePrivate)
					{
						isIgnored = true;
						break;
					}
				}
			}

			if (!isIgnored)
			{
				Warning(L"ProcEvt [PtCls] = %s  [Cls] = %s  [Fn] = %s", self->OuterPrivate->Name_c_str(), self->ClassPrivate->Name_c_str(), fn->Name_c_str());
			}
		}
	}
}