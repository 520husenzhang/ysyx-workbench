#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>    //正则表达式库  
#include <memory/vaddr.h>

enum {
  TK_NOTYPE = 256,  
  TK_EQ,   //相等 
  TK_BRA_L, // 左括号
  TK_BRA_R,    // 右 括号
  TK_NUM , //整形数字 
  TK_DEREF,  //指针索引
  TK_REG ,// reg
  TK_HEX,  //HEX
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
  {"0[x,X][0-9,a-f,A-F]+", TK_HEX}  , //16hex
  {" +", TK_NOTYPE},    // spaces   空格      0
  {"\\+", '+'},         // plus  加号 
  {"==", TK_EQ},        // equal    相等
  {"-",'-'},                //减号
  {"\\*",'*'},                       //乘号  或指针
  {"/",'/'},                       //除号
  {"[(]",TK_BRA_L},                       //左括号
  {"[)]",TK_BRA_R},                       //左括号
  {"[0-9]+",TK_NUM},                       //整形数字    8 
  {"\\$+[a-z]?[0-9,a,p,c]+",TK_REG}   //寄存器

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
    case TK_DEREF:  Priority=2;       break  ;  //指针运算符
    default:    Priority=1;   break;
    }

 return   Priority ;   
}



  //规则表长度
#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};


 //数字转字符串
 char* itoa(long int num,char* str,int radix)
{
    char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";//索引表
    unsigned unum;//存放要转换的整数的绝对值,转换的整数可能是负数
    int i=0,j,k;//i用来指示设置字符串相应位，转换之后i其实就是字符串的长度；转换后顺序是逆序的，有正负的情况，k用来指示调整顺序的开始位置;j用来指示调整顺序时的交换。
 
    //获取要转换的整数的绝对值
    if(radix==10&&num<0)//要转换成十进制数并且是负数
    {
        unum=(unsigned)-num;//将num的绝对值赋给unum
        str[i++]='-';//在字符串最前面设置为'-'号，并且索引加1
    }
    else unum=(unsigned)num;//若是num为正，直接赋值给unum
 
    //转换部分，注意转换后是逆序的
    do
    {
        str[i++]=index[unum%(unsigned)radix];//取unum的最后一位，并设置为str对应位，指示索引加1
        unum/=radix;//unum去掉最后一位
 
    }while(unum);//直至unum为0退出循环
 
    str[i]='\0';//在字符串最后添加'\0'字符，c语言字符串以'\0'结束。
 
    //将顺序调整过来
    if(str[0]=='-') k=1;//如果是负数，符号不用调整，从符号后面开始调整
    else k=0;//不是负数，全部都要调整
 
    char temp;//临时变量，交换两个值时用到
    for(j=k;j<=(i-1)/2;j++)//头尾一一对称交换，i其实就是字符串的长度，索引最大值比长度少1
    {
        temp=str[j];//头部赋值给临时变量
        str[j]=str[i-1+k-j];//尾部赋值给头部
        str[i-1+k-j]=temp;//将临时变量的值(其实就是之前的头部值)赋给尾部
    }
 
    return str;//返回转换后的字符串
 
}
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
    bool suc=true;
  bool *success=  &suc;
  long int hex2int;
  // *success=true ;
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
                    strncpy(tokens[nr_token].str, substr_start, substr_len);   
                    nr_token++ ;   break ;

                //寄存器索引  
        case TK_REG: tokens[nr_token].type=rules[i].token_type;    
                    strncpy(tokens[nr_token].str, substr_start, substr_len);         
                   strcpy(tokens[nr_token].str,itoa(isa_reg_str2val(tokens[nr_token].str,success),tokens[nr_token].str,10) );  nr_token++ ;    break     ;

        case TK_HEX: tokens[nr_token].type=rules[i].token_type;
                    strncpy(tokens[nr_token].str, substr_start, substr_len);  
                    sscanf( tokens[nr_token].str, "%lx", &hex2int );  //16char  转  int
                    sprintf(tokens[nr_token].str,"%ld",hex2int);                         nr_token++ ;break ;
             
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
            i--;
            if(i > q)break;   
        }   // 1.遇到括号

        else if(tokens[i].type == TK_NUM) continue;  //数字跳过    2.数字

        else if(pir(tokens[i].type ) >= pr){            //运算符 
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
uint64_t  regex_eval(int p, int q){
   uint64_t RES; 
   uint64_t  val1 ;
   uint64_t  val2; 
   int OP;   
   //paddr_t addr  ;
   printf("enter p=%d,q=%d\n",p,q);
  if (p > q) {
    /* Bad expression */
    printf("error happen, p>q!  P==%d,Q==%d",p,q);  
     assert(0);
    }
  else if (p == q) {
    /* Single token.
     * 此处应该是一个整形数 或寄存器索引或  hex
     */
      if( (tokens[p].type==TK_NUM) ||(tokens[p].type==TK_REG) || (tokens[p].type==TK_HEX)){
        sscanf(tokens[p].str,"%ld",&RES) ;
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

    if( (tokens[p].type==TK_DEREF) )  //判定是不是 指针解开索引  
    { 


        return vaddr_read((regex_eval(p+1,q)) ,4);
           
    
    }
    
    OP = dominant_operator( p , q) ;      //返回主操作符位置
    val1 = regex_eval(p, OP - 1);
    val2 = regex_eval(OP + 1, q);

    printf("OP IS %c\nval1 =%ld\nval2=%ld\n",tokens[OP].type,val1,val2);  
   
    switch (tokens[OP].type ) {
      case '+': return val1 + val2;  break;
      case '-': return val1 - val2; break;
      case '*': return val1 * val2;  break;
      case '/':  if((tokens[OP+1].type==TK_NUM)&&(atoi(tokens[OP+1].str)==0))
                {  printf("0 can not be div num");
                   assert(0);}
                else 
                  {return val1 / val2; break;}
      case TK_EQ:return  (val1 ==val2);break ; 
      default: return 0;assert(0);
       }
    
 
  }
  return 0  ;
}


uint64_t  expr(char *e, bool *success) {
   uint64_t  ress;
  if (!make_token(e)) {
    *success = false;
  printf("expr conv is not success!!");
    return 0;
  }
  *success = true;

    /* 找到指针索引 */
 int i ;
for (i = 0; i < nr_token; i ++) {
  if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == TK_BRA_L ||tokens[i - 1].type == '+'||tokens[i - 1].type == '-' ||tokens[i - 1].type == '*' ||tokens[i - 1].type == '/' ) )
  {
    tokens[i].type = TK_DEREF;     //乘法替换为 指针索引！！
  }
}
   ress= regex_eval(0,nr_token-1);  
  /* TODO: Insert codes to evaluate the expression. */
   printf("\n \n res is %ld \n",ress )   ;

  return ress;
}