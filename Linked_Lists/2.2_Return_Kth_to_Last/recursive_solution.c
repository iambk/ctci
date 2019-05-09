#include "../sllist.h"
#include <stdio.h>

void kth(struct node *ref, int k);

int main() {
	int size;
	scanf("%d", &size);

	struct node *head = NULL;
	int data;
	while(size--) {
		scanf("%d", &data);
		append(&head, data);
	}

	printf("Initial: ");
	display(head);

	int k;
	printf("Enter k: ");
	scanf("%d", &k);

	kth(head, k);
	return 0;
}

void kth(struct node *ref, int k) {
	static int count = 0;
	if (ref == NULL)
		return;

	kth(ref->next, k);
	count++;
	if(count == k) {
		printf("Kth element from last is: %d\n", ref->data);
	}
}
