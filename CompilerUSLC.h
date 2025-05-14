/******************************************************************************
* \file      CompilerUSLC.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     USL C definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERUSLC_H
#define COMPILERUSLC_H		20250318L


#define COMPILER_USL_C			((COMPILER_ULTIMATE_CCPP)+1)
#define COMPILER_USL_C_NAME		"USL C"

#if defined(__USLC__)

	#define COMPILER        COMPILER_USL_C
	#define COMPILER_NAME   COMPILER_USL_C_NAME

#endif


#endif /* COMPILERUSLC_H */
