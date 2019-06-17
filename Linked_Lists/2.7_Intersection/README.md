# Intersection
Given two (singly) linked lists, determine if the two lists intersect. Return the intersecting node. Note that the intersection is defined based on reference,  not value. That is, if the kth node of the first linked list is the exact same node (by reference) as the jth node of the second linked list, then they are intersecting.

## Optimal Approach
The first step is to determine whether the linked lists are actually intersecting or not. And how do we do that? If at all the lists are intersecting their last nodes will be the same(no points for guessing that).

Now from here the problem can be approached both iteratively and recursively. But both would require lists of equivalent length. So, we need to chop off the initial elements, and then check for either the first equivalent node by reference from beginning(iterative) or the last non-equivalent node by reference(recursive) both taking equivalent time complexities. However, the recursive method would use extra space for function call stack.

## Optimization check
- [x] O(n + m) time complexity.
- [x] O(1) auxiliary space for iterative method.
- [x] O(n) auxiliary space for recursive method.

