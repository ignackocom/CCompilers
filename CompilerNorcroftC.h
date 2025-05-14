/******************************************************************************
* \file      CompilerNorcroftC.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Norcroft C definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERNORCROFTC_H
#define COMPILERNORCROFTC_H		20250318L


#define COMPILER_NORCROFT_C				((COMPILER_MPW_CPP)+1)
#define COMPILER_NORCROFT_C_NAME		"Norcroft C"

#if defined(__CC_NORCROFT)

	#define COMPILER        COMPILER_NORCROFT_C
	#define COMPILER_NAME   COMPILER_NORCROFT_C_NAME

#endif


#endif /* COMPILERNORCROFTC_H */
