#ifndef BTREE_H
#define BTREE_H

struct node {
	int data;
	struct node *left, *right, *parent;
};

struct node *newnode(int d);
void init(struct node **root);

#endif
