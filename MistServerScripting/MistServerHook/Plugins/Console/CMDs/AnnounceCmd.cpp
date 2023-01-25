#include "BroadcastCmd.h"



void AnnounceCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

	if (!args) return;

	Util::ForEachPlayerController(caller, [args](AMistOasisPlayerController* player){
			Util::ClientAddRedMsg(player, args);
		});

}
