#include "../sllist.h"
#include <stdio.h>
#include <stdlib.h>

void remove_dup(struct node **ref);

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

	remove_dup(&head);

	printf("\nAfter removal: ");
	display(head);

	return 0;
}

void remove_dup(struct node **ref) {
	struct node *curr = *ref;

	while (curr != NULL) {
		struct node *temp = curr->next;
		struct node *prev = curr;
		while (temp != NULL) {
			if (temp->data == curr->data) {
				prev->next = temp->next;
				struct node *copy = temp;
				free(copy);
			}
			else {
				prev = prev->next;
			}
			temp = prev->next;
		}
		curr = curr->next;
	}
}
