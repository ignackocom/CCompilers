/******************************************************************************
* \file      CompilerStratusVOSC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Stratus VOS C definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERSTRATUSVOSC_H
#define COMPILERSTRATUSVOSC_H		20250318L


#define COMPILER_STRATUS_VOS_C			((COMPILER_SN_COMPILER)+1)
#define COMPILER_STRATUS_VOS_C_NAME		"Stratus VOS C"

#if defined(__VOSC__)

	#define COMPILER        COMPILER_STRATUS_VOS_C
	#define COMPILER_NAME   COMPILER_STRATUS_VOS_C_NAME

#endif


#endif /* COMPILERSTRATUSVOSC_H */
