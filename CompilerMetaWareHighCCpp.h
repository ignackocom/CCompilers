/******************************************************************************
* \file      CompilerMetaWareHighCCpp.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     MetaWare High C/C++ definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMETAWAREHIGHCCPP_H
#define COMPILERMETAWAREHIGHCCPP_H		20250318L


#define COMPILER_METAWARE_HIGH_CCPP			((COMPILER_MCST_LCC)+1)
#define COMPILER_METAWARE_HIGH_CCPP_NAME	"MetaWare High C/C++"

#if defined(__HIGHC__)

	#define COMPILER        COMPILER_METAWARE_HIGH_CCPP
	#define COMPILER_NAME   COMPILER_METAWARE_HIGH_CCPP_NAME

#endif


#endif /* COMPILERMETAWAREHIGHCCPP_H */
