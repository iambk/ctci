# Loop Detection
Given a circular linked list, implement an algorithm that returns the node at the beginning of the loop.

> DEFINITION

Circular linked list: A (corrupt) linked list in which a node's next pointer points to an earlier node, so as to make a loop in the linked list.

> EXAMPLE
```
Input: A -> B -> C -> D -> E -> C[the same C as earlier]
Ouput: C
```

## Optimal Approach
There are two parts to the question, detecting the loop and finding the beginning of the loop (the former being easier). To detect the loop we can use something called as a "runner" technique or Floyd's cycle detection algorithm. Its actually really intuitive to understand. We simply have two pointers one moving one step at a time and the other moving two steps at a time. If at all there is a loop, they will eventually meet.

Once they have met, we move one pointer to the head of the linked list and other stays where they coincided. Now if we move both pointer one step at a time, they will meet at the beginning of the loop.

## Optimization check
- [x] O(n) time complexity.
- [x] O(1) auxiliary space.
