#include "stdio.h"
int main()
{
    int a,b,t;
    a = 17;
    b = 19;
do
{
    
    t = a%b;
    a = b;
    b = t;
    
} while (t>0);

   

   

    printf("a=%d b=%d t=%d \n",a,b,t);
    printf("gcd=%d\n",a);
    return 0;
}