/******************************************************************************
* \file      CompilerLCC.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     LCC definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERLCC_H
#define COMPILERLCC_H		20250318L


#define COMPILER_LCC			((COMPILER_KEIL_CARM)+1)
#define COMPILER_LCC_NAME		"LCC"

#if defined(__LCC__)

	#define COMPILER        COMPILER_LCC
	#define COMPILER_NAME   COMPILER_LCC_NAME

#endif


#endif /* COMPILERLCC_H */
