#include "stdio.h"
int main()
{
    int n,m,t=1;
    int n1,m1;
    scanf("%d/%d",&n,&m);
    n1 = n;
    m1 = m;
    while (t!=0)
    {
       t = n %m;
       n = m;
       m = t;
    }
    n1 = n1/n;
    m1 = m1/n;
    
    
    printf("%d/%d",n1,m1);
}