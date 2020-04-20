#include <stdio.h>
#include <time.h>
void PrintNOne(int N);
void PrintNTwo(int N);
clock_t start,stop;
double duration;
int main()
{
    int N;
    printf("type a number:\n");
    scanf("%d",&N);
    start = clock();
    PrintNOne(N);
    stop = clock();
    duration = ((double)(stop-start));
    printf("%f",duration);
    printf("%f",CLK_TCK);
    PrintNTwo(N);
    return 0;
}

void PrintNOne(int N)
{
    int i;
    for(i=1;i<=N;i++){
        printf("%d\n",i);
    }
    return;
}

void PrintNTwo(int N)
{
    if(N){
        printf("%d\n",N);
        PrintNTwo(--N);
    }
    return;
    
}


