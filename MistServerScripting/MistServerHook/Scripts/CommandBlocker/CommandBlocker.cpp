#include "Core/Config.h"
#include "Core/Util.h"

using namespace std;
using namespace Config;
using namespace Util;




namespace CommandBlocker
{
	int32 IsEnabled = 0;
	vector<FName> Blocked;

	int32 TeleportEveryoneToMeCmd = 0;

	OnEngineInit(Init)
	{
		auto strBlocked = FHeapString();
		Config::RegisterVariable(L"CommandBlocker.enabled", IsEnabled, false);
		Config::RegisterVariable(L"CommandBlocker.list", strBlocked, false);
		Config::LoadIniSection(L"ScriptHook", L"CommandBlocker");
		Util::Tokenize(strBlocked, Blocked);

		Config::RegisterVariable(L"CommandBlocker.TeleportEveryoneToMe", TeleportEveryoneToMeCmd, false);
	}



	Hook("?ServerSetCheatEnabled_Implementation@UMistCheatingComponent@@UEAAXAEBVFName@@_N@Z",
		void, UMistCheatingComponent_ServerSetCheatEnabled_Implementation, UMistCheatingComponent* self, FName* name, bool value)
	{

		auto fnName = name->c_str();
		static wchar_t buff[256] = {};
		swprintf_s(buff, L"%s %u", fnName, value);
		Util::logOnFile((AActor*)self->OuterPrivate, "commands", buff);

		for (auto i = 0; i < Blocked.size(); i++) {
			//cycle through all the bad words and filter them
			if (wcsstr(fnName, Blocked[i].c_str()) != nullptr) {
				value = false;
				break;
			}
		}

		OrigUMistCheatingComponent_ServerSetCheatEnabled_Implementation(self, name, value);
	}


	Hook("?ServerTeleportEveryoneToMe_Implementation@UMistCheatingComponent@@UEAAXXZ", void, TeleportEveryoneToMe, UMistCheatingComponent* self) {

		if (!TeleportEveryoneToMeCmd) {
			OrigTeleportEveryoneToMe(self);
		}

	}




}