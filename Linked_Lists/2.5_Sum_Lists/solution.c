#include "../sllist.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

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

	printf("Number 1: ");
	display(l1);

	printf("Number 2: ");
	display(l2);

	struct node *l3 = NULL;
	int sum = 0, carry = 0;
	while (l1 != NULL || l2 != NULL) {
		if (l1 == NULL && l2 != NULL) {
			sum = carry + l2->data;
			l2 = l2->next;
		}
		else if (l2 == NULL && l1 != NULL) {
			sum = carry + l1->data;
			l1 = l1->next;
		}
		else {
			sum = carry + l1->data + l2->data;
			l1 = l1->next;
			l2 = l2->next;
		}

		carry = sum / 10;
		sum %= 10;

		append(&l3, sum);
	}

	if (carry > 0) {
		append(&l3, carry);
	}

	printf("\nSum is: ");
	display(l3);

	return 0;
}
