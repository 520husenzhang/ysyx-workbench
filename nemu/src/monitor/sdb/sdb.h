#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>
#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  uint64_t result ;  //表达结果
  char   expr[64] ;   //表达式
  bool   isused;  //被用了麻 

} WP;
 //head用于组织使用中的监视点结构, free_用于组织空闲的监视点结构,
WP *head = NULL, *free_ = NULL;//  全局变量

uint64_t expr(char *e, bool *success);

WP *new_wp();
void free_wp()  ;
void print_wp();


#endif

// /usr/bin/ld: /home/tiger/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/monitor/sdb/sdb.o:
// /home/tiger/ysyx-workbench/nemu/src/monitor/sdb/sdb.h:18: multiple definition of `free_'; 
// /home/tiger/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/cpu/cpu-exec.o:
// /home/tiger/ysyx-workbench/nemu/src/monitor/sdb/sdb.h:18: first defined here
