// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:90:29
    extern int checkdpicpc(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_top.v:21:29
    extern int checkdpicstop(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_regfile.v:30:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
