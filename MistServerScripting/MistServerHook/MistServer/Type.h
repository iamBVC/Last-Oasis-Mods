#pragma once
#include "DataType.h"
#include "Enum.h"
#include "Native.h"
#include "string"

struct TArrayVoid {
	void** Data;
	int32 Count;
	int32 Size;
};

template<typename T>
struct TArray {
	T* Data;
	int32 Count;
	int32 Size;
};

template<typename T>
struct THeapArray {
	T* Data;
	int Count;
	int Size;

	inline THeapArray(int size)
	{
		this->Data = static_cast<T*>(FMemory_Malloc(size, sizeof(T)));
		this->Count = 0;
		this->Size = size;
	}

	inline ~THeapArray()
	{
		FMemory_Free(this->Data);
	}
};

struct FString : TArray<wchar_t>
{
	FString() { }

	constexpr FString(const wchar_t* str)
	{
		Data = const_cast<wchar_t*>(str);
		Count = static_cast<int>(std::char_traits<wchar_t>::length(str) + 1);
		Size = Count;
	}

	constexpr FString(wchar_t* str, int count)
	{
		Data = str;
		Count = count;
		Size = count + 1;
	}

	inline FString(wchar_t* str) : FString(str, static_cast<int>(wcslen(str))) { }

	constexpr const wchar_t* c_str() const
	{
		return Data;
	}
};

struct FHeapString : THeapArray<wchar_t>
{
	inline FHeapString() : THeapArray<wchar_t>(0) { }

	inline operator const FString&() const
	{
		return reinterpret_cast<const FString&>(*this);
	}
};

struct FName
{
	uint32 ComparisonIndex;
	uint32 _Pad;

	FName()
	{
		ComparisonIndex = 0;
		_Pad = 0;
	}

	FName(const wchar_t* str) : FName()
	{
		FName_FName(this, str, EFindName::FNAME_Add);
	}

	static inline FName Find(const wchar_t* str)
	{
		FName name;
		FName_FName(&name, str, EFindName::FNAME_Find);
		return name;
	}

	inline const wchar_t* c_str() const
	{
		FString str;
		FName_ToString(const_cast<FName*>(this), &str);
		return str.c_str();
	}

	constexpr operator uint32() const { return ComparisonIndex; }
};

struct UObject
{
	void* Vftable;
	EObjectFlags ObjectFlags;
	int32 InternalIndex;
	const struct UClass* ClassPrivate;
	const FName NamePrivate;
	UObject* OuterPrivate;

	inline const wchar_t* Name_c_str() const
	{
		return NamePrivate.c_str();
	}
};

template<typename T>
struct TIndexedIterator
{
	TArray<T>* Array;
	int32 Index;
};

template<typename T>
struct TWeakObjectPtr
{
	T* Pointer;

	inline T* Get() const
	{
		return static_cast<T*>(FWeakObjectPtr_Get((void*)this));
	}
};

struct TGeneratedTextData
{
	void* Vf_GeneratedTextData;
	FString* LocalizedString;
	TArray<uint64>* RefCtrl;
	void* Vf_TextHistory;
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
	void* _Unknown1;

	constexpr FText()
	{
		TextData = nullptr;
		_Unknown0 = 0;
		_Unknown1 = 0;
	}

	inline FText(const FString& str) : FText()
	{
		FText_FromStringR(this, const_cast<FString&&>(str));
	}

	inline ~FText()
	{
		FText_Destructor(this->TextData);
	}

	inline const wchar_t* c_str() const
	{
		return TextData->DisplayString.c_str();
	}
};

struct FConsoleVariableDelegate
{
	void* Delegate;
	unsigned int Flags;
};

typedef void IConsoleVariable;