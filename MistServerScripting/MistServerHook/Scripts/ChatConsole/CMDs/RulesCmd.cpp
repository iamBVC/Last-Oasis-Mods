#include "../ChatConsole.h"
#include "Core/Util.h"


using namespace ChatConsole;
using namespace Util;



#define RULES L"\
- No Teaming in PvP, you need to attack all clans in a fight\n\
- No excessive spamming in global chat\n\
- No boxing of resources, except clay in hard maps\n\
- No racism, homophobia or excessive toxicity. Punishments will stack up to permaban from discord and game\n\
- No use structures to block trade station / POI / bases / walkers / map zones\n\
- No bug abusing, glitching or crash the server\n\
- No use walkers to block people bases, expect for active PvP reasons (raids)\n\
- No spam of structures to lag the server\n\
- No Abusing being under level 20 (to not lose equipment)\n\
- No using alts to evade bans, this will result on a perm ban for all alt accounts\n\
- No pushing walkers to garage bases to trap them inside\n\
- Your discord nickname must be the same as your in-game name. Offensive names will be changed without any notice\n\
- We are here for a positive Last Oasis experience, your presence here should promote the longevity of the server. Trolling and being toxic is not tolerated.\n\
"



namespace RulesCmd
{

	void RulesCmdFn(AMistOasisPlayerController* caller, const wchar_t* args)
	{
		Util::ClientAddHudMessage(caller, RULES, 30.0f, true);
	}

	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Default, L"rules", RulesCmdFn, L"- Print the rules of the server");
	}

}