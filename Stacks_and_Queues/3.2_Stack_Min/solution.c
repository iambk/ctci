#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	int subMin;
	struct node *next;
};

void push(struct node **tos, int data);
int pop(struct node **tos);
int min(struct node *tos);
void display(struct node *tos);

int main() {
	struct node *tos = NULL;
	char ch;

	do {
		int choice, data;
		printf("\n...Menu...\n");
		printf("\n1. Push\n2. Pop\n3. Min\n4. Display\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1: printf("\nEnter data to push: ");
							scanf("%d", &data);
							push(&tos, data);
							break;
			case 2:	if (tos == NULL) {
								printf("\nStack underflow..\n");
							}
							else {
								printf("\nPopped element is : %d\n", pop(&tos));
							}
							break;
			case 3: if (tos == NULL) {
								printf("\nStack is empty..\n");
							}
							else {
								printf("\nStack min is: %d\n", min(tos));
							}
							break;
			case 4: display(tos);
							break;
			default: printf("\nWrong choice..\n");
		}

		printf("\nDo you wanna continue?(y/n): ");
		scanf(" %c", &ch);
	}while (ch == 'y');

	return 0;
}

void push(struct node **tos, int data) {
	struct node *new = (struct node *)malloc(sizeof *new);

	new->data = data;
	new->next = (*tos);
	(*tos) = new;
	
	if (new->next != NULL) {
		if (new->next->data < new->next->subMin) {
			new->subMin = new->next->data;
		}
		else {
			new->subMin = new->next->subMin;
		}
	}
	else {
		new->subMin = new->data;
	}
}

int pop(struct node **tos) {
	int popped = (*tos)->data;
	struct node *temp = *tos;

	*tos = (*tos)->next;
	
	if (*tos != NULL && (*tos)->next != NULL) {
		(*tos)->subMin = (*tos)->next->subMin;
	}

	free(temp);
	return popped;
}

int min(struct node *tos) {
	if (tos->data < tos->subMin) {
		return tos->data;
	}
	return tos->subMin;
}

void display(struct node *tos) {
	if (tos == NULL) {
		printf("\nStack is empty..\n");
		return;
	}

	printf("\nStack status.. ->\n");
	while (tos != NULL) {
		printf("\n%d", tos->data);
		tos = tos->next;
	}
	printf("\n");
}
