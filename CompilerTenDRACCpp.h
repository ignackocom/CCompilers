/******************************************************************************
* \file      CompilerTenDRACCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     TenDRA C/C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERTENDRACCPP_H
#define COMPILERTENDRACCPP_H		20250318L


#define COMPILER_TENDRA_CCPP			((COMPILER_SYMANTEC_CPP)+1)
#define COMPILER_TENDRA_CCPP_NAME		"TenDRA C/C++"

#if defined(__TenDRA__)

	#define COMPILER        COMPILER_TENDRA_CCPP
	#define COMPILER_NAME   COMPILER_TENDRA_CCPP_NAME

#endif


#endif /* COMPILERTENDRACCPP_H */
