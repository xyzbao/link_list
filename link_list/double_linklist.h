#ifndef _DOUBLE_LINKLIST_H
#define _DOUBLE_LINKLIST_H

typedef struct _dou_node{

	struct _dou_node * pre;
	struct _dou_node * next;
	int data;

}dou_node_t;

void insert_dou_link(dou_node_t * head, int tmp);
void print_dou_list(dou_node_t * head);

#endif