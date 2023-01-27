#include "Util.h"

#include "Windows.h"
#include "filesystem"
#include "cstdarg"
#include <stdio.h>

#define nullArg			(L"0")


//save all the functions to execute every World tick here
std::vector<void(*)(UWorld* world, int level, float delta)> funcToTick;


namespace Util {

	void ConsoleCommand(const wchar_t* cmd)
	{
		TArrayFString_AddUniqueImpl(&(GEngine->DeferredCommands), cmd);
	}

	void ForEachPlayerController(UObject* any, std::function<void(AMistOasisPlayerController*)> fn)
	{
		auto world = UObject_GetWorld(any);
		TIndexedIterator<TWeakObjectPtr<APlayerController>> it;
		UWorld_GetPlayerControllerIterator(world, &it);

		for (auto i = 0; i < it.Array->Count; i++)
			fn(static_cast<AMistOasisPlayerController*>(it.Array->Data[i].Get()));
	}


	void ClientAddMsg(AMistOasisPlayerController* player, const wchar_t* msg)
	{
		auto messengerClass = UMistPlayerMessengerComponent_StaticClass();
		auto messenger = static_cast<UMistPlayerMessengerComponent*>(AActor_GetComponentByClass(player, messengerClass));
		if (messenger == nullptr) return;
		auto str = FString(msg);
		auto text = FText(str);
		UMistPlayerMessengerComponent_ClientAddInformationMessage(messenger, text);
	}


	void ClientAddRedMsg(AMistOasisPlayerController* player, const wchar_t* msg)
	{
		auto messengerClass = UMistPlayerMessengerComponent_StaticClass();
		auto messenger = static_cast<UMistPlayerMessengerComponent*>(AActor_GetComponentByClass(player, messengerClass));
		if (messenger == nullptr) return;
		auto str = FString(msg);
		auto text = FText(str);
		UMistPlayerMessengerComponent_ClientAddAnnouncementMessage(messenger, text);
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

		auto fspath = std::filesystem::path(path);
		std::filesystem::create_directories(fspath.parent_path());

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
		auto fspath = std::filesystem::path(path);
		std::filesystem::create_directories(fspath.parent_path());

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