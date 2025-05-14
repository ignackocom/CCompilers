/******************************************************************************
* \file      CompilerPalmCCpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Palm C/C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERPALMCCPP_H
#define COMPILERPALMCCPP_H		20250318L


#define COMPILER_PALM_CCPP			((COMPILER_PACIFIC_C)+1)
#define COMPILER_PALM_CCPP_NAME		"Palm C/C++"

#if defined(_PACC_VER)

	#define COMPILER        COMPILER_PALM_CCPP
	#define COMPILER_NAME   COMPILER_PALM_CCPP_NAME

#endif


#endif /* COMPILERPALMCCPP_H */
