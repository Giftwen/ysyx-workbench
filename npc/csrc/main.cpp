/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-22 10:58:30
 * @LastEditTime: 2022-10-15 02:55:31
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

  #include <fstream>
  #include <string.h>
  #include <memory>
  #include <assert.h>
  #include <dlfcn.h>
  #include <dlfcn.h>

  #include <getopt.h>


#define BUFF_MAX_LEN 128*10


char *pHead = NULL;			//环形缓冲区首地址
char *pValidRead = NULL;	//已使用环形缓冲区首地址
char *pValidWrite = NULL;	//已使用环形缓冲区尾地址
char *pTail = NULL;			//环形缓冲区尾地址
void InitRingBuff();
void FreeRingBuff();
int WriteRingBuff(char *pBuff, int AddLen);
void ReadRingBuff();


#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;35m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE










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

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  int i;
  for (i = 0; i < 32; i ++) {
    printf("gpr(%02d)[%3s]: " "0x%016lx  " " ", i ,regs[i], cpu_gpr[i]);
    if (i % 4 == 3) {
      printf("\n");
    }
  }
  printf("pc: " "0x%016lx"   "\n",thispc);
  fflush(stdout);
}



void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}




#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x2800000
#define PG_ALIGN __attribute((aligned(4096)))

typedef uint64_t word_t;
typedef word_t   vaddr_t;
typedef uint32_t paddr_t;

static uint8_t *pmem=NULL ;
static char *img_file = NULL;





void welcome(){
  #ifdef TRACE_ON
  printf(ANSI_FG_BLUE "[welcome] Trace :" ANSI_NONE ANSI_FG_GREEN " ON\n" ANSI_NONE);
  #else
  printf(ANSI_FG_BLUE "[welcome] Trace :" ANSI_NONE ANSI_FG_RED " OFF\n" ANSI_NONE);
  #endif
  printf(ANSI_FG_BLUE "[welcome] If trace is enabled, a VCD file will be generated\n" ANSI_NONE);
  printf(ANSI_FG_BLUE "[welcome] Build time: %s, %s\n" ANSI_NONE, __TIME__, __DATE__);
  printf(ANSI_FG_YELLOW "Welcome to riscv-NPC!\n" ANSI_NONE);
  
}


uint8_t* guest_to_host(paddr_t paddr) { 
  //printf("guest_to_host: 0x%x\n",paddr);
  
  return pmem + paddr - CONFIG_MBASE;
  }

static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }
  FILE *fp = fopen(img_file, "rb");
  assert("Can not open ");
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  printf(ANSI_FG_BLUE "[load_img] The image is %s, size = %ld\n" ANSI_NONE, img_file, size);
  fseek(fp, 0, SEEK_SET);
  size_t ret ;
  ret=fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
  fclose(fp);
  return size;
}

void init_ram(){
  pmem = (uint8_t *)malloc(CONFIG_MSIZE);
  //printf(GREEN "ram init success!~\n" NONE);
  assert(pmem);
}
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"image"    , optional_argument, NULL, 'i'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-i:d:", table, NULL)) != -1) {
    switch (o) {
      case 'i': img_file = optarg; break;
      default : exit(0);
    }
  }
  return 0;
}


static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: {printf(ANSI_FG_RED "read error!\n" ANSI_NONE);assert(0);return 4096;}
  }
}
// read
extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  //printf("raddr is :0x%llx\n",raddr);
  if(raddr >=CONFIG_MBASE){
    *rdata = host_read(guest_to_host(raddr & ~0x7ull),8);
    //printf("rdata is 0x%016llx\n",*rdata);
  }
  else {
    *rdata = 0;
    //printf(RED "raddr error \n" NONE);
  }
}







void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */
  parse_args(argc, argv);
  init_ram();           //初始化内存
  long img_size = load_img();
  welcome();
  InitRingBuff();

}

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT};
struct NPCstate{
  int state=NPC_RUNNING;
  long long int halt_pc;
  long long int halt_ret;
} npc_state;

