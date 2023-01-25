#pragma once
#include "vector"
#include "CmdsList.h"



class Console
{
	std::vector<std::tuple<const wchar_t*, void (*)(AMistOasisPlayerController*, const wchar_t*)>> Commands;

public:
	void Init();
	void RegisterCommand(const wchar_t* command, void (*handler)(AMistOasisPlayerController*, const wchar_t*));
	bool ConsumeCommand(AMistOasisPlayerController* player, const wchar_t* commmand, const wchar_t* args);
};

extern Console GConsole;