/******************************************************************************
* \file      CompilerDigitalMars.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Digital Mars definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERDIGITALMARS_H
#define COMPILERDIGITALMARS_H		20250318L


#define COMPILER_DIGITAL_MARS			((COMPILER_DICE_C)+1)
#define COMPILER_DIGITAL_MARS_NAME		"Digital Mars"

#if defined(__DMC__)

	#define COMPILER        COMPILER_DIGITAL_MARS
	#define COMPILER_NAME   COMPILER_DIGITAL_MARS_NAME

#endif


#endif /* COMPILERDIGITALMARS_H */
