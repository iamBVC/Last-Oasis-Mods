#pragma once
#include "MistServer/Generated/Mist_classes.h"

#define Log(...) Logf_InternalImpl(0, 0, &GScriptName, ELogVerbosity::Log, __VA_ARGS__);
#define Warning(...) Logf_InternalImpl(0, 0, &GScriptName, ELogVerbosity::Warning, __VA_ARGS__);
#define Error(...) Logf_InternalImpl(0, 0, &GScriptName, ELogVerbosity::Error, __VA_ARGS__);

typedef void (*PluginSymbolInit)(const class Symbol&);
#pragma section(".inits")
#define OnSymbolInit(Name, Sym) void Name(const class Symbol& Sym);\
__declspec(allocate(".inits")) PluginSymbolInit __inits_##Name = Name;\
void Name(const class Symbol& Sym)

typedef void (*PluginEngineInit)();
#pragma section(".inite")
#define OnEngineInit(Name) void Name();\
__declspec(allocate(".inite")) PluginEngineInit __inite_##Name = Name;\
void Name()

__declspec(align(32))
struct HookEntry
{
	void* Target;
	void* Hook;
	void** Orig;
};
#pragma section(".hooker$z")
#define _HookEx(A, S, R, H, ...) R H(__VA_ARGS__);\
decltype(H)* Orig##H;\
__declspec(allocate(A)) HookEntry __hooker_##H = { (void*)S, (void*)H, (void**)&Orig##H };\
R H(__VA_ARGS__)

#define Hook(S, R, H, ...) _HookEx(".hooker$z", S, R, H, __VA_ARGS__)

#ifndef PLUGIN
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif

extern API UEngine** GEngine;
extern API FName GScriptName;