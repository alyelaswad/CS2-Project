#ifndef deque_H
#define deque_H
#include <iostream>
using namespace std;
#include "Node.h"
#include "LinkedList.h"
// #include "deque.cpp"
template <typename T>
class Deque
{
private:
    Node<T> *front, *rear;
    int dequeLength;
    LinkedList<T> MyList;

public:
    Deque<T>();
    ~Deque<T>();
    int DEQ_Length();
    bool DEQisEmpty();
    void Add_Front();
    void Add_Rear();
    T Remove_Front();
    T Remove_Rear();
    Node<T> *View_Front();
    Node<T> *View_Rear();
};
#endif