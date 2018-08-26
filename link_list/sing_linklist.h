#ifndef __SING_LINKLIST_H
#define __SING_LINKLIST_H

typedef struct  _node{
	int a;
	//struct _node* p;
	struct _node * next;
}node_t;
void  put_all(node_t *head);
void insertlist(node_t *head, int t);
void deletelist(node_t *head, int value);
void revese(node_t *head);








#endif