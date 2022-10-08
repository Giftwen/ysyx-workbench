/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-22 10:58:30
 * @LastEditTime: 2022-10-08 20:35:38
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
  #include "Vysyx_22050058_top.h"
  #include "verilated.h"
  #include "verilated_vcd_c.h"
  #include <stdio.h>
  #include <stdlib.h>
  #include <assert.h>
  #include "svdpi.h"
  #include "verilated_dpi.h"


uint64_t  checkstopVAL ;
uint64_t  thispc       ;
extern "C" int checkdpicstop(const svLogicVec32* r) {
  checkstopVAL=*(uint64_t*)r;
  return 0;
}
extern "C" int checkdpicpc(const svLogicVec32* r) {
  thispc=*(uint64_t*)r;
  return 0;
}

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}



#ifdef NVBOARD_ON
  #include <nvboard.h>
#endif
#ifdef NVBOARD_ON
  static TOP_NAME dut;
  void nvboard_bind_all_pins(Vysyx_22050058_top* top);

// static void single_cycle() {
//   dut.clk = 0; dut.eval();
//   dut.clk = 1; dut.eval();
// }

// static void reset(int n) {
//   dut.rst = 1;
//   while (n -- > 0) single_cycle();
//   dut.rst = 0;
// }
#endif
  int main(int argc, char** argv, char** env) {
      #ifdef SIM_ON
      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      Vysyx_22050058_top* top = new Vysyx_22050058_top{contextp};
      int cycle_num=200;
      uint64_t limit = cycle_num;
      #endif
      
      #ifdef TRACE_ON
        printf("=======TRACE_ON=======\n");
        VerilatedVcdC* tfp = new VerilatedVcdC;
        Verilated::traceEverOn(true);
        top->trace(tfp, 99);
        tfp->open("obj_dir/npc_sim.vcd");
        unsigned int cycle = 0;
      #endif
      //printf("cycle_num = %d \n",cycle_num);
      #ifdef NVBOARD_ON
      nvboard_bind_all_pins(&dut);
      nvboard_init();
      //reset(10);
      
      while (1) {
      
        nvboard_update();
        //single_cycle();
        dut.eval();
      }
      #endif
      #ifdef SIM_ON
      while( contextp->time()>10000&&!contextp->gotFinish()){
        
        top->clk =0;
        if(contextp->time()<10){top->rst =1;}else{top->rst =0;}
        contextp->timeInc(1);
        top->eval();
        #ifdef TRACE_ON
            tfp->dump(cycle++);
        #endif
        if (checkstopVAL){
          printf("\nthis is ebreak pc: 0x%lx\n",thispc);
          break;
        }
        top->clk =1;
        top->eval();
        #ifdef TRACE_ON
            tfp->dump(cycle++);
        #endif
        
        
      }
      //printf("\ncycle is %ld\n",contextp->time());
      //dump_gpr();
      #endif
      #ifdef TRACE_ON
        tfp->close();
      #endif
      #ifdef SIM_ON
      delete top;
      delete contextp;
      #endif
      return 0;
  }
