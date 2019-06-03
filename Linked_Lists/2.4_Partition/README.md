# Partition
Write code to partition a linked list around a value x, such that all nodes less than x come before all nodes greater than or equal to x. If x is contained within the list, the values of x only need to be after the elements less than x. The partition element x can appear anywhere in the "right partition"; it does not need to appear between the left and right partitions.

> EXAMPLE
```
Input: 3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1 [partition = 5]
Output: 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8
```

## Approach
There is no optimal approach or something to this problem, as there are numerous approaches that can efficiently solve it. The approach I came up with as soon as I looked at the problem was the quick sort method. And the question too is basically quick sorting but w.r.t. linked lists.

There are two more efficient and easy methods as mentioned in the book, but it requires use of additional linked lists.

## Optimization Check
- [x] O(n) time complexity.
- [x] O(1) auxiliary space.
