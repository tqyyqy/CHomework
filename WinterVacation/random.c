#include "stdio.h"
int main()
{
    int i,j,k,n,c;
    printf("请输入一个数:");
    scanf("%d",&n);
    c = 0;
    for (i = n; i <= n+3; i++)
    {
        for (j = n ;j <= n+3; j++)
        {
            for (k = n; k <= n+3; k++)
            {
                if (i!=j&&i!=k&&j!=k)
                {
                    
                    printf("%d",i*100+j*10+k);
                    if (++c%6==0)
                    {
                        printf("\n");
                    }else 
                    {
                       printf("  ");
                    }
                    
                    

                }
                
            }
            
        }
        
    }
    
}