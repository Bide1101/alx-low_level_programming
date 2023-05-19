Doubly Linked List

A doubly linked list is a data structure that consists of a sequence of nodes. Each node contains two links, one pointing to the previous node and another pointing to the next node in the sequence. This allows for efficient traversal in both directions.

Features
Efficient insertion and deletion at both ends of the list.
Bidirectional traversal: Traverse the list in both forward and backward directions.
Flexibility: Nodes can be easily inserted or removed at any position in the list.
Efficient searching: The list can be traversed from either end, making searching more efficient compared to a singly linked list.
Implementation
The implementation of a doubly linked list typically involves creating a Node class and a DoublyLinkedList class.

Node class
The Node class represents a single node in the doubly linked list. It contains the following components:

data: The value or data stored in the node.
previous: A reference to the previous node in the list.
next: A reference to the next node in the list.
DoublyLinkedList class
The DoublyLinkedList class represents the doubly linked list itself. It contains the following methods:

__init__(): Initializes an empty doubly linked list.
is_empty(): Checks if the list is empty.
insert_at_beginning(data): Inserts a new node with the given data at the beginning of the list.
insert_at_end(data): Inserts a new node with the given data at the end of the list.
insert_after_node(data, node): Inserts a new node with the given data after the specified node.
delete_node(node): Deletes the specified node from the list.
search(data): Searches for a node with the given data and returns the node if found.
display(): Displays the contents of the doubly linked list in both forward and backward directions.

Here's an example of how to use the DoublyLinkedList class:
# Create a new doubly linked list
dll = DoublyLinkedList()

# Insert nodes
dll.insert_at_end(5)
dll.insert_at_end(10)
dll.insert_at_end(15)

# Display the list
dll.display()  # Output: 5 10 15

# Insert a node after a specific node
node = dll.search(10)
dll.insert_after_node(12, node)

# Display the list again
dll.display()  # Output: 5 10 12 15

# Delete a node
node = dll.search(10)
dll.delete_node(node)

# Display the final list
dll.display()  # Output: 5 12 15
Complexity Analysis

The time complexity for various operations in a doubly linked list are as follows:

Insertion at the beginning: O(1)
Insertion at the end: O(1)
Insertion after a specific node: O(1)
Deletion of a node: O(1)
Searching for a node: O(n)
Traversal (forward or backward): O(n)
Please note that the actual time complexity may vary depending on the specific implementation and usage scenario.

Conclusion
A doubly linked list is a versatile data structure that allows for efficient insertion, deletion, and traversal in both forward and backward directions. It can be used in various scenarios where bidirectional traversal and flexibility in node insertion and deletion are required.
