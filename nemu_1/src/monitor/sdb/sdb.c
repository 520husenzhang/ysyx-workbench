#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}



static int cmd_help(char *args) ;


static int cmd_c(char *args) {
  cpu_exec(-1);   //尽可能多的 执行
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}


static int cmd_si(char *args) {
   //单步执行n次
 u_int number= atoi(args); 
 u_int i  ;
 for(i=0; i< number ;i++) 
 {
  
  cpu_exec(1)  ;

 }
return 0;
}

extern CPU_state cpu ;  //cpu  状态变量

//打印程序状态  
static int cmd_info(char *args){
    if(*args=='r')
   {
      isa_reg_display()  ;
   
   }
   else if(*args=='w'){

   print_wp();

   }
   else 
     {
     printf("enter correct word!!");

     }


return 0;

}

//扫描内存
static int cmd_x(char *args){
  int   LEN;   //  几个4字节？
  paddr_t addr  ;  //读取 开始地址
 //har *token = strtok(args, " ");  //第一个数字 
 //arg1= atoi(token);     //len 
 //arg2=  atoi(strtok(NULL, " "));  //地址

sscanf(args,"%d 0x%x",&LEN,&addr);  
// printf("%d, %d",  len,addr );
//循环输出
int i; 
 for (i = 0; i < LEN; i++)
 {
   printf( "addr %#x is %#lx \n",addr+i*4,vaddr_read(addr+i*4,4));


 }
return 0;
}

//表达式求职   
static int cmd_p(char *args){
  //args 为表达式字符串 
  bool  init =false  ;
  bool *success  ;
  success=&init  ;
  
  expr(args,success);    //调用make-token 函数
 if( (*success)== false)
 {
   //解析失败
   printf("expr is invalid ");
  return 0 ;
 }

return 0 ;

}


//设置监视点
static int  cmd_w(char *args){
   bool  init =false  ;
  bool *success  ;
  success=&init  ;

  uint64_t  res ;
  res=expr(args,success);
   if( (*success)== false)
 {
   //解析失败
   printf("expr is invalid ");
  return 0 ;
 }
 //设置新监视点
new_wp(args,res);

return 0 ;
}
//删除监视点   输入编号即可
static int cmd_d(char *args){
 int num ;
  sscanf (args,"%d",&num) ;

   //printf("fuck num is  %d",num);
  free_wp(num); 

  return 0  ;


}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);   //函数 指针
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },   //退出
  { "si", "exec_once", cmd_si },   //单步执行
  { "info", "show_program_state", cmd_info },    //打印寄存器
  { "x", "scan ram", cmd_x },    //  扫描内存
  {"p","expr conv to value",cmd_p  } ,  //表达式求职   
  {"w","watch point",cmd_w  } ,  //监视点
  {"d","delete the watch point ",cmd_d},   //删除监视点 
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
     
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }  //带入参数 执行
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /*初始化正则表达式 */
  init_regex();

  /* 初始化 查看点 */
  init_wp_pool();
}