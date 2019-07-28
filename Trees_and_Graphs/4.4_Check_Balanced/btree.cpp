#include "btree.h"
#include <cstdlib>

struct node *newnode(int d) {
	struct node *n = (struct node *)malloc(sizeof(struct node));
	n->data = d;
	n->left = n->right = NULL;

	return n;
}

void init(struct node **root) {
	*root = newnode(1);
	(*root)->left = newnode(2);
	(*root)->right = newnode(3);
	(*root)->right->left = newnode(6);
	(*root)->right->right = newnode(7);
	(*root)->left->left = newnode(4);
	(*root)->left->right = newnode(5);
	(*root)->left->left->left = newnode(8);
	//(*root)->left->left->left->left = newnode(9);
}
