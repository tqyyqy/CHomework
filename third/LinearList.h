/*  
@fileName:LinearList.h
@author 飞云川
@since 2019-09-19
@describe 定义线性表结果的头文件
*/
#include<stdio.h>
#define ssss int //定义函数别名
#define OK 1
#define ERROR 0
#define MAXSIZE 100

typedef struct 
{
    /* data */
    ssss ss[MAXSIZE];
    int last;
}LinerList;
/* LinearList.h   END */