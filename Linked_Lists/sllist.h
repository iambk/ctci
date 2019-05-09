#ifndef SLLIST_H
#define SLLIST_H

struct node {
	int data;
	struct node *next;
};

void append(struct node **ref, int data);
void display(struct node *ref);

#endif
