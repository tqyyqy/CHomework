
#include "bitree.h"

int PostTreeDepth(BiTree bt)   /* 后序遍历求二叉树的高度递归算法 */
{
	int hl,hr,max;
	if(bt!=NULL)
	{
		hl=PostTreeDepth(bt->LChild);  /* 求左子树的深度 */
		hr=PostTreeDepth(bt->RChild);  /* 求右子树的深度 */
		max=hl>hr?hl:hr;              /* 得到左、右子树深度较大者*/
		return(max+1);               /* 返回树的深度 */
	}
	else return(0);             /* 如果是空树，则返回0 */
}

void main()
{
	BiTree T;
	int h;
	printf("按扩展先序遍历序列建立二叉树，请输入序列:\n");
    CreateBiTree(&T);
	h = PostTreeDepth(T);
	printf("The depth of this tree is:%d\n",h);
	getch();
}