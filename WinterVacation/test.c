#include "stdio.h"
int sum(int,int);
int main()
{
    // printf("%ld\n",sizeof(char));
    // printf("%ld\n",sizeof(short));
    // printf("%ld\n",sizeof(int));
    // printf("%ld\n",sizeof(long));
    // printf("%ld\n",sizeof(long long));

  int i = 'a'-'A';
  int c = sum('A','a');
  
printf("%d\n",c);
 int d = "2"+2;
 printf("d = %d\n",d);
 

 int aa = 12;
 printf("%p \n",&aa);
 int *bb = &aa;
 *bb = 14;
printf("%d  %p\n",aa,bb);

    return 0;

}

int sum(int begin,int end)
{
  printf("%d  %d\n",begin,end);
  int count = 0;
  for (int i = begin; i <= end; i++)
  {
    count +=i;
  }
  return count;
  
}