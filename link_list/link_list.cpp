// link_list.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct  _node{
	int a;
	//struct _node* p;
	struct _node * next;
}node_t;
void insertlist(node_t *head, int t);

int _tmain(int argc, _TCHAR* argv[])
{
	int i,a; 
	node_t *head, *q1 ;
	head = (node_t *)malloc(sizeof(node_t));
	head->next = NULL;
	head->a = 1;
	q1 = head;	
	printf("输入五个数：");
	for (i = 0; i < 10 ; i++)
	{
		scanf_s("%d", &a);
		insertlist(q1, a);
	}
	
	while (q1 != NULL)
	{
		printf("tt=%d\n", q1->a);
		q1 = q1->next;
	}
	printf("hello! \n");
	return 0;
}


void insertlist(node_t *head, int t)
{
	node_t *p=(node_t *)malloc(sizeof(node_t));
	node_t *q = head;
	//p = q->next;
	while (q->next != NULL)
	{
		q = q->next;
	}
	q->next = p;
	p->a = t;
	p->next = NULL;
	
}

