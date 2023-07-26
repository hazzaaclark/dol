/* Copyright (C) 2023 Harry Clark */

/* Dynamic DLL to DOL toolkit for Riivolution */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY OF THE PROGRAM */

/* NESTED INCLUDES */

#include "util.h"

#ifdef DOL_HEADER

static inline DOL::INC_ALLOC* INC_BSS_ALLOC(DOL* HEADER, 
	                                        DOL::ORG* ORIGIN, 
	                                        DOL::ORG_SIZE* ORIGIN_SIZE)
{

#ifdef USE_UTIL

	if (DOL::FLAGS & DOL_HAS_BSS)
	{
		ORIGIN += SWAP_BIG_ENDIAN(DOL::ADDR);
		ORIGIN_SIZE += SWAP_BIG_ENDIAN((DOL::SIZE));
	}

#endif 

}

#endif
