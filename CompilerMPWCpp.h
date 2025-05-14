/******************************************************************************
* \file      CompilerMPWCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     MPW C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMPWCPP_H
#define COMPILERMPWCPP_H		20250318L


#define COMPILER_MPW_CPP			((COMPILER_MIRACLE_C)+1)
#define COMPILER_MPW_CPP_NAME		"MPW C++"

#if defined(__MRC__) || defined(MPW_C) || defined(MPW_CPLUS)

	#define COMPILER        COMPILER_MPW_CPP
	#define COMPILER_NAME   COMPILER_MPW_CPP_NAME

#endif


#endif /* COMPILERMPWCPP_H */
