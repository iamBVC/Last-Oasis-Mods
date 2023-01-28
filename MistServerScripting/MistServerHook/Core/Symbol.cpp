#include "Symbol.h"
#include "Windows.h"

__declspec(align(4)) struct KeyValue
{
	INT Text;
	INT Offset;
};

Symbol::Symbol()
{
	Base = (DWORD64)GetModuleHandleW(NULL);
	File = CreateFileA("Symbols.bin", FILE_READ_DATA, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN, NULL);
	if (File == INVALID_HANDLE_VALUE)
	{
		MessageBoxA(NULL, "Missing Symbols.bin", "MistServerHook", MB_ICONERROR);
		return;
	}

	DWORD dwFileSizeHigh;
	auto dwFileSizeLow = GetFileSize(File, &dwFileSizeHigh);
	Map = CreateFileMappingW(File, NULL, PAGE_READONLY, dwFileSizeHigh, dwFileSizeLow, NULL);
	View = MapViewOfFile(Map, FILE_MAP_READ, 0, 0, ((SIZE_T)dwFileSizeHigh << 32) + dwFileSizeLow);
}

Symbol::~Symbol()
{
	UnmapViewOfFile(View);
	CloseHandle(Map);
	CloseHandle(File);
}

bool Symbol::Exchange(char** name) const
{
	auto result = Find(*name);
	if (result) *(DWORD64*)name = (DWORD64)result;
	return result != nullptr;
}

void* Symbol::Find(const char* name) const
{
	auto count = *(INT*)View;
	auto text = (DWORD64)View + 4 + (count * sizeof(KeyValue));

	for (auto i = 0; i < count; i++)
	{
		auto kv = (KeyValue*)((DWORD64)View + 4 + sizeof(KeyValue) * i);
		auto txt = (char*)(text + kv->Text);

		if (strcmp(name, txt) == 0)
			return (void*)(this->Base + kv->Offset);
	}
	return nullptr;
}