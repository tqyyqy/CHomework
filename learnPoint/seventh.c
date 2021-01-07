#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,};
    int *p = arr;//数组是特殊指针，不用&取地址
    int *p1 = &arr[6];//数组中的值为变量，需要使用&取地址
    printf("%d  %d\n",*(p+1),arr[1]);
    printf("%d\n",*(p+1));
    //指针地址相减
    printf("p1-p = %ld\n",p1-p);
    printf("%d\n",*++p);
    printf("%d\n",*++p);
    printf("%d\n",*++p);

    return 0;
}
