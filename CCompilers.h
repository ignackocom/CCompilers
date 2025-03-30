/******************************************************************************
* \file      CCompilers.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Compiler constant definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef CCOMPILERS_H
#define CCOMPILERS_H		20250318L


/* All includes. */
#include "CompilerAcc.h"
#include "CompilerAltiumCToHardware.h"
#include "CompilerAltiumMicroBlazeC.h"
#include "CompilerAmsterdamCompilerKit.h"
#include "CompilerARMCompiler.h"
#include "CompilerAztecC.h"

#include "CompilerBorlandCpp.h"

#include "CompilerCC65.h"
#include "CompilerClang.h"
#include "CompilerComeauCpp.h"
#include "CompilerCompaqCCpp.h"
#include "CompilerCompCert.h"
#include "CompilerConvexC.h"
#include "CompilerCoverityCCppStaticAnalyzer.h"
#include "CompilerCrayC.h"

#include "CompilerDiabCCpp.h"
#include "CompilerDiceC.h"
#include "CompilerDigitalMars.h"
#include "CompilerDignusSystemsCpp.h"
#include "CompilerDJGPP.h"

#include "CompilerEDGCppFrontend.h"
#include "CompilerEKOPath.h"

#include "CompilerFujitsuCpp.h"

#include "CompilerGCCCCpp.h"
#include "CompilerGreenHillCCpp.h"

#include "CompilerHPaCpp.h"
#include "CompilerHPANSIC.h"

#include "CompilerIARCCpp.h"
#include "CompilerIBMXLCCppClangBasedVersions.h"
#include "CompilerIBMXLCCppLegacyVersions.h"
#include "CompilerIBMzOSXLCCpp.h"
#include "CompilerImageCraftC.h"
#include "CompilerIntelCCpp.h"

#include "CompilerKAICpp.h"
#include "CompilerKEILC51.h"
#include "CompilerKEILC166.h"
#include "CompilerKEILCARM.h"

#include "CompilerLCC.h"
#include "CompilerLLVM.h"

#include "CompilerMCSTlcc.h"
#include "CompilerMetaWareHighCCpp.h"
#include "CompilerMetrowerksCodeWarrior.h"
#include "CompilerMicrosoftVisualCpp.h"
#include "CompilerMicrotecCCpp.h"
#include "CompilerMicrowayNDPC.h"
#include "CompilerMinGW32.h"
#include "CompilerMinGW64.h"
#include "CompilerMIPSpro.h"
#include "CompilerMiracleC.h"
#include "CompilerMPWCpp.h"

#include "CompilerNorcroftC.h"
#include "CompilerNVHPC.h"
#include "CompilerNWCC.h"

#include "CompilerOpen64.h"
#include "CompilerOracleProCPrecompiler.h"
#include "CompilerOracleSolarisStudio.h"
#include "CompilerOrangeC.h"

#include "CompilerPacificC.h"
#include "CompilerPalmCCpp.h"
#include "CompilerPellesC.h"
#include "CompilerPortlandGroupCCpp.h"

#include "CompilerRenesasCCpp.h"

#include "CompilerSASC.h"
#include "CompilerSCOOpenServer.h"
#include "CompilerSmallDeviceCCompiler.h"
#include "CompilerSNCompiler.h"
#include "CompilerStratusVOSC.h"
#include "CompilerSymantecCpp.h"

#include "CompilerTenDRACCpp.h"
#include "CompilerTexasInstrumentsCCppCompiler.h"
#include "CompilerTHINKC.h"
#include "CompilerTinyC.h"
#include "CompilerTurboCCpp.h"

#include "CompilerUltimateCCpp.h"
#include "CompilerUSLC.h"

#include "CompilerVBCC.h"

#include "CompilerWatcomCpp.h"

#include "CompilerZ88DK.h"
#include "CompilerZortechCpp.h"


#ifndef COMPILER
/* Unknown compiler. */
#define COMPILER            0
#endif /* COMPILER */

#ifndef COMPILER_NAME
/* Unknown compiler. */
#define COMPILER_NAME       "unknown"
#endif /* COMPILER_NAME */


/******************************************************************************
* Example of use
*
* #if COMPILER == 0
*	#error "Unknown compiler"
* #endif
*
* #if COMPILER == COMPILER_MICROSOFT_VISUAL_CPP
* ...
* Visual studio c code
* ...
* #elif  COMPILER == COMPILER_BORLAND_CPP
* ...
* Borland cpp code
* ...
* #else
* ...
* other code
* ...
* #endif
*
*/


#endif /* CCOMPILERS_H */
