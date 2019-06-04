#include "sllist.h"
#include <stdlib.h>
#include <stdio.h>

void insertbeg(struct node **ref, int data) {
	struct node *new = mallco(sizeof *new);
	new->data = data;
	new->next = (*ref);

	(*ref) = new;
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
