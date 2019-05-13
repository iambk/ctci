#include "../sllist.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	scanf("%d", &size);

	int n = size;

	struct node *head = NULL;
	int data;
	while (n--) {
		scanf("%d", &data);
		append(&head, data);
	}

	printf("Linked list initially: ");
	display(head);
	
	int num;
	printf("Enter node number: ");
	scanf("%d", &num);

	if (num == 1 || num == size) {
		printf("Cannot delete.\n");
		return 1;
	}

	struct node *access = head;
	int count = 1;
	while (count < num) {
		access = access->next;
		count++;
	}

	// Delete access node;
	access->data = access->next->data;
	struct node *copy = access->next;
	access->next = access->next->next;

	free(copy);

	printf("After deletion: ");
	display(head);

	return 0;
}


