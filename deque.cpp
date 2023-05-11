#include <deque.h>
#include <QString>
Deque ::Deque()
{
    front = MyList.get_head();
    rear = MyList.get_tail();
    dequeLength = 0;
}

Deque ::~Deque()
{

    while (front != rear)
    {
        this->Remove_Front();
        front = front->next;
    }
}

int Deque ::DEQ_Length()
{
    int counter = 0;
    Node *temp;
    temp = MyList.get_head();
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    temp = nullptr;
    delete temp;
    dequeLength = counter;
    return counter;
}

bool Deque ::DEQisEmpty()
{
    if (front == NULL && rear == NULL)
    {
        return true;
    }
}

void Deque ::Add_Front(QString info)
{
    Node *temp = new Node;
    temp->info = info;
    temp->next = NULL;
    temp->back = NULL;
    if (DEQisEmpty())
    {
        front = temp;
        return;
    }
    else
    {
        front->back = temp;
        temp->next = front;
        front = temp;
        return;
    }
    dequeLength++;
}

void Deque ::Add_Rear(QString info)
{
    if (DEQisEmpty())
    {
        Add_Front(info);
        return;
    }

    Node *temp1 = new Node;
    Node *temp2 = front;

    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
    temp1->back = temp2;
    dequeLength++;
}

Node *Deque ::View_Front()
{
    return front;
}

QString Deque ::Remove_Front()
{
    if (MyList.get_head() == NULL)
    {
        return "NO";
    }
    else
    {
        Node *temp2 = MyList.get_head();
        MyList.get_head() = temp2->next;
        (temp2->next)->back = NULL;
        QString inf = temp2->info;
        delete temp2;
        temp2 = nullptr;
        dequeLength--;
        return inf;
    }
}

QString Deque ::Remove_Rear()
{
    Node *temp;
    if (rear == nullptr)
        return "NO";
    temp = rear;
    rear = rear->back;

    if (rear != nullptr)
        rear->next = nullptr;
    else
        front = rear = nullptr;
    QString inf = temp->info;
    delete temp;
    dequeLength--;
    return inf;
}

Node *Deque ::View_Rear()
{
    return rear;
}
