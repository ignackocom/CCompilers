/******************************************************************************
* \file      CompilerIARCCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     IAR C/C++ definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERIARCCPP_H
#define COMPILERIARCCPP_H		20250318L


#define COMPILER_IAR_CCPP			((COMPILER_HP_ANSI_C)+1)
#define COMPILER_IAR_CCPP_NAME		"IAR C/C++"

#if defined(__IAR_SYSTEMS_ICC__)

	#define COMPILER        COMPILER_IAR_CCPP
	#define COMPILER_NAME   COMPILER_IAR_CCPP_NAME

#endif


#endif /* COMPILERIARCCPP_H */
