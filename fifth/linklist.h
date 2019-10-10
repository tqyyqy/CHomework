#include <stdio.h>
#include <stdlib.h>
#include "common.h"
LinkList  CreateFromHead()
/*ͨ�������������Ԫ��ֵ������ͷ�巨��������,�����ظõ�����ͷָ��L*/
{ 
	LinkList   L;
	Node   *s;
	char 	c;
	int 	flag=1;
	L=(LinkList)malloc(sizeof(Node));     /*����ͷ���*/
	L->next=NULL;                         /*�����յĵ�����L*/

	while(flag)   /* flag��ֵΪ1��������"$"ʱ����flagΪ0���������*/
	{
		c=getchar();
		//�����ǰ��ȡ��һ���ַ�Ϊ���з�����������������
		if (c=='\n')
		{
			continue;
		}
		else if (c!='$')
		{
			s=(Node*)malloc(sizeof(Node)); /*�����½��s*/
			s->data=c;
			s->next=L->next;/*��s�������ͷ*/
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
		printf("����λ�ò�����!");
		return ERROR;
	}
	s=(Node*)malloc(sizeof(Node));
	s->data=e;
	s->next=pre->next;
	pre->next=s;
	return OK;
}