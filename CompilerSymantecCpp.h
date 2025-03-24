/******************************************************************************
* \file      CompilerSymantecCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Symantec C++ definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERSYMANTECCPP_H
#define COMPILERSYMANTECCPP_H		20250318L


#define COMPILER_SYMANTEC_CPP			((COMPILER_STRATUS_VOS_C)+1)
#define COMPILER_SYMANTEC_CPP_NAME		"Symantec C++"

#if defined(__SC__)

	#define COMPILER        COMPILER_SYMANTEC_CPP
	#define COMPILER_NAME   COMPILER_SYMANTEC_CPP_NAME

#endif


#endif /* COMPILERSYMANTECCPP_H */
