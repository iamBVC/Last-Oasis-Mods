#include "Core/Core.h"

namespace Class
{
	OnEngineInit(Init)
	{
		Warning(L"Look at me, I am the script now!");
	}

	Hook("?Init@UEngine@@UEAAXPEAVIEngineLoop@@@Z", void, EngineInit, void* self, void* loop)
	{
		Warning(L"Testing early double hook");
		OrigEngineInit(self, loop);
	}
}