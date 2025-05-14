/******************************************************************************
* \file      CompilerPortlandGroupCCpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Portland Group C/C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERPORTLANDCCPP_H
#define COMPILERPORTLANDCCPP_H		20250318L


#define COMPILER_PORTLAND_GROUP_CCPP			((COMPILER_PELLES_C)+1)
#define COMPILER_PORTLAND_GROUP_CCPP_NAME		"Portland Group C/C++"

#if defined(__PGI)

	#define COMPILER        COMPILER_PORTLAND_GROUP_CCPP
	#define COMPILER_NAME   COMPILER_PORTLAND_GROUP_CCPP_NAME

#endif


#endif /* COMPILERPORTLANDCCPP_H */
