#include "ChatConsole.h"
#include "Core/Util.h"

using namespace ChatConsole;
using namespace Util;



namespace ConCommands
{
	OnEngineInit(Init)
	{
		/*
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

			*/
		RegisterCommand(EMistAccountTier::Trusted, L"yeet", [](auto caller, auto args)
			{

				auto playerPtr = AController_GetPawnPlayer(caller);
				if (playerPtr == nullptr) return;

				if (args == nullptr) return;

				FVector direction = {0.0f, 0.0f, 0.0f};

				if (wcscmp(args, L"n") == 0) direction.Y = -10000.0f;
				if (wcscmp(args, L"s") == 0) direction.Y = 10000.0f;
				if (wcscmp(args, L"w") == 0) direction.X = -10000.0f;
				if (wcscmp(args, L"e") == 0) direction.X = 10000.0f;
				if (wcscmp(args, L"d") == 0) direction.Z = -10000.0f;
				if (wcscmp(args, L"u") == 0) direction.Z = 10000.0f;
				
				auto movementComponent = ((AMistOasisPlayerController*)(caller))->PlayerCharacter->CharacterMovement;
				if (movementComponent == nullptr) return;

				FRotator rotation = { 0, 0, 0 };
				AActor_K2_TeleportTo(playerPtr, movementComponent->LastUpdateLocation, rotation);
				UCharacterMovementComponent_AddImpulse(movementComponent, direction, true);
				

			}, L"- Fly away");



		RegisterCommand(EMistAccountTier::Trusted, L"test", [](auto caller, auto args)
			{

				auto weatherSystem = UMistBlueprintLibrary_GetWeatherSystem(caller);

				if (args == nullptr) return;

				if (*args == L'0') {
					AMistWeatherSystem_StartEclipse(weatherSystem);
				}

				if (*args == L'1') {
					AMistWeatherSystem_StopEclipse(weatherSystem);
				}

				if (*args == L'2') {
					AMistWeatherSystem_StartTraverse(weatherSystem);
				}

				if (*args == L'3') {
					AMistWeatherSystem_StopTraverse(weatherSystem);
				}

			}, L"test command");




	}
}