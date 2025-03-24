/******************************************************************************
* \file      CompilerCompCert.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     CompCert definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERCOMPCERT_H
#define COMPILERCOMPCERT_H		20250318L


#define COMPILER_COMPCERT			((COMPILER_COMPAQ_CCPP)+1)
#define COMPILER_COMPCERT_NAME		"CompCert"

#if defined(__COMPCERT__)

	#define COMPILER        COMPILER_COMPCERT
	#define COMPILER_NAME   COMPILER_COMPCERT_NAME

#endif


#endif /* COMPILERCOMPCERT_H */
