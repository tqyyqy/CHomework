
#include "linklist.h"
int main(int argc, char const *argv[])
{

	LinkList l;
	Node *p;
    int i;// 序号
	char c;//key
	int state;
    Node *d;


	printf("用头插法建立单链表,请输入链表数据,以$结束!\n");
	l = CreateFromHead();
	p = l->next;
	while(p!=NULL)
	{
		printf("原始数据 [%c]  [%p]\n",p->data,p);
		p=p->next;
		
	}
	printf("=====单链表的序号查找=====\n");
	printf("请输入查询序号:\n");
	scanf("%d",&i);
	d = Get(l,i);
	if (d==NULL)
	{
		printf("序号非法!\n");
	}else
	{
		printf("序号查询的结果为:%c\n",d->data);
	}
	printf("=====单链表的按值查找=====\n");
	printf("请输入查询的字符\n");
	getchar();//吸收换行符
	scanf("%c",&c);
	d = Locate(l,c);
	if (d==NULL)
	{
		printf("未找到查询字符!\n");
	}else
	{
		printf("字符存在,内存地址为:%p\n",d);
	}



	printf("=====单链表的插入操作=====\n");
	printf("请输入插入序号:\n");
	scanf("%d",&i);
	printf("请输入插入的字符\n");
	getchar();//吸收换行符
	scanf("%c",&c);
	state = IntList(l,i,c);
	if (state)
	{
		printf("插入失败!\n");
	}else
	{
		printf("插入成功!\n");
	}
	
	p = l->next;
	while(p!=NULL)
	{
		printf("修改后数据 [%c]  [%p]\n",p->data,p);
		p=p->next;
		
	}
	

	return OK;


}
