#include "SQL_Utils.h"

#include "Util.h"
#include <stdarg.h>
#include <iostream>
#include <windows.h>
#include <sqltypes.h>
#include <sql.h>
#include <sqlext.h>

using namespace Util;
using namespace std;



SQLHANDLE SQLEnvHandle = NULL;
SQLHANDLE SQLConnectionHandle = NULL;
SQLHANDLE SQLStatementHandle = NULL;

SQLWCHAR connQuery[] = L"DRIVER={MySQL ODBC 8.0 ANSI Driver}; SERVER=localhost; 3306; DATABASE=test; UID=root; PWD=;";



namespace SQL_Utils
{


	void showSQLError(unsigned int handleType, const SQLHANDLE& handle)
	{
		SQLWCHAR SQLState[1024];
		SQLWCHAR message[1024];
		if (SQL_SUCCESS == SQLGetDiagRec(handleType, handle, 1, SQLState, NULL, message, 1024, NULL))
			Error(L"SQL driver message : %ws\nSQL state : %ws", message, SQLState);
	}



	bool SQL_Connect() {

		// Allocates the environment
		if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &SQLEnvHandle)) return false;
		
		// Sets attributes that govern aspects of environments
		if (SQL_SUCCESS != SQLSetEnvAttr(SQLEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0)) return false;
		
		// Allocates the connection
		if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, SQLEnvHandle, &SQLConnectionHandle)) return false;
		
		// Sets attributes that govern aspects of connections
		if (SQL_SUCCESS != SQLSetConnectAttr(SQLConnectionHandle, SQL_LOGIN_TIMEOUT, (SQLPOINTER)5, 0)) return false;
			
		SQLWCHAR retConString[1024]; // Connection string

		// Establishes connections to a driver and a data source
		switch (SQLDriverConnect(SQLConnectionHandle, NULL, connQuery, SQL_NTS, retConString, 1024, NULL, SQL_DRIVER_NOPROMPT)) {
			
		case SQL_SUCCESS:
			break;

		case SQL_SUCCESS_WITH_INFO:
			break;

		case SQL_NO_DATA_FOUND:
			showSQLError(SQL_HANDLE_DBC, SQLConnectionHandle);
			return false;
			break;

		case SQL_INVALID_HANDLE:
			showSQLError(SQL_HANDLE_DBC, SQLConnectionHandle);
			return false;
			break;

		case SQL_ERROR:
			showSQLError(SQL_HANDLE_DBC, SQLConnectionHandle);
			return false;
			break;

		default:
			break;
		}

		// Allocates the statement
		if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, SQLConnectionHandle, &SQLStatementHandle)) return false;

		return true;
	}



	bool SQL_execQuery(const wchar_t* SQLQuery) {
		if (SQL_SUCCESS != SQLExecDirect(SQLStatementHandle, (SQLWCHAR*)SQLQuery, SQL_NTS)) {
			showSQLError(SQL_HANDLE_STMT, SQLStatementHandle);
			return false;
		}else{
			return true;
		}
	}



	bool SQL_Fetch() {
		bool ret = SQLFetch(SQLStatementHandle);
		if (ret == SQL_SUCCESS) return true;
		return false;
	}


	void SQL_GetData(uint32 index, void* dataPtr, sqlDataType dataType, int64 dataSize) {

		int dataTypeToGet;

		if (dataType == sqlChar) dataTypeToGet = SQL_C_DEFAULT;
		if (dataType == sqlDefault) dataTypeToGet = SQL_C_DEFAULT;
		if (dataType == sqlFloat) dataTypeToGet = SQL_C_FLOAT;
		if (dataType == sqlInt) dataTypeToGet = SQL_C_SBIGINT;

		SQLGetData(SQLStatementHandle, index, dataTypeToGet, dataPtr, dataSize, NULL);
	}



	void SQL_Disconnect() {
		SQLFreeHandle(SQL_HANDLE_STMT, SQLStatementHandle);
		SQLDisconnect(SQLConnectionHandle);
		SQLFreeHandle(SQL_HANDLE_DBC, SQLConnectionHandle);
		SQLFreeHandle(SQL_HANDLE_ENV, SQLEnvHandle);
	}


}