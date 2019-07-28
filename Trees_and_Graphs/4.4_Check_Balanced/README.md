# Check Balanced
Implement a function to check if a binary tree is balanced. For the purposes of this question, a balanced tree is defined to be a tree such that the heights of the two subtrees of any node never differ by more than one.

## Approach
The naive way would be recurse through each node and get height of each left subtree and right subtree and check if height difference is more than one. But this approach is inefficient as we keep repeating ourselves while checking the height and takes O(n log n) time on average, and even O(n^2) time for a skewed tree.

An efficient way is to get the height of each left and right subtree while recursing itself. After each function call just check for the height difference and break out of recursion if height difference is greather than 1, else return the height of the subtree. This would take O(n) time on a worst case.

## Optimization Check
- [x] O(n) time complexity.
- [x] O(d) auxiliary space(where d is the depth of the tree).
