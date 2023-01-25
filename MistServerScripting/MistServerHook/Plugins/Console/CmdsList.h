#pragma once

#include "Util.h"




typedef struct {
	const wchar_t* cmdName;
	void (*CmdFn)(AMistOasisPlayerController* caller, const wchar_t* args);
	uint8_t adminLevel;
	uint8_t nParams;
	const wchar_t* description;
	const wchar_t* example;
	const wchar_t* params;
}cmdTypedef;


namespace CmdsList{

	extern const cmdTypedef LUT[];
	uint8_t getAdminLevel(const wchar_t* command);

}

void RegisterMyCommands();