#include "BroadcastCmd.h"



void BroadcastCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

	if (!args) return;

	Util::ForEachPlayerController(caller, [args](AMistOasisPlayerController* player) {
		Util::ClientAddMsg(player, args);
	});

}
