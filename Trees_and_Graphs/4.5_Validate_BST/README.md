# Validate BST
Implement a function to check if a binary tree is a binary search tree.

## Approach
The approach depends on the definition or constraints provided for the bst, which in this case is not mentioned.

So, I tried to cover all the cases.

#### Case 1:
We assume the standard definition of the bst as adopted by most authors and textbooks(including CLRS, infact even wikipedia suggests this definition).
The binary search tree property as quoted from CLRS:

> Let x be a node in a binary search tree. If y is a node in the left subtree of x, then y.key <= x.key. If y is a node in the right subtree of x, then y.key >= x.key.

As it's clear from this property that duplicate values are allowed in the bst, and not strict ordering of insertion is required in case of duplicate values.

So, how does this affect our approach? Because, for this case we can simply do an inorder tree walk and check if gives us a sorted order. Since, we need not check for which subtree the duplicate values are inserted as its legal. Making this approach both efficient and simple.

#### Case 2:
The author of CTCI, Gayle McDowell, however, hasn't adopted the standard definition in her book. According to her:

> Value of all the nodes in the left subtree should be at most the value of the current node and value of all the nodes in the right subtree should be strictly greater than the value of the current node.

Here, an inorder tree walk won't be able to validate the bst. Hence, for each node we need to check whether it's value is greater than or equal to all the nodes of its left subtree, and is strictly less than all the nodes in its right subtree. We can ensure this by passing a min and max value to the function, when we branch left all nodes should be less than or equal to the root node which would be our max. And when we branch right all nodes shoud be strictly greater than the root node which would be our min.

## Optimization Check
- [x] O(n) time complexity.
- [x] O(d) auxiliary space(where d is the depth of the tree).
