#include "Hooker.h"

#include "Native/Symbol.h"


#define HookerName ("MistServerHook")


uint64 BaseAddress;
Hooker GHooker;
FName GScriptName;
UEngine* GEngine;
void* IConsoleManager;

extern void InitPlugins();



void EngineInit(UEngine* engine, void* loop)
{
	GEngine = engine;
	IConsoleManager = *reinterpret_cast<decltype(IConsoleManager)*>(BaseAddress + 0x4a0c490);

	GHooker.OrigEngineInit(engine, loop);

	GScriptName = FName(L"LogScript");
	Warning(L"Hooker is running, this is a modded server now");

	InitPlugins();

	auto status = MH_ApplyQueued();
	if (status != MH_OK)
		MessageBoxA(NULL, MH_StatusToString(status), HookerName, MB_ICONERROR);
}

void ProcessEvent(UObject* self, UFunction* fn, void* params)
{
	bool status = GHooker.OnProcessEvent(self, fn, params); //execute hooked function
	if (status == true) GHooker.OrigProcessEvent(self, fn, params); //execute also the original function if the hooked function returns true
}


void Hooker::Enqueue(void* hook, uint64 offset, void** original)
{
	auto targetPtr = reinterpret_cast<void*>(BaseAddress + offset);
	auto status = MH_CreateHook(targetPtr, hook, original);
	if (status != MH_OK)
	{
		MessageBoxA(NULL, MH_StatusToString(status), HookerName, MB_ICONERROR);
		return;
	}

	status = MH_QueueEnableHook(targetPtr);
	if (status != MH_OK)
		MessageBoxA(NULL, MH_StatusToString(status), HookerName, MB_ICONERROR);
}

void Hooker::Install(){

	//hook the base functions on the server
	Enqueue(EngineInit, SYM_998AD7FD6542D0AEC72777A33587BC5A, reinterpret_cast<void**>(&OrigEngineInit));

	//use this for debug only, very heavy function
	//Enqueue(ProcessEvent, SYM_79D31A73B9FC488D79EF1438B1760199, reinterpret_cast<void**>(&OrigProcessEvent));

	auto status = MH_ApplyQueued();
	if (status != MH_OK)
		MessageBoxA(NULL, MH_StatusToString(status), HookerName, MB_ICONERROR);

	NativeHooks.reserve(32);
	ProcessEventHooks.reserve(32);
}

void Hooker::Add(void* hook, uint64 offset)
{
	void* original;
	Enqueue(hook, offset, &original);
	NativeHooks.push_back(NativeHook{ hook, original });
	Warning(L"Hooked 0x%08X", offset);
}

void Hooker::AddProcessEvent(const wchar_t* cls, const wchar_t* fn, bool (*cb)(UObject* self, UFunction* fn, void* params))
{
	auto hook = ProcessEventHook{ FName::Find(cls), FName::Find(fn), cb };
	ProcessEventHooks.push_back(hook);
	Warning(L"Hooked ProcessEvent for %s %s", hook.Class.c_str(), hook.Function.c_str());
}

bool Hooker::OnProcessEvent(UObject* self, UFunction* fn, void* params)
{
	auto isAllowed = true;

	Warning(L"Class %s   Function %s", self->ClassPrivate->NamePrivate.c_str(), fn->NamePrivate.c_str());


	if (wcscmp(self->ClassPrivate->NamePrivate.c_str(), L"MistInventoryComponent") == 0) {
		Error(L"Class %s   Function %s", self->ClassPrivate->NamePrivate.c_str(), fn->NamePrivate.c_str());
	}

	for (auto entry : ProcessEventHooks)
	{
		if (entry.Function == fn->NamePrivate)
		{
			Warning(L"Class %s  Function %s", self->ClassPrivate->NamePrivate.c_str(), fn->NamePrivate.c_str());
		}

		if (entry.Class == self->ClassPrivate->NamePrivate
			&& entry.Function == fn->NamePrivate)
		{
			Warning(L"ProcessEvent   %s %s", entry.Class.c_str(), entry.Function.c_str());
			isAllowed &= entry.Callback(self, fn, params);
		}
	}

	return isAllowed;
}