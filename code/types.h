#ifndef __SHARED_TYPES_H_
#define __SHARED_TYPES_H_

typedef signed char             int8_t;
typedef unsigned char           uint8_t;
typedef signed short            int16_t;
typedef unsigned short          uint16_t;
typedef signed int              int32_t;
typedef unsigned int            uint32_t;
typedef signed long long        int64_t;
typedef unsigned long long      uint64_t;
typedef char                    bool_t;
#if defined(_WIN64)
	typedef signed long long    pint_t;
	typedef unsigned long long  puint_t;
    typedef unsigned long long            size_t;
    typedef signed long long             ssize_t;
    typedef signed long long             ptrdiff_t;
#else
    typedef signed long         pint_t;
    typedef unsigned long       puint_t;
    typedef unsigned int            size_t;
    typedef signed int             ssize_t;
    typedef signed int             ptrdiff_t;
#endif

typedef signed long                  long_t;
typedef unsigned long                ulong_t;

typedef void*                        pvoid_t;
//typedef uint8_t*                    uint8_t*;

#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

// ����������� ����� ������
#define ERR_OK 0
#define ERR_BAD 1

#define TRUE  1
#define FALSE 0

#ifndef LOWORD
#define LOWORD(l)           ((uint16_t)(((ULONG_PTR)(l)) & 0xffff))
#endif // LOWORD

#ifndef HIWORD
#define HIWORD(l)           ((uint16_t)((((ULONG_PTR)(l)) >> 16) & 0xffff))
#endif // HIWORD

#ifndef ALIGN_DOWN_BY
#define ALIGN_DOWN_BY(length, alignment) ((ULONG_PTR)(length) & ~(alignment - 1))
#endif // ALIGN_DOWN_BY

#ifndef ALIGN_UP_BY
#define ALIGN_UP_BY(length, alignment) (ALIGN_DOWN_BY(((ULONG_PTR)(length) + alignment - 1), alignment))
#endif // ALIGN_UP_BY

#ifndef MAX_PATH
#define MAX_PATH 260
#endif // MAX_PATH

#if defined(_MSC_VER)
	#define W64LIT(x) x##ui64
#else
	#define W64LIT(x) x##ULL
#endif

#endif // __SHARED_TYPES_H_
