/******************************************************************************
* \file      CompilerMCSTlcc.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     MCST lcc definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMCSTLCC_H
#define COMPILERMCSTLCC_H		20250318L


#define COMPILER_MCST_LCC			((COMPILER_LLVM)+1)
#define COMPILER_MCST_LCC_NAME		"MCST lcc"

#if defined(__LCC__) || defined(__MCST__)

	#define COMPILER        COMPILER_MCST_LCC
	#define COMPILER_NAME   COMPILER_MCST_LCC_NAME

#endif


#endif /* COMPILERMCSTLCC_H */
