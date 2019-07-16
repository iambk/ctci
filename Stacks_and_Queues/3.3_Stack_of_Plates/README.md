# Stack of Plates
Imagine a (literal) stack of plates. If the stack gets too high, it might topple. Therefore, in real life, we would likely start a new stack when the previous stack exceeds some threshold. Implement a data structure SetOfStacks that mimics this. SetOfStacks should be composed of several stacks and should create a new stack once the preivous one exceeds capacity. SetOfStacks.push() and SetOfStacks.pop() should behave identically to a single stack(that is, pop() should return the same values as it would if there were just a single stack).

#### FOLLOW UP
Implement a function popAt(int index) which performs a pop operation on a specific sub-stack.

## Approach
Its purely an implementation/language dependent problem and as such there is nothing hard about it.

I used C++, where you can simply create a normal stack class as usual with push and pop and the main set of stacks class can have a vector of the class stack. Just a few boundary checkings and a couple of push,pops and you're good to go.

The follow up problem can be achieved in two ways: if the sub-stack has fairly less elements than rest of the stacks, we can shift elements from other stack; or simply popping from the sub stack and not caring about the stack until it is empty. I have implemented the latter. Unless there is a necessity for space optimization we can trade the extra memory used for faster runtime during this pop operation.
