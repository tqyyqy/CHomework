#include <stdio.h>
#include <stdlib.h>
//c99之前无法用变量做数组定义大小，使用动态内存分配

int main(int argc, char const *argv[])
{
    int number;
    int *a;
    int i;
    printf("请输入大小\n");
    scanf("%d",&number);
    a = (int *)malloc(number*sizeof(int));
    //a可以当作一个数组进行使用
    for (int i = 0; i < number; i++)
    {
        scanf("%d",a+i);
        //scanf("%d",&a[i]);
    }
    for (int i = number-1; i >= 0; i--)
    {
        printf("%d\n",*(a+i));
        //printf("%d\n",a[i]);
    }
    
    free(a);
    
    return 0;
}
