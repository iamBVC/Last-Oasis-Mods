#include "Core/Core.h"
#include "Core/Util.h"


//save all the functions to execute every World tick here
std::vector<void(*)(UWorld* world, ELevelTick level, float delta)> funcToTick;

FDateTime* date;


Hook("?Tick@UWorld@@QEAAXW4ELevelTick@@M@Z", void, UWorld_Tick, UWorld* world, ELevelTick level, float delta) {

	date = FDateTime_UtcNow();

	for (int i = 0; i < funcToTick.size(); i++) {
		funcToTick[i](world, level, delta);
	}

	//original function
	OrigUWorld_Tick(world, level, delta);
}