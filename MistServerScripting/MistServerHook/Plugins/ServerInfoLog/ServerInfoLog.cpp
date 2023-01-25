#include "ServerInfoLog.h"



void ServerInfoLogFn(UWorld* world, int level, float delta) {

	static float timer = 0;
	static float uptime = 0;

	if (level <= 2) {

		timer += delta;
		uptime += delta;

		if (timer >= 60.0f) {
			timer = 0.0f;
			TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
			UWorld_GetPlayerControllerIterator(world, &it);
			Log(L"%s has been active for %.0f minutes", world->NamePrivate.c_str(), roundf(uptime / 60.0f));
			Log(L"%u players online", it.Array->Count);
		}

	}


}




void ServerInfoLogInit() {
	funcToTick.push_back(ServerInfoLogFn);
}