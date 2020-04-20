#include "stdio.h"
/*
下三角输出乘法表
*/
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           printf("%d * %d = %d",j , i ,i*j);
           if (i==j)
           {
               printf("\n");
           }else 
           {
               printf("  ");
           }
           
           
        }
        
    }
    return 0 ;
}