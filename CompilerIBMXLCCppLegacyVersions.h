/******************************************************************************
* \file      CompilerIBMXLCCppLegacyVersions.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     IBM XL C/C++ (legacy versions) definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERIBMXLCCPPLEGACYVERSIONS_H
#define COMPILERIBMXLCCPPLEGACYVERSIONS_H		20250318L


#define COMPILER_IBM_XL_CCPP_LEGACY			((COMPILER_IBM_XL_CCPP_CLANG_BASED)+1)
#define COMPILER_IBM_XL_CCPP_LEGACY_NAME	"IBM XL C/C++ (legacy versions)"

#if defined(__xlC__)

	#define COMPILER        COMPILER_IBM_XL_CCPP_LEGACY
	#define COMPILER_NAME   COMPILER_IBM_XL_CCPP_LEGACY_NAME

#endif


#endif /* COMPILERIBMXLCCPPLEGACYVERSIONS_H */
