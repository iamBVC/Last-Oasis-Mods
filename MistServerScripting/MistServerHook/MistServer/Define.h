#pragma once
#ifndef PLUGIN
#pragma section(".native")
#define Native(S, R, N, ...) inline __declspec(allocate(".native"), dllexport) R (*N)(__VA_ARGS__) = (decltype(N))((void*)S);
#else
#define Native(S, R, N, ...) extern __declspec(dllimport) R (*N)(__VA_ARGS__);
#endif