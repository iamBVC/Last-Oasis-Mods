#pragma once
#include "Core.h"
#include "functional"

namespace Util
{
	void ConsoleCommand(const wchar_t* cmd);
	void ForEachPlayerInWorld(UWorld* world, std::function<void(AMistOasisPlayerController*)> fn);
	void ForEachPlayer(UObject* any, std::function<void(AMistOasisPlayerController*)> fn);
	void ClientAddMsg(AMistOasisPlayerController* controller, const wchar_t* msg);
	void ClientAddRedMsg(AMistOasisPlayerController* controller, const wchar_t* msg);
	void ClientAddHudLogInfo(AMistOasisPlayerController* controller, const wchar_t* msg);
	void ClientAddHudLogWarning(AMistOasisPlayerController* controller, const wchar_t* msg);
	void ClientAddHudLogError(AMistOasisPlayerController* controller, const wchar_t* msg);
	void ClientAddHudMessage(AMistOasisPlayerController* controller, const wchar_t* msg, float duration, bool esc);
	bool AppendTextFile(const wchar_t* path, const wchar_t* text, ...);
	bool DumpFile(const wchar_t* path, void* content, uint32 size);
	void Tokenize(const FString& str, std::vector<FName>& vec);
	const wchar_t* getArg(const wchar_t* args, uint16 nArg, uint16* argLenPtr);
	bool saveOnFile(const char* fileName, uint64 dataSize, void* data);
	bool logOnFile(AActor* caller, const char* fileName, const wchar_t* data);
	bool readFile(const char* fileName, uint64* dataSize, void** data);

};