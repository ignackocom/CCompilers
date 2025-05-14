/******************************************************************************
* \file      CompilerMIPSpro.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     MIPSpro definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMIPSPRO_H
#define COMPILERMIPSPRO_H		20250318L


#define COMPILER_MIPSPRO			((COMPILER_MINGW64)+1)
#define COMPILER_MIPSPRO_NAME		"MIPSpro"

#if defined(__sgi) || defined(sgi)

	#define COMPILER        COMPILER_MIPSPRO
	#define COMPILER_NAME   COMPILER_MIPSPRO_NAME

#endif


#endif /* COMPILERMIPSPRO_H */
