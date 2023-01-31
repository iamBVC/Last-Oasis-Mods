#include "Core/Config.h"
#include "Core/Util.h"

using namespace std;
using namespace Config;
using namespace Util;




namespace ChatFilter
{

	int32 IsEnabled = 0;
	int32 logBlocked = 0;
	vector<FName> Blocked;

	OnEngineInit(Init)
	{
		auto strBlocked = FHeapString();
		Config::RegisterVariable(L"ChatFilter.enabled", IsEnabled, false);
		Config::RegisterVariable(L"ChatFilter.logBlocked", logBlocked, false);
		Config::RegisterVariable(L"ChatFilter.list", strBlocked, false);
		Config::LoadIniSection(L"ScriptHook", L"ChatFilter");
		Util::Tokenize(strBlocked, Blocked);
	}



	void censureWord(wchar_t* word, int wordLen) {

		for (auto i = 0; i < wordLen; i++) {
			word[i] = L'*';
		}

	}



	void filterBadWords(const FString& msg) {

		auto message = msg.c_str();

		if (message == nullptr) return;

		int badWordsCount = 0;

		//for all the words in the blocked list
		for (auto i = 0; i < Blocked.size(); i++) {

			//cycle through all the bad words and filter them
			while (wcsstr(message, Blocked[i].c_str()) != nullptr) {
				auto wordPtr = (wchar_t*)wcsstr(message, Blocked[i].c_str());
				auto wordLen = (long)wcslen(Blocked[i].c_str());

				if (wordPtr == message) {
					if (wordPtr[wordLen] == L' ' || wordPtr[wordLen] == 0) {
						censureWord(wordPtr, wordLen);
						badWordsCount++;
					}
				}else{
					if (wordPtr[-1] == L' ' && (wordPtr[wordLen] == L' ' || wordPtr[wordLen] == 0)) {
						censureWord(wordPtr, wordLen);
						badWordsCount++;
					}
				}
			}

		}

	}


	//need double hooking to work....
/*
	Hook("?ServerMapChat_Implementation@UMistPlayerMessengerComponent@@UEAAXAEBVFString@@@Z",
		bool, ServerMapChat, UMistPlayerMessengerComponent* self, const FString& msg)
	{
		if (IsEnabled) filterBadWords(msg);
		return OrigServerMapChat(self, msg);
	}
*/


}