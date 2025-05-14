/******************************************************************************
* \file      CompilerMicrotectCCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Microtec C/C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMICROTECCCPP_H
#define COMPILERMICROTECCCPP_H		20250318L


#define COMPILER_MICROTEC_CCPP			((COMPILER_MICROSOFT_VISUAL_CPP)+1)
#define COMPILER_MICROTEC_CCPP_NAME		"Microtec C/C++"

#if defined(_MRI)

	#define COMPILER        COMPILER_MICROTEC_CCPP
	#define COMPILER_NAME   COMPILER_MICROTEC_CCPP_NAME

#endif


#endif /* COMPILERMICROTECCCPP_H */
