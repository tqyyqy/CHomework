#include <stdio.h>
//pointer with const 指针与值分别都可以为const
void f(const int *p);
//void f1(int * const p);//这样定义没有意义 参数表中指针为const 无法传递参数
int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 1;
    //定义一个指针
    int *p1 = &a;
    p1 = &b;//指针可以被赋值
    *p1 = 50;//指针的值可以被赋值
    //定义一个指针为const的指针
    int * const p2 = &a;
    *p2 = 101;//指针为const可以修改指针指向变量的值 OK
    //p2 = &b; //指针为const不能修改指针指向 ERROR

    //定义一个值为const的指针
    const int *p3 = &a; //等同与int const *p3
    //*p3 = 12;//不能通过指针修改变量值
    p3 = &b; // 可以修改指针指向
    
    f(&a);//const声明参数可以传递普通变量
    printf("a = %d\n" ,a);
    const int ca = 1;
    f1(&ca);//const声明参数可以传递const变量


    const int arr[] = {1,2,3,4,5,};//数组中每个值都不会被修改



    return 0;
}
void f(const int *p)
{
    int i = 1;
    p = &i;

}
// void f1(int * const p)
// {
//    *p = 10;
// }