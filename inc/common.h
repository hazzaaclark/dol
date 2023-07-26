/* Copyright (C) 2023 Harry Clark */

/* Dynamic DLL to DOL toolkit for Riivolution */

/* THIS FILE IS ABOUT COMMON DATA TYPES USED THROUGHOUT THE PROJECT */
/* CREATING TYPE DEFINED METHODS TO INSTANTIATE RAW POINTERS FOR MY */
/* METHODS, FUNCTIONS, ETC */


#ifndef COMMON
#define COMMON

#include <cstdint>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef UNSIGNED_TYPES
#define UNSIGNED_TYPES

typedef uint8_t U8;
typedef uint16_t U16;
typedef uint32_t U32;
typedef uint64_t U64;

#endif 

#ifndef SIGNED_TYPES
#define SIGNED_TYPES

typedef int8_t S8;
typedef int16_t S16;
typedef int32_t S32;
typedef int64_t S64;

#endif 

#ifndef UNKNOWN_TYPES
#define UNKNOWN_TYPES

typedef unsigned char UNK_8;
typedef unsigned short UNK_16;
typedef unsigned int UNK_32;
typedef unsigned long UNK_64;
typedef unsigned long UNK_;

#endif

#ifndef FLOATING_POINT
#define FLOATING_POINT 

typedef float F32;
typedef double F64;
typedef volatile F32 VF32;
typedef volatile F64 VF64;

#endif

#endif