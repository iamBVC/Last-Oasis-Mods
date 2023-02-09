#pragma once
#include "Core.h"
#include "functional"


enum sqlDataType {
	sqlDefault,
	sqlChar,
	sqlFloat,
	sqlInt,
};


namespace SQL_Utils
{

	bool SQL_Connect();
	bool SQL_execQuery(const wchar_t* SQLQuery);
	bool SQL_Fetch();
	void SQL_GetData(uint32 index, void* dataPtr, sqlDataType dataType, int64 dataSize);
	void SQL_Disconnect();

};