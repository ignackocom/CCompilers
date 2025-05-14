/******************************************************************************
* \file      CompilerMiracleC.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Miracle C definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMIRACLEC_H
#define COMPILERMIRACLEC_H		20250318L


#define COMPILER_MIRACLE_C			((COMPILER_MIPSPRO)+1)
#define COMPILER_MIRACLE_C_NAME		"Miracle C"

#if defined(MIRACLE)

	#define COMPILER        COMPILER_MIRACLE_C
	#define COMPILER_NAME   COMPILER_MIRACLE_C_NAME

#endif


#endif /* COMPILERMIRACLEC_H */
