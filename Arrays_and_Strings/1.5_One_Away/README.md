# One Away
There are three types of edits that can be performed on strings: insert a character, remove a character, or replace a character. Given two strings, write a function to check if they are one edit(or zero edits) away.

> Example
```
pale ple    -> true
pales pale  -> true
pale bale   -> true
pale bake   -> false
```

## Approach
The BCR(Best Conceivable Runtime) of the problem should be O(n) where n is the minimum of length of the strings.

### Optimal method
Initially, we can check for the length of strings and exclude strings having a length difference of 2 or more. 
Now, we can have two pointer starting at the beginning of each string comparing them character by character, if there is a difference that owes to an edit. At the end of traversing the strings, we would have the total number of edits.

## Optimization Check
- [x] O(n) time complexity.
-	[x] O(1) space complexity.
