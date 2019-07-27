# List of Depths
Given a binary tree, design an algorithm which creates a linked list of all the nodes at each depth (e.g., if you have a tree with depth D, you'll have D linked lists).

## Approach
Initially, we can traverse through the binary tree depth wise till we reach the leaf/null node and insert each encountered node as a head in a new linked list. This would create required D linked lists.

Now, we can traverse breadth wise and insert each node into the respective linked lists.

## Optimization Check
- [x] O(N + log(N)) or O(N) time complexity.
- [x] O(N) auxiliary space(for the lists).

