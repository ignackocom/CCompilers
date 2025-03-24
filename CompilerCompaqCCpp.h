/******************************************************************************
* \file      CompilerCompaqCCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Compaq C C++ definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERCOMPAQCCPP_H
#define COMPILERCOMPAQCCPP_H		20250318L


#define COMPILER_COMPAQ_CCPP			((COMPILER_COMEAU_CPP)+1)
#define COMPILER_COMPAQ_CCPP_NAME		"Compaq C/C++"

#if defined(__DECC) || defined(__DECCXX) || defined(__VAXC) || defined(VAXC)

	#define COMPILER        COMPILER_COMPAQ_CCPP
	#define COMPILER_NAME   COMPILER_COMPAQ_CCPP_NAME

#endif


#endif /* COMPILERCOMPAQCCPP_H */
