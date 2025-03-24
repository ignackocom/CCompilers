/******************************************************************************
* \file      CompilerDignusSystemsCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Dignus Systems/C++ definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERDIGNUSSYSTEMSCPP_H
#define COMPILERDIGNUSSYSTEMSCPP_H		20250318L


#define COMPILER_DIGNUS_SYSTEMS_CPP			((COMPILER_DIGITAL_MARS)+1)
#define COMPILER_DIGNUS_SYSTEMS_CPP_NAME	"Dignus Systems/C++"

#if defined(__SYSC__)

	#define COMPILER        COMPILER_DIGNUS_SYSTEMS_CPP
	#define COMPILER_NAME   COMPILER_DIGNUS_SYSTEMS_CPP_NAME

#endif


#endif /* COMPILERDIGNUSSYSTEMSCPP_H */
