#include "btree.h"
#include <cstdlib>

struct node *newnode(int d) {
	struct node *n = (struct node *)malloc(sizeof(struct node));
	n->data = d;
	n->left = n->right = n->parent = NULL;

	return n;
}

void init(struct node **root) {
	*root = newnode(4);

	(*root)->left = newnode(2);
	(*root)->left->parent = *root;

	(*root)->right = newnode(6);
	(*root)->right->parent = *root;

	(*root)->left->left = newnode(1);
	(*root)->left->left->parent = (*root)->left;

	(*root)->left->right = newnode(3);
	(*root)->left->right->parent = (*root)->left;

	(*root)->right->left = newnode(5);
	(*root)->right->left->parent = (*root)->right;

	(*root)->right->right = newnode(7);
	(*root)->right->right->parent = (*root)->right;
}

