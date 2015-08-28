///
/// @file
/// @copyright All code copyright Movidius Ltd 2012, all rights reserved.
///            For License Warranty see: common/license.txt
///
/// @brief     Application configuration Leon file
///

// 1: Includes
// ----------------------------------------------------------------------------


#include <registersMyriad.h>
#include <DrvCpr.h>

// 2:  Source Specific #defines and types  (typedef,enum,struct)
// ----------------------------------------------------------------------------

#ifndef IPIPE_CLK_CONFIG_SEL   // default is mv0182
#define ipipeClockConfig ipipeClkConfigMV182
#else
#define ipipeClockConfig IPIPE_CLK_CONFIG_SEL
#endif

// 3: Global Data (Only if absolutely necessary)
// ----------------------------------------------------------------------------
// Sections decoration is required here for downstream tools

// 4: Static Local Data 
// ----------------------------------------------------------------------------

tyAuxClkDividerCfg auxClkAllOn[] =
{
   {0x0FFFFFFF, CLK_SRC_REFCLK0, 1, 1},   // Enable all 28 clocks
   {0, 0, 0, 0}, // Null Terminated List
};


tySocClockConfig ipipeClkConfigMV182 =
{
    .refClk0InputKhz         = 12000,           // Default 12Mhz input clock
    .refClk1InputKhz         = 0,               // Assume no secondary oscillator for now
    .targetPll0FreqKhz       = 264000, 
    .targetPll1FreqKhz       = 0,
    .clkSrcPll1              = CLK_SRC_REFCLK0, // Supply both PLLS from REFCLK0
    .masterClkDivNumerator   = DONT_TOUCH_MASTER_DIVIDER,
    .masterClkDivDenominator = DONT_TOUCH_MASTER_DIVIDER,
    .cssDssClockEnableMask   = 0xFFFFFFFFFFFFFFFFULL,
    .mssClockEnableMask      = 0xFFFFFFFF,
    .sippClockEnableMask     = 0xFFFFFFFF,       
    .upaClockEnableMask      = 0xFFFFFFFF, 
    .pAuxClkCfg              = auxClkAllOn,
};



// 5: Static Function Prototypes
// ----------------------------------------------------------------------------


// 6: Functions Implementation
// ----------------------------------------------------------------------------

int initClocksAndMemory(void)
{    
    DrvCprInit();
    DrvCprSetupClocks(&ipipeClockConfig);

    return 0;
}
