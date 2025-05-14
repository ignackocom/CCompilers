/******************************************************************************
* \file      CompilerOracleSolarisStudio.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Oracle Solaris Studio definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERORACLESOLARISSTUDIO_H
#define COMPILERORACLESOLARISSTUDIO_H		20250318L


#define COMPILER_ORACLE_SOLARIS_STUDIO			((COMPILER_ORACLE_PROC)+1)
#define COMPILER_ORACLE_SOLARIS_STUDIO_NAME		"Oracle Solaris Studio"

#if defined(__SUNPRO_C) || defined(__SUNPRO_CC)

	#define COMPILER        COMPILER_ORACLE_SOLARIS_STUDIO
	#define COMPILER_NAME   COMPILER_ORACLE_SOLARIS_STUDIO_NAME

#endif


#endif /* COMPILERORACLESOLARISSTUDIO_H */
