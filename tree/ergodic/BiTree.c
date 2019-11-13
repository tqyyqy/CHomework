
#include "bitree.h"

void Visit(char ch)
{
	printf("%c  ",ch);
}

void  PreOrder(BiTree root) 
/*先序遍历二叉树, root为指向二叉树(或某一子树)根结点的指针*/
{
	if (root!=NULL)
	{
		Visit(root ->data);  /*访问根结点*/
		PreOrder(root ->LChild);  /*先序遍历左子树*/
		PreOrder(root ->RChild);  /*先序遍历右子树*/
	}
}

void  InOrder(BiTree root)  
/*中序遍历二叉树, root为指向二叉树(或某一子树)根结点的指针*/
{
	if (root!=NULL)
	{
		InOrder(root ->LChild);   /*中序遍历左子树*/
		Visit(root ->data);        /*访问根结点*/
		InOrder(root ->RChild);   /*中序遍历右子树*/
	}
}

void  PostOrder(BiTree root)  
/* 后序遍历二叉树，root为指向二叉树(或某一子树)根结点的指针*/
{
	if(root!=NULL)
	{
		PostOrder(root ->LChild); /*后序遍历左子树*/
		PostOrder(root ->RChild); /*后序遍历右子树*/
		Visit(root ->data);       /*访问根结点*/
	}
}

/*
int PostTreeDepth(BiTree bt)   / * 后序遍历求二叉树的高度递归算法 * /
{
	int hl,hr,max;
	if(bt!=NULL)
	{
		hl=PostTreeDepth(bt->LChild);  / * 求左子树的深度 * /
		hr=PostTreeDepth(bt->RChild);  / * 求右子树的深度 * /
		max=hl>hr?hl:hr;              / * 得到左、右子树深度较大者* /
		return(max+1);               / * 返回树的深度 * /
	}
	else return(0);             / * 如果是空树，则返回0 * /
}*/


/*
void PrintTree(BiTree Boot,int nLayer)  / * 按竖向树状打印的二叉树 * /
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
	printf("先序遍历序列为:");
	PreOrder(T);
	printf("\n中序遍历序列为:");
	InOrder(T);
	printf("\n后序遍历序列为:");
	PostOrder(T);
/*	h = PostTreeDepth(T);*/
/*    printf("The depth of this tree is:%d\n",h);*/
/*	printf("treeleaf=%d\n",LeafCount);*/
/*	PrintTree(T,layer);*/
	getch();
}