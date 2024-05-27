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
node *mergesortllist()
{
    // base case
    if (a == NULL)
        return a;
    if (b == NULL)
        return b;
    // recursive call
    node *nh = NULL;
    if (a->data < b->data)
    {
        nh = a;
        nh->next = mergesortllist(a->next, b);
    }

    else
    {
        nh = b;
        nh->next = mergesortllist(a, b->next);
    }
    return nh;
}
Node *mergeSort(Node *head)
{
    // base case
    if (!head or head->next == NULL)
        return head;

    Node *mid = midNode(head);
    Node *a = head;
    Node *b = mid->next;
    mid->next = NULL;

    a = mergeSort(a);
    b = mergeSort(b);

    Node *c = mergeSortedLL(a, b);
    return c;
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
    insertatfront(head, tail, 6);
    printll(head);

    return 0;
}