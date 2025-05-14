/******************************************************************************
* \file      CompilerSASC.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     SAS/C definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERSASC_H
#define COMPILERSASC_H		20250318L


#define COMPILER_SAS_C			((COMPILER_RENESAS_CCPP)+1)
#define COMPILER_SAS_C_NAME		"SAS/C"

#if defined(SASC) || defined(__SASC) || defined(__SASC__)

	#define COMPILER        COMPILER_SAS_C
	#define COMPILER_NAME   COMPILER_SAS_C_NAME

#endif


#endif /* COMPILERSASC_H */
