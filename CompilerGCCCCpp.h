/******************************************************************************
* \file      CompilerGCCCCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     GCC C/C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERGCCCCPP_H
#define COMPILERGCCCCPP_H		20250318L


#define COMPILER_GCC_CCPP			((COMPILER_FUJITSU_CPP)+1)
#define COMPILER_GCC_CCPP_NAME		"GCC C/C++"

#if defined(__GNUC__)

	#define COMPILER        COMPILER_GCC_CCPP
	#define COMPILER_NAME   COMPILER_GCC_CCPP_NAME

#endif


#endif /* COMPILERGCCCCPP_H */
