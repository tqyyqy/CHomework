#include <stdio.h>
#include <malloc.h>
#include <conio.h>

typedef char DataType;

typedef struct Node
{
	DataType data;
	struct Node *LChild;
	struct Node *RChild;
}BiTNode, *BiTree;


void CreateBiTree(BiTree *bt)
{
	char ch;
	scanf("%c",&ch);
	getchar();
    if(ch=='.') *bt=NULL;
    else 
	{
		*bt=(BiTree)malloc(sizeof(BiTNode)); //生成一个新结点
        (*bt)->data=ch;
		printf("%c 生成左子树",ch);
        CreateBiTree(&((*bt)->LChild)); //生成左子树
		printf("%c 生成右子树",ch);
        CreateBiTree(&((*bt)->RChild)); //生成右子树
	}
}