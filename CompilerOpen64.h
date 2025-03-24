/******************************************************************************
* \file      CompilerOpen64.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Open64 definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILEROPEN64_H
#define COMPILEROPEN64_H		20250318L


#define COMPILER_OPEN64			((COMPILER_NWCC)+1)
#define COMPILER_OPEN64_NAME	"Open64"

#if defined(__OPEN64__) || defined(__OPENCC__)

	#define COMPILER        COMPILER_OPEN64
	#define COMPILER_NAME   COMPILER_OPEN64_NAME

#endif


#endif /* COMPILEROPEN64_H */
