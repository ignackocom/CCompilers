/******************************************************************************
* \file      CompilerKEILC166.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     KEIL C166 definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERKEILC166_H
#define COMPILERKEILC166_H		20250318L


#define COMPILER_KEIL_C166			((COMPILER_KEIL_C51)+1)
#define COMPILER_KEIL_C166_NAME		"KEIL C166"

#if defined(__C166__)

	#define COMPILER        COMPILER_KEIL_C166
	#define COMPILER_NAME   COMPILER_KEIL_C166_NAME

#endif


#endif /* COMPILERKEILC166_H */
