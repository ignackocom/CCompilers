/******************************************************************************
* \file      CompilerEKOPath.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     EKOPath definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILEREKOPATH_H
#define COMPILEREKOPATH_H		20250318L


#define COMPILER_EKOPATH			((COMPILER_EDG_CPP)+1)
#define COMPILER_EKOPATH_NAME		"EKOPath"

#if defined(__PATHCC__)

	#define COMPILER        COMPILER_EKOPATH
	#define COMPILER_NAME   COMPILER_EKOPATH_NAME

#endif


#endif /* COMPILEREKOPATH_H */
