/******************************************************************************
* \file      CompilerVBCC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     VBCC definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERVBCC_H
#define COMPILERVBCC_H		20250318L


#define COMPILER_VBCC			((COMPILER_USL_C)+1)
#define COMPILER_VBCC_NAME		"VBCC"

#if defined(__VBCC__)

	#define COMPILER        COMPILER_VBCC
	#define COMPILER_NAME   COMPILER_VBCC_NAME

#endif


#endif /* COMPILERVBCC_H */
