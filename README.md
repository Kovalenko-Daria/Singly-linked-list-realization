# Singly-linked-list-realization

## About
This is a custom implementation of the singly linked list data structure library with basic operations of initialization, adding, searching, deleting an element and destroying the list.
***

## Library

The singly linked list elements is implemented as a structure that contains a value of an element amd a pointer to the next one. To work with it, it is necessery to store pointer to the root (the first) element.

* The initialization function takes an element, creates a pointer to a list node, stores the value of the element in it, puts NULL as a pointer to the next element and returns a pointer to the node.

* The add function takes the address of the element after which to insert a new one, and the value of the new element. A new node corresponding to the value of the new element is initialized in the function, and the next element of its predecessor is placed as its next element, and the new one becomes the next element of the predecessor. The function returns the address of the new element.

* The find function takes a pointer to the root of the list and the desired value. If such an element is present in the list, its address will be returned, otherwise NULL.

* The remove element function accepts pointers to the root and the element being deleted. It returns a pointer to the new root, which is done in case it is necessary to delete the root element.

* The destroy function from the beginning of the list frees up the memory allocated for storing each item until it reaches the end.