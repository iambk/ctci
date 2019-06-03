#include "../sllist.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);

	struct node *head = NULL;
	int data;
	while(n--) {
		scanf("%d", &data);
		append(&head, data);
	}

	printf("Initial linked list: ");
	display(head);

	int x;
	printf("Enter the partition: ");
	scanf("%d", &x);

	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = x;
	new->next = head;

	head = new;

	struct node *iptr = head, *jptr = head->next;

	while(jptr != NULL) {
		if (jptr->data < x) {
			iptr = iptr->next;
			int temp = iptr->data;
			iptr->data = jptr->data;
			jptr->data = temp;
		}
		jptr = jptr->next;
	}

	struct node *temp = head;

	head = head->next;
	free(temp);

	printf("After partition: ");
	display(head);

	return 0;
}

		
