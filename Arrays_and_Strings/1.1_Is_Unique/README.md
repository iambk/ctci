# Is Unique
Implement an algorithm to determine if a string has all unique characters. What if you cannot use additoinal data structures?

## Approach
The BCR(Best Conceivable Runtime) for the problem should be O(n), since we need to touch each character in the string at least once.

### Naive method
To determine if a character is repeating we need to pick a character and check if this character appears elsewhere in the string by comparing it with other characters. This would take O(n^2) time in the worst case.

### Improved method
We could have a count array to store count of each character in the string as it appears, doing so we will only have to traverse the string once improving the runtime by O(n).
As we already saw, the BCR for the problem is O(n) and this cannot be further optimized. 

However, we are using an extra data structure here to store the count of the characters.

*Can we do better*?
