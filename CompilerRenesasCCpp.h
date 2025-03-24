/******************************************************************************
* \file      CompilerRenesasCCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Renesas C/C++ definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERRENESASCCPP_H
#define COMPILERRENESASCCPP_H		20250318L


#define COMPILER_RENESAS_CCPP			((COMPILER_PORTLAND_GROUP_CCPP)+1)
#define COMPILER_RENESAS_CCPP_NAME		"Renesas C/C++"

#if defined(__RENESAS__) || defined(__HITACHI__)

	#define COMPILER        COMPILER_RENESAS_CCPP
	#define COMPILER_NAME   COMPILER_RENESAS_CCPP_NAME

#endif


#endif /* COMPILERRENESASCCPP_H */
