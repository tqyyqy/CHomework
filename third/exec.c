/*  
@fileName:exec.c
@author 飞云川
@since 2019-09-19
@describe 执行查找函数
*/
#include "LinearList.h"

int Locate(LinerList L,ssss e)
{
    int i;
    while ((i<=L.last)&&(L.ss[i]!=e))
    {
        i++;
    }
    if (i<=L.last)
    {
       return i+1;
    }
    else
    {
        return -1;
    }   
}
int main(int argc, char const *argv[])
{
    LinerList l;
    int p,q,r;
    int i;
    printf("请输入线性表的长度：\n");
    scanf("%d",&r);
    l.last = r--;
    printf("请输入线性表中个元素值:\n");
    for ( i = 0; i < l.last; i++)
    {
       scanf("%d",&l.ss[i]);
    }
    printf("请输入要查找的元素值:\n");
    scanf("%d",&q);
    p=Locate(l,q);
    if (p == -1)
    {
        printf("在此线性表中没有该元素\n");
        return OK;
    }else
    {
        printf("在此线性表中该元素的位置为%d\n",p);
        return ERROR;
    }
}
/* exec.c  END */