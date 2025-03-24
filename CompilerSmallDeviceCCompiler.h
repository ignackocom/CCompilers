/******************************************************************************
* \file      CompilerSmallDeviceCCompiler.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Small Device C Compiler definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERSMALLDEVICECCOMPILER_H
#define COMPILERSMALLDEVICECCOMPILER_H		20250318L


#define COMPILER_SMALL_DEVICE_C_COMPILER			((COMPILER_SCO_OPENSERVER)+1)
#define COMPILER_SMALL_DEVICE_C_COMPILER_NAME		"Small Device C Compiler"

#if defined(__SDCC) || defined(SDCC)

	#define COMPILER        COMPILER_SMALL_DEVICE_C_COMPILER
	#define COMPILER_NAME   COMPILER_SMALL_DEVICE_C_COMPILER_NAME

#endif


#endif /* COMPILERSMALLDEVICECCOMPILER_H */
