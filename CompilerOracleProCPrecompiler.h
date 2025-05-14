/******************************************************************************
* \file      CompilerOracleProCPrecompiler.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Oracle Pro*C Precompiler definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERORACLEPROCPRECOMPILER_H
#define COMPILERORACLEPROCPRECOMPILER_H		20250318L


#define COMPILER_ORACLE_PROC			((COMPILER_OPEN64)+1)
#define COMPILER_ORACLE_PROC_NAME		"Oracle Pro*C Precompiler"

#if defined(ORA_PROC)

	#define COMPILER        COMPILER_ORACLE_PROC
	#define COMPILER_NAME   COMPILER_ORACLE_PROC_NAME

#endif


#endif /* COMPILERORACLEPROCPRECOMPILER_H */
