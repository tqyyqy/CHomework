#include<stdio.h>
#include "common.h"

int fun(int *a,int *max)
{
    *max = a[0];
    for (size_t i = 0; i < 10; i++)
    {
        if (*max<a[i])
        {
            *max = a[i];
        }
        
    }
    
    return 0;
}

int main(int argc, char const *argv[])
{
    int array[10];
    int max = 0;
    for (size_t i = 0; i < 10; i++)
    {
       printf("请输入第%d个整数:\n",i+1);
       scanf("%d",&array[i]);
    }
    fun(array,&max);
    printf("最大值为:%d",max);
    /* code */
    return 0;
}
