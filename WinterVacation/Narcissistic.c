#include "stdio.h"
/*
水仙花数
*/
int main()
{
    int i,j,k,n;
    int result;
    // printf("请输入一个三位数： ");
    //  printf("请输入一个数： ");
    // scanf("%d",&n);
    // if (n/100>=1&&n/100<=9)
    // {
        for (n = 100; n <= 999; n++)
        {
     
        i = n / 100;
        j = (n/10)%10;
        k = n % 10;
        result = i*i*i + j*j*j + k*k*k;
        if (result == n)
        {
           printf("%d ",result);
        }
        
        }
        
       
    // }else 
    // {
    //     printf("输入的位数不对");
    // }
    
    
    return 0;
}