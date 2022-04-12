#include <am.h>
#include <nemu.h>

extern char _heap_start;
int main(const char *args);
//结构用于指示堆区的起始和末尾
Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;
// /用于输出一个字符
void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

//用于结束程序的运行
void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}




//用于进行TRM相关的初始化工作
void _trm_init() {
  int ret = main(mainargs);  
  //main()函数还带一个参数, 目前我们暂时不会用到, 后面我们再介绍它.
  halt(ret);
}
