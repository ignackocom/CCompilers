/******************************************************************************
* \file      CompilerKEILCARM.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     KEIL CARM definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERKEILCARM_H
#define COMPILERKEILCARM_H		20250318L


#define COMPILER_KEIL_CARM			((COMPILER_KEIL_C251)+1)
#define COMPILER_KEIL_CARM_NAME		"KEIL CARM"

#if defined(__KEIL__) || defined(__CA__)

	#define COMPILER        COMPILER_KEIL_CARM
	#define COMPILER_NAME   COMPILER_KEIL_CARM_NAME

#endif


#endif /* COMPILERKEILCARM_H */
