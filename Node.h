#ifndef Node_H // to avoid redifinition when including in main
#define Node_H
template <class T>
struct Node
{
    Node<T> *next; // since the deque can be modified from both sides, a doubly node is needed.
    Node<T> *back;

    T info; // the data that the node will carry (ex: int, plane information, etc..)
    Node()
    {
        next = nullptr;
        back = nullptr;
    }
};
#endif
