#include "Core/Config.h"
#include "Core/Util.h"

using namespace std;
using namespace Config;
using namespace Util;




namespace LoadObject
{
	int32 IsEnabled = 0;

	OnEngineInit(Init)
	{
		RegisterVariable(L"LoadObject.enabled", IsEnabled, false);
		LoadIniSection(L"ScriptHook", L"LoadObject");
	}


	Hook("??0UMistPlaceableTemplate@@QEAA@XZ",
		UMistPlaceableTemplate*, PlaceableTemplateConstructor, UMistPlaceableTemplate* self)
	{
		OrigPlaceableTemplateConstructor(self);

		if (!IsEnabled) return self;

		const auto n = self->Name_c_str();
		const auto c = self->Category->Name_c_str();

		if (wcsstr(n, L"WallsWoodLightFull_C") != 0)
		{
			self->bAllowPlacingOnGround = false;
			self->bAllowPlacingOnPlatform = false;
			self->bAttachOnPlacement = false;
			self->Requirements.ExperienceRewardCrafting = 500;
			int i = 0;
		}

		return self;
	}



	Hook("?LoadPersistence@IMistPersistentActor@@SA_NPEAVUMistPersistenceComponent@@AEAPEAVAActor@@AEBVActor@MistProto@@AEAW4EMistPersistentActorLoadState@@W46@@Z",
		bool, LoadPersistence, UMistPersistentActor* self, UMistPersistenceComponent* comp, AActor*& actor, const char* proto, char& state1, char state2)
	{
		auto ret = OrigLoadPersistence(self, comp, actor, proto, state1, state2);
		return ret;
	}



}