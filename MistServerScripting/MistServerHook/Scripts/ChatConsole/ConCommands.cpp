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


		RegisterCommand(EMistAccountTier::Trusted, L"yeet", [](auto caller, auto args)
			{
				FVector direction = {0.0f, 0.0f, 0.0f};

				if (wcscmp(args, L"N") == 0) direction.Y = -10000.0f;
				if (wcscmp(args, L"S") == 0) direction.Y = 10000.0f;
				if (wcscmp(args, L"W") == 0) direction.X = -10000.0f;
				if (wcscmp(args, L"E") == 0) direction.X = 10000.0f;
				if (wcscmp(args, L"D") == 0) direction.Z = -10000.0f;
				if (wcscmp(args, L"U") == 0) direction.Z = 10000.0f;
				

				auto movementComponent = ((AMistOasisPlayerController*)(caller))->PlayerCharacter->CharacterMovement;
				UCharacterMovementComponent_AddImpulse(movementComponent, direction, true);

			}, L"- Fly away");



	}
}