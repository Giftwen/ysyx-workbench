  #include "Vtop.h"
  #include "verilated.h"
  #include "verilated_vcd_c.h"
  #include <stdio.h>
  #include <stdlib.h>
  #include <assert.h>
#ifdef NVBOARD_ON
  #include <nvboard.h>
#endif
#ifdef NVBOARD_ON
  static TOP_NAME dut;
  void nvboard_bind_all_pins(Vtop* top);

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
      Vtop* top = new Vtop{contextp};
      int cycle_num=66;
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
      while(contextp->time() < limit && !contextp->gotFinish()){
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        contextp->timeInc(1);
        top->eval();
        assert((top->f )== (a ^ b));
        
        //printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        #ifdef TRACE_ON
            tfp->dump(cycle++);
        #endif
        
      }
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
