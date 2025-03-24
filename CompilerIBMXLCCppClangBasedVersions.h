/******************************************************************************
* \file      CompilerIBMXLCCppClangBasedVersions.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     IBM XL C/C++ (Clang based versions) definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERIBMXLCCPPCLANGBASEDVERSIONS_H
#define COMPILERIBMXLCCPPCLANGBASEDVERSIONS_H		20250318L


#define COMPILER_IBM_XL_CCPP_CLANG_BASED			((COMPILER_IAR_CCPP)+1)
#define COMPILER_IBM_XL_CCPP_CLANG_BASED_NAME		"IBM XL C/C++ (Clang based versions)"

#if defined(__ibmxl__) && defined(__clang__)

	#define COMPILER        COMPILER_IBM_XL_CCPP_CLANG_BASED
	#define COMPILER_NAME   COMPILER_IBM_XL_CCPP_CLANG_BASED_NAME

#endif


#endif /* COMPILERIBMXLCCPPCLANGBASEDVERSIONS_H */
