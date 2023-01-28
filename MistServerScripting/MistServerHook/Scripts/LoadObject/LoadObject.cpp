#include "Core/Core.h"

using namespace std;

Hook("??0UMistPlaceableTemplate@@QEAA@XZ",
	UMistPlaceableTemplate*, PlaceableTemplateConstructor, UMistPlaceableTemplate* self)
{
	OrigPlaceableTemplateConstructor(self);

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
	bool, LoadPersistence, UMistPersistentActor* self,  UMistPersistenceComponent* comp, AActor*& actor, const char* proto, char& state1, char state2)
{
	int i = 0;
	auto ret = OrigLoadPersistence(self, comp, actor, proto, state1, state2);

	return ret;
}