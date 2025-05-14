/******************************************************************************
* \file      CompilerDJGPP.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     DJGPP definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERDJGPP_H
#define COMPILERDJGPP_H		20250318L


#define COMPILER_DJGPP			((COMPILER_DIGNUS_SYSTEMS_CPP)+1)
#define COMPILER_DJGPP_NAME		"DJGPP"

#if defined(__DJGPP__) || defined(__GO32__)

	#define COMPILER        COMPILER_DJGPP
	#define COMPILER_NAME   COMPILER_DJGPP_NAME

#endif


#endif /* COMPILERDJGPP_H */
