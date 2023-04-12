template <class T>
class Node
{
private:
    T info;
    Node<T> *next, *back;

public:
    Node();

    T get_info();

    Node<T> *get_next();
    Node<T> *get_back();

    void set_info(T info_p);

    void set_next(Node<T> *n);
    void back(Node<T> *n);
    ~Node();
};