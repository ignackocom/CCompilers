/******************************************************************************
* \file      CompilerKAICpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     KAI C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERKAICPP_H
#define COMPILERKAICPP_H		20250318L


#define COMPILER_KAI_CPP			((COMPILER_INTEL_CCPP)+1)
#define COMPILER_KAI_CPP_NAME		"KAI C++"

#if defined(__KCC)

	#define COMPILER        COMPILER_KAI_CPP
	#define COMPILER_NAME   COMPILER_KAI_CPP_NAME

#endif


#endif /* COMPILERKAICPP_H */
