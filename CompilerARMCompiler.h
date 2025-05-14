/******************************************************************************
* \file      CompilerARMCompiler.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     ARM Compiler definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERARMCOMPILER_H
#define COMPILERARMCOMPILER_H		20250318L


#define COMPILER_ARM_COMPILER			((COMPILER_AMSTERDAM_COMPILER_KIT)+1)
#define COMPILER_ARM_COMPILER_NAME		"ARM Compiler"

#if defined(__CC_ARM)

	#define COMPILER        COMPILER_ARM_COMPILER
	#define COMPILER_NAME   COMPILER_ARM_COMPILER_NAME

#endif


#endif /* COMPILERARMCOMPILER_H */
