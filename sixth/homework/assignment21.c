#include<stdio.h>
#include "common.h"
Complex createComplex(float a, float b)
{
    Complex z;
    z.re = a;
    z.im = b;
    return z;
}

void printComplex(char str[],Complex z)
{
    printf("%s  %.2f+%.2fi\n",str,z.re,z.im);
}
//加法
Complex add(Complex a,Complex b)
{
    Complex result;
    result.re = a.re+b.re;
    result.im = a.im+b.im;
    return result;
}
//乘法
Complex multiplication(Complex a,Complex b)
{
    Complex result;
    result.re = a.re*b.re - a.im*b.im;
    result.im = a.im*b.re + a.re*b.im;
    return result;
}
//减法
Complex subtraction(Complex a,Complex b)
{
    Complex result;
    result.re = a.re-b.re;
    result.im = a.im-b.im;
    return result;
}
int split(Complex a,float *re ,float *im)
{
    *re = a.re;
    *im = a.im;
   return 0;
}

int main(int argc, char const *argv[])
{
    float a,b,c,d,re,im;
    Complex result;
    printf("请输入两个复数:\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    Complex c1 = createComplex(a,b);
    Complex c2 = createComplex(c,d);
    printComplex("第一个复数:",c1);
    printComplex("第二个复数:",c2);
    result = add(c1,c2);
    printComplex("加法答案:",result);
    result = subtraction(c1,c2);
    printComplex("求差答案:",result);
    result = multiplication(c1,c2);
    printComplex("求积答案:",result);
    split(result,&re,&im);
    printf("实数部分: %.2f 虚数部分: %.2f",re,im);


    return 0;
}
