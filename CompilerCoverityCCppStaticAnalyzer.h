/******************************************************************************
* \file      CompilerCoverityCCppStaticAnalyzer.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Coverity C C++ Static Analyzer definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/
#ifndef COMPILERCOVERITYCCPPSTATICANALYZER_H
#define COMPILERCOVERITYCCPPSTATICANALYZER_H		20250318L


#define COMPILER_COVERITY_CCPP			((COMPILER_CONVEX_C)+1)
#define COMPILER_COVERITY_CCPP_NAME		"Coverity C/C++ Static Analyzer"

#if defined(__COVERITY__)

	#define COMPILER        COMPILER_COVERITY_CCPP
	#define COMPILER_NAME   COMPILER_COVERITY_CCPP_NAME

#endif


#endif /* COMPILERCOVERITYCCPPSTATICANALYZER_H */
