#include "../sllist.h"
#include <stdio.h>
#include <stdlib.h>

int sumLists(struct node *l1, struct node *l2, struct node **l3);

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	struct node *l1 = NULL, *l2 = NULL;
	int data;
	
	while (n--) {
		scanf("%d", &data);
		append(&l1, data);
	}

	while (m--) {
		scanf("%d", &data);
		append(&l2, data);
	}

	printf("Number 1: ");
	display(l1);

	printf("Number 2: ");
	display(l2);

	int len1 = 0, len2 = 0;

	struct node *temp = l1;
	while (temp != NULL) {
		len1++;
		temp = temp->next;
	}

	temp = l2;
	while (temp != NULL) {
		len2++;
		temp = temp->next;
	}

	free(temp);

	if (len1 < len2) {
		int diff = len2 - len1;
		while (diff--) {
			insertbeg(&l1, 0);
		}
	}
	else if (len2 < len1) {
		int diff = len1 - len2;
		while (diff--) {
			insertbeg(&l2, 0);
		}
	}
	
	struct node *l3 = NULL;

	int carry = sumLists(l1, l2, &l3);
	insertbeg(&l3, carry);

	printf("\nSum is: ");
	display(l3);

	return 0;
}

int sumLists(struct node *l1, struct node *l2, struct node **l3) {
	static int carry = 0;
	int sum = 0;

	if (l1 == NULL) return 0;

	carry = sumLists(l1->next, l2->next, l3);
	sum = carry + l1->data + l2->data;

	carry = sum / 10;
	sum %= 10;

	insertbeg(l3, sum);
	return carry;
}
