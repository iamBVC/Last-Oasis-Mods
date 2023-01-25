#include "DumpBackend.h"

#include "Native/Symbol.h"


wchar_t* FixAndGetApiPath(FString* url)
{
	wchar_t* start = nullptr;
	auto data = reinterpret_cast<wchar_t*>(url->Data);
	for (auto i = 0; i < url->Count; i++)
	{
		if (data[i] == L'/')
		{
			if (!start) start = &data[i + 1];
			data[i] = L'_';
		}
	}

	return start;
}

uint16 Hash;


void FinishRequest(void* request)
{
	GHooker.OrigFn(FinishRequest)(request);

#pragma warning(suppress : 4244)
	Hash = reinterpret_cast<uint64>(request) >> 8;

	FString verb;
	FCurlHttpRequest_GetVerb(request, &verb);

	FString url;
	FCurlHttpRequest_GetURL(request, &url);

	FString requestBodyType;
	FCurlHttpRequest_GetContentType(request, &requestBodyType);

	auto requestBodyLength = FCurlHttpRequest_GetContentLength(request);

	Warning(L"HTTP %02X %i bytes\t%s %s   %s", Hash, requestBodyLength, verb.c_str(), url.c_str(), requestBodyType.c_str());
	Util::AppendTextFile(L"Backend\\Requests.txt", L"%02X\t%s\\%s %s %i bytes\n", Hash, verb.c_str(), url.c_str(), requestBodyType.c_str(), requestBodyLength);

	if (requestBodyLength > 0)
	{
		auto content = FCurlHttpRequest_GetContent(request);

		if (content)
		{
			auto start = FixAndGetApiPath(&url);

			wchar_t buff[MAX_PATH];
			swprintf_s(buff, MAX_PATH, L"Backend\\%02X_%s_%s.bin", Hash, verb.c_str(), start);
			Util::DumpFile(buff, content->Data, content->Count);
		}
	}
}

void* (*OrigResponseDestructor)(void* response, char a2);
void* ResponseDestructor(void* response, char a2)
{
	auto responseBodyLength = FCurlHttpResponse_GetContentLength(response);
	Warning(L"HTTP %02X %i bytes\tresponse", Hash, responseBodyLength);
	Util::AppendTextFile(L"Backend\\Requests.txt", L"%02X\tResponse %i bytes\n", Hash, responseBodyLength);

	if (responseBodyLength)
	{
		auto content = FCurlHttpResponse_GetContent(response);

		if (content)
		{
			FString url;
			FCurlHttpResponse_GetURL(response, &url);

			auto start = FixAndGetApiPath(&url);

			wchar_t buff[MAX_PATH];
			swprintf_s(buff, MAX_PATH, L"Backend\\%02X_Resp_%s.bin", Hash, start);
			Util::DumpFile(buff, content->Data, content->Count);
		}
	}

	return GHooker.OrigFn(ResponseDestructor)(response, a2);
}

void DumpBackendInit()
{
	GHooker.Add(FinishRequest, SYM_86EE2BC18B255E1F3FAE48A7B9C693A8);
	GHooker.Add(ResponseDestructor, SYM_00900F6250D16C93BF81F5A20E8119D7);
}