/*  
@fileName:exec.c
@author 飞云川
@since 2019-09-19
@describe 执行查找函数
*/
#include "LinearList.h"
//线性表的查找
int Locate(LinerList L,ElemType e)
{
    int i;
    while ((i<=L.last)&&(L.elem[i]!=e))
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

//对线性表进行初始赋值
LinerList InitLinerlist()
{
    LinerList l;
    int i;
    printf("请输入线性表的长度：\n");
    scanf("%d",&l.last);
    printf("请依次输入线性表中个元素值:\n");
    for ( i = 0; i < l.last; i++)
    {
       scanf("%d",&l.elem[i]);
    }
    return l;

}
//线性表的插入
int InsList()
{
    LinerList list;
    int index,item,k;
    list = InitLinerlist();
    printf("当前线性表长度为%d,请输入位置\n",list.last);
    scanf("%d",&index);
    printf("请输入的值\n");
    scanf("%d",&item);
    if (list.last>=MAXSIZE)
    {
        printf("线性表到达最大长度，无法插入\n");
    }else if (index<0 || index > list.last+1)
    {
        printf("插入位置不合法\n");
    }else
    {
        for (k = list.last; k >= index; k--)
        {
            list.elem[k] = list.elem[k-1];
        }
        list.elem[index-1] = item;
        list.last = list.last+1;
    }
    printf("打印结果,长度为%d\n",list.last);
    for (size_t i = 0; i < list.last; i++)
    {
        printf("%d",list.elem[i]);
    }
    return OK;
}

int startLocate()
{
    LinerList l;
    int p,q;
    l = InitLinerlist();
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
int main(int argc, char const *argv[])
{
    int state = InsList();
    return state;
}
/* exec.c  END */