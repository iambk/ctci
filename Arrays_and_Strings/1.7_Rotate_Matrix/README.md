# Rotate Matrix
Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

## Approach
The BCR(Best Conceivable Runtime) for the problem is O(n^2) since we working with a n by n matrix. We need to perform the rotation in place.

### Naive method
Using an extra matrix, the elements can be easily copied. Technically, this isn't rotation and we would be using O(n^2) extra space which is not what the doctor ordered.

### Optimal method
We would have to rotate the matrix layer by layer starting from the outer indices and working our way inside. Just like normal circular array rotation, we copy a row or column into a temporary array then replace this row/col with corresponding row/col to be rotated. This can be hard to visualize so, here is a depiction from the book itself.

![Matrix rotation](matrix.png?raw=true)

## Optimization Check
- [x] O(n^2) time complexity.
- [x] O(1) auxiliary space.
