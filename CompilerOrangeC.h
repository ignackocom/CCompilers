/******************************************************************************
* \file      CompilerOrangeC.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Orange C definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERORANGEC_H
#define COMPILERORANGEC_H		20250318L


#define COMPILER_ORANGE_C			((COMPILER_ORACLE_SOLARIS_STUDIO)+1)
#define COMPILER_ORANGE_C_NAME		"Orange C"

#if defined(__ORANGEC__)

	#define COMPILER        COMPILER_ORANGE_C
	#define COMPILER_NAME   COMPILER_ORANGE_C_NAME

#endif


#endif /* COMPILERORANGEC_H */
