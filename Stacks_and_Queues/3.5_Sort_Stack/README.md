# Sort Stack
Write a program to sort a stack such that the smallest items are on the top. You can use an additional temporary stack, but you may not copy the elements into any other data structure(such as an array). The stack supports the following operations: push, pop, peek, and isEmpty.

## Approach
We can use strategy similar to insertion sort here by keep the temporary stack in sorted order. Each time an element is popped from primary stack push it into the temporary stack such that it is sorted, by using the primary stack as additional storage.
