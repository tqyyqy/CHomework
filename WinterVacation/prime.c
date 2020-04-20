#include "stdio.h"
int main()
{

    int n;
    int i,j;
    int prime = 1;
    printf("请输入一个数字: ");
    scanf("%d",&n);
    for (j = 2; j <= n; j++)
    {
        for ( i= 2; i < j; i++)
        {
            if (j % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d ",j);
        }
        prime = 1;
    }
    
    return 0;
}