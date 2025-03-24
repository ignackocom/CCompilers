/******************************************************************************
* \file      CompilerAltiumMicroBlazeC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Altium MicroBlaze C definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERALTIUMMICROBLAZEC_H
#define COMPILERALTIUMMICROBLAZEC_H		20250318L


#define COMPILER_ALTIUM_MICROBLAZE_C			((COMPILER_ALTIUM_C_TO_HARDWARE)+1)
#define COMPILER_ALTIUM_MICROBLAZE_C_NAME		"Altium MicroBlaze C"

#if defined(__CMB__)

	#define COMPILER        COMPILER_ALTIUM_MICROBLAZE_C
	#define COMPILER_NAME   COMPILER_ALTIUM_MICROBLAZE_C_NAME

#endif


#endif /* COMPILERALTIUMMICROBLAZEC_H */
