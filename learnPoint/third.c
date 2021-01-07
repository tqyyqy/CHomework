#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    int p;
    p = (int)&i;
    printf("取地址的方式\n");
    printf("0x%x\n",p);

    printf("%p\n",&p);
    printf("%p\n",&i);
    printf("%lu\n",sizeof(&i));
    //printf("%lu\n",sizeof(int));
    printf("数组的地址\n");
    int a[10];
    printf("%p\n",a);
    printf("%p\n",&a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);

    return 0;
}
