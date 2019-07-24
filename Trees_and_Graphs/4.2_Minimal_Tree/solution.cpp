#include <iostream>
#include <vector>
#include <cstdlib>

struct node {
	int data;
	struct node *left, *right;
};

void createMinBST(struct node **root, std::vector<int>& v, int beg, int end);
void inorder(struct node *root);
void preorder(struct node *root);
void postorder(struct node *root);

int main() {
	int n;
	std::cin >> n;

	std::vector<int> v(n);
	for (int i = 0; i < n; i++) std::cin >> v[i];

	struct node *root = NULL;
	createMinBST(&root, v, 0, n - 1);

	std::cout << "Minimal tree created\n";

	std::cout << "Inorder : ";
	inorder(root);
	std::cout << std::endl;

	std::cout << "Preorder : ";
	preorder(root);
	std::cout << std::endl;

	std::cout << "Postorder : ";
	postorder(root);
	std::cout << std::endl;
}

void createMinBST(struct node **root, std::vector<int>& v, int beg, int end) {
	if (beg > end) return;

	int mid = (beg + end) / 2;
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = v[mid];
	newnode->left = NULL;
	newnode->right = NULL;

	(*root) = newnode;

	createMinBST(&newnode->left, v, beg, mid - 1);
	createMinBST(&newnode->right, v, mid + 1, end);
}

void inorder(struct node *root) {
	if (root == NULL) return;
	inorder(root->left);
	std::cout << root->data << " ";
	inorder(root->right);
}

void preorder(struct node *root) {
	if (root == NULL) return;
	std::cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct node *root) {
	if (root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	std::cout << root->data << " ";
}
