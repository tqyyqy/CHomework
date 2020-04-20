#include "stdio.h"
int main()
{
    float foot,inch,cm,temp;
    float coefficient = 0.3048;
    printf("type the centimeter,please\n");
    scanf("%f",&cm);
    printf("sanned number is %f \n",cm);
    foot = (cm/100)/coefficient;
    inch = (foot - (int)foot)*12;

    printf("foot by float: %d \n the inch :%d",(int)foot,(int)inch); 
    
    return 0;
}
