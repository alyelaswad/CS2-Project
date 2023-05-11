#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <QString>
class LinkedList
{
private:
    Node *head, *tail;

public:
    LinkedList();

    Node *&get_head();

    Node *&get_tail();

    Node *append(QString info_p);

    Node *insertMid(Node *curr, string info);
    void add(QString info_p);
    void pop(QString inf);
    ~LinkedList();
};

#endif // LINKEDLIST_H
