#include "../ChatConsole.h"
#include "Core/Util.h"
#include "Core/SQL_Utils.h"


using namespace ChatConsole;
using namespace Util;
using namespace std;
using namespace SQL_Utils;


namespace SQLtest
{



	void SQLtestCmdFn(AMistOasisPlayerController* caller, const wchar_t* args)
	{
		do {

			bool ret;

			ret = SQL_Connect();
			if (!ret) break;

			ret = SQL_execQuery(L"SELECT * FROM people");
			if (!ret) break;

			char name[256] = {};
			int age = 0;

			// Fetches the next rowset of data from the result
			while (SQL_Fetch()) {

				// Retrieves data for a single column in the result set
				SQL_GetData(1, &name, sqlDefault, sizeof(name));
				SQL_GetData(2, &age, sqlDefault, sizeof(age));
				static wchar_t buff[64];
				swprintf_s(buff, L"%S = %i", name, age);
				ClientAddRedMsg(caller, buff);
			}

		} while (false);


		SQL_Disconnect();
	}

	OnEngineInit(Init)
	{
		RegisterCommand(EMistAccountTier::Trusted, L"sql", SQLtestCmdFn, L"- SQL test");
	}

}
