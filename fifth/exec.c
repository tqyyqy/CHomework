
#include "linklist.h"

int main()
{
	LinkList l;
	Node *p;
    int i;// ���
	char c;//key
	int state;
    Node *d;


	printf("��ͷ�巨����������,��������������,��$����!\n");
	l = CreateFromHead();
	p = l->next;
	while(p!=NULL)
	{
		printf("ԭʼ���� [%c]  [%p]\n",p->data,p);
		p=p->next;
		
	}
	printf("=====���������Ų���=====\n");
	printf("�������ѯ���:\n");
	scanf("%d",&i);
	d = Get(l,i);
	if (d==NULL)
	{
		printf("��ŷǷ�!\n");
	}else
	{
		printf("��Ų�ѯ�Ľ��Ϊ:%c\n",d->data);
	}
	printf("=====������İ�ֵ����=====\n");
	printf("�������ѯ���ַ�\n");
	getchar();//���ջ��з�
	scanf("%c",&c);
	d = Locate(l,c);
	if (d==NULL)
	{
		printf("δ�ҵ���ѯ�ַ�!\n");
	}else
	{
		printf("�ַ�����,�ڴ��ַΪ:%p\n",d);
	}



	printf("=====������Ĳ������=====\n");
	printf("������������:\n");
	scanf("%d",&i);
	printf("�����������ַ�\n");
	getchar();//���ջ��з�
	scanf("%c",&c);
	state = IntList(l,i,c);
	if (state)
	{
		printf("����ʧ��!\n");
	}else
	{
		printf("����ɹ�!\n");
	}
	
	p = l->next;
	while(p!=NULL)
	{
		printf("�޸ĺ����� [%c]  [%p]\n",p->data,p);
		p=p->next;
		
	}
	

	return OK;


}
