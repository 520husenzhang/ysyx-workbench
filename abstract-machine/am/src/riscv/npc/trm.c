#include <am.h>
#include <klib-macros.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
//结构用于指示堆区的起始和末尾
Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
}
 //结束程序的运行
void halt(int code) {
  while (1);
}
  ///TRM相关的初始化工作
void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
