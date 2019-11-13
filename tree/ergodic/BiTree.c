
#include "bitree.h"

void Visit(char ch)
{
	printf("%c  ",ch);
}

void  PreOrder(BiTree root) 
/*�������������, rootΪָ�������(��ĳһ����)������ָ��*/
{
	if (root!=NULL)
	{
		Visit(root ->data);  /*���ʸ����*/
		PreOrder(root ->LChild);  /*�������������*/
		PreOrder(root ->RChild);  /*�������������*/
	}
}

void  InOrder(BiTree root)  
/*�������������, rootΪָ�������(��ĳһ����)������ָ��*/
{
	if (root!=NULL)
	{
		InOrder(root ->LChild);   /*�������������*/
		Visit(root ->data);        /*���ʸ����*/
		InOrder(root ->RChild);   /*�������������*/
	}
}

void  PostOrder(BiTree root)  
/* ���������������rootΪָ�������(��ĳһ����)������ָ��*/
{
	if(root!=NULL)
	{
		PostOrder(root ->LChild); /*�������������*/
		PostOrder(root ->RChild); /*�������������*/
		Visit(root ->data);       /*���ʸ����*/
	}
}

/*
int PostTreeDepth(BiTree bt)   / * ���������������ĸ߶ȵݹ��㷨 * /
{
	int hl,hr,max;
	if(bt!=NULL)
	{
		hl=PostTreeDepth(bt->LChild);  / * ������������� * /
		hr=PostTreeDepth(bt->RChild);  / * ������������� * /
		max=hl>hr?hl:hr;              / * �õ�����������Ƚϴ���* /
		return(max+1);               / * ����������� * /
	}
	else return(0);             / * ����ǿ������򷵻�0 * /
}*/


/*
void PrintTree(BiTree Boot,int nLayer)  / * ��������״��ӡ�Ķ����� * /
{
	if(Boot == NULL) return;
	PrintTree(Boot->RChild,nLayer+1);
	for(int i=0;i<nLayer;i++)
		printf("  ");
	printf("%c\n",Boot->data);
	PrintTree(Boot->LChild,nLayer+1);
}*/


void main()
{
	BiTree T;
//	int h;
//	int layer;
//	int treeleaf;
//	layer = 0;
	
    CreateBiTree(&T);
	printf("�����������Ϊ:");
	PreOrder(T);
	printf("\n�����������Ϊ:");
	InOrder(T);
	printf("\n�����������Ϊ:");
	PostOrder(T);
/*	h = PostTreeDepth(T);*/
/*    printf("The depth of this tree is:%d\n",h);*/
/*	printf("treeleaf=%d\n",LeafCount);*/
/*	PrintTree(T,layer);*/
	getch();
}