/******************************************************************************
* \file      CompilerTurboCCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Turbo C/C++ definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERTURBOCCPP_H
#define COMPILERTURBOCCPP_H		20250318L


#define COMPILER_TURBO_CCPP			((COMPILER_TINY_C)+1)
#define COMPILER_TURBO_CCPP_NAME	"Turbo C/C++"

#if defined(__TURBOC__) && !defined(__clang__) && !defined(__BORLANDC__) && !defined(__CODEGEARC__)

	#define COMPILER        COMPILER_TURBO_CCPP
	#define COMPILER_NAME   COMPILER_TURBO_CCPP_NAME

#endif

#endif /* COMPILERTURBOCCPP_H */
