# Check Permutation
Given two strings, write a method to decide if one is a permutation of the other.

## Approach
The BCR(Best Conceivable Runtime) for the problem should be O(n).

### Naive approach
The naive idea is to ofcourse take any one string generate all its permutations(we can do that using Heap's algorithm) and check if any of this matches with the second string. This for obvious reasons is not at all feasible because there are n! permutations and such an algorithm would be very inefficient.

### Improved approach
One of the key ideas to notice here is that if two strings are permutations of each other, then they should be of equal length. So, we can easily eliminate strings of unequal length out of the equation. Now, such strings should also have same character frequency as permutations would differ only by positions.

Hence, having two arrays which stores the character frequencies of each of these strings and checking them for equality would lead to a better solution in terms of runtime i.e., O(n).

## Optimization Check
- [x] O(n) time complexity.
- [x] O(1) auxiliary space.

