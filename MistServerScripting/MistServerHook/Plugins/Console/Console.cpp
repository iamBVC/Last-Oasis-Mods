#include "Console.h"

#include "Hooker.h"
#include "Native/Symbol.h"

Console GConsole;

bool ConsoleCommand(UMistPlayerMessengerComponent* self, const FString* msg)
{

	if (msg->Count > 2 && msg->Data[0] == L'/')
	{
		const auto cmd = &msg->Data[1];
		wchar_t* args = nullptr;

		for (auto i = 1; i < msg->Count - 1; i++)
		{
			if (msg->Data[i] == L' ')
			{
				msg->Data[i] = 0;
				args = &msg->Data[i + 1];
				if (args[0] == 0) args = nullptr;
				break;
			}
		}

		auto player = static_cast<AMistOasisPlayerController*>(self->OuterPrivate);
		return !GConsole.ConsumeCommand(player, cmd, args);
	}

	return GHooker.OrigFn(ConsoleCommand)(self, msg);
}

void Console::Init()
{
	RegisterMyCommands();

	GHooker.Add(ConsoleCommand, SYM_A8A4CAE9B375A9B83ADEBEC1540FA861); //global chat
}

void Console::RegisterCommand(const wchar_t* command, void (*handler)(AMistOasisPlayerController*, const wchar_t*))
{
	Commands.push_back(std::tuple(command, handler));
}

bool Console::ConsumeCommand(AMistOasisPlayerController* player, const wchar_t* command, const wchar_t* args)
{
	auto consumed = false;
	for (auto& [registered, call] : Commands)
	{
		if (_wcsicmp(registered, command) == 0)
		{
			consumed = true;

			//get player data
			auto pawnPtr = APlayerController_GetPawnOrSpectator(player);
			auto playerState = APawn_GetPlayerStateMist(pawnPtr);

			//check if user is allowed to execute the command
			if (static_cast<uint8_t>(playerState->Tier) >= CmdsList::getAdminLevel(command)) {
				call(player, args);
			}
			else {
				Util::ClientAddRedMsg(player, L"You are not allowed to execute this command.");
			}

		}
	}
	return consumed;
}