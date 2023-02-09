#include "Core/Config.h"
#include "Core/Util.h"


using namespace std;
using namespace Config;
using namespace Util;



struct ClanData {
	int64_t ID;
	int32_t count;
	int32_t unknown;
};

namespace SoftClanCap
{

	int32 IsEnabled = 0;
	int32 capValue = 10;


	OnEngineInit(Init)
	{
		RegisterVariable(L"SoftClanCap.enabled", IsEnabled, false);
		RegisterVariable(L"SoftClanCap.cap", capValue, false);
		LoadIniSection(L"ScriptHook", L"SoftClanCap");
	}


	Hook("?CalculateClanCapPenalty@AMistOasisGameState@@QEAAMPEAVAMistOasisPlayerState@@@Z",
		float, CalculateClanCapPenalty, AMistOasisGameState* self, AMistOasisPlayerState* playerstate)
	{
		auto penalty = OrigCalculateClanCapPenalty(self, playerstate);

		if (IsEnabled) {

			auto clanID = playerstate->Clan.ID;
			if (clanID == 0) return penalty;

			auto data = (ClanData*)(self->ClanMemberCount.Data);

			for (uint32 i = 0; i < self->ClanMemberCount.Count; i++) {
				if (data[i].ID == clanID) {

					if (data[i].count > capValue) {

						if (playerstate->PawnPrivate != nullptr) {
							auto controller = APawn_GetControllerMist(playerstate->PawnPrivate);
							Util::ClientAddRedMsg(controller, L"OVERCAP !!!");

							if (data[i].count > capValue * 1.2f) {
								AMistPlayerController_KickPlayer(controller, FText(L"Your clan is overcapped"));
							}

						}
						return 100.0f;

					}
					else {
						return penalty;
					}
				}
			}

		}

		return penalty;
	}


}