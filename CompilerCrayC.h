/******************************************************************************
* \file      CompilerCrayC.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Cray C definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERCRAYC_H
#define COMPILERCRAYC_H		20250318L


#define COMPILER_CRAY_C			((COMPILER_COVERITY_CCPP)+1)
#define COMPILER_CRAY_C_NAME	"Cray C"

#if defined(_CRAYC)

	#define COMPILER        COMPILER_CRAY_C
	#define COMPILER_NAME   COMPILER_CRAY_C_NAME

#endif


#endif /* COMPILERCRAYC_H */
