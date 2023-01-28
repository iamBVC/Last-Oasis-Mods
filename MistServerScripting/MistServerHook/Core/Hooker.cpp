#include "Symbol.h"
#include "include/MinHook.h"
#include "filesystem"
#include "Windows.h"

API FName GScriptName;
API UEngine** GEngine;
API void** IConsoleManager;

using namespace std;

namespace Hooker
{
	vector<uint64>* Plugins;
	Symbol* Sym;

	template <typename T>
	void GetSection(uint64 module, const char* name, T* start, T* end)
	{
		*start = 0;
		*end = 0;

		auto dosHeader = (PIMAGE_DOS_HEADER)module;
		auto ntHeaders = (PIMAGE_NT_HEADERS)(module + dosHeader->e_lfanew);
		auto firstSection = (PIMAGE_SECTION_HEADER)(ntHeaders + 1);
		auto lastSection = firstSection + ntHeaders->FileHeader.NumberOfSections;

		for (auto section = firstSection; section < lastSection; section++)
		{
			if (strncmp((char*)section->Name, name, sizeof(section->Name)) == 0)
			{
				*start = (T)(module + section->VirtualAddress);
				*end = (T)(module + section->VirtualAddress + section->Misc.VirtualSize);
			}
		}
	}

	void SymNotFound(const char* symbol)
	{
		char buff[0x400];
		sprintf_s(buff, "Symbol not found!\n\n%s", symbol);
		MessageBoxA(NULL, buff, "MistServerHook", MB_ICONERROR);
	}

	void RelocateNatives(uint64 module)
	{
		uint64* ptr, * end;
		GetSection(module, ".native", &ptr, &end);
		for (; ptr < end; ptr++)
		{
			if (*ptr)
			{
				auto name = (char**)(ptr);
				if (!Sym->Exchange(name))
				{
					SymNotFound(*name);
					return;
				}
			}
		}
	}

	void ApplyHooks(uint64 module)
	{
		HookEntry* start, * end;
		GetSection(module, ".hooker", &start, &end);
		size_t size = (uint64)end - (uint64)start;
		if (size == 0) return;

		for (auto ptr = start; ptr < end; ptr++)
		{
			if (ptr->Target == 0 && ptr->Hook == 0 && ptr->Orig == 0)
				continue;

			auto name = (char**)(&ptr->Target);
			if (!Sym->Exchange(name))
			{
				SymNotFound(*name);
				continue;
			}

			MH_CreateHook(ptr->Target, ptr->Hook, ptr->Orig);
		}

		MH_QueueEnableHook(MH_ALL_HOOKS);
		MH_ApplyQueued();
	}

	void CallSymbolInit(uint64 module, const Symbol& sym)
	{
		PluginSymbolInit* ptr, * end;
		GetSection(module, ".inits", &ptr, &end);
		for (; ptr < end; ptr++)
			if (*ptr) (*ptr)(sym);
	}


	void CallEngineInit()
	{
		for (const auto& plugin : *Plugins)
		{
			PluginEngineInit* ptr, * end;
			GetSection(plugin, ".inite", &ptr, &end);
			for (; ptr < end; ptr++)
				if (*ptr) (*ptr)();
		}

		delete Plugins;
		delete Sym;
	}

	void MainStartup(uint64 moduleBase)
	{
		Plugins = new vector<uint64>({ moduleBase });
		Sym = new Symbol();
		MH_Initialize();

		RelocateNatives(moduleBase);
		ApplyHooks(moduleBase);
		CallSymbolInit(moduleBase, *Sym);

		for (const auto& entry : filesystem::directory_iterator(L"Plugins"))
		{
			auto path = entry.path();
			if (_wcsicmp(path.extension().c_str(), L".dll") != 0)
				continue;

			LoadLibraryW(path.c_str());
		}
	}

	API void RegisterPlugin(uint64 pluginBase)
	{
		Plugins->push_back(pluginBase);
		ApplyHooks(pluginBase);
		CallSymbolInit(pluginBase, *Sym);
	}

#pragma section(".hooker$a")
	_HookEx(".hooker$a", "?Init@UEngine@@UEAAXPEAVIEngineLoop@@@Z", void, EngineInit, void* self, void* loop)
	{
		OrigEngineInit(self, loop);

		GScriptName = FName(L"LogScript");
		Warning(L"MistServerHook is running, this is a modded server now");
		CallEngineInit();
	}

	OnSymbolInit(SymbolInit, sym)
	{
		GEngine = sym.Find<UEngine*>("?GEngine@@3PEAVUEngine@@EA");
		IConsoleManager = sym.Find<void*>("?Singleton@IConsoleManager@@0PEAU1@EA");
	}
}