/******************************************************************************
* \file      CompilerDiabCCpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Diab C C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERDIABCCPP_H
#define COMPILERDIABCCPP_H		20250318L


#define COMPILER_DIAB_CCPP			((COMPILER_CRAY_C)+1)
#define COMPILER_DIAB_CCPP_NAME		"Diab C/C++"

#if defined(__DCC__)

	#define COMPILER        COMPILER_DIAB_CCPP
	#define COMPILER_NAME   COMPILER_DIAB_CCPP_NAME

#endif


#endif /* COMPILERDIABCCPP_H */
