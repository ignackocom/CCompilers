/******************************************************************************
* \file      CompilerIntelCCpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Intel C/C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERINTELCCPP_H
#define COMPILERINTELCCPP_H		20250318L


#define COMPILER_INTEL_CCPP			((COMPILER_IMAGECRAFT_C)+1)
#define COMPILER_INTEL_CCPP_NAME	"Intel C/C++"

#if defined(__INTEL_COMPILER) || defined(__ICC) || defined(__ECC) || \
	defined(__ICL)

	#define COMPILER        COMPILER_INTEL_CCPP
	#define COMPILER_NAME   COMPILER_INTEL_CCPP_NAME

#endif


#endif /* COMPILERINTELCCPP_H */
