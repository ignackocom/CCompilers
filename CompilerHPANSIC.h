/******************************************************************************
* \file      CompilerHPANSIC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     HP ANSI C definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERHPANSIC_H
#define COMPILERHPANSIC_H		20250318L


#define COMPILER_HP_ANSI_C			((COMPILER_HP_ACPP)+1)
#define COMPILER_HP_ANSI_C_NAME		"HP ANSI C"

#if defined(__HP_cc)

	#define COMPILER        COMPILER_HP_ANSI_C
	#define COMPILER_NAME   COMPILER_HP_ANSI_C_NAME

#endif


#endif /* COMPILERHPANSIC_H */
