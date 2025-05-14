/******************************************************************************
* \file      CompilerGreenHillCCpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Green Hill C/C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERGREENHILLCCPP_H
#define COMPILERGREENHILLCCPP_H		20250318L


#define COMPILER_GREEN_HILL_CCPP			((COMPILER_GCC_CCPP)+1)
#define COMPILER_GREEN_HILL_CCPP_NAME		"Green Hill C/C++"

#if defined(__ghs__)

	#define COMPILER        COMPILER_GREEN_HILL_CCPP
	#define COMPILER_NAME   COMPILER_GREEN_HILL_CCPP_NAME

#endif


#endif /* COMPILERGREENHILLCCPP_H */
