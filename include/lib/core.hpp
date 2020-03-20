#pragma once

#ifdef _MSC_VER
#ifdef LIB_BUILD_DLL
#define LIB_API __declspec( dllexport )
#else
#define LIB_API __declspec( dllimport )
#endif
#else
#define LIB_API
#endif
