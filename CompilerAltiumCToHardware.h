/******************************************************************************
* \file      CompilerAltiumCToHardware.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Altium C To Hardware definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERALTIUMCTOHARDWARE_H
#define COMPILERALTIUMCTOHARDWARE_H		20250318L


#define COMPILER_ALTIUM_C_TO_HARDWARE			((COMPILER_ACC)+1)
#define COMPILER_ALTIUM_C_TO_HARDWARE_NAME		"Altium C to Hardware"

#if defined(__CHC__)

	#define COMPILER        COMPILER_ALTIUM_C_TO_HARDWARE
	#define COMPILER_NAME   COMPILER_ALTIUM_C_TO_HARDWARE_NAME

#endif


#endif /* COMPILERALTIUMCTOHARDWARE_H */
