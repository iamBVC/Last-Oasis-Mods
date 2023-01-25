#pragma once

#include "Enums.h"
#include <string>

template<typename T>
struct TArray {
	T* Data;
	int32 Count;
	int32 Size;
};


struct FName
{
	FName()
	{
		ComparisonIndex = 0;
		_Pad = 0;
	}

	FName(const wchar_t* str);

	static FName Find(const wchar_t* str);

	const wchar_t* c_str();

	friend bool operator== (const FName& a, const FName& b);

private:
	uint32 ComparisonIndex;
	uint32 _Pad;
};

inline bool operator== (const FName& a, const FName& b)
{
	return a.ComparisonIndex == b.ComparisonIndex;
}


struct FString : TArray<wchar_t>
{
	FString() { }

	constexpr FString(const wchar_t* str)
	{
		Data = const_cast<wchar_t*>(str);
		Count = static_cast<int>(std::char_traits<wchar_t>::length(str) + 1);
		Size = Count;
	}

	FString(wchar_t* str, int length)
	{
		Data = const_cast<wchar_t*>(str);
		Count = length + 1;
		Size = Count;
	}

	FString(wchar_t* str) : FString(str, static_cast<int>(wcslen(str))) { }

	const wchar_t* c_str()
	{
		return Data;
	}
};

struct Vftable
{
	void* (*Destructor)(void* self);
};

struct UObject
{
	Vftable* Vftable;
	EObjectFlags ObjectFlags;
	int32 InternalIndex;
	struct UClass* ClassPrivate;
	FName NamePrivate;
	UObject* OuterPrivate;
};

template<typename T>
struct TIndexedIterator
{
	TArray<T>* Array;
	int32 Index;
};


extern void* (*FWeakObjectPtr_Get)(void* self);

template<typename T>
struct TWeakObjectPtr
{
	T* Get()
	{
		return static_cast<T*>(FWeakObjectPtr_Get(this));
	}

private:
	void* Pointer;
};

struct TGeneratedTextData
{
	Vftable* Vf_GeneratedTextData;
	FString* LocalizedString;
	TArray<uint64>* RefCtrl;
	Vftable* Vf_TextHistory;
	uint16 _Unknown4;
	uint16 _Unknown5;
	uint16 _Unknown6;
	uint16 _Unknown7;
	FString SourceString;
	FString DisplayString;
	void* _Unknown8;
	uint8_t _Pad[0x10];
};


struct FText
{
	TGeneratedTextData* TextData;
	void* _Unknown0;
	uint8 _Unknown1[8];

	FText()
	{
		TextData = nullptr;
	}

	FText(const FString& str);

	~FText();

	const wchar_t* c_str()
	{
		return TextData->DisplayString.c_str();
	}
};

