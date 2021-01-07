#include <stdio.h>
void f(int *p);
int main(int argc, char const *argv[])
{
    //指针就是保存地址的变量
    int i = 10;
    int* p = &i;
    int *a,b;//a是指针  b是int的变量
    //&为取地址运算符
    printf("%p\n",&i);
    f(&i);
    printf("i = %d\n",i);
    
    return 0;
}
void f(int *p)
{
    printf("p = %p\n",p);
    //*为单目运算符，用来访问指针上的值所表示的地址上的变量
    printf("*p = %d\n",*p);
    //通过地址修改值 *p是运算的结果为左值而非变量
    *p = 26;
}
