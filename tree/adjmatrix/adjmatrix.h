#include "stdlib.h"
#include "stdio.h"

#define MAX_VERTEX_NUM 10             /*��ඥ�����*/
#define INFINITY 32768             /*��ʾ����ֵ������*/
#define True 1
#define False 0
#define Error -1
#define Ok 1

typedef enum{DG, DN, UDG, UDN} GraphKind;  /*ͼ�����ࣺDG��ʾ����ͼ, DN��ʾ������, UDG��ʾ����ͼ, UDN��ʾ������*/
typedef char VertexData;    /*���趥������Ϊ�ַ���*/

typedef struct ArcNode
{
	int adj;   /*������Ȩͼ����1��0��ʾ�Ƿ����ڣ��Դ�Ȩͼ����ΪȨֵ����*/

} ArcNode;

typedef struct
{
	VertexData vexs[MAX_VERTEX_NUM];                        /*��������*/
	ArcNode arcs[MAX_VERTEX_NUM][MAX_VERTEX_NUM];   /*�ڽӾ���*/
	int vexnum,arcnum;          /*ͼ�Ķ������ͻ���*/
	GraphKind kind;                 /*ͼ�������־*/
}AdjMatrix;      /*(Adjacency Matrix Graph)*/

int LocateVertex(AdjMatrix *G,VertexData v)    /*�󶥵�λ�ú���*/
{
	int j=Error,k;
	for(k=0;k<G->vexnum;k++)
		if(G->vexs[k]==v)
		{ 
			j=k; 
			break; 
		}
	return(j);
}
