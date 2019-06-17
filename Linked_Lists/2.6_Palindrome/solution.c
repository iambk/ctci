#include "../sllist.h"
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(struct node **head, struct node *ref);

int main() {
	int n;
	scanf("%d", &n);

	struct node *list = NULL;
	int data;

	while (n--) {
		scanf("%d", &data);
		append(&list, data);
	}

	printf("Linked list: ");
	display(list);

	bool var = isPalindrome(&list, list);

	if (var) {
		printf("\nYES\n");
	}
	else {
		printf("\nNO\n");
	}

	return 0;
}

bool isPalindrome(struct node **head, struct node *ref) {
	static bool flag = true;

	if (ref == NULL) return true;

	flag = isPalindrome(head, ref->next);

	if ((*head)->data != ref->data) {
		flag = false;
	}
	(*head) = (*head)->next;

	return flag;
}
