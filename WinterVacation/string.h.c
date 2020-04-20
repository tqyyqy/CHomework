#include "stdio.h"
#include "string.h"
#include "stdlib.h"


size_t mylen(const char* s);//实现strlen的效果，计算数组元素
int mycmp(const char* s1,const char* s2);//实现strcmp效果  计算元素的差值  ctrncmp  参数n为比较前n个
char* mycpy(char* dst,const char* src);//实现strcpy的效果 但只能调用单核心 没有多核心优化 strncpy 安全版本 参数n为拷贝的size
//strcat  连接两个字符串  strncat 安全版本 参数n为拷贝的size

int main(int argc, char const *argv[])
{
    char line[] = "Hello";

    //计算长度
    printf("计算长度 \n");
    printf("%lu \n",mylen(line));
    //计算大小
    printf("计算大小 \n");
    printf("%lu \n",sizeof(line));

    char line2[] = "Hello1";
    //计算字符串之间的差值 0为相等
    printf("计算字符串之间的差值 0为相等 \n");
    printf("%d \n",mycmp(line,line2));
    //拷贝字符串 标准操作 先申请内存
    printf("拷贝字符串 标准操作 先申请内存 \n");
    char *line_copy = (char*)malloc(strlen(line)+1);
    mycpy(line_copy,line);

    printf("%s\n",line_copy);
    free(line_copy);
    //查找函数
    printf("查找函数 \n");
    char* p = strchr(line,'l');
    printf("%s \n",p);

    printf("反向查找 \n");
    p = strrchr(line,'l');
    printf("%s \n",p);
 
 //strstr 查找字符串  strcasestr 忽略大小写
    return 0;
}



size_t mylen(const char* s)
{
    size_t index = 0;
    while (s[index] != '\0')
    {
        index++;
    }
    return index;
}

int mycmp(const char* s1,const char* s2)
{

    //----------------------1.数组实现---------------------------
    int index = 0;
    while (s1[index] == s2[index] && s1[index] != '\0' &&s2[index] != '\0')
    {
        index++;
    }
    return s1[index] - s2[index];


    //----------------------2.指针实现----------------------
    // while (*s1 == *s2 && *s1 != '\0')
    // {
    //     s1++;
    //     s2++;
    // }
    // return *s1 - *s2;
    
}

char* mycpy(char* dst,const char* src)
{
    //----------------------1.数组实现---------------------------
    // int index = 0;
    // while (src[index] != '\0')
    // {
    //     dst[index] = src[index]; 
    //     index++;
    // }
    // dst[index] = '\0';
    // return dst;

    //----------------------2.指针实现---------------------------
    char* res = dst;
    while (*dst = *src)
    {
        dst++;
        src++;
    }
    printf("%ld\n",res - dst);
    *dst = '\0';
    return res;
    

}