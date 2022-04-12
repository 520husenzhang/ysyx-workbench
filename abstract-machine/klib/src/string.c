#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
 //需要全部完善
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)



void *memcpy(void *dest, const void *src, size_t count)
{
if (dest == NULL || src == NULL || dest <= src+count)
   {    
     return NULL;
    }

char *tmp_dest = dest;
const char *tmp_src = src;

while (count--) *tmp_dest++ = *tmp_src++ ;

return dest;
}



int memcmp(char *str1,char *str2,int len)
{

assert(str1 );
 assert(str2 );

    if (!len )

   {

    return 0;

    }  

          while (--len &&*(char*) str1 == *(char *)str2)

         {

          str1 = (char *)str1 + 1;

          str2 = (char *)str2 + 1;
      }

    return ((unsigned char*) str1 - (unsigned char*)str2 );
}




size_t strlen(const char *s) {
 //防止串入空指针，此处使用断言
    assert(s != NULL);
    unsigned int count = 0;
    //如果没有遇到'\0'就一直循环
    while (*s != '\0')
    {
        //指针后移
        s++;
        //计数器自增
        count++;
    }
   return count;
}


char *strcpy(char *dst,const char *src)
{
	assert(dst != NULL);
	assert(src != NULL);
	char *ret = dst;
	memcpy(dst,src,strlen(src)+1);
	return ret;
}




char*strncpy(char* dst, const char* src, int len)
{
	int size = strlen(src);
	char *p = dst;
	if (size > len)
	{
		memcpy(p, src, len);
	}
	else
	{
		memcpy(p, src, size);        
		int offset = len - size;
		char *q = p + size;
    	while (offset--)
			*q++ = '\0';
	}
	return dst;
}

char* strcat(char *des, const char *src)
{
	assert(des != NULL && src != NULL); //断言两个字符串不为空
	char *temp = des;                   //指针temp指向des字符串内存地址
	while (*temp != '\0')               //如果temp指针没有遇见'\0'
		temp++;                         //temp++
	while ((*temp++ = *src++) != '\0'); //实现循环拷贝，当src为'\0'时结束
	 
	return des;                         //返回des值
}


int strcmp(char *str1,char *str2)
{
 int ret = 0;
	while(!(ret=*(unsigned char*)str1-*(unsigned char*)str2) && *str1)
	{
		str1++ ;
		str2++  ;
	}
 
 
	if (ret < 0)
	{
		return -1;
	}
	else if (ret > 0)
	{
		return 1;
	}
	return 0;

}

int strncmp ( const char* str1, const char* str2, size_t num )
{
    assert(str1 && str2);
 
    if(!num)return 0;
 
    while(--num && *str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
 
    return *str1 - *str2;
}

void* memset(void *ptr, int value, size_t num)
{      
    assert(ptr);
    int* temp= (int*)ptr;         
    while (num--)                
    {
        *temp++ =   value;
    }
 
    return ptr;
}



void *memmove(void *dest, const void *src, int n)
{
	/*因为char类型为1字节，所以将数据转化为char*
	进行操作。并不是因为操作的对象是字符串*/
	char* pdest = (char *)dest;
	const char* psrc = (const char *)src;
	assert(dest);
	assert(src);
	if (pdest <= psrc&&pdest >= psrc + n)//正常情况下从前向后拷贝
	{
		while (n--)
		{
			*pdest = *psrc;
		}
	}
	else //当出现内存覆盖时从后向前拷贝
	{
		while (n--)
		{
			*(pdest + n) = *(psrc + n);
		}
	}
	return dest;
}








#endif
