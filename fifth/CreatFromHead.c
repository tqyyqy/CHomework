
#include <stdio.h>
#include <stdlib.h>

#define ElemType char
typedef struct Node    /*������Ͷ���*/ 
{ 
	ElemType data;
	struct Node  * next;
}Node, *LinkList;  /* LinkListΪ�ṹָ������*/


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
		if(c!='$')
		{
			s=(Node*)malloc(sizeof(Node)); /*�����½��s*/
			s->data=c;
			s->next=L->next;/*��s�������ͷ*/
			L->next=s;
		}
		else
			flag=0;
	}
	return L;
}

Node* Get(LinkList L ,int i)
{
    int j;
    Node * p;
    p=L;j=0;
    while (p->next!=NULL&&j<i)
    {
        p=p->next;
        j++;
    }
    if (i==j)
    {
        return p;
    }
    else
    {
        return NULL;
    }
    
    

} 


void main()
{
	LinkList l;
	Node *p;
    int i;// ���
    Node *d;

	printf("��ͷ�巨����������,��������������,��$����!\n");
	l = CreateFromHead();
	p = l->next;
	while(p!=NULL)
	{
		printf("%c\n",p->data);
		p=p->next;
	}
    scanf("%d",&i);
    printf("��ǰ�������%d\n",i);
    d = Get(l,i);
    printf("d = %s\n",d->data);


}
