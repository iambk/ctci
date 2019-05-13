# Delete Middle Node
Implement an algorithm to delete a node in the middle of a singly linked list, given only access to that node.

EXAMPLE
> <b>Input</b>: the node c from the linked list a->b->c->d->e<br /><b>Result</b>: nothing is returned, but the new linked list looks like a->b->d->e

## Approach
Since it would be impossible to delete a node without access to its previous node, what we can do is copy the data from the next node to the node which we have access, then delete the next node.

# Optimization Check
- [x] O(1) time complexity.
- [x] O(1) auxiliary space.
