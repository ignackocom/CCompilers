/******************************************************************************
* \file      CompilerBorlandCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Borland Cpp definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERBORLANDCPP_H
#define COMPILERBORLANDCPP_H		20250318L


#define COMPILER_BORLAND_CPP			((COMPILER_AZTEC_C)+1)
#define COMPILER_BORLAND_CPP_NAME		"Borland C++"

#if defined(__BORLANDC__) || defined(__CODEGEARC__)

	#define COMPILER        COMPILER_BORLAND_CPP
	#define COMPILER_NAME   COMPILER_BORLAND_CPP_NAME

#endif


#endif /* COMPILERBORLANDCPP_H */
