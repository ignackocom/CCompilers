/******************************************************************************
* \file      CompilerSCOOpenServer.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     SCO OpenServer definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERSCOOPENSERVER_H
#define COMPILERSCOOPENSERVER_H		20250318L


#define COMPILER_SCO_OPENSERVER			((COMPILER_SAS_C)+1)
#define COMPILER_SCO_OPENSERVER_NAME	"SCO OpenServer"

#if defined(_SCO_DS)

	#define COMPILER        COMPILER_SCO_OPENSERVER
	#define COMPILER_NAME   COMPILER_SCO_OPENSERVER_NAME

#endif


#endif /* COMPILERSCOOPENSERVER_H */
