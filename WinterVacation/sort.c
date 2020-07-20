#include <stdio.h>
int main()
{
    int a[] = {0,900,-222,33,-1,3,3};
    int temp;
    int n = sizeof(a)/sizeof(int);
    printf("n= %d\n",n);
    for (int i = 0; i < n-1; i++)
    {
        for (int f = 0; f < n-i-1; f++)
        {
            if (a[f] < a[f+1])
            {
                temp = a[f];
                a[f] = a[f+1];
                a[f+1] = temp;
            }
    
        }
        
    }
    for (int i = 0; i < n; i++)
    {
         printf("%d   %d\n",i,a[i]);
    }
    
    
}