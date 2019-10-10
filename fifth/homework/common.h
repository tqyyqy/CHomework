
#include <stdio.h>
#include <stdlib.h>


#define OK   0
#define ERROR  1
#define TRUE 1
#define FALSE 0

#define ElemType char
typedef struct Node    /*结点类型定义*/ 
{ 
	ElemType data;
	struct Node  * next;
}Node, *LinkList;  /* LinkList为结构指针类型*/