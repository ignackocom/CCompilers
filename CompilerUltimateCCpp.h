/******************************************************************************
* \file      CompilerUltimateCCpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Ultimate C/C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERULTIMATECCPP_H
#define COMPILERULTIMATECCPP_H		20250318L


#define COMPILER_ULTIMATE_CCPP			((COMPILER_TURBO_CCPP)+1)
#define COMPILER_ULTIMATE_CCPP_NAME		"Ultimate C/C++"

#if defined(_UCC)

	#define COMPILER        COMPILER_ULTIMATE_CCPP
	#define COMPILER_NAME   COMPILER_ULTIMATE_CCPP_NAME

#endif


#endif /* COMPILERULTIMATECCPP_H */
