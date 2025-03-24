/******************************************************************************
* \file      Compiler.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Acc definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERACC_H
#define COMPILERACC_H		20250318L


#define COMPILER_ACC			1
#define COMPILER_ACC_NAME		"ACC"

#if defined(_ACC_)

	#define COMPILER			COMPILER_ACC
	#define COMPILER_NAME		COMPILER_ACC_NAME

#endif


#endif /* COMPILERACC_H */
