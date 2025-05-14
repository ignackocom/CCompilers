/******************************************************************************
* \file      CompilerClang.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Clang definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERCLANG_H
#define COMPILERCLANG_H		20250318L


#define COMPILER_CLANG			((COMPILER_CC65)+1)
#define COMPILER_CLANG_NAME		"Clang"

#if defined(__clang__) && !defined(__TURBOC__) && !defined(__BORLANDC__) && !defined(__CODEGEARC__)
	#define COMPILER        COMPILER_CLANG
	#define COMPILER_NAME   COMPILER_CLANG_NAME

#endif

#endif /* COMPILERCLANG_H */
