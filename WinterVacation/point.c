#include "stdio.h"
void swap(int *pa,int *pb);
int main()
{
    int a[]  = {1,2,3,4,5,6,7,8,9,12,13,14,15,17,21,23,55,};
    printf("%lu\n",sizeof(a));
    for (int i = 0; i < (sizeof(a)/sizeof(a[0])); i++)
    {
       printf("%d \t",a[i]);
    }

    int n = 4;
    int m = 5;
    swap(&n,&m);
    printf("n = %d  m = %d\n",n,m);
    return 0;
}
void swap(int *pa,int *pb)
{
    int t = *pa;
    printf("\n%p\n",pa);
    *pa = *pb;
    *pb = t;

}