/******************************************************************************
* \file      CompilerConvexC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Convex C definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERCONVEXC_H
#define COMPILERCONVEXC_H		20250318L


#define COMPILER_CONVEX_C			((COMPILER_COMPCERT)+1)
#define COMPILER_CONVEX_C_NAME		"Convex C"

#if defined(__convexc__)

	#define COMPILER        COMPILER_CONVEX_C
	#define COMPILER_NAME   COMPILER_CONVEX_C_NAME

#endif


#endif /* COMPILERCONVEXC_H */
