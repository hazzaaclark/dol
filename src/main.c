/* Copyright (C) 2023 Harry Clark */

/* Dynamic DLL to DOL toolkit for Riivolution */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY OF THE PROGRAM */

/* NESTED INCLUDES */

#include "util.h"

#ifdef DOL_HEADER

/* DETERMINE THE ORIGIN OF THE ALLOCATED OBJECT FILE MEMORY */
/* ON THE STACK BY DETEMINING THE SIZE OF THE PHYSICAL ADDRESS */
/* THE ADDRESS OF WHICH THE ALLOCATED MEMORY IS STORED READY FOR PARSING */

static inline DOL::INC_ALLOC* INC_BSS_ALLOC(DOL* HEADER, 
	                                        DOL::ORG ORIGIN, 
	                                        DOL::ORG_SIZE ORIGIN_SIZE,
	                                        ELF::TYPES::PHYSICAL_ADDR* P_ADDR)
{

#ifdef USE_UTIL

	if (DOL::FLAGS & DOL_HAS_BSS)
	{
		ORIGIN += SWAP_BIG_ENDIAN(sizeof(DOL::ADDR));
		ORIGIN_SIZE += SWAP_BIG_ENDIAN(sizeof(DOL::SIZE));

		DOL::ADDR = SWAP_BIG_ENDIAN(sizeof(P_ADDR));

	}

#endif 

}

#endif
