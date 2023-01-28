#include "ChatConsole.h"
#include "Core/Util.h"

using namespace ChatConsole;
using namespace Util;



namespace ConCommands
{
	OnEngineInit(Init)
	{

		RegisterCommand(EMistAccountTier::Trusted, L"rcon", [](auto caller, auto args)
			{
				if (args) ConsoleCommand(args);
			}, L"<command> - Execute command on remote console");


		RegisterCommand(EMistAccountTier::Trusted, L"ping", [](auto caller, auto args)
			{
				auto pawn = APlayerController_GetPawnOrSpectator(caller);
				auto state = APawn_GetPlayerState(pawn);
				wchar_t buff[16];
				swprintf_s(buff, L"Ping: %u", state->Ping);
				ClientAddMsg(caller, buff);
			}, L"test command");


		RegisterCommand(EMistAccountTier::Trusted, L"red", [](auto caller, auto args)
			{
				if (!args) return;
				ForEachPlayer(caller, [args](auto player)
					{
						ClientAddRedMsg(player, args);
					});
			}, L"test command");


		RegisterCommand(EMistAccountTier::Trusted, L"white", [](auto caller, auto args)
			{
				if (!args) return;
				ForEachPlayer(caller, [args](auto player)
					{
						ClientAddMsg(player, args);
					});
			}, L"test command");


	}
}