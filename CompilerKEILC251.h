/******************************************************************************
* \file      CompilerKEILC251.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     KEIL C251 definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERKEILC251_H
#define COMPILERKEILC251_H		20250318L


#define COMPILER_KEIL_C251			((COMPILER_KEIL_C166)+1)
#define COMPILER_KEIL_C251_NAME		"KEIL C251"

#if defined(__C251__)

#define COMPILER        COMPILER_KEIL_C251
#define COMPILER_NAME   COMPILER_KEIL_C251_NAME

#endif


#endif /* COMPILERKEILC251_H */
