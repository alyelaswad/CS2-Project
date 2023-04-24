#ifndef LinkedList_H
#define LinkedList_H
#include "Node.h" // including the node, since it is associated with the linked list.
template <class T>
class LinkedList
{
private:
    Node<T> *head, *tail; // doubly linked list's nodes.

public:
    LinkedList();

    Node<T> *get_head(); // getter for head

    Node<T> *get_tail(); // getter for tail

    Node<T> *append(T info_p); // inserts at the end of the node

    Node<T> *insertMid(Node<T> *curr, T info); // inserts between between nodes (could also be used to insert at the start of the linked list.)
    void display(LinkedList<T> node); //(displays the list's contents)
};
#endif
