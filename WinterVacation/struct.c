#include "stdio.h"



 struct date  //定义date结构且声明 today 变量 （定义在方法外为全局定义）
    {
        int month;
        int day;
        int year;
    }today;
void printfDate(struct date d);
struct date printfDatePoint(struct date *d);

int main(int argc, char const *argv[])
{
    // struct date1  //定义date1 结构  （定义在方法内为局部变量）
    // {
    //     int month;
    //     int day;
    //     int year;
    // };
    // struct date1 today2;  //用date1结构声明 today2 变量
    
    //  struct // 匿名定义结构 声明该结构的 today1 变量
    // {
    //     int month;
    //     int day;
    //     int year;
    // }today1;


    struct date today1;
    today1.month = 4;
    today1.day = 9;
    today1.year=2020;

//结构的初始化
    struct date today2 = {7,31,2014}; //依次赋值
    struct date today3 = {.month=7,.year=2014}; //指定对象赋值  默认为0

//结构的赋值
    today2 = (struct date){6,9,1998};
    today3 = today2;
    

    printf("Today's date is %i-%i-%i. \n",today1.year,today1.month,today1.day);
    printf("Today's date is %i-%i-%i. \n",today2.year,today2.month,today2.day);
    printf("Today's date is %i-%i-%i. \n",today3.year,today3.month,today3.day); 



    struct date *pDate = &today;
    (*pDate).month = 4;
    pDate->year = 2019;// ->运算符代表 （*pDate）.
    printfDatePoint(pDate);//传指针
    printfDate(*pDate);//传变量
    printfDatePoint(pDate);//传指针

    return 0;
}

//拷贝一个
void printfDate(struct date d)
{
    printf("Today's date is %i-%i-%i. \n",d.year,d.month,d.day);
    d.year = 2008;  //值为局部变量

}
//指针传入
struct date printfDatePoint(struct date *d)
{
    printf("Today's date is %i-%i-%i. \n",d->year,d->month,d->day);
    d->year = 1970;//指针进行修改
    return *d;
}
