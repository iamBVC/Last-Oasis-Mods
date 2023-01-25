#include "Types.h"

#include "../Native/Native.h"

FName::FName(const wchar_t* str) : FName()
{
	FName_FName(this, str, EFindName::FNAME_Add);
}

FName FName::Find(const wchar_t* str)
{
	FName name;
	FName_FName(&name, str, EFindName::FNAME_Find);
	return name;
}

const wchar_t* FName::c_str()
{
	FString str;
	FName_ToString(this, &str);
	return str.c_str();
}

FText::FText(const FString& str) : FText::FText()
{
	FText_FromString(this, const_cast<FString&&>(str));
}

FText::~FText()
{
	FText_Destructor(this->TextData);
}

