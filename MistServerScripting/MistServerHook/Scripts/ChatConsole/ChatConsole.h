#pragma once
#include "Core/Core.h"

namespace ChatConsole
{
	typedef void (*CommandHandler)(AMistOasisPlayerController*, const wchar_t*);

	struct Command
	{
		EMistAccountTier MinTier;
		CommandHandler Handler;
		const wchar_t* Cmd;
		const wchar_t* Description;

		inline const bool operator==(const Command& c) const { return _wcsicmp(this->Cmd, c.Cmd) == 0; }
		inline const bool operator<(const Command& c) const { return _wcsicmp(this->Cmd, c.Cmd) < 0; }
		inline const bool operator==(const wchar_t* c) const { return _wcsicmp(this->Cmd, c) == 0; }
	};

	API void RegisterCommand(const Command& command);

	inline void RegisterCommand(EMistAccountTier minTier, const wchar_t* command, CommandHandler handler, const wchar_t* description)
	{
		RegisterCommand(Command { minTier, handler, command, description });
	}
	inline void RegisterCommand(const wchar_t* command, CommandHandler handler)
	{
		RegisterCommand(EMistAccountTier::Default, command, handler, nullptr);
	}
};