#include "sdb.h"

#define NR_WP 32
//查看点 


 //最大32个点
static WP wp_pool[NR_WP] = {};

 //head用于组织使用中的监视点结构, free_用于组织空闲的监视点结构,
WP *head = NULL, *free_ = NULL;//  全局变量
bool su=true;
void init_wp_pool() {
  printf("init_wp_pool!!\n");
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].isused=false ;
    memset(wp_pool[i].expr ,0,sizeof(wp_pool[i].expr )) ;   
    wp_pool[i].result=0;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }
   
  head = NULL;
  free_ = wp_pool;    //指向开头
  su = false;
}

/* TODO: Implement the functionality of watchpoint */
//需要存入表达式和结果。
WP *new_wp(char *str , uint64_t value){
   if(su == true){       //判断是否完成初始化  没有就初始化
       init_wp_pool();
  
   }

   if(free_ == NULL){
       printf("Erro!free is null.\n");
       assert(0);
   }

   WP *new = NULL;
   new = free_;
   free_ = free_->next;
  // printf("!!!!%d\n",value);
  // printf("!!!!%s\n",str);
   new->result = value;
  // printf("!!!!%d\n",new->value);
   strcpy(new->expr, str);
  // printf("!!!!%d\n",new->value);
  // printf("%s /n",new->expr);
   new->next = NULL;
   new->isused = true;
   if(head == NULL) head = new;
   else{
       new->next = head;
       head = new ;
   }
   return new;
} 
//释放号码为监视点
void free_wp(WP *wp ){
   if(su == true){       //判断是否完成初始化  没有就初始化
       init_wp_pool();
  
   }
  int  no;
  no=wp->NO; 
   WP *p = head;
   if(head == NULL){                                                                                                                                          
       printf("监视点列表为空。 \n");
       assert(0);
   }   
   else if(p->NO == no){   //刚好要释放的是head
       head =    head->next;
       p->result = 0;
       p->isused = false; 
       p->next = free_;
       free_ = p;
       printf("已经删除第%d个监视点。\n", no);
      // free(p);
       return;
   }
   else{
       WP *q = head;
       p = p ->next;
       while(p!=NULL){
           if (p->NO == no){
               q->next = p->next;  //剪断

               p->result = 0;
               p->isused = false;
               p->next = free_;
               free_ = p;
               printf("已经删除第%d个监视点。\n", no);
        //       free(p);free(q);
               return;
           }
           else{
               p = p -> next;
               q = q -> next;
       }
     }
   printf("不存在第%d个监视点。\n",no);
   return;
   }

}
 //打印全部监视点
void print_wp(){
     if(su == true){       //判断是否完成初始化  没有就初始化
       init_wp_pool();
  
   }


    WP *p = head;
    if(p ==NULL){
        printf("监视点为空！\n");
        return;
    }
    else{
        while(p!=NULL){
  
            printf("%d   %s 0x%08lx\n",p->NO , p->expr, p->result);
            p=p->next;
        }
        return;
    }
    return;
} 
