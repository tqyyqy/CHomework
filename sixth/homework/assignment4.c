#include<stdio.h>
#include "common.h"

int fun(int *a,int n,int *odd,int *even)
{
    int o = 0;
    int e = 0;

    for (size_t i = 0; i < n; i++)
    {
        // printf( "%d =%d=  ",a[i],a[i]%2);
        if (a[i]%2==1)
        {
            o = o + a[i];
        }else
        {
            e = e + a[i];
        }
        
    }
    *odd = o;
    *even = e;



}
int main(int argc, char const *argv[])
{
    int array[10];
    int odd,even;
    for (size_t i = 0; i < 10; i++)
    {
       printf("请输入第%d个整数:\n",i+1);
       scanf("%d",&array[i]);
    }
    fun(array,10,&odd,&even);
    printf("奇数之和 = %d , 偶数之和 = %d",odd,even);
    return 0;
}
