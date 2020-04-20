#include "stdio.h"
int main()
{
    char *string;
    // char string[8];
    scanf("%7s",string);//本次读入7个  后面的内容交给下次scanf
    
    printf("%s\n",string);
     scanf("%s",string);
    printf("%s\n",string);
    return 0;
}