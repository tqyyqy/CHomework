#include<stdio.h>
    int Fib(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }else
        {
            return Fib(n-1) + Fib(n-1);
        }
        
    }
   
    int execmian()
    {

        int result;
        int i;
        printf("请输入一个数字:\n");
        scanf("%d",&i);
        result = Fib(i);
        printf("fib result = %d\n",result);
        return 0;
    }
    long factorial(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        return factorial(n - 1) * n;
        
    }
    int execfact()
    {
        long result;
        int n;
        printf("请输入一个数字:\n");
        scanf("%d",&n);

        result = factorial(n);
        printf("factorial result = %ld\n", result);
    

    }
    int main(int argc, char const *argv[])
    {
        // while (1)
        // {
        // execmian();
        // }
        while (1)
        {
            execfact();
        }
        
     
    }
    