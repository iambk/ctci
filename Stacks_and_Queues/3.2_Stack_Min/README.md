# Stack Min
How would you design a stack which, in addition to push and pop, has a function min which returns the minimum element? Push, pop and min should all operate in O(1) time.

## Approach
We can keep track of the minimum element at each push or pop. However, with this approach only push and min functions can be achieved in constant time. Popping an element would require linear time(if the element being popped is the minimum).

To resolve this, we would have to keep track of the second minimum too i.e., the minimum of the sub stack below the current top.

## Optimization Check
- [x] O(1) time for push, pop and min.
