/******************************************************************************
* \file      CompilerSNCompiler.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     SN Compiler definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERSNCOMPILER_H
#define COMPILERSNCOMPILER_H		20250318L


#define COMPILER_SN_COMPILER			((COMPILER_SMALL_DEVICE_C_COMPILER)+1)
#define COMPILER_SN_COMPILER_NAME		"SN Compiler"

#if defined(__SNC__)

	#define COMPILER        COMPILER_SN_COMPILER
	#define COMPILER_NAME   COMPILER_SN_COMPILER_NAME

#endif


#endif /* COMPILERSNCOMPILER_H */
