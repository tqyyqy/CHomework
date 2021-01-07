#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    double sum = 0;
    int number[100];
    int cnt = 0;
    scanf("%d",&x);
    while(x!=-1)
    {
        sum = sum+x;
        number[cnt] = x;
        cnt++;
        scanf("%d",&x);

    }
    if(cnt>0)
    {
        printf("result = %f\n",sum/cnt);
    }
    return 0;
}
