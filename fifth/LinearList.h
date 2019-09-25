#include <stdio.h>
#define ElemType char 
// typedef char ElemType;
typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node,*LinkList;
