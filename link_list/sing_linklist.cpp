#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include "sing_linklist.h"


void  put_all(node_t *head)
{
	node_t *q = head;
	while (q != NULL)
	{
		printf("tt=%d\n", q->a);
		q = q->next;
	}
}

void insertlist(node_t *head, int t)
{
	node_t *p = (node_t *)malloc(sizeof(node_t));
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
	while (q != NULL)
	{
		if (q->a == value){
			p->next = q->next;
			free(q);
			//q = NULL;
			//p = p->next;
			//q = p->next;
			//q = NULL;
		}
		else
		{
			p = p->next;
			q = p->next;
		}
			
		

	}
	

}

void revese(node_t *head)
{
	node_t * q = head->next;
	node_t * p = q->next;

	node_t * pr = q;

	head->next = NULL;
	q->next = NULL;
	while (p != NULL)
	{
		pr = q;
		q = p;
		p = p->next;
		q->next = pr;
	}
	head->next = q;
}