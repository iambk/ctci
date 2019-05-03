# Remove Dups
Write code to remove duplicates from an unsorted linked list.

> FOLLOW UP

How would you solve this problem if a temporary buffer is not allowed?

## Optimal approach
By using a simple hash table, we can find duplicates in the given linked list. Traversing through the linked list, if we find an item already present in the hash table we just remove that node and continue iterating. This would take linear time.

FOLLOW UP

Without being able to use extra storage, we would require two loops to remove duplicates. One would iterate through the linked list, the second one would search for the duplicates. Hence, such an implementation would take quadratic runtime.

## Optimization check

With extra storage
- [x] O(n) time complexity.
- [x] O(n) auxiliary space.

Without extra storage
- [x] O(n^2) time complexity.
