// link_list.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "sing_linklist.h"
#include "double_linklist.h"

static void sing_link_test(void)
{
	int a;
	node_t *head, *q1;
	head = (node_t *)malloc(sizeof(node_t));
	head->next = NULL;
	head->a = 1;
	q1 = head;
	printf("�����������");

	while (1)
	{
		scanf_s("%d", &a);
		insertlist(q1, a);
		if (a == 99)
			break;
	}
	put_all(q1);

	printf("revese ! \n");
	revese(q1);
	deletelist(q1, 3);
	put_all(q1);
}

static void dou_list_test(void)
{
	int a;
	dou_node_t *head, *q1;
	head = (dou_node_t *)malloc(sizeof(dou_node_t));
	head->next = NULL;
	head->pre = NULL;
	head->data = 0;
	q1 = head;
	printf("�����������");

	while (1)
	{
		scanf_s("%d", &a);
		insert_dou_link(q1, a);
		if (a == 33)
			break;
	}
	print_dou_list(q1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	//sing_link_test();	
	dou_list_test();
	printf("hello! \n");
	return 0;
}
