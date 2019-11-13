#include <stdio.h>
#include <malloc.h>
#include <conio.h>

typedef char DataType;

typedef struct Node
{
	DataType data;
	int      Ltag;
	int      Rtag;
	struct Node *LChild;
	struct Node *RChild;
}BiTNode, *BiTree;

BiTree pre;

void CreateBiTree(BiTree *bt)
{
	char ch;
	ch = getchar();
    if(ch=='.') *bt=NULL;
    else 
	{
		*bt=(BiTree)malloc(sizeof(BiTNode)); //����һ���½��
        (*bt)->data=ch;
		(*bt)->Ltag=0;
		(*bt)->Rtag=0;
        CreateBiTree(&((*bt)->LChild)); //����������
        CreateBiTree(&((*bt)->RChild)); //����������
	}
}

void  Inthread(BiTree root)
/* ��root��ָ�Ķ�������������������������preʼ��ָ��շ��ʹ��Ľ�㣬���ֵΪNULL*/
{
	if (root!=NULL)
	{ 
		Inthread(root->LChild);  /* ������������ */
		if (root->LChild==NULL)
		{
			root->Ltag=1; 
			root->LChild=pre;  /*��ǰ������ */
		}
		if (pre!=NULL&& pre->RChild==NULL)  /* �ú������ */
		{
			pre->RChild=root;
			pre->Rtag=1;
		}
	pre=root;
	Inthread(root->RChild);  /*������������*/
	}
}	

BiTNode * InPre(BiTNode *p)
/* �����������������в���p������ǰ��, ����preָ�뷵�ؽ�� */
{  
	BiTNode *q;
	if(p->Ltag==1)
		pre = p->LChild;  /*ֱ����������*/
	else 
	{ /* ��p���������в���"�����¶�"��� */
		for(q = p->LChild;q->Rtag==0;q=q->RChild);
		pre=q;
	}
	return(pre);
}


BiTNode * InNext(BiTNode * p) 
/*�����������������в���p�������̽�㣬����nextָ�뷵�ؽ��*/
{ 
	BiTNode *Next;
	BiTNode *q;
	if (p->Rtag==1)  
		Next = p->RChild;  /*ֱ����������*/
	else
	{ /*��p���������в���"�����¶�"���*/
		if(p->RChild!=NULL)
		{
			for(q=p->RChild; q->Ltag==0 ;q=q->LChild);
			Next=q; 
		}
		else
			Next = NULL;
		
	} 
	return(Next);
}

BiTNode* TinFirst(BiTree root)
{
	BiTNode *p;
	p = root;
	if(p)
		while(p->LChild!=NULL)
			p=p->LChild;
	return p;
}

void TinOrder(BiTree root)
{
	BiTNode *p;
	p=TinFirst(root);
	while(p!=NULL)
	{
		printf("%c  ",p->data);
		p=InNext(p);
	}
}

void InsNode(BiTNode *p ,  BiTNode *r)
{
	BiTNode *s;
	if(p->Rtag==1)    /* p���Һ��� */
	{
		r->RChild=p->RChild;  /* p�ĺ�̱�Ϊr�ĺ�� */
		r->Rtag=1;
		p->RChild=r;  /* r��Ϊp���Һ��� */
		r->LChild=p;  /* p��Ϊr��ǰ�� */
		r->Ltag=1;
	}
	else  /* p���Һ��� */
	{ 
		s=p->RChild;
		while(s->Ltag==0)
			s=s->LChild;  /* ����p������������"�����¶�"��� */
		r->RChild=p->RChild;  /* p���Һ��ӱ�Ϊr���Һ��� */
		r->Rtag=0;
		r->LChild=p;  /* p��Ϊr��ǰ�� */
		r->Ltag=1;
		p->RChild=r;  /* r��Ϊp���Һ��� */
		s->LChild=r;  /* r��Ϊpԭ����������"�����¶�"����ǰ�� */
	}
}

void main()
{
	BiTree T;
//	char c;
	BiTree p,q;
	BiTNode *r;
	printf("����չ����������н���������������������:\n");
    CreateBiTree(&T);
	pre = NULL;
	Inthread(T);
    p=T->LChild->RChild;
	q =InPre(p);
	printf("\nǰ��Ϊ%c",q->data);
	q =InNext(p);
	printf("\n���Ϊ%c",q->data);
	printf("\n");

	q=TinFirst(T);
	printf("\n��һ�����Ϊ%c",q->data);

	r=(BiTNode*)malloc(sizeof(BiTNode));
	r->data = 'Q';
	r->LChild = NULL;
	r->RChild = NULL;
	r->Ltag = 0;
	r->Rtag = 0;
	InsNode(p,r);

	printf("����������:\n");
    TinOrder(T);

	
	getch();
}