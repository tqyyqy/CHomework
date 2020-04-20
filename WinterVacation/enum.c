#include <stdio.h>
enum  COLOR{RED=2,YELLOW,GREEN};

void printfEnum(enum COLOR c);

int main(int argc, char const *argv[])
{
   printfEnum(YELLOW);
    return 0;
}
void printfEnum(enum COLOR c)
{
    printf("%d",c);
}