#include<stdio.h>
int main()
{
	int a[] = {6,7,8,9,10};
	int *p = a;

	*(p++) += 123;
//	printf("%p , %p\n",p,++p);
	printf("%d , %d\n",*p,*++p);
	for(int i = 0; i < sizeof(a)/sizeof(int);i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
