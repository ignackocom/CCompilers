/******************************************************************************
* \file      CompilerPacificC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Pacific C definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERPACIFICC_H
#define COMPILERPACIFICC_H		20250318L


#define COMPILER_PACIFIC_C			((COMPILER_ORANGE_C)+1)
#define COMPILER_PACIFIC_C_NAME		"Pacific C"

#if defined(__PACIFIC__)

	#define COMPILER        COMPILER_PACIFIC_C
	#define COMPILER_NAME   COMPILER_PACIFIC_C_NAME

#endif


#endif /* COMPILERPACIFICC_H */
