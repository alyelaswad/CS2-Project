#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
using namespace std;
#include "node.h"
#include "LinkedList.h"
#include <QString>
class Deque
{
private:
    Node *front, *rear;
    int dequeLength, deqmax;
    LinkedList MyList;

public:
    Deque();
    ~Deque();
    int DEQ_Length();
    bool DEQisEmpty();
    void Add_Front(QString info);
    void Add_Rear(QString info);
    QString Remove_Front();
    QString Remove_Rear();
    Node *View_Front();
    Node *View_Rear();
};

#endif // DEQUE_H
