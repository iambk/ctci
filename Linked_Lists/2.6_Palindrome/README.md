# Palindrome
Implement a function to check if a linked list is a palindrome.

## Naive Approach
The simple and easy way is to reverse the linked list and compare it with the original linked list. However, this would required an additional linked list and cannot be done inplace.

## Optimal Approach
An optimal approach is to use recursion. The idea is simple but implementation can get tougher depending on programming language used(it's fairly easy at least in C/C++).

The idea is to recurse through the linked list and let the head of the linked list stay as it is. When we reach the end of the linked list, compare the head and end of linked list. Increment the head and repeat the comparison. In C/C++, we can just pass two parameters, one to store the address of the head(pointer to a pointer) and one for recursion. Once we reach the base case for recursion, increment the head address.

## Optimization Check
- [x] O(n) time complexity.
- [x] O(n) auxiliary space(considering function call stack).
