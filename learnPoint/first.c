#include <stdio.h>
int main(int argc, char const *argv[])
{
    int price = 0;
    int foot = 0;
    int inch = 0;
    printf("请输入英尺及英寸\n");
    scanf("%d  %d",&foot,&inch);
    printf("身高是%f\n",((foot+inch/12.0)*0.3048));
    int a[10] = {0};
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d   %d\n",i,a[i]);
    }
    
    return 0;
}
