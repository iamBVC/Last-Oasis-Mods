#pragma once
#include "Util.h"
#include "Windows.h"

extern void* IConsoleManager;

namespace Config
{
	template <typename T>
	void RegisterVariable(const wchar_t* cvar, T& var, bool isCheat);

	template <>
	inline void RegisterVariable(const wchar_t* cvar, int& var, bool isCheat)
	{
		FConsoleManager_RegisterConsoleVariableRef_Int(IConsoleManager, cvar, var, nullptr, isCheat ? EConsoleVariableFlags::ECVF_Cheat : EConsoleVariableFlags::ECVF_Default);
	}

	template <>
	inline void RegisterVariable(const wchar_t* cvar, float& var, bool isCheat)
	{
		FConsoleManager_RegisterConsoleVariableRef_Float(IConsoleManager, cvar, var, nullptr, isCheat ? EConsoleVariableFlags::ECVF_Cheat : EConsoleVariableFlags::ECVF_Default);
	}

	template <>
	inline void RegisterVariable(const wchar_t* cvar, FString& var, bool isCheat)
	{
		FConsoleManager_RegisterConsoleVariableRef_FString(IConsoleManager, cvar, var, nullptr, isCheat ? EConsoleVariableFlags::ECVF_Cheat : EConsoleVariableFlags::ECVF_Default);
	}

	inline void LoadIniSection(const wchar_t* ini, const wchar_t* sect)
	{
		const auto format = L"../../Saved/Config/%s.ini";
		wchar_t path[MAX_PATH];
		swprintf_s(path, sizeof(path) / sizeof(wchar_t), format, ini);

		ApplyCVarSettingsFromIni(sect, path, EConsoleVariableFlags::ECVF_Default, false);
		FConsoleManager_CallAllConsoleVariableSinks(IConsoleManager);
	}
}