# Three in One
Describe how you could use a single array to implement three stacks.

## Approach
Depending on the constraints we can use two major approaches.

### Fixed Divsion
Dividing the array into three equivalent parts is the most obvious and simplest solution. The caveat being one stack overgrowing in size while others still remaining empty.

### Flexible Division
If we knew beforehand the information about size of elements going to the corresponding stacks we can divide the array likewise. And we would have to shift the stack top and the elements dynamically. The implementation can become really complex.
