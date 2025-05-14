/******************************************************************************
* \file      CompilerTHINKC.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     THINK C definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERTHINKC_H
#define COMPILERTHINKC_H		20250318L


#define COMPILER_THINK_C			((COMPILER_TEXAS_INSTRUMENTS_CCPP)+1)
#define COMPILER_THINK_C_NAME		"THINK C"

#if defined(THINKC3) || defined(THINKC4)

	#define COMPILER        COMPILER_THINK_C
	#define COMPILER_NAME   COMPILER_THINK_C_NAME

#endif


#endif /* COMPILERTHINKC_H */
