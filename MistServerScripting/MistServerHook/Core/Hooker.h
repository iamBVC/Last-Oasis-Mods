#pragma once
#include "../Native/Native.h"
#include "include/MinHook.h"
#include "functional"

struct NativeHook
{
	void* Hook;
	void* Original;
};

struct ProcessEventHook
{
	FName Class;
	FName Function;
	bool (*Callback)(UObject* self, UFunction* fn, void* params);
};

class Hooker
{
	std::vector<NativeHook> NativeHooks;
	std::vector<ProcessEventHook> ProcessEventHooks;

	void Enqueue(void* hook, uint64 offset, void** original);

public:
	void (*OrigEngineInit)(void* engine, void* loop);
	void (*OrigProcessEvent)(UObject* self, UFunction* fn, void* params);

	Hooker()
	{
		OrigEngineInit = 0;
		OrigProcessEvent = 0;
	}

	void Install();
	void Add(void* hook, uint64 offset);
	void AddProcessEvent(const wchar_t* cls, const wchar_t* fn, bool (*cb)(UObject* self, UFunction* fn, void* params));
	bool OnProcessEvent(UObject* self, UFunction* fn, void* params);

	template<typename R, typename... T>
	std::function<R(T...)> OrigFn(R(*hook)(T...))
	{
		for (auto& h : NativeHooks)
			if (h.Hook == hook)
				return std::function<R(T...)>(reinterpret_cast<R(*) (T...)>(h.Original));

		return nullptr;
	}
};

extern Hooker GHooker;
extern FName GScriptName;
extern UEngine* GEngine;
extern void* IConsoleManager;

#define Log(...) FMsg_Logf_InternalImpl(0, 0, &GScriptName, ELogVerbosity::Log, __VA_ARGS__);
#define Warning(...) FMsg_Logf_InternalImpl(0, 0, &GScriptName, ELogVerbosity::Warning, __VA_ARGS__);
#define Error(...) FMsg_Logf_InternalImpl(0, 0, &GScriptName, ELogVerbosity::Error, __VA_ARGS__);