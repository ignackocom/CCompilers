/******************************************************************************
* \file      CompilerMetrowerksCodeWarrior.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Metrowerks CodeWarrior definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMETROWERKSCODEWARRIOR_H
#define COMPILERMETROWERKSCODEWARRIOR_H		20250318L


#define COMPILER_METROWERKS_CODEWARRIOR			((COMPILER_METAWARE_HIGH_CCPP)+1)
#define COMPILER_METROWERKS_CODEWARRIOR_NAME	"Metrowerks CodeWarrior"

#if defined(__MWERKS__) || defined(__CWCC__)

	#define COMPILER        COMPILER_METROWERKS_CODEWARRIOR
	#define COMPILER_NAME   COMPILER_METROWERKS_CODEWARRIOR_NAME

#endif


#endif /* COMPILERMETROWERKSCODEWARRIOR_H */
