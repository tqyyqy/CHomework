#include<stdio.h>
#include "common.h"

int fun(int *n)
{
    int result = 0;
   
    for (int i = 1; i<=*n; i++)
    {
        result = result+i;
    }
    return result;
    
}

int main(int argc, char const *argv[])
{
    int a,result;
    /* code */
    printf("请输入一个整数:\n");
    scanf("%d",&a);
    result = fun(&a);
    printf("result = %d",result);
    return 0;
}
