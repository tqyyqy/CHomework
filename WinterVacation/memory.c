#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    void *p;
    int cnt = 0;
    while ((p = malloc(100*1024*1024)))
    {
        cnt++;
    }
    
    printf("系统分配了%d00MB空间",cnt);
    return 0;

}