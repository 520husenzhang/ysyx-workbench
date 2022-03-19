#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};  //表达式 
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
 //数字转字符串
char* itoa(int num,char* str,int radix)
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

char* Int2String(int num,char *str)//10进制 
{   printf("num is %d",num);
    int i = 0;//指示填充str 
    if(num<0)//如果num为负数，将num变正 
    {
        num = -num;
        str[i++] = '-';
    } 
    //转换 
    do
    {
        str[i++] = num%10+48;//取num最低位 字符0~9的ASCII码是48~57；简单来说数字0+48=48，ASCII码对应字符'0' 
        num /= 10;//去掉最低位    
    }while(num);//num不为0继续循环
    
    str[i] = '\0';
    
    //确定开始调整的位置 
    int j = 0;
    if(str[0]=='-')//如果有负号，负号不用调整 
    {
        j = 1;//从第二位开始调整 
        ++i;//由于有负号，所以交换的对称轴也要后移1位 
    }
    //对称交换 
    for(;j<i/2;j++)
    {
        //对称交换两端的值 其实就是省下中间变量交换a+b的值：a=a+b;b=a-b;a=a-b; 
        str[j] = str[j] + str[i-1-j];
        str[i-1-j] = str[j] - str[i-1-j];
        str[j] = str[j] - str[i-1-j];
    } 
    
    return str;//返回转换后的值 
}

//生成小于num的随机数  
int  choose(int num){
   int  ret ;
   ret=rand()%num  ;
  return  ret  ;
  
}
//产生rand数
int  gen_num(){

   int  ret ;
   char buf_num[32]={0};
   ret=rand()%1024 ;
   //printf("ret is %d \n",ret);
  itoa(ret,buf_num,10) ;      //整形转字符
  strcat(buf,buf_num);
  return  ret;
}

//产生括号函数  
void gen(char BRA){
     
    if(BRA=='(' )
       strcat(buf,"(");
     else if( BRA==')')
       strcat(buf,")");

}


//产生 随机运算符
char  gen_rand_op(){
   // + - * /
  switch (choose(4)){
  case 0:strcat(buf,"+");   return  '+'  ; break;
  case 1:strcat(buf,"-");  return  '-'   ;   break;
  case 2:strcat(buf,"*");  return  '*'   ; break;
  default:strcat(buf,"/");  return  '/'   ;  break;
  }
}

//产生表达式
static bool gen_rand_expr() {

  switch (choose(3)) {
    case 0: if(gen_num()==0);
                return false;   break;  //产生数字
    case 1: gen('('); gen_rand_expr(); gen(')');return true ;break;  //产生括号表达式 
    default: gen_rand_expr(); gen_rand_op(); 
          if((gen_rand_op()=='/')&&(gen_rand_expr()==false))
          {
            printf("/0 found !!!");
           continue ;

          }
         return true ; break;
  }
  
  


  // buf[0] = '\0';

}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  int j ;
  for (i = 0; i < loop; i ++) {   //每loop 一次生成一个表达式  
    for(j=0;j<65536;j++)    //清0 
    {
     buf[j]=0;

    }

     gen_rand_expr();
   

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);  //写一个c文件

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);
    int return_num;
    int result;
    return_num=fscanf(fp, "%d", &result);
    if(return_num!=1)
    {
     assert(0);
    }
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}

