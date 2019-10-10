#include<stdio.h>
#include "common.h"

int fun(int *a,int *b)
{
    if (*a==*b)
    {
        return TRUE;
    }else
    {
        return FALSE;
    }
    
}
int main(int argc, char const *argv[])
{
    int a,b;
    int result;
    printf("请输入第一个整数:\n");
    scanf("%d",&a);
    printf("请输入第二个整数:\n");
    scanf("%d",&b);
    result = fun(&a,&b);
    printf("result = %d",result);

    return 0;
}
