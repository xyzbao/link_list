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
void  put_all(node_t *head);
void insertlist(node_t *head, int t);
void deletelist(node_t *head, int value);
void revese(node_t *head);
int _tmain(int argc, _TCHAR* argv[])
{
	int i,a; 
	node_t *head, *q1 ;
	head = (node_t *)malloc(sizeof(node_t));
	head->next = NULL;
	head->a = 1;
	q1 = head;	
	printf("输入五个数：");
		
	while(1)
	{
		scanf_s("%d", &a);
		insertlist(q1, a);
		if (a == 99)
			break;
	}
	put_all(q1);

//	deletelist(q1, 3);
	revese(q1);

	put_all(q1);
	printf("hello! \n");
	return 0;
}
void  put_all(node_t *head)
{
	node_t *q = head;
	while (q!= NULL)
	{
		printf("tt=%d\n", q->a);
		q = q->next;
	}
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

void deletelist(node_t *head, int value)
{
	node_t *p = head;
	node_t *q = p->next;
	while (q !=NULL)
	{
		if (q->a == value){
			p->next = q->next;
			free(q);
		}
		else{
			p = p->next;
			q = p->next;
		}
		
	}
}

void revese(node_t *head)
{
	node_t * p = head ->next;
	node_t * q = p->next;
	while (q != NULL)
	{
		p->next = q->next->next;
		q->next = p;
		q = q->next;
	}
	head->next = q;
}