/******************************************************************************
* \file      CompilerFujitsuCpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Fujitsu C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERFUJITSUCPP_H
#define COMPILERFUJITSUCPP_H		20250318L


#define COMPILER_FUJITSU_CPP			((COMPILER_EKOPATH)+1)
#define COMPILER_FUJITSU_CPP_NAME		"Fujitsu C++"

#if defined(__FCC_VERSION)

	#define COMPILER        COMPILER_FUJITSU_CPP
	#define COMPILER_NAME   COMPILER_FUJITSU_CPP_NAME

#endif


#endif /* COMPILERFUJITSUCPP_H */
