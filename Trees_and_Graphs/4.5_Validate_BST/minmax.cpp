// For more strict bst definition

#include "btree.h"
#include <iostream>
#include <limits>
#define MIN std::numeric_limits<int>::min()
#define MAX std::numeric_limits<int>::max()

bool isBST(struct node *root, int& min, int& max) {
	if (root == NULL) return true;

	bool ltree = isBST(root->left, min, root->data);
	if (!ltree) return false;

	bool rtree = isBST(root->right, root->data, max);
	if (!rtree) return false;

	return (root->data > min && root->data <= max);
}

int main() {
	struct node *root = NULL;
	init(&root);

	int min = MIN;
	int max = MAX;
	
	if (isBST(root, min, max)) std::cout << "Is a binary search tree.\n";
	else std::cout << "Not a binary search tree.\n";

	return 0;
}
