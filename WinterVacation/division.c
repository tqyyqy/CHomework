#include<stdio.h>

int main(){
    int u = 32;
    int v = 26;
    while (v!=0)
    {
        int temp = u % v;
        printf("%d",temp);
        printf("\n");

        u = v;
        v = temp;
    }
    printf("%d\n",v);
    return 0;

}
