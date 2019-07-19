# Queue via Stacks
Implement a MyQueue class which implements a queue using two stacks.

## Approach
We will use one stack for enqueueing by simply pushing to the stack. Whenever a dequeue operation is required we simply pop each element from the first stack and push to the second stack till the first stack is empty. Now, we just need to pop the top of second stack and return it as dequeued element. For next subsequent dequeues we can simply pop from this second stack. For enqueue simply push to the first stack.
