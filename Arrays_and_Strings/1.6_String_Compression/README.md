# String Compression
Implement a method to perform basic string compression using the counts of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3. If the "compressed" string would not become smaller than the original string, your method should return the original string. You can assume the string has only upper and lower case letters(a-z).

## Approach
The BCR(Best Conceivable Runtime) of the problem should be O(n) and the extra memory used should be O(n) as well.

### Optimal method
The idea is to iterate through the string copying characters to a new string and counting the repeats. But the efficiency is language and implementation dependent.

> For example: If you are using languages like Python, Java where strings are immutable, you may naively concatenate each character with its count. This can be very inefficient.

We instead should use a character array with predetermined size, then we can replace each index with character and count as we iterate through the original string. Lastly check if the compressed string is shorter than the original string if so, return the compressed string else return the original string.

## Optimization Check
- [x] O(n) time complexity.
- [x] O(n) space complexity.
