#include "btree.h"
#include <cstdlib>

struct node *newnode(int d) {
	struct node *n = (struct node *)malloc(sizeof(struct node));
	n->data = d;
	n->left = n->right = NULL;

	return n;
}

void init(struct node **root) {
	*root = newnode(8);
	(*root)->left = newnode(4);
	(*root)->right = newnode(13);
	(*root)->left->left = newnode(2);
	(*root)->left->right = newnode(6);
	(*root)->right->left = newnode(10);
	(*root)->right->right = newnode(14);
	(*root)->left->left->left = newnode(1);
	(*root)->left->left->right = newnode(3);
	(*root)->left->right->left = newnode(5);
	(*root)->left->right->right = newnode(7);
	(*root)->right->left->left = newnode(9);
	(*root)->right->left->right = newnode(11);
	(*root)->right->right->left = newnode(13);
	(*root)->right->right->right = newnode(15);
}
