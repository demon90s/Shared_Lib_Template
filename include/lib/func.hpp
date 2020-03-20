#pragma once

#ifdef _MSC_VER
#ifdef FUNC_EXPORTS
#define FUNC_API __declspec( dllexport )
#else
#define FUNC_API __declspec( dllimport )
#endif
#else
#define FUNC_API
#endif

FUNC_API void print(const char *msg);