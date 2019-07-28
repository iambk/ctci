#include "btree.h"
#include <iostream>
#include <algorithm>
//#include <cstdlib>

bool isBalanced(struct node *root, int& height) {
	if (root == NULL) {
		height = 0;
		return true;
	}

	bool ltree = isBalanced(root->left, height);
	if (!ltree) return false;

	int lh = height;

	bool rtree = isBalanced(root->right, height);
	if (!rtree) return false;

	int rh = height;

	height = std::max(rh, lh) + 1;

	if (abs(lh - rh) > 1) return false;
	else return true;
}

int main() {
	struct node *root = NULL;
	init(&root);

	int height = 0;
	if (isBalanced(root, height)) std::cout << "Tree is balanced.\n";
	else std::cout << "Tree is not balanced.\n";

	return 0;
}
