/******************************************************************************
* \file      CompilerAmsterdamCompilerKit.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Amsterdam Compiler Kit definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERAMSTERDAMCOMPILERKIT_H
#define COMPILERAMSTERDAMCOMPILERKIT_H		20250318L


#define COMPILER_AMSTERDAM_COMPILER_KIT			((COMPILER_ALTIUM_MICROBLAZE_C)+1)
#define COMPILER_AMSTERDAM_COMPILER_KIT_NAME	"Amsterdam Compiler Kit"

#if defined(__ACK__)

	#define COMPILER        COMPILER_AMSTERDAM_COMPILER_KIT
	#define COMPILER_NAME   COMPILER_AMSTERDAM_COMPILER_KIT_NAME

#endif


#endif /* COMPILERAMSTERDAMCOMPILERKIT_H */
