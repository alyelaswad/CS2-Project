#include <iostream>
using namespace std;

// template <typename T>
// class Deque
// {
// private:
//     Node<T> *front, *rear;
//     int dequeLength;

// public:
//     Deque();
//     Deque();
//     int getdequeLength();
// };
template <typename T>
Deque<T>::Deque()
{
    front = NULL;
    rear = NULL;
}
template <typename T>
Deque<T>::~Deque()
{
}
template <typename T>
bool Deque<T>::DEQisEmpty()
{
    if (front == NULL && rear == NULL)
    {
        return true;
    }
}