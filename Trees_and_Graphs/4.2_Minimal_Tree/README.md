# Minimal Tree
Given a sorted (increasing order) array with unique integer elements, write an algorithm to create a binary search tree with minimal height.

## Approach
To have a minimal height tree the number of nodes in the left subtree should be equal to the right subtree. Since, the array is already sorted we can easily pick the root as the middle element to achieve this condition. We do so recursively for each left and right subtree to form the tree.
