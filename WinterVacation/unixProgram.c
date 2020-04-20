#include "stdio.h"
int main(int argc, char const *argv[])
{
    for(int i = 0;i<argc;i++)
    {
        //在main函数后有多个参数
        printf("%d : %s \n",i,argv[i]);
    }
    return 0;
}
