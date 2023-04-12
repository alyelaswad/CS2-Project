#include "Node.h"
template <class T>
class My_list
{
private:
    Node<T> *head, *tail;

public:
    My_list();

    Node<T> *get_head();

    Node<T> *get_tail();

    Node<T> *append(T info_p);

    Node<T> *insertMid(Node<T> *curr, T info);
    void display(My_list<T> node);
};