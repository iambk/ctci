#include "../sllist.h"
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int data;
	struct node *list = NULL;
	while (n--) {
		scanf("%d", &data);
		append(&list, data);
	}

	// Make the list circular
	struct node *temp = list;
	while (temp->next != NULL) temp = temp->next;
	temp->next = list->next->next->next;

	// Start detection
	struct node *slow = list, *fast = list;

	int flag = 0;
	while (slow != NULL) {
		if (fast == NULL || fast->next == NULL || fast->next->next == NULL) break;
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow) {
			flag = 1;
			break;
		}
	}

	if (flag) {
		printf("Loop exists...\n");
		fast = list;
		while (1) {
			if (fast == slow) {
				printf("Loop begins at %d\n", slow->data);
				break;
			}
			fast = fast->next;
			slow = slow->next;
		}
	}
	else {
		printf("Loop doesn't exist...\n");
	}

	return 0;
}
