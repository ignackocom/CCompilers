/******************************************************************************
* \file      CompilerMinGW64.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     MinGW 64 definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMINGW64_H
#define COMPILERMINGW64_H		20250318L


#define COMPILER_MINGW64			((COMPILER_MINGW32)+1)
#define COMPILER_MINGW64_NAME		"MinGW 64"

#if defined(__MINGW64__)

	#define COMPILER        COMPILER_MINGW64
	#define COMPILER_NAME   COMPILER_MINGW64_NAME

#endif


#endif /* COMPILERMINGW64_H */
