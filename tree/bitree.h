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
		*bt=(BiTree)malloc(sizeof(BiTNode)); //����һ���½��
        (*bt)->data=ch;
		printf("%c ����������",ch);
        CreateBiTree(&((*bt)->LChild)); //����������
		printf("%c ����������",ch);
        CreateBiTree(&((*bt)->RChild)); //����������
	}
}