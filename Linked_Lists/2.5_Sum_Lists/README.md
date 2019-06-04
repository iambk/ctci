# Sum Lists
You have two numbers represented by a a linked list, where each node contains a single digit. The digts are stored in reverse order, such that the 1's digit is at the head of the list. Write a function that adds the two numbers and returns the sum as a linked list.

> EXAMPLE
```
Input: (7 -> 1 -> 6) + (5 -> 9 -> 2). That is, 617 + 295.
Output: 2 -> 1 -> 9. That is, 912.
```

#### FOLLOW UP
Suppose the digits are stored in forward order. Repeat the above problem.

> EXAMPLE
```
Input: (6 -> 1 -> 7) + (2 -> 9 -> 5). That is, 617 + 295.
Output: 9 -> 1 -> 2. That is, 912.
```

## Approach
The initial problem should be easy, as it's elementary addition. Simply traverse through both the linked lists and keep adding the elements and forward the carry. Put this sum as a new node at the end of a third linked list. If at the end carry exists, add a new node at the end. Just make sure to look for edge cases, like the size of linked lists not being same, etc.

## Follow-up approach
This can be a bit tricky considering we have to sum from the end of the linked list. We can use recursion to reach the end of the list and follow the same approach as above, but it won't work for edge cases where the size of the lists are not the same. An easy way to solve this would be to append 0's at the beginning of the linked list to make the size equal.

## Optimization Check
- [x] O(n) time complexity.
- [x] O(n) auxiliary space.
