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
    printf("�������һ������:\n");
    scanf("%d",&a);
    printf("������ڶ�������:\n");
    scanf("%d",&b);
    result = fun(&a,&b);
    printf("result = %d",result);

    return 0;
}
