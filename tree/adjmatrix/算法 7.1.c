/*用邻接矩阵法创建有向网的算法如下：*/
#include "adjmatrix.h"


int CreateDN(AdjMatrix *G)  /*创建一个有向网*/
{ 
	int i,j,k,weight; 
	VertexData v1,v2;
	printf("输入图的弧数和顶点数\n");
	fflush(stdin);
    scanf("%d,%d",&G->arcnum,&G->vexnum); /*输入图的顶点数和弧数*/
    for(i=0;i<G->vexnum;i++)       /*初始化邻接矩阵*/
		for(j=0;j<G->vexnum;j++)
			G->arcs[i][j].adj=INFINITY;
    for(i=0;i<G->vexnum;i++)
	{
        printf("输入图的顶点\n");
		fflush(stdin);
		scanf("%c",&G->vexs[i]);  /* 输入图的顶点*/
	}
	for(k=0;k<G->arcnum;k++)
	{ 
		printf("输入一条弧的两个顶点及权值\n");
		fflush(stdin);
		scanf("%c,%c,%d",&v1,&v2,&weight);/*输入一条弧的两个顶点及权值*/
	  	i=LocateVertex(G,v1);
	    j=LocateVertex(G,v2); 
	    G->arcs[i][j].adj=weight;  /*建立弧*/
	} 
	return(Ok);
}

void main()
{
	AdjMatrix G;
	CreateDN(&G);
}