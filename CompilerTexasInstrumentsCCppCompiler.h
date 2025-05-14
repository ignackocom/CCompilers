/******************************************************************************
* \file      CompilerTexasInstrumentsCCppCompiler.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Texas Instruments C/C++ Compiler definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERTEXASINSTRUMENTSCCPPCOMPILER_H
#define COMPILERTEXASINSTRUMENTSCCPPCOMPILER_H		20250318L


#define COMPILER_TEXAS_INSTRUMENTS_CCPP			((COMPILER_TENDRA_CCPP)+1)
#define COMPILER_TEXAS_INSTRUMENTS_CCPP_NAME	"Texas Instruments C/C++ Compiler"

#if defined(__TI_COMPILER_VERSION__) || defined(_TMS320C6X)

	#define COMPILER        COMPILER_TEXAS_INSTRUMENTS_CCPP
	#define COMPILER_NAME   COMPILER_TEXAS_INSTRUMENTS_CCPP_NAME

#endif


#endif /* COMPILERTEXASINSTRUMENTSCCPPCOMPILER_H */
