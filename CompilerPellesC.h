/******************************************************************************
* \file      CompilerPellesC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Pelles C definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERPELLESC_H
#define COMPILERPELLESC_H		20250318L


#define COMPILER_PELLES_C			((COMPILER_PALM_CCPP)+1)
#define COMPILER_PELLES_C_NAME		"Pelles C"

#if defined(__POCC__)

	#define COMPILER        COMPILER_PELLES_C
	#define COMPILER_NAME   COMPILER_PELLES_C_NAME

#endif


#endif /* COMPILERPELLESC_H */
