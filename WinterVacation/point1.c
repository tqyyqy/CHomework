#include "stdio.h"
void f(int *);
void array_point(int *p);
int main()
{
    //指针就是保存地址的变量
    int i = 100;
    int a = 35;
    int *p = &i;//初始化时将地址赋予指针
    int b[] = {1,2,3,4,5,};
    f(p);//转入指针地址
    array_point(b);
    p = &a;//修改指针指向变量
    printf(" main *p = %d\n",*p);
/*const 与 指针*/

int ii = 11;
int jj = 22;
const int *p1 = &ii;
int const *p2 = &ii;
int *const p3 = &ii;

p1 = &jj; //p1,p2相同  可以修改指针指向 但不能通过指针修改变量值如*p1 = 33;
*p3 = 33;//p3可以通过指针修改变量值 但不能修改指针指向如 p3 = &i;
printf("*p1 = %d \n",*p1);
printf("*p3 = %d \n",*p3);


    return 0;
}
void f(int *p)
{
    printf("p = %p\n",p);
    printf("*p = %d\n",*p);//*p为指针所指代的变量

    *p = 50;//通过指针修改值

}
void array_point(int *p)//数组是特殊的指针，*p 与p[]等价
{
    p[0] = 100;
    for (int  i = 0; i < 5; i++)
    {
       printf("array[%d] = %d\n",i,p[i]);
    }
    
    printf("*++p = %d \n",*++p);
    

}