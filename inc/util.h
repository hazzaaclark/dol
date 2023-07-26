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

/* ALL OF THE INFORMATION PERTAINING TO THIS FILE TYPE CAN BE FOUND HERE */
/* https://docs.oracle.com/cd/E19253-01/816-1681/elf-29559/index.html */

/* THIS GOES OVER THE SPECIFIC ASSEMBLY ARCHITECTURE PRESENT IN THE PARSING OF DOL AND ELF FILES */

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
        typedef U32 TYPE;
        typedef U32 OFFSET;
        typedef U32 VIRTUAL_ADRR;
        typedef U32 PHYSICAL_ADDR;
        typedef U32 MEM_SIZE;
        typedef U32 MEM_FLAGS;
        typedef U32 ALIGNMENT[DOL_ALIGNMENT];
    };
};

typedef struct DOL
{
    typedef void(*INC_ALLOC(ELF::TYPES::PHYSICAL_ADDR* ADDR, U32* MEM_STACK))(void);

    typedef union TYPES
    {
        DOL* HEADER;
        static U32 TEXT;
        static U32 DATA;
        static U32 FLAGS;
        static FILE* ELF;
    };
};


#endif

#endif
