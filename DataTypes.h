#pragma once
#include <string>
using namespace std;
#ifndef near
#define near
#endif

#ifndef far
#define far
#endif

typedef bool				bool8;
#define true8				true
#define false8				false

typedef unsigned char		byte;
typedef byte near *			pbyte;
typedef byte far *			lpbyte;
#define byte_max	(0x7F)
#define byte_min	(-byte_max-1)

typedef char				char8;
typedef char8 near *		pchar8;
typedef char8 far *			lpchar8;
typedef const char8 near *	pcchar8;
typedef const char8 far *	lpcchar8;
#define char8_max	(0xFF)
#define char8_min	(0)

typedef wchar_t				char16;
typedef char16 near *		pchar16;
typedef char16 far *		lpchar16;
typedef const char16 near *	pcchar16;
typedef const char16 far *	lpcchar16;
#define char16_max	(0xFFFF)
#define char16_min	(0)

#ifdef _UNICODE
	#define tstring			wstring
#else
	#define tstring			string
#endif

#ifdef _UNICODE
#define tchar			char16
#define ptchar			pchar16
#define lptchar			lpchar16
#define pctchar			pcchar16
#define lpctchar		lpcchar16
#define tchar_max		char16_max
#define tchar_min		char16_min
#else
#define tchar			char8
#define ptchar			pchar8
#define lptchar			lpchar8
#define pctchar			pcchar8
#define lpctchar		lpcchar8
#define tchar_max		char8_max
#define tchar_min		char8_min
#endif

typedef char				int8;
typedef int8 near *			pint8;
typedef int8 far *			lpint8;
#define int8_max	(0x7F)
#define int8_min	(-int8_max-1)
typedef unsigned char		uint8;
typedef uint8 near *		puint8;
typedef uint8 far *			lpuint8;
#define uint8_max	(0xFF)
#define uint8_min	(0)

typedef short				int16;
typedef int16 near *		pint16;
typedef int16 far *			lpint16;
#define int16_max	(0x7FFF)
#define int16_min	(-int16_max-1)
typedef unsigned short		uint16;
typedef uint16 near *		puint16;
typedef uint16 far *		lpuint16;
#define uint16_max	(0xFFFF)
#define uint16_min	(0)

typedef int					int32;
typedef int32 near *		pint32;
typedef int32 far *			lpint32;
#define int32_max	(0x7FFFFFFF)
#define int32_min	(-int32_max-1)
typedef unsigned int		uint32;
typedef uint32 near *		puint32;
typedef uint32 far *		lpuint32;
#define uint32_max	(0xFFFFFFFF)
#define uint32_min	(0)

typedef __int64				int64;
typedef int64 near *		pint64;
typedef int64 far *			lpint64;
#define int64_max	(0x7FFFFFFFFFFFFFFF)
#define int64_min	(-_max-1)
typedef unsigned __int64	uint64;
typedef uint64 near *		puint64;
typedef uint64 far *		lpuint64;
#define uint64_max	(0xFFFFFFFFFFFFFFFF)
#define uint64_min	(0)

typedef float				float32;
typedef float32 near *		pfloat32;
typedef float32 far *		lpfloat32;
#define float32_max	(0x)
#define float32_min	(-_max-1)

typedef double				float64;
typedef float64 near *		pfloat64;
typedef float64 far *		lpfloat64;
#define float64_max	(0x)
#define float64_min	(-_max-1)

#ifndef __T
#define __T(x)      L ## x
#endif

#ifndef _T
#define _T(x)       __T(x)
#endif

#ifndef _TEXT
#define _TEXT(x)    __T(x)
#endif