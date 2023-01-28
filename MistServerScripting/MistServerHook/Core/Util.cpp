#include "Util.h"

#include "Windows.h"
#include "filesystem"
#include "cstdarg"
#include <stdio.h>

#define nullArg			(L"0")

using namespace std;

namespace Util
{
	FName Info, Warning, Error;

	OnEngineInit(Init)
	{
		Info = FName::Find(L"Info");
		Warning = FName::Find(L"Warning");
		Error = FName::Find(L"Error");
	}

	void ConsoleCommand(const wchar_t* cmd)
	{
		TArrayFString_AddUniqueImpl(&(*GEngine)->DeferredCommands, cmd);
	}

	void ForEachPlayerInWorld(UWorld* world, function<void(AMistOasisPlayerController*)> fn)
	{
		TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
		UWorld_GetPlayerControllerIterator(world, &it);

		for (auto i = 0; i < it.Array->Count; i++)
			fn(static_cast<AMistOasisPlayerController*>(it.Array->Data[i].Get()));
	}

	void ForEachPlayer(UObject* any, function<void(AMistOasisPlayerController*)> fn)
	{
		auto world = UObject_GetWorld(any);
		if (world) ForEachPlayerInWorld(world, fn);
	}

	void ClientAddMsg(AMistOasisPlayerController* controller, const wchar_t* msg)
	{
		UMistPlayerMessengerComponent_ClientAddInformationMessage(controller->MessengerComponent, FText(FString(msg)));
	}

	void ClientAddRedMsg(AMistOasisPlayerController* controller, const wchar_t* msg)
	{
		UMistPlayerMessengerComponent_ClientAddAnnouncementMessage(controller->MessengerComponent, FText(FString(msg)));
	}

	void ClientAddHudLogInfo(AMistOasisPlayerController* controller, const wchar_t* msg)
	{
		AMistOasisPlayerController_ClientAddHudLog(controller, Info, FText(FString(msg)));
	}

	void ClientAddHudLogWarning(AMistOasisPlayerController* controller, const wchar_t* msg)
	{
		AMistOasisPlayerController_ClientAddHudLog(controller, Warning, FText(FString(msg)));
	}

	void ClientAddHudLogError(AMistOasisPlayerController* controller, const wchar_t* msg)
	{
		AMistOasisPlayerController_ClientAddHudLog(controller, Error, FText(FString(msg)));
	}

	void ClientAddHudMessage(AMistOasisPlayerController* controller, const wchar_t* msg, float duration, bool esc)
	{
		FMistHudMessageOptions opts;
		memset(&opts, 0, sizeof(opts));
		opts.MessageText = FText(FString(msg));
		opts.DisplayDuration = duration;
		opts.bRequiresConfirmation = esc;

		AMistOasisPlayerController_ClientAddHudMessage(controller, opts);
	}

