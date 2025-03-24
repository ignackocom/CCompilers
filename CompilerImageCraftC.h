/******************************************************************************
* \file      CompilerImageCraftC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     ImageCraft C definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERIMAGECRAFTC_H
#define COMPILERIMAGECRAFTC_H		20250318L


#define COMPILER_IMAGECRAFT_C			((COMPILER_IBM_ZOS_XL_CCPP)+1)
#define COMPILER_IMAGECRAFT_C_NAME		"ImageCraft C"

#if defined(__IMAGECRAFT__)

	#define COMPILER        COMPILER_IMAGECRAFT_C
	#define COMPILER_NAME   COMPILER_IMAGECRAFT_C_NAME

#endif


#endif /* COMPILERIMAGECRAFTC_H */
