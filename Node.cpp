template <class T>
class LinkedList
{
private:
    Node<T> *head, *tail;

public:
    Node<T> *get_head()
    {
        return head;
    }

    Node<T> *get_tail()
    {
        return tail;
    }
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    ~LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void add(T info_p)
    {
        Node<T> *temp = new Node<T>;
        temp->info = info_p;
        if (head == NULL)
        {
            head = temp;
            tail = head;
        }
        else
        {

            temp->back = tail;
            tail->next = temp;
            temp->next = NULL;
            tail = tail->next;
        }
    }
    void pop(T inf)
    {
        Node<T> *current = head;
        Node<T> *previous = head;
        if (head == NULL)
        {
            cout << "The list is empty";
            return;
        }
        if (current->info == inf)
        {
            head = current->next;
            delete current;
        }

        while (current->info != inf)
        {
            if (current->next == NULL)
            {
                break;
            }

            previous = current;
            current = current->next;
        }
        if (current->info != inf)
        {
            cout << "The popped data is not in the list.\n";
            return;
        }

        previous->next = current->next;
        delete current;
    }
    void display()
    {
        Node<T> *mirror = head;
        if (head == NULL)
        {
            cout << "List is empty.";
        }

        while (mirror != NULL)
        {
            cout << mirror->info << " ";
            mirror = mirror->next;
        }
        cout << endl;
    }
    T sum()
    {
        T sum = NULL;
        Node<T> *mirror = head;
        if (head == NULL)
        {
            cout << "List is empty.";
        }

        while (mirror != NULL)
        {
            sum += mirror->info;
            mirror = mirror->next;
        }
        return sum;
    }
};