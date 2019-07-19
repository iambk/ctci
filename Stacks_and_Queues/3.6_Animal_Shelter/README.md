# Animal Shelter
An animal shelter, which holds only dogs and cats, operates on a strictly "first in, first out" basis. People must adopt either the "oldest" (based on arrival time) of all animals at the shelter, or they can select whether they would prefer a dog or a cat (and will receive the oldest animal of that type). They cannot select which specific animal they would like. Create the data structures to maintain this system and implement operations such as enqueue, dequeueAny, dequeueDog, and dequeueCat.

## Approach
We can have separate queues for dogs and cats which makes operations like dequeueDog and dequeueCat achievable in constant time. For dequeueAny, we simply access the front of both the queues to check which of them is the oldest and dequeue accordingly again this takes constant time provided we keep some measure to check for their enqueueing time.
