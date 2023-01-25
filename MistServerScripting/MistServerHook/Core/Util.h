#pragma once
#include "Hooker.h"
#include <vector>

typedef struct {
	uint32 uintData[32];
	int32 intData[32];
	float floatData[32];
}serverData_t;

extern std::vector<void(*)(UWorld* world, int level, float delta)> funcToTick;


namespace Util{

	void ConsoleCommand(const wchar_t* cmd);
	void ForEachPlayerController(UObject* any, std::function<void(AMistOasisPlayerController*)> fn);
	void ClientAddMsg(AMistOasisPlayerController* player, const wchar_t* msg);
	void ClientAddRedMsg(AMistOasisPlayerController* player, const wchar_t* msg);
	bool AppendTextFile(const wchar_t* path, const wchar_t* text, ...);
	bool DumpFile(const wchar_t* path, void* content, uint32 size);
	const wchar_t* getArg(const wchar_t* args, uint16 nArg, uint16* argLenPtr);
	bool saveOnFile(const char* fileName, uint64 dataSize, void* data);
	bool readFile(const char* fileName, uint64* dataSize, void** data);

};