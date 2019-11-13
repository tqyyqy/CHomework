#include "bitree.h"

int depth;

void PreTreeDepth(BiTree bt, int h)
/* ǰ������������bt�߶ȵĵݹ��㷨��hΪbtָ�������ڲ�Σ���ֵΪ1*/
/*depthΪ��ǰ��õ�����Σ�Ϊȫ�ֱ���������ǰ��ֵΪ0 */
{
  if(bt!=NULL)
  {
     if(h>depth)   depth = h;     /*����ý����ֵ����depth������depth��ֵ*/
     PreTreeDepth(bt->LChild, h+1);  /* ���������� */
     PreTreeDepth(bt->RChild, h+1);  /* ���������� */
  }
}


void main()
{
	BiTree T;
//	int h;
	depth = 0;
	printf("����չ����������н���������������������:\n");
    CreateBiTree(&T);
	PreTreeDepth(T,1);
	printf("The depth of this tree is:%d\n",depth);
	getch();
}