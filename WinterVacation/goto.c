#include "stdio.h"
int main()
{
    for (int i = 0; i < 100; i++)
    {
         printf("%d\n",i);
       if (i==50)
       {
          goto out;
       }
       
    }
    out:
    printf("我跳出来啦");
    
}