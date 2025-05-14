/******************************************************************************
* \file      CompilerZ88DK.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Z88DK definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERZ88DK_H
#define COMPILERZ88DK_H		20250318L


#define COMPILER_Z88DK			((COMPILER_WATCOM_CPP)+1)
#define COMPILER_Z88DK_NAME		"Z88DK"

#if defined(__SCCZ80) || defined(SCCZ80)

	#define COMPILER        COMPILER_Z88DK
	#define COMPILER_NAME   COMPILER_Z88DK_NAME

#endif


#endif /* COMPILERZ88DK_H */
