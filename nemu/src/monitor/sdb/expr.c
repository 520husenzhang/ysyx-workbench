#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>    //正则表达式库  

enum {
  TK_NOTYPE = 256,  
  TK_EQ,
  TK_BRA // 括号
  /* TODO: Add more token types */
};
  //匹配规则 
static struct rule {
  const char *regex;
  int token_type; //上方定义
} rules[] = {   

  /* TODO: Add more rules.
   * 注意不同规则的优先级   从上到下优先级递减
   */
   //正则表达式
  {" +", TK_NOTYPE},    // spaces   空格
  {"\\+", '+'},         // plus  加号 
  {"==", TK_EQ},        // equal    相等
  {"\\-",'-'},                //减号
  {"\\*",'*'},                       //乘号
  {"",'/'},                       //除号
  {"\(",'/'},        //括号
}; 
  //规则表长度
#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 *初始化正则表达式规则
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;
 // 你无需关心，将提前定义的rule规则 编译成一些用于进行pattern匹配的内部信息,
  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;  //用于记录token的类型.
  char str[32];  //用来保存额外信息，比如数值u大小
} Token;




//tokens数组用于按顺序存放已经被识别出的token信息,
static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;  //指示已经被识别出的token数目.
//给出一个待求值表达式, 我们首先要识别出其中的token,  返回false 表示解析 失败
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* 尝试所有的规则. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;   //此时指向这个token 下一位

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
        // case :                   ;break ;
        // case :                   ;break ;


          default: TODO();
        }

        break;
      }
    }

    if (i == NR_REGEX) {   // 没有一个规则符合
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }



  }

  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  TODO();

  return 0;
}
