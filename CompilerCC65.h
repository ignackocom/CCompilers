/******************************************************************************
* \file      CompilerCC65.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     CC65 definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERCC65_H
#define COMPILERCC65_H		20250318L


#define COMPILER_CC65			((COMPILER_BORLAND_CPP)+1)
#define COMPILER_CC65_NAME		"CC65"

#if defined(__CC65__)

	#define COMPILER        COMPILER_CC65
	#define COMPILER_NAME   COMPILER_CC65_NAME

#endif


#endif /* COMPILERCC65_H */
