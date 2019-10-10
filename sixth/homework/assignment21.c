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
//�ӷ�
Complex add(Complex a,Complex b)
{
    Complex result;
    result.re = a.re+b.re;
    result.im = a.im+b.im;
    return result;
}
//�˷�
Complex multiplication(Complex a,Complex b)
{
    Complex result;
    result.re = a.re*b.re - a.im*b.im;
    result.im = a.im*b.re + a.re*b.im;
    return result;
}
//����
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
    printf("��������������:\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    Complex c1 = createComplex(a,b);
    Complex c2 = createComplex(c,d);
    printComplex("��һ������:",c1);
    printComplex("�ڶ�������:",c2);
    result = add(c1,c2);
    printComplex("�ӷ���:",result);
    result = subtraction(c1,c2);
    printComplex("����:",result);
    result = multiplication(c1,c2);
    printComplex("�����:",result);
    split(result,&re,&im);
    printf("ʵ������: %.2f ��������: %.2f",re,im);


    return 0;
}
