#ifndef LinkedList_H
#define LinkedList_H
#include "Node.h"
template <class T>
class LinkedList
{
private:
    Node<T> *head, *tail;

public:
    LinkedList();

    Node<T> *get_head();

    Node<T> *get_tail();

    Node<T> *append(T info_p);

    Node<T> *insertMid(Node<T> *curr, T info);
    void display(LinkedList<T> node);
};
#endif