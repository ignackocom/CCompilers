/******************************************************************************
* \file      CompilerHPaCpp.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     HP aC++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERHPACPP_H
#define COMPILERHPACPP_H		20250318L


#define COMPILER_HP_ACPP			((COMPILER_GREEN_HILL_CCPP)+1)
#define COMPILER_HP_ACPP_NAME		"HP aC++"

#if defined(__HP_aCC)

	#define COMPILER        COMPILER_HP_ACPP
	#define COMPILER_NAME   COMPILER_HP_ACPP_NAME

#endif


#endif /* COMPILERHPACPP_H */
