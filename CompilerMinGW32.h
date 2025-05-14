/******************************************************************************
* \file      CompilerMinGW32.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     MinGW 32 definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMINGW32_H
#define COMPILERMINGW32_H		20250318L


#define COMPILER_MINGW32			((COMPILER_MICROWAY_NDP_C)+1)
#define COMPILER_MINGW32_NAME		"MINGW 32"

#if defined(__MINGW32__)

	#define COMPILER        COMPILER_MINGW32
	#define COMPILER_NAME   COMPILER_MINGW32_NAME

#endif


#endif /* COMPILERMINGW32_H */
