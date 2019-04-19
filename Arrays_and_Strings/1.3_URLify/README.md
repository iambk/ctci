# URLify
Write a method to replace all spaces in a string with '%20'. You may assume that the string has sufficiient space at the end to hold the additional characters, and that you are given the "true" length of the string.

> Example

Input:
```
"Mr John Smith    "
13
```
Output:
```
"Mr%20John%20Smith"
```

## Approach
The BCR(Best conceivable runtime would be O(n), since we need to traverse the whole string at least once.

### Optimal method
Since, we have the true length of the string given, we can have two pointers one pointing to the end of the string and one to the true length. We can swap the characters at these positions until it's a space, if it's a space we can just replace the next three characters(including the current character) with '%20'. Continuing till we reach the beginning of the string will give us the desired result. This will take linear time.

## Optimization check
- [x] O(n) time complexity.
- [x] O(1) space complexity.  