Like arrays, linked lists are also linear data structures but in linked lists elements are not stored at contiguous memory locations. They can be stored anywhere in the memory but for sequential access, the nodes are linked to each other using pointers.

### Representations

Each element in a linked list contains of two parts (in most cases):

- Data: This part stores the data value of the node. That is the information to be stored at the current node.
- Next Pointer: This is the pointer variable or any other variable which stores the address of the next node in the memory.

![linked list rep](https://www.geeksforgeeks.org/wp-content/uploads/gq/2013/03/Linkedlist.png)

### Advantages of Linked Lists over Arrays:

- The size of the arrays is fixed: So we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the upper limit irrespective of the usage. On the other hand, linked lists are dynamic and the size of the linked list can be incremented or decremented during runtime.
- Inserting a new element in an array of elements is expensive, because a room has to be created for the new elements and to create room, existing elements have to shift. On the other hand, nodes in linked lists can be inserted or deleted without any shift operation and is efficient than that of arrays.

### Disadvantages of Linked Lists over Arrayas

- Random access is not allowed in Linked Lists. We have to access elements sequentially starting from the first node. So we cannot do a binary search with linked lists efficiently with its default implementation. Therefore, lookup or search operation is costly in linked lists in comparison to arrays.
- Extra memory space for a pointer is required with each element of the list.

- Not cache friendly. Since array elements are present at contiguous locations, there is a locality of reference which is not there in case of linked lists.

## Doubly Linked List

Similar to Singly Linked Lists, Doubly Linked Lists are also a sequential data structure with the only difference that the doubly linked lists contain two pointers instead of one to store the address of both next node and previous node respectively.

![Doubly Linked List](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL1.png)

As you can see in the above image:

- Each node contains two pointers, one pointing to the next node and the other pointing to the previous node.
- The prev of Head node is NULL, as there is no previous node of Head.
- The next of last node is NULL, as there is no node after the last node.
