/******************************************************************************
* \file      CompilerMicrosoftVisualCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Microsoft Visual C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMICROSOFTVISUALCPP_H
#define COMPILERMICROSOFTVISUALCPP_H		20250318L


#define COMPILER_MICROSOFT_VISUAL_CPP			((COMPILER_METROWERKS_CODEWARRIOR)+1)
#define COMPILER_MICROSOFT_VISUAL_CPP_NAME		"Microsoft Visual C++"

#if defined(_MSC_VER) && !defined(__INTEL_COMPILER) && !defined(__clang__)

	#define COMPILER        COMPILER_MICROSOFT_VISUAL_CPP
	#define COMPILER_NAME   COMPILER_MICROSOFT_VISUAL_CPP_NAME

#endif


#endif /* COMPILERMICROSOFTVISUALCPP_H */
