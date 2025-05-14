/******************************************************************************
* \file      CompilerKEILC51.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     KEIL C51 definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERKEILC51_H
#define COMPILERKEILC51_H		20250318L


#define COMPILER_KEIL_C51			((COMPILER_KAI_CPP)+1)
#define COMPILER_KEIL_C51_NAME		"KEIL C51"

#if defined(__C51__) || defined(__CX51__)

	#define COMPILER        COMPILER_KEIL_C51
	#define COMPILER_NAME   COMPILER_KEIL_C51_NAME

#endif


#endif /* COMPILERKEILC51_H */
