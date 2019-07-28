#include "btree.h"
#include <iostream>

struct node *successor(struct node *x) {
	struct node *y = x->right;
	if (y) {
		while (y->left) y = y->left;
		return y;
	}

	y = x->parent;
	while (y && x == y->right) {
		x = y;
		y = x->parent;
	}
	return y;
}

int main() {
	struct node *root = NULL;
	init(&root);

	struct node *two = root->left;
	struct node *six = root->right;
	struct node *one = two->left;
	struct node *three = two->right;
	struct node *five = six->left;

	std::cout << "Successor of 2 is: " << successor(two)->data << std::endl;
	std::cout << "Successor of 6 is: " << successor(six)->data << std::endl;
	std::cout << "Successor of 1 is: " << successor(one)->data << std::endl;
	std::cout << "Successor of 3 is: " << successor(three)->data << std::endl;
	std::cout << "Successor of 5 is: " << successor(five)->data << std::endl;
	std::cout << "Successor of 4 is: " << successor(root)->data << std::endl;

	return 0;
}
