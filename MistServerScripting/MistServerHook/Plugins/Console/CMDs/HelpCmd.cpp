#include "HelpCmd.h"

#include "../CmdsList.h"


void HelpCmdFn(AMistOasisPlayerController* caller, const wchar_t* args) {

	wchar_t buff[1024];

	auto pawnPtr = APlayerController_GetPawnOrSpectator(caller);
	auto playerState = APawn_GetPlayerStateMist(pawnPtr);


	if (args == NULL) {

		//list all the commands
		swprintf_s(buff, L"Command list:\n");
		uint8_t i = 0;
		while (CmdsList::LUT[i].cmdName != NULL) {

			//print command only if the user is allowed to execute it
			if (static_cast<uint8_t>(playerState->Tier) >= CmdsList::getAdminLevel(CmdsList::LUT[i].cmdName)) {

				//print admin commands differently
				if (CmdsList::getAdminLevel(CmdsList::LUT[i].cmdName) > 0) {
					swprintf_s(buff, L"%s # %s\n", buff, CmdsList::LUT[i].example);
				}else{
					swprintf_s(buff, L"%s - %s\n", buff, CmdsList::LUT[i].example);
				}

			}
			
			i++;
		}
		Util::ClientAddMsg(caller, buff);

	}else{

		//search the selected command in the list
		uint8_t i = 0;
		while (CmdsList::LUT[i].cmdName != NULL) {

			//if command is found in the list
			if (!wcscmp(args, CmdsList::LUT[i].cmdName)) {

				//print command only if the user is allowed to execute it
				if (static_cast<uint8_t>(playerState->Tier) >= CmdsList::getAdminLevel(CmdsList::LUT[i].cmdName)) {
					//print the selected command info
					swprintf_s(buff, L"Command: %s\n", CmdsList::LUT[i].example);
					swprintf_s(buff, L"%s Description: %s", buff, CmdsList::LUT[i].description);
					Util::ClientAddMsg(caller, buff);
					return;
				}

			}

			i++;
		}

		//end of the list reached
		swprintf_s(buff, L"Command not found");
		Util::ClientAddMsg(caller, buff);
		return;

	}

}

