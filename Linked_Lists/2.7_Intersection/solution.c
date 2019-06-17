/* 
	 This implementation is based on data comparison.
	 But this program would work otherwise also.
	 Just make an actually intersecting linked list(which I was too lazy to do ¯\_(ツ)_/¯) and change the condition checking from data to reference.

*/

#include "../sllist.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isIntersecting(struct node *l1, struct node *l2);
void findIntersection(struct node **intersecting, struct node *l1, struct node *l2);

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int len1 = n, len2 = m;
	struct node *l1 = NULL, *l2 = NULL;
	int data;
	while(n--) {
		scanf("%d", &data);
		append(&l1, data);
	}

	while(m--) {
		scanf("%d", &data);
		append(&l2, data);
	}

	printf("Linked list 1: ");
	display(l1);

	printf("Linked list 2: ");
	display(l2);

	if (isIntersecting(l1, l2)) {
		if (len1 > len2) {
			int diff = len1 - len2; 
			while (diff--) {
				l1 = l1->next;
			}
		}
		else if (len2 > len1) {
			int diff = len2 - len1;
			while (diff--) {
				l2 = l2->next;
			}
		}

		struct node *intersecting = NULL;
		findIntersection(&intersecting, l1, l2);
		printf("\nYes, the given linked lists intersect and the intersecting node = %d\n", intersecting->data);
	}
	else {
		printf("\nNo, the linked lists doesn't intersect.\n");
	}

	return 0;
}

bool isIntersecting(struct node *l1, struct node *l2) {
	while (l1->next != NULL) {
		l1 = l1->next;
	}

	while (l2->next != NULL) {
		l2 = l2->next;
	}

	// I know it should be l1 == l2
	if (l1->data == l2->data) return true;
	return false;
}

// This can be solved iteratively(and more efficiently). But, I love recursion.
void findIntersection(struct node **intersecting, struct node *l1, struct node *l2) {
	static bool firstIntersection = true;

	if (l1->next == NULL && l2->next == NULL) return;

	findIntersection(intersecting, l1->next, l2->next);

	// Again l1 != l2
	if (l1->data != l2->data && firstIntersection) {
		firstIntersection = false;
		(*intersecting) = l1->next;
	}
}
