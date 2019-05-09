#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void append(struct node **ref, int data);
void display(struct node *ref);
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

void append(struct node **ref, int data) {
	struct node *new = malloc(sizeof *new);
	new->data = data;
	new->next = NULL;

	if (*ref == NULL) {
		*ref = new;
		return;
	}

	struct node *curr = *ref;
	while (curr->next != NULL) {
		curr = curr->next;
	}

	curr->next = new;
	return;
}

void display(struct node *ref) {
	while (ref != NULL) {
		if (ref->next == NULL) {
			printf("%d ", ref->data);
		}
		else {
			printf("%d->", ref->data);
		}
		ref = ref->next;
	}
	printf("\n");
}
