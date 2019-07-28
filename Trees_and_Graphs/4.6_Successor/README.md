# Successor
Write an algorithm to find the "next" node (i.e., in-order successor) of a given node in a binary search tree. You may assume that each node has a link to its parent.

## Approach
Let the node be x, two cases arise:

#### Case 1: x has a right subtree
In this case, the inorder successor would be the minimum value of the right subtree or in other words the leftmost node in right's subtree.

#### Case 2: x doesn't have a right subtree
Here, the inorder successor would be the lowest ancestor of x whose left child is also an ancestor of x.
