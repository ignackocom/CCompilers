/******************************************************************************
* \file      CompilerComeauCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Comeau C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERCOMEAUCPP_H
#define COMPILERCOMEAUCPP_H		20250318L


#define COMPILER_COMEAU_CPP			((COMPILER_CLANG)+1)
#define COMPILER_COMEAU_CPP_NAME	"Comeau C++"

#if defined(__COMO__)

	#define COMPILER        COMPILER_COMEAU_CPP
	#define COMPILER_NAME   COMPILER_COMEAU_CPP_NAME

#endif


#endif /* COMPILERCOMEAUCPP_H */
