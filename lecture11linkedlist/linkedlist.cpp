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

void insertatend(node *&t, node *&h, int d)
{
    node *n = new node(d);
    if (t == NULL)
    {
        h = t = n;
    }
    else
    {
        t->next = n;
        t = t->next;
    }
}

void printll(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL\n";
}

node *mid(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    node *s = head;
    node *f = head->next;

    while (f != NULL and f->next != NULL)
    {
        f = f->next->next;
        s = s->next;
    }
    return s;
}

int main()
{
    node *head, *tail;
    head = tail = NULL;

    insertatend(head, tail, 1);
    insertatend(head, tail, 2);
    insertatend(head, tail, 3);
    insertatend(head, tail, 4);
    insertatend(head, tail, 5);
    printll(head);

    node *x = mid(head);
    if (x != NULL)
        cout << x->data << endl;
    else
        cout << "Mid dont exist\n";
    printll(head);
}