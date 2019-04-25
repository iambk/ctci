# Zero Matrix
Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0.

## Approach
The BCR(Best Conceivable Runtime) for the problem is obviously O(MN) since, we would have to look at each element of the matrix, but optimization w.r.t. this problem lies in the auxiliary space used. Since, naively setting each row and column as soon as we encounter a zero may result in the whole matrix being set to zero. We have store the rows and cols which have to be set to zero requiring some extra space. 

Optimally speaking, we can do this in O(1) auxiliary space as well but, I'm yet to figure that solution out.

### O(n) auxiliary space solution
We can have two arrays or lists having the indices of the rows and columns which have to be set to zero. Then, just traversing through this list we can set each of these rows and cols to zero.

## Optimization Check
-	[x] O(mn) time complexity.
- [ ]  O(1) auxiliary space.


