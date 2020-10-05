The Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

- The LIFO order says that the element which is inserted at the last in the Stack will be the first one to be removed. In LIFO order insertion takes place at the rear end of the stack and deletion occurs at the front of the stack.
- The FILO order says that the element which is inserted at the first in the Stack will be the last one to be removed. In FILO order insertion takes place at the rear end of the stack and deletion occurs at the front of the stack.

Mainly the following three basic operations are performed in the stack:

- Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
- Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
- Peek or Top: Returns top element of stack.
- isEmpty: Returns true if stack is empty, else false.

## Representation:

![Stack representation](https://miro.medium.com/max/473/1*r4Bfo3rrFprzFM2zbgzZXA.jpeg)

Applications of stack:

- Stacks can be used to check for the balancing of paranthesis in an expression.
- Infix to Postfix/Prefix conversion.
- Redo-undo features at many places like editors, photoshop.
- Forward and backward feature in web browsers