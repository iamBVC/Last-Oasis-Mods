#pragma once
#include "Core.h"

class Symbol
{
	unsigned long long Base;
	void* File;
	void* Map;
	void* View;

public:
	Symbol();
	~Symbol();
	API bool Exchange(char** name) const;
	API void* Find(const char* name) const;

	template <typename T>
	inline T* Find(const char* name) const
	{
		return static_cast<T*>(Find(name));
	}
};
