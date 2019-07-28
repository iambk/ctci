// Assumes standard bst definition

#include "btree.h"
#include <iostream>

bool isBST(struct node *root, struct node **prev) {
	if (root == NULL) return true;

	bool ltree = isBST(root->left, prev);
	if (!ltree) return false;

	if ((*prev) && (root->data < (*prev)->data)) return false;
	(*prev) = root;

	bool rtree = isBST(root->right, prev);
	if (!rtree) return false;

	return true;
}

int main() {
	struct node *root = NULL;
	init(&root);

	struct node *prev = NULL;
	if (isBST(root, &prev)) std::cout << "Is a binary search tree.\n";
	else std::cout << "Not a binary search tree.\n";

	return 0;
}
