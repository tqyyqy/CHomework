#include "bitree.h"

int depth;

void PreTreeDepth(BiTree bt, int h)
/* 前序遍历求二叉树bt高度的递归算法，h为bt指向结点所在层次，初值为1*/
/*depth为当前求得的最大层次，为全局变量，调用前初值为0 */
{
  if(bt!=NULL)
  {
     if(h>depth)   depth = h;     /*如果该结点层次值大于depth，更新depth的值*/
     PreTreeDepth(bt->LChild, h+1);  /* 遍历左子树 */
     PreTreeDepth(bt->RChild, h+1);  /* 遍历右子树 */
  }
}


void main()
{
	BiTree T;
//	int h;
	depth = 0;
	printf("按扩展先序遍历序列建立二叉树，请输入序列:\n");
    CreateBiTree(&T);
	PreTreeDepth(T,1);
	printf("The depth of this tree is:%d\n",depth);
	getch();
}