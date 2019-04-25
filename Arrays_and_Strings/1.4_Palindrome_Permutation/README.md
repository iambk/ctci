# Palindrome Permutation
Given a string, write a function to check if it is a permutation of a palindrome. The palindrome does not need to be limited to just dictionary words.

> Example

Input
```
Tact Coa
```
Output
```
True (permutations: "taco cat", "atco cta", etc.)
```

## Approach
The BCR(Best Conceivable Runtime) for the problem would be O(n), as we would have to go through each character of the string to come to a conclusion at the least.

### Naive method
It would be really dumb and inefficient to solve this problem the naive way. As we would have to generate all permutations(which takes factorial time) of the given string and check if any of this is a palindrome. Palindrome checking would take O(n) time and owing to each permutation the total time complexity would be O(n! * n). It's quite evident now why this method is impractical.

### Optimal method
What property of a palindrome can we use here(apart from the fact that they are cool)? 
It is exactly the same when read from beginning and end(No shit, Sherlock! That's the very definition of a palindrome right? :unamused:). 
This is why they would have an even number of character frequencies unless the length of the string is odd, where only one character would have an odd frequency. This is the property that would help us achieve optimal solution for this problem.

## Optimization Check
- [x] O(n) time complexity
- [x] O(1) auxiliary space
