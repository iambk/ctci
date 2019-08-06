/* --------------------- Note ------------------------------------------
  This program initializes a complete binary tree.
  However, it has also been tested with partial binary trees.

  You can comment out few nodes inside init function to test accordingly.
  Make sure you don't cause seg fault. ¯\_(ツ)_/¯
  ----------------------------------------------------------------------
*/

#include <iostream>
#include <cstdlib>
#include <list>
#include <vector>
#include <queue>

struct node {
	int data;
	struct node *left, *right;
};

struct node *newnode(int d);
void init(struct node **root);
void dfslist(std::vector<std::list<struct node *>>& dlist, struct node *root, int level);
void bfslist(std::vector<std::list<struct node *>>& dlist, struct node *root);

int main() {
	struct node *root = NULL;
	init(&root);

	std::vector<std::list<struct node *>> dlist;
	dfslist(dlist, root, 0);

	bfslist(dlist, root);

	std::cout << "D lists created are: \n";
	for (auto i : dlist) {
		for (auto j : i) {
			std::cout << j->data << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}

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
	(*root)->left->left = newnode(4);
	(*root)->left->right = newnode(5);
	(*root)->right->left = newnode(6);
	(*root)->right->right = newnode(7);
	(*root)->left->left->left = newnode(8);
	(*root)->left->left->right = newnode(9);
	(*root)->left->right->left = newnode(10);
	(*root)->left->right->right = newnode(11);
	(*root)->right->left->left = newnode(12);
	(*root)->right->left->right = newnode(13);
	(*root)->right->right->left = newnode(14);
	(*root)->right->right->right = newnode(15);
}

void dfslist(std::vector<std::list<struct node *>>& dlist, struct node *root, int level) {
	if (root == NULL) return;

	if (dlist.size() == level) {
		std::list<struct node *> l;
		l.push_front(root);
		dlist.push_back(l);
	}
	dfslist(dlist, root->left, level + 1);
	dfslist(dlist, root->right, level + 1);
}

void bfslist(std::vector<std::list<struct node *>>& dlist, struct node *root) {
	std::queue<struct node *> queue;
	queue.push(root);

	int i = -1;
	while (!queue.empty()) {
		struct node *curr = queue.front();
		queue.pop();
		if (curr->left) queue.push(curr->left);
		if (curr->right) queue.push(curr->right);

		if (i + 1 < dlist.size() && curr == dlist[i + 1].front()) i++;
		else dlist[i].push_back(curr);
	}
}
