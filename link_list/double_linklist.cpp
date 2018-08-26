#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include "double_linklist.h"

void insert_dou_link(dou_node_t * head, int tmp)
{
	dou_node_t * p = head;
	dou_node_t * q = (dou_node_t *) malloc(sizeof(dou_node_t));
	while (p->next != NULL)
	{
		p = p->next;
	}
	q->data = tmp;
	q->next = NULL;
	q->pre = p->pre;
	p->next = q;
}



void print_dou_list(dou_node_t * head) 
{
	dou_node_t *q = head;
	while (q != NULL)
	{
		printf("aa =%d\n", q->data);
		q = q->next;
	}
}


