/******************************************************************************
* \file      CompilerNVHPC.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     NVHPC definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERNVHPC_H
#define COMPILERNVHPC_H		20250318L


#define COMPILER_NVHPC			((COMPILER_NORCROFT_C)+1)
#define COMPILER_NVHPC_NAME		"NVHPC"

#if defined(__NVCOMPILER)

	#define COMPILER        COMPILER_NVHPC
	#define COMPILER_NAME   COMPILER_NVHPC_NAME

#endif


#endif /* COMPILERNVHPC_H */
