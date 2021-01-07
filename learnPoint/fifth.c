#include <stdio.h>
void minmax(int a[],int len,int *min,int *max);
void swap(int *pa,int *pb);
int divide(int a,int b,int *result);
int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 6;
    swap(&a,&b);
    printf("a = %d , b = %d\n",a,b);
    //数组变量是const的指针 不能被赋值  int * const arr
    int arr[] = {2,1,4,5,6,3,2,1,3,10,7,8,3,2,};
        printf("main sizeof(a) = %lu\n",sizeof(arr));
    printf("main  a pointer = %p\n",arr);
    int min,max;
    minmax(arr,sizeof(arr)/sizeof(arr[0]),&min,&max);
    int *p = &min;
    //[]操作符可以对指针使用
    printf("p[0] = %d , *p = %d\n",p[0],*p);
    printf("min = %d , max = %d\n",min,max);
    printf("*arr = %d\n",*arr);
    int result;
    if(divide(0,100,&result))
    {
        printf("%d\n",result);
    }
    return 0;
}
//变量的交换只能用指针完成
void swap(int *pa,int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
//程序有多个返回值 在参数表中 int a[] 与 int *a 等价
void minmax(int *a,int len,int *min,int *max)
{
    printf("minmax sizeof(a) = %lu\n",sizeof(a));
    printf("minmax  a pointer = %p\n",a);
    //数组也是指针，可以在函数里改变值
    a[0] = 1000;
    *min = *max = a[0];
    for (int i = 0; i < len; i++)
    {
        if (a[i]>*max)
        {
            *max = a[i];
        }else if (a[i]<*min)
        {
            *min = a[i];
        }
        
        
    }
    
}
//返回值用来标示函数是否正确执行，c++和java可以用异常实现
int divide(int a,int b,int *result)
{
    int ret = 1;
    if (b == 0)
    {
        ret = 0;
    }else
    {
        *result = a/b;
    }
    return ret;
    
}