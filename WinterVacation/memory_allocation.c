#include "stdio.h"
#include "stdlib.h"
int main(void)
{
    int number;
    int* a = 0;
    int i;
    printf("请输入一个变量: ");
    scanf("%d",&number);
    // int a[number]; //c99的数组声明
    a = (int *)malloc(number*sizeof(int));//ansi c的数组声明
    for ( i = 0; i < number; i++)
    {
       scanf("%d",&a[i]);
    }
    for (i = number-1; i > -1; i--)
    {
       printf("%d ",a[i]);
    }
    free(a);//ansi c将数组空间释放
    
    return 0;
}