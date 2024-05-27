#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertatfront(node *&h, node *&t, int d)
{
    node *n = new node(d);
    if (h == NULL)
    {
        h = t = n;
    }
    else
    {
        n->next = h;
        h = n;
    }
}
void insertatend(node *&t, int d)
{
    node *n = new node(d);
    t->next = n;
}

void printLL(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL\n";
}

int main()
{
    node *head, *tail;
    head = tail = NULL;
    insertatfront(head, tail, 1);
    insertatfront(head, tail, 2);
    insertatfront(head, tail, 3);
    insertatfront(head, tail, 4);
    insertatfront(head, tail, 5);
    insertatend(tail, 20);
    printLL(head);
    return 0;
}