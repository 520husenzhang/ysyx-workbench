#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#include <common.h>

#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)

/* 将guest程序中的guest物理地址转换 为 NEMU中的host虚拟地址*/
uint8_t* guest_to_host(paddr_t paddr);
/* 将 NEMU 中的主机虚拟地址转换 为 来宾程序中的来宾物理地址 */
paddr_t host_to_guest(uint8_t *haddr);
//返回是不是索引地址在真实内存中？？ 
static inline bool in_pmem(paddr_t addr) {
  return (addr >= CONFIG_MBASE) && (addr < (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);
}

word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);
// word_t vaddr_ifetch(vaddr_t addr, int len);

// word_t vaddr_read(vaddr_t addr, int len);

// void vaddr_write(vaddr_t addr, int len, word_t data) ;


#endif
