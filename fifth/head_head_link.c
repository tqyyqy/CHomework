#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct _node_s
{

    int             fd;
    int             data;
    struct _node_s  *next;
}node_t,*pnode_t;

pnode_t insert_nodehead(node_t *head);
int   travel_node(node_t  *head);
void destry(node_t * head);


int main(int argc, char **argv)
{

    pnode_t     node = NULL;
    pnode_t     head = NULL;
    int         i;


    head  = malloc(sizeof(pnode_t));
    head ->data = -1;
    head ->next = NULL;

    for(i=0;i<5;i++)
    {
        node  = malloc(sizeof(*node));
        if(NULL == node)
        {
            printf("malloc failure.\n");
            return -1;
        }
        else
        {
            node ->fd   = i;
            node ->data = i+1;
            node -> next =  head; 
            head         =  node;
            printf("add node[%d]: %d\n",node->fd,node->data);

        }


    }
    travel_node(head);
    //head = insert_nodehead(head);
    //travel_node(head); 
    destry( head);
    return 0;
}


node_t *  insert_nodehead(node_t *head)
{
    node_t   * new_node = NULL;

    new_node   = malloc(sizeof(*new_node));

    if(new_node == NULL)
    {
        printf("add node malloc failure\n");
        return NULL ;
    }
    new_node ->fd    = 0xee;
    new_node ->data  = 0xff;
    new_node ->next  = NULL;

    if(head == NULL)
    {
        head = new_node;
        printf("add new node [%d]: %d\n",new_node->fd,new_node->data);
    }
    else
    {
        new_node ->next = head;
        head            = new_node;
        printf("add node [%d]: %d\n",head->fd,head->data);
    }

    return head;
}


int travel_node(node_t  *head)
{

    node_t   *temp = head;
    if(NULL == temp->next)
    {
        printf("travel_node is failure \n");
        return -3;
    }

    while(temp)
    {

        if(temp ->next == NULL)
        {
            printf("travel_node[%d]: %d\n",temp->fd,temp->data);
            printf("travel_node finish\n");

        }   
        else
            printf("travel_node[%d]: %d\n",temp->fd,temp->data);

        temp = temp->next;


    }
    return 0;

}
void destry(pnode_t head)
{
   pnode_t   node = head;

   while(node)
   {
       head = head->next;
       printf("destroy[%d]\n",node->fd);
       free(node);
       node = head;
   }


}
