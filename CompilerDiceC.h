/******************************************************************************
* \file      CompilerDiceC.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Dice C definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERDICEC_H
#define COMPILERDICEC_H		20250318L


#define COMPILER_DICE_C			((COMPILER_DIAB_CCPP)+1)
#define COMPILER_DICE_C_NAME	"DICE C"

#if defined(_DICE)

	#define COMPILER        COMPILER_DICE_C
	#define COMPILER_NAME   COMPILER_DICE_C_NAME

#endif


#endif /* COMPILERDICEC_H */
