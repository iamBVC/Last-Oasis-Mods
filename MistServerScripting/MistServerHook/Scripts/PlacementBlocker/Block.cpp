#include "Core/Config.h"
#include "Core/Util.h"
#include "vector"

using namespace std;

namespace PlacementBlocker
{
	int32 IsEnabled = 0;
	vector<FName> Blocked;

	OnEngineInit(PlacementBlocker)
	{
		auto strBlocked = FHeapString();
		Config::RegisterVariable(L"Blocker.IsEnabled", IsEnabled, false);
		Config::RegisterVariable(L"Blocker.List", strBlocked, false);
		Config::LoadIniSection(L"ScriptHook", L"PlacementBlocker");
		Util::Tokenize(strBlocked, Blocked);
	}

	Hook("?ValidatePlacement@UMistBuildingComponent@@QEAA_NAEAVFText@@@Z",
		bool, ValidatePlacement, UMistBuildingComponent* self, FText* text)
	{
		if (IsEnabled)
		{
			for (const auto n : Blocked)
			{
				if (n == self->PlaceableTemplate->ClassPrivate->NamePrivate)
				{
					const auto player = static_cast<AMistPlayer*>(self->OuterPrivate);
					const auto controller = static_cast<AMistOasisPlayerController*>(player->Controller);
					Util::ClientAddHudMessage(controller, L"Placement blocked!", 3.0, false);
					return false;
				}
			}
		}

		return OrigValidatePlacement(self, text);
	}
}