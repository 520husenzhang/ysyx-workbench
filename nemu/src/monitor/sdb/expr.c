#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>    //正则表达式库  

enum {
  TK_NOTYPE = 256,  
  TK_EQ,   //相等 
  TK_BRA_L, // 左括号
  TK_BRA_R,    // 右 括号
  TK_NUM  //整形数字 
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
  {" +", TK_NOTYPE},    // spaces   空格      0
  {"\\+", '+'},         // plus  加号 
  {"==", TK_EQ},        // equal    相等
  {"-",'-'},                //减号
  {"\\*",'*'},                       //乘号
  {"/",'/'},                       //除号
  {"[(]",TK_BRA_L},                       //左括号
  {"[)]",TK_BRA_R},                       //左括号
  {"[0-9]+",TK_NUM},                       //整形数字    8 
}; 

//操作符 优先级 计算 
static  int pir (int type){
  int Priority  ;

    switch (type)
    {
    case '+':   Priority=5;     break;
    case TK_EQ : Priority=8;       break;
    case '-':  Priority=5;       break;
    case '*':   Priority=4;      break;
    case '/':   Priority=4;          break;
    case TK_BRA_L: Priority=1;        break;
    case TK_BRA_R:  Priority=1;      break;
    default:    Priority=1;   break;
    }

 return   Priority ;   
}



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
//初始化数组 tokens
void init_tokens()
{
  int i,j ;

  for(i=0;i<32;i++){     //外部32元素初始化
      for(j=0;j<32;j++){   //str 和type 初始化 
           tokens[i].str[j]=0;  
      }
     tokens[i].type=0;
  }
}
//给出一个待求值表达式, 我们首先要识别出其中的token,  返回false 表示解析 失败
static bool make_token(char *e) {
  int position = 0;
  int i;
  int cnt; 

  regmatch_t pmatch;

  nr_token = 0;
  init_tokens();
  //qin
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
         case TK_NOTYPE :             ;break ;
         case TK_NUM : tokens[nr_token].type=rules[i].token_type;
                     //strncpy(tokens[nr_token].str, temp, 1); //
                    strncpy(tokens[nr_token].str, substr_start, substr_len);
                    //strcpy(tokens[nr_token].str, substr_start);
                    nr_token++ ;                     ;break ;

         
         default:  
                    tokens[nr_token].type=rules[i].token_type; 
                    //strncpy(tokens[nr_token].str, temp, 1); //
                    //strcpy(tokens[nr_token].str, substr_start);
                    strncpy(tokens[nr_token].str, substr_start, substr_len);
                    nr_token++ ;  break ;
                    
        }
      

        break;  //匹配到了规则当然要break  
      }
    }

    if (i == NR_REGEX) {   // 没有一个规则符合
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }



  }
  
  
  for(cnt=0;cnt<nr_token;cnt++)
  {
  printf("rule %d  is  type=%d ,  str=%s  \n ",cnt ,tokens[cnt].type,tokens[cnt].str); 
  }
  printf("\n \n");
  return true;
}

//括号检查函数
bool check_parentheses(int p ,int q){
   // printf("--------------\n");  
    int i,tag = 0;
    if(tokens[p].type != TK_BRA_L || tokens[q].type != TK_BRA_R) return false; //首尾没有()则为false 
    for(i = p ; i <= q ; i ++){    
        if(tokens[i].type == TK_BRA_L) tag++;
        else if(tokens[i].type == TK_BRA_R) tag--;
        if(tag == 0 && i < q) return false ;  //(3+4)*(5+3) 返回false
    }                              
    if( tag != 0 ) return false;   
    return true;                   
} 

//主操作符寻找函数 
int dominant_operator(int p , int q){
               
    int i ,dom = p, left_n = 0;   //dom 为主操作符的位置  
    int pr = -1 ;  //最小优先级  数字越大优先级月小 
    for(i = p ; i <= q ; i++){    //从左往右遍历

        if(tokens[i].type == TK_BRA_L){   //括号匹配  
            left_n += 1;
            i++;
            while(1){
                if(tokens[i].type == TK_BRA_L) left_n += 1;
                else if(tokens[i].type == TK_BRA_R) left_n --;
                i++;
                if(left_n == 0){
                printf("I FAND BRA i=%d \n",i-1); ////
                break;
                }
            }         //找到匹配的右括号 
            if(i > q)break;   
        }   // 1.遇到括号

        else if(tokens[i].type == TK_NUM) continue;  //数字跳过    2.数字

        else if(pir(tokens[i].type ) > pr){            //运算符 
            pr = pir(tokens[i].type);
            dom = i;  //定位主操作符
            printf("1 PR is %d\n",pr);     
        }         
    
    }          
     printf("2 PR is %d\n",pr); 
   // printf("%d\n",left_n);
     printf("dom is in %d\n \n",dom);
    return dom;
}     

//递归函数
uint32_t  regex_eval(int p, int q){
   uint32_t RES; 
   uint32_t  val1 ;
   uint32_t  val2; 
   int OP;   
   printf("enter p=%d,q=%d\n",p,q);
  if (p > q) {
    /* Bad expression */
    printf("error happen, p>q!  P==%d,Q==%d",p,q);  
     //assert(0);
    }
  else if (p == q) {
    /* Single token.
     * 此处应该是一个整形数.
     */
      if(tokens[p].type==TK_NUM){
        sscanf(tokens[p].str,"%d",&RES) ;
        return  RES; 
      }    
      else 
      {
      printf("should not be here ");  
      }
   }
  else if (check_parentheses(p, q) == true) {  //
    /* 表达式由一对匹配的括号包围。
     *如果是这样，就扔掉括号。
     */
    return regex_eval(p + 1, q - 1);
  }
  else {

    OP = dominant_operator( p , q) ;      //返回主操作符位置
    val1 = regex_eval(p, OP - 1);
    val2 = regex_eval(OP + 1, q);


    switch (tokens[OP].type ) {
      case '+': return val1 + val2;  break;
      case '-': return val1 - val2; break;
      case '*': return val1 * val2;  break;
      case '/': return val1 / val2; break;
      default: return 0;assert(0);
    }
  }
  return 0  ;
   
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
  printf("fuck");
    return 0;
  }
  *success = true;


  /* TODO: Insert codes to evaluate the expression. */
   printf("\n \n res is %d \n",regex_eval(0,nr_token-1) )   ;

  return 0;
}