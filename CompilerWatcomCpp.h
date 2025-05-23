/******************************************************************************
* \file      CompilerWatcomCpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Watcom C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERWATCOMCPP_H
#define COMPILERWATCOMCPP_H		20250318L


#define COMPILER_WATCOM_CPP			((COMPILER_VBCC)+1)
#define COMPILER_WATCOM_CPP_NAME	"Watcom C++"

#if defined(__WATCOMC__)

	#define COMPILER        COMPILER_WATCOM_CPP
	#define COMPILER_NAME   COMPILER_WATCOM_CPP_NAME

#endif


#endif /* COMPILERWATCOMCPP_H */
