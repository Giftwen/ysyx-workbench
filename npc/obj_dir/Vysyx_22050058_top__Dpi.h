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
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:128:29
    extern int bypassregfileaddr(long long dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:127:29
    extern int bypassregfiledata(long long dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:126:29
    extern int bypassregfilewe(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:125:29
    extern int checkdpicdnpc(long long dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:129:29
    extern int checkdpicinstvaild(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_pipeline.v:124:29
    extern int checkdpicpc(long long dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_top.v:22:29
    extern int checkdpicstop(const svLogicVecVal* dpic_o);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_inst_rom.v:24:31
    extern void pmem_read(long long inst_raddr, long long* inst);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_data_rom.v:26:34
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/gift/workplace/ysyx-workbench/npc/vsrc/ysyx_22050058_regfile.v:30:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
