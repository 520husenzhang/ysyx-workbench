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


uint64_t expr(char *e, bool *success);

WP *new_wp();
void free_wp()  ;
void print_wp();


#endif
