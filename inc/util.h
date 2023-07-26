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

#endif

#endif
