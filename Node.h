#ifndef Node_H
#define Node_H
template <class T>
struct Node
{
    Node<T> *next;
    Node<T> *back;

    T info;
    Node()
    {
        next = nullptr;
        back = nullptr;
    }
};
#endif