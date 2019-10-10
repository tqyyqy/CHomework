#include <stdio.h>
#include <stdlib.h>
#include "common.h"

// 以头插法创建链表
LinkList  CreateFromHead()
/*通过键盘输入表中元素值，利用头插法建单链表,并返回该单链表头指针L*/
{ 
	LinkList   L;
	Node   *s;
	char 	c;
	int 	flag=1;
	L=(LinkList)malloc(sizeof(Node));     /*建立头结点*/
	L->next=NULL;                         /*建立空的单链表L*/

	while(flag)   /* flag初值为1，当输入"$"时，置flag为0，建表结束*/
	{
		c=getchar();
		//如果当前读取下一个字符为换行符，则跳过本次输入
		if (c=='\n')
		{
			continue;
		}
		else if (c!='$')
		{
			s=(Node*)malloc(sizeof(Node)); /*建立新结点s*/
			s->data=c;
			s->next=L->next;/*将s结点插入表头*/
			L->next=s;	
		}
		else
		{
			return L;
		}
	}
	return L;
}
// 按序号查找
Node *Get(LinkList L,int i)
{
	int j;
	Node *p;
	p=L;j=0;
	while (p->next!=NULL&&j<i)
	{
		p=p->next;
		j++;
	}
	if (i==j)
	{
		return p;
	}else
	{
		return NULL;
	}
	
}
// 按值查找
Node *Locate(LinkList L,ElemType key)
{

	Node *p;
	p=L->next;
	while (p!=NULL)
	{
		if (p->data!=key)
		{
			p=p->next;
		}else
		{
			break;
		}
		
		
	}
	return p;
}

// 插入函数
int IntList(LinkList L,int i,ElemType e)
{
	Node *pre ,*s;
	int k;
	pre=L;k=0;
	while (pre!=NULL&&k<i-1)
	{
		pre=pre->next;
		k=k+1;
	}
	if (k!=i-1)
	{
		printf("插入位置不合理!");
		return ERROR;
	}
	s=(Node*)malloc(sizeof(Node));
	s->data=e;
	s->next=pre->next;
	pre->next=s;
	return OK;
}
int Delete(LinkList l,int i)
{
	Node *p,*r;
	int k;
	p=l;k=0;
	while (p -> next!=NULL&&k<i-1)
	{
		p=p->next;
		k=k+1;
	}
	if (k!=i-1)
	{
		printf("删除位置%d非法\n",i);
		return ERROR;
	
	}
	r=p->next;
	p->next=p->next->next;
	
	free(r);
	return OK;


}