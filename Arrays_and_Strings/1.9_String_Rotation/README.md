# String Rotation
Assume you have a method isSubstring which checks if one word is a substring of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring (e.g., "waterbottle" is a rotation of "erbottlewat").

## Optimal approach
If we imagine that s2 is a rotation of s1, then we can ask what the rotation point is. For example, if we rotate waterbottle after wat, we get erbottlewat. In a rotation, we cut s1 into two parts, x and y, and rearrange them to get s2.
```
s1 = xy = waterbottle
x = wat
y = erbottle
s2 = yx = erbottlewat
```
So, we need to check if there's a way to split s1 into x and y such that xy = s1 and yx = s1. Regardless of where the divsion between x and y is, we can see that yx will always be a substring of xyxy. That is, s2 will always be a substring of s1s1.

And this is precisely how we solve the problem with just one call to isSubstring method.

## Optimization Check
-	[x] O(1) time complexity(assuming constant runtime for string copying and substring checking).
-	[x] O(n) auxiliary space.
