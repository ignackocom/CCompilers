/******************************************************************************
* \file      CompilerNWCC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     NWCC definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERNWCC_H
#define COMPILERNWCC_H		20250318L


#define COMPILER_NWCC			((COMPILER_NVHPC)+1)
#define COMPILER_NWCC_NAME		"NWCC"

#if defined(__NWCC__)

	#define COMPILER        COMPILER_NWCC
	#define COMPILER_NAME   COMPILER_NWCC_NAME

#endif


#endif /* COMPILERNWCC_H */
