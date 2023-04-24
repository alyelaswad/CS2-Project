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
    int DEQ_Length(); // returns the length of the deque.
    bool DEQisEmpty(); // checks if the deque is empty.
    void Add_Front(); // adds at the start of the deque
    void Add_Rear(); // adds at the end of the deque.
    T Remove_Front(); // removes from the start of the deque.
    T Remove_Rear(); // removes from the back/rear of the deque.
    Node<T> *View_Front(); // returns the frontal node of the deque.
    Node<T> *View_Rear(); // returns the back node of the deque.
};
#endif
