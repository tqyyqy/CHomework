
#include <stdio.h>
#include <stdlib.h>


#define OK   0
#define ERROR  1
#define TRUE 1
#define FALSE 0

#define ElemType char
typedef struct Node    /*������Ͷ���*/ 
{ 
	ElemType data;
	struct Node  * next;
}Node, *LinkList;  /* LinkListΪ�ṹָ������*/