void npc_halt(long long int pc,long long int value){      
  npc_state.halt_pc=pc;       
  npc_state.halt_ret=value;
  if(npc_state.state == NPC_END&&npc_state.halt_ret == 0){
    printf( ANSI_FG_BLUE "[halt] npc: " ANSI_NONE ANSI_FG_GREEN "HIT GOOD TRAP" ANSI_NONE);
    printf(" at pc = 0x%016lx\n",thispc);
  }
  else if(npc_state.state == NPC_END&&npc_state.halt_ret != 0){
    
    printf( ANSI_FG_BLUE "[halt] npc: " ANSI_NONE ANSI_FG_RED "HIT BAD TRAP" ANSI_NONE);
    printf(" at pc = 0x%016lx\n",thispc);
  }
  else if(npc_state.state == NPC_ABORT){
    printf( ANSI_FG_BLUE "[halt] npc: " ANSI_NONE ANSI_FG_RED "ABORT" ANSI_NONE);
    printf(" at pc = 0x%016lx\n",thispc);
  }
}




  int main(int argc, char** argv, char** env) {
      #ifdef SIM_ON
      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      Vysyx_22050058_top* top = new Vysyx_22050058_top{contextp};
      int cycle_num=200;
      uint64_t limit = cycle_num;
      init_monitor(argc, argv);
      #endif
      
      #ifdef TRACE_ON
        VerilatedVcdC* tfp = new VerilatedVcdC;
        Verilated::traceEverOn(true);
        top->trace(tfp, 99);
        tfp->open("obj_dir/npc_sim.vcd");
        unsigned int cycle = 0;
      #endif
      
      #ifdef SIM_ON
      
      while( contextp->time()<1000000&&!contextp->gotFinish()){
        
        top->clk =0;
        if(contextp->time()<10){top->rst =1;}else{top->rst =0;}
        contextp->timeInc(1);
        top->eval();
        #ifdef TRACE_ON
            tfp->dump(cycle++);
        #endif
        if (checkstopVAL){
          npc_state.state=NPC_END;
          break;
        }
        top->clk =1;
        top->eval();
       
        #ifdef TRACE_ON
            tfp->dump(cycle++);
        #endif
        
      }
      isa_reg_display();
      //dump_gpr();
      npc_halt(thispc,cpu_gpr[10]);
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



//环形缓冲区初始化
void InitRingBuff(){
	if(NULL == pHead){
		pHead = (char *)malloc(BUFF_MAX_LEN * sizeof(char));
	}
	memset(pHead, 0 , sizeof(BUFF_MAX_LEN));
	pValidRead = pHead;
	pValidWrite = pHead;
	pTail = pHead + BUFF_MAX_LEN;  
}

//环形缓冲区释放
void FreeRingBuff(){
	if(NULL != pHead){
		free(pHead);
	}
}

//向缓冲区写数据
int WriteRingBuff(char *pBuff, int AddLen)
{
	if(NULL == pHead){
		return -1;
	}
	if(AddLen > pTail - pHead){
		return -1;
	}
	if(pValidWrite + AddLen > pTail){
		int PreLen = pTail - pValidWrite;
		int LastLen = AddLen - PreLen;
		memcpy(pValidWrite, pBuff, PreLen);	
		memcpy(pHead, pBuff + PreLen, LastLen);
    //pValidRead=pHead + LastLen;
		pValidWrite = pHead + LastLen;	//新环形缓冲区尾地址
    pValidRead= pValidWrite;
	}
	else{
		memcpy(pValidWrite, pBuff, AddLen);	//将新数据内容添加到缓冲区
		pValidWrite += AddLen;	//新的有效数据尾地址
    pValidRead= pValidWrite;
	}
	return 0;
}

//从缓冲区读数据
void ReadRingBuff(){
	char *pHead_r =pValidRead;
  memcpy(pValidWrite-128, "->", 2);
      for(int i=0;i<10;i++){
          puts(pHead_r);
          pHead_r+=128;
          if(pHead_r==pTail){pHead_r=pHead;}
      }
}

