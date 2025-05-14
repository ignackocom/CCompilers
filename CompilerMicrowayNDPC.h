/******************************************************************************
* \file      CompilerMicrowayNDPC.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Microway NDP C definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERMICROWAYNDPC_H
#define COMPILERMICROWAYNDPC_H		20250318L


#define COMPILER_MICROWAY_NDP_C			((COMPILER_MICROTEC_CCPP)+1)
#define COMPILER_MICROWAY_NDP_C_NAME	"Microway NDP C"

#if defined(__NDPC__) || defined(__NDPX__)

	#define COMPILER        COMPILER_MICROWAY_NDP_C
	#define COMPILER_NAME   COMPILER_MICROWAY_NDP_C_NAME

#endif


#endif /* COMPILERMICROWAYNDPC_H */
