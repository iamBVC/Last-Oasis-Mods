#include "Core/Plugin.h"
#include "Windows.h"

extern "C"
{
	BOOL APIENTRY DllMain(HMODULE hModule, DWORD fdwReason, LPVOID lpvReserved)
	{
		if (fdwReason != DLL_PROCESS_ATTACH) return FALSE;
		Hooker::RegisterPlugin((uint64)hModule);
		return TRUE;
	}
}