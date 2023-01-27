#include "SoftClanCap.h"

#include "Native/Symbol.h"

#define MAX_ONLINE_MEMBERS		10

struct ClanData {
	int64_t ID;
	int32_t count;
	int32_t unknown;
};


float SoftClanCapFn(AMistOasisGameState* self, AMistOasisPlayerState* playerstate) {


	GHooker.OrigFn(SoftClanCapFn)(self, playerstate);

	auto clanID = playerstate->Clan.ID;

	if (clanID == 0) return 1.0f;

	auto data = (ClanData*)(self->ClanMemberCount.Data);

	for (uint32 i = 0; i < self->ClanMemberCount.Count; i++) {
		if (data[i].ID == clanID) {

			if (data[i].count > MAX_ONLINE_MEMBERS) {

				if (playerstate->PawnPrivate != nullptr) {
					auto controller = APawn_GetControllerMist(playerstate->PawnPrivate);
					Util::ClientAddRedMsg(controller, L"OVERCAP !!!");
				}
				return 75.0f;

			}
			else {
				return 1.0f;
			}
		}
	}

	return 1.0f;
}


void SoftClanCapInit() {
	GHooker.Add(SoftClanCapFn, SYM_BA018547272B0A354718C282BE55EEF2);
}