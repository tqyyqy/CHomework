 #include<stdio.h>
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
    
        while (1)
        {
            execfact();
        }
        
     
    }