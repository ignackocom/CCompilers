/******************************************************************************
* \file      CompilerZortechCpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Zortech C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERZORTECHCPP_H
#define COMPILERZORTECHCPP_H		20250318L


#define COMPILER_ZORTECH_CPP		((COMPILER_Z88DK)+1)
#define COMPILER_ZORTECH_CPP_NAME	"Zortech C++"

#if defined(__ZTC__)

	#define COMPILER        COMPILER_ZORTECH_CPP
	#define COMPILER_NAME   COMPILER_ZORTECH_CPP_NAME

#endif


#endif /* COMPILERZORTECHCPP_H */
