# Doubly Linked List Program in C
Doubly Linked List is a variation of Linked list in which navigation is possible in both ways, either forward and backward easily as compared to Single Linked List.

# Declaration
In C-style declaration, a node of the doubly linked list is represented as follows:
```
struct node
{
            struct node *prev;
            int data;
            struct node *next;
};
```
Apart from the above declaration, we can also represent a node in the doubly linked list as a class in C++. A doubly linked list is represented as a class when we use STL in C++. We can implement a doubly linked list using a class in Java as well.

## BASIC OPERATION
Following are some of the operations that we can perform on a doubly linked list.

# Insertion
Insertion operation of the doubly linked list inserts a new node in the linked list. Depending on the position where the new node is to be inserted, we can have the following insert operations.

**Insertion at front** – Inserts a new node as the first node.
**Insertion at the end** – Inserts a new node at the end as the last node.
**Insertion before a node** – Given a node, inserts a new node before this node.
**Insertion after a node** – Given a node, inserts a new node after this node.

# Deletion
Deletion operation deletes a node from a given position in the doubly linked list.

**Deletion of the first node** – Deletes the first node in the list
**Deletion of the last node** – Deletes the last node in the list.
**Deletion of a node given the data** – Given the data, the operation matches the data with the node data in the linked list and deletes that node.

# Traversal
Traversal is a technique of visiting each node in the linked list. In a doubly linked list, we have two types of traversals as we have two pointers with different directions in the doubly linked list.

**Forward traversal** – Traversal is done using the next pointer which is in the forward direction.
**Backward traversal** – Traversal is done using the previous pointer which is the backward direction.

# Reverse
This operation reverses the nodes in the doubly linked list so that the first node becomes the last node while the last node becomes the first node.

# Search
Search operation in the doubly linked list is used to search for a particular node in the linked list. For this purpose, we need to traverse the list until a matching data is found.
