
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

#define ElemType char
typedef struct Node    /*结点类型定义*/ 
{ 
	ElemType data;
	struct Node  * next;
}Node, *LinkList;  /* LinkList为结构指针类型*/

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


int main()
{
	LinkList l;
	Node *p;
    int i;// 序号
	char c;//key
	int state;
    Node *d;


	printf("用头插法建立单链表,请输入链表数据,以$结束!\n");
	l = CreateFromHead();
	p = l->next;
	while(p!=NULL)
	{
		printf("数据 [%c]  [%p]\n",p->data,p);
		p=p->next;
		
	}
	printf("请输入查询序号:\n");
	scanf("%d",&i);
	d = Get(l,i);
	if (d==NULL)
	{
		printf("序号非法");
	}else
	{
		printf("序号查询的结果为:%c\n",d->data);
	}
	printf("请输入查询的字符\n");
	getchar();//吸收换行符
	scanf("%c",&c);
	d = Locate(l,c);
	if (d==NULL)
	{
		printf("未找到查询字符");
	}else
	{
		printf("字符查询的位置为:%p\n",d);
	}


	printf("请输入插入序号:\n");
	scanf("%d",&i);
	printf("请输入插入的字符\n");
	getchar();//吸收换行符
	scanf("%c",&c);
	state = IntList(l,i,c);
	if (state)
	{
		printf("插入失败");
	}else
	{
		printf("插入成功");
	}
	
	

	return OK;


}
