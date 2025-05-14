/******************************************************************************
* \file      CompilerAztecC.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Aztec C definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERAZTECC_H
#define COMPILERAZTECC_H		20250318L


#define COMPILER_AZTEC_C			((COMPILER_ARM_COMPILER)+1)
#define COMPILER_AZTEC_C_NAME		"Aztec C"

#if defined(AZTEC_C) || defined(__AZTEC_C__)

	#define COMPILER        COMPILER_AZTEC_C
	#define COMPILER_NAME   COMPILER_AZTEC_C_NAME

#endif


#endif /* COMPILERAZTECC_H */
