/******************************************************************************
* \file      CompilerTinyC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Tiny C definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERTINYC_H
#define COMPILERTINYC_H		20250318L


#define COMPILER_TINY_C			((COMPILER_THINK_C)+1)
#define COMPILER_TINY_C_NAME	"Tiny C"

#if defined(__TINYC__)

	#define COMPILER        COMPILER_TINY_C
	#define COMPILER_NAME   COMPILER_TINY_C_NAME

#endif


#endif /* COMPILERTINYC_H */
