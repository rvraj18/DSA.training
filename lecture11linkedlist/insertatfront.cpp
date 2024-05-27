// Online C++ compiler to run C++ program online
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
};
void printll(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
};

int main()
{
    node *head, *tail;
    head = tail = NULL;
    insertatfront(head, tail, 1);
    insertatfront(head, tail, 2);
    insertatfront(head, tail, 3);
    insertatfront(head, tail, 4);
    insertatfront(head, tail, 5);
    insertatfront(head, tail, 6);
    printll(head);

    return 0;
}