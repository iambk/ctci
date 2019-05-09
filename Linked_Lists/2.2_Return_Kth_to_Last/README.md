# Return Kth to Last
Implement an algorithm to find the kth to last element of a singly linked list.

## Optimal approach
One easier and optimal way in terms of time complexity is to use recursion. Simply recurse through the linked list till the end, then once we reach end of the list keep incrementing a counter variable. When this counter variable becomes equal to k, we have our element.

> Ofcourse, we should use a static variable to retain the value of the counter between function calls.

However, the recursive call stack would use O(n) space. If we need to use only O(1) auxiliary space, we would have to do the algorithm iteratively. Iterative implementation would require two pointers separated k distance apart, when pointer 2 hits the end, pointer 1 would be our required node.

## Optimization Check
- [x] O(n) time complexity.
- [ ] O(1) auxiliary space.


