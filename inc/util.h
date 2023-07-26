/* Copyright (C) 2023 Harry Clark */

/* Dynamic DLL to DOL toolkit for Riivolution */

/* THIS FILE PERTAINS TO THE UTILITY USED THROUGHOUT THE TOOLKIT */

#ifndef UTIL
#define UTIL

/* NESTED INCLUDES */

#include "common.h"

#if defined(USE_UTIL)
#define USE_UTIL
#else
#define USE_UTIL

#define SWAP_BIG_ENDIAN(VALUE)            (((VALUE) >> 24) | (((VALUE) >> 8) & 0x0000FF00) \
                                          | (((VALUE) << 8) &  0x00FF0000) | ((VALUE) << 24));


#define SWAP_LITTLE_ENDIAN(VALUE)         (((VALUE) >> 8) | ((VALUE) << 8));

#define DOL_I754                          0
#define DOL_MSB                           1
#define DOL_CUR                           2
#define DOL_PPC                           1
#define DOL_MAX                          11
#define DOL_MIN                           7
#define ELF_ID                           16 
#define DOL_ALIGNMENT

#endif

#if defined(DOL_HEADER)
#define DOL_HEADER
#else
#define DOL_HEADER

typedef struct ELF
{
    static U16 BASE_SIZE;
    static U16 PROGRAM_SIZE;
    static U16 PPC;
    static U16 TYPE;
    static U32 HEADER_ENTRY;
    static U32 SECTION_ENTRY;
    static U32 PROGRAM_OFFSET;
    static U32 SECTION_OFFSET;
    static char OBJ[ELF_ID];

    typedef union TYPES
    {
        static U32 TYPE;
        static U32 OFFSET;
        static U32 VIRTUAL_ADRR;
        static U32 PHYSICAL_ADDR;
        static U32 MEM_SIZE;
        static U32 MEM_FLAGS;
        static U32 ALIGNMENT[DOL_ALIGNMENT];
    };
};

#endif

#endif
