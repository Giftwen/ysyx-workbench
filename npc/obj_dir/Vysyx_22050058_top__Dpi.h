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
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:115:29
    extern int bypassregfileaddr(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:114:29
    extern int bypassregfiledata(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:113:29
    extern int bypassregfilewe(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:112:29
    extern int checkdpicdnpc(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:116:29
    extern int checkdpicinstvaild(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:111:29
    extern int checkdpicpc(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_top.v:22:29
    extern int checkdpicstop(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_inst_rom.v:24:31
    extern void pmem_read(long long inst_raddr, long long* inst);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_regfile.v:30:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
