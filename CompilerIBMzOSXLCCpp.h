/******************************************************************************
* \file      CompilerIBMzOSXLCCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     IBM z/OS XL C/C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERIBMZOSXLCCPP_H
#define COMPILERIBMZOSXLCCPP_H		20250318L


#define COMPILER_IBM_ZOS_XL_CCPP			((COMPILER_IBM_XL_CCPP_LEGACY)+1)
#define COMPILER_IBM_ZOS_XL_CCPP_NAME		"IBM z/OS XL C/C++"

#if defined(__IBMC__) || defined(__IBMCPP__)

	#define COMPILER        COMPILER_IBM_ZOS_XL_CCPP
	#define COMPILER_NAME   COMPILER_IBM_ZOS_XL_CCPP_NAME

#endif


#endif /* COMPILERIBMZOSXLCCPP_H */