	bool AppendTextFile(const wchar_t* path, const wchar_t* format, ...)
	{
		va_list args;
		va_start(args, format);
#pragma warning(suppress : 4996)
		auto widelen = _vsnwprintf(nullptr, 0, format, args);
		if (widelen <= 0) return false;
		auto wide = new wchar_t[++widelen];
#pragma warning(suppress : 6386)
		vswprintf_s(wide, widelen--, format, args);
		va_end(args);

		auto mbsize = WideCharToMultiByte(CP_UTF8, 0, wide, widelen, NULL, 0, 0, NULL);
		if (mbsize <= 1) return false;
		auto mb = new CHAR[mbsize + 1];
		WideCharToMultiByte(CP_UTF8, 0, wide, widelen, mb, mbsize, NULL, NULL);
		mb[mbsize] = 0;

		auto fspath = filesystem::path(path);
		filesystem::create_directories(fspath.parent_path());

		auto file = CreateFileW(path, FILE_APPEND_DATA, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		if (file == INVALID_HANDLE_VALUE)
		{
			Error(L"CreateFile error %08X", GetLastError());
			return false;
		}
		else
		{
			DWORD written;
			auto result = WriteFile(file, mb, mbsize, &written, NULL);
			if (!result)
				Error(L"WriteFile error %08X", GetLastError());
			CloseHandle(file);
			return result;
		}
	}

	bool DumpFile(const wchar_t* path, void* content, uint32 size)
	{
		auto fspath = filesystem::path(path);
		filesystem::create_directories(fspath.parent_path());

		auto file = CreateFileW(path, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		if (file == INVALID_HANDLE_VALUE)
		{
			Error(L"CreateFile error %08X", GetLastError());
			return false;
		}
		else
		{
			DWORD written;
			auto result = WriteFile(file, content, size, &written, NULL);
			if (!result)
				Error(L"WriteFile error %08X", GetLastError());
			CloseHandle(file);
			return result;
		}
	}

	void Tokenize(const FString& str, vector<FName>& vec)
	{
		if (str.Count == 0) return;

		int count = 1;
		for (int i = 0; i < str.Count; i++)
		{
			if (str.Data[i] == L' ')
			{
				str.Data[i] = 0;
				count++;
			}
		}

		auto ptr = str.Data;
		for (int i = 0; i < str.Count; i++)
		{
			if (str.Data[i] == 0)
			{
				const auto name = FName::Find(ptr);
				if (name) vec.push_back(name);
				else Error(L"Tokenize  FName not found: %s", ptr);
				ptr = &str.Data[i + 1];
			}
		}
	}



	const wchar_t* getArg(const wchar_t* args, uint16 nArg, uint16* argLenPtr) {

		*argLenPtr = 0;
		if (args == nullptr) return nullArg;
		if (wcslen(args) == 0) return nullArg;


		const wchar_t* argPtr = args;
		uint16 curArg = 1;

		while (1) {
			if (*argPtr == L' ' || *argPtr == 0) {
				if (curArg >= nArg || *argPtr == 0) {
					argPtr -= *argLenPtr;
					break;
				}
				curArg++;
				*argLenPtr = 0;
			}
			else {
				*argLenPtr += 1;
			}
			argPtr++;
		}
		return argPtr;
	}



	bool saveOnFile(const char* fileName, uint64 dataSize, void* data)
	{
		FILE* fptr;
		fopen_s(&fptr, fileName, "wb");
		if (fptr == nullptr) return false;
		auto count = fwrite(data, dataSize, 1, fptr);
		fclose(fptr);
		if (count == 0) return false;
		return true;
	}



	bool logOnFile(const char* fileName, const wchar_t* data)
	{
		wchar_t buff[128];

		int utcTime[8] = {};
		FWindowsPlatformTime_UtcTime(&utcTime[0], &utcTime[1], &utcTime[2], &utcTime[3], &utcTime[4], &utcTime[5], &utcTime[6], &utcTime[7]);

		swprintf_s(buff, L"\n[%i/%02i/%02i %02i:%02i:%02i] ", utcTime[0], utcTime[1], utcTime[3], utcTime[4], utcTime[5], utcTime[6]);

		char newfilename[64];
		sprintf_s(newfilename, "../../Saved/Logs/%s_%i_%i_%i.log", fileName, utcTime[0], utcTime[1], utcTime[3]);

		FILE* fptr;
		fopen_s(&fptr, newfilename, "a, ccs=UTF-8");
		if (fptr == nullptr) return false;
		int count = 0;
		count += fwprintf(fptr, buff);
		count += fwprintf(fptr, data);
		fclose(fptr);
		if (count == 0) return false;
		return true;
	}


	bool readFile(const char* fileName, uint64* dataSize, void** data)
	{
		FILE* fptr;
		fopen_s(&fptr, fileName, "rb");

		if (fptr == nullptr) return false;

		fseek(fptr, 0, SEEK_END);
		uint64 fileSize = ftell(fptr);
		fseek(fptr, 0, SEEK_SET);

		*data = malloc(fileSize);

		if (*data == nullptr) return false;

		*dataSize = fileSize;
		auto count = fread(*data, fileSize, 1, fptr);
		fclose(fptr);
		if (count == 0) return false;
		return true;
	}





}