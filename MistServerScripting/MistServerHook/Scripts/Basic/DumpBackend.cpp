#include "Core/Config.h"
#include "Core/Util.h"
#include "Windows.h"



using namespace Util;



namespace DumpBackend
{


	int32 IsEnabled = 0;


	OnEngineInit(Init)
	{
		Config::RegisterVariable(L"DumpBackend.IsEnabled", IsEnabled, false);
		Config::LoadIniSection(L"ScriptHook", L"Development");
	}




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
	Hook("?FinishRequest@FCurlHttpRequest@@UEAAXXZ", void, FinishRequest, void* request)
	{
		OrigFinishRequest(request);

		if (!IsEnabled) return;

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
		AppendTextFile(L"Backend\\Requests.txt", L"%02X\t%s\t%s %s %i bytes\n", Hash, verb.c_str(), url.c_str(), requestBodyType.c_str(), requestBodyLength);

		if (requestBodyLength > 0)
		{
			auto content = static_cast<TArray<uint8>*>(FCurlHttpRequest_GetContent(request));

			if (content)
			{
				auto start = FixAndGetApiPath(&url);

				wchar_t buff[MAX_PATH];
				swprintf_s(buff, MAX_PATH, L"Backend\\%02X_%s_%s.bin", Hash, verb.c_str(), start);
				DumpFile(buff, content->Data, content->Count);
			}
		}
	}




	Hook("??_GFCurlHttpResponse@@UEAAPEAXI@Z", void*, ResponseDestructor, void* response, char a2)
	{
		if (IsEnabled)
		{
			auto responseBodyLength = FCurlHttpResponse_GetContentLength(response);
			Warning(L"HTTP %02X %i bytes\tresponse", Hash, responseBodyLength);
			AppendTextFile(L"Backend\\Requests.txt", L"%02X\tResponse %i bytes\n", Hash, responseBodyLength);

			if (responseBodyLength)
			{
				auto content = static_cast<TArray<uint8>*>(FCurlHttpResponse_GetContent(response));

				if (content)
				{
					FString url;
					FCurlHttpResponse_GetURL(response, &url);

					auto start = FixAndGetApiPath(&url);

					wchar_t buff[MAX_PATH];
					swprintf_s(buff, MAX_PATH, L"Backend\\%02X_Resp_%s.bin", Hash, start);
					DumpFile(buff, content->Data, content->Count);
				}
			}
		}

		return OrigResponseDestructor(response, a2);
	}




}