/******************************************************************************
* \file      CompilerKEILCARM.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     KEIL CARM definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERKEILCARM_H
#define COMPILERKEILCARM_H		20250318L


#define COMPILER_KEIL_CARM			((COMPILER_KEIL_C251)+1)
#define COMPILER_KEIL_CARM_NAME		"KEIL CARM"

#if defined(__CA__)

	#define COMPILER        COMPILER_KEIL_CARM
	#define COMPILER_NAME   COMPILER_KEIL_CARM_NAME

#endif


#endif /* COMPILERKEILCARM_H */
