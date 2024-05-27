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
int lengthll(node *head)
{
    int ans = 0;
    while (head != NULL)
        head = head->next, ans++;
    return ans;
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
void bubblesort(node *&head)
{
    node *c, *p, *n;
    c = head;
    p = NULL;
    int len = lengthll(head);
    for (int i = 0; i < len - 1; i++)
    {
        c = head;
        p = NULL;
        while (c && c->next)
        {
            n = c->next;
            if (c->data > n->data)
            {
                if (p == NULL)
                {
                    c->next = n->next;
                    n->next = c;
                    head = p = n;
                }
                else
                {
                    c->next = n->next;
                    p->next = n;
                    n->next = c;
                    p = n;
                }
            }
            else
            {
                p = c;
                c = n;
            }
        }
    }
}
int main()
{
    node *head, *tail;
    head = tail = NULL;
    insertatfront(head, tail, 1);
    insertatfront(head, tail, 2);
    insertatfront(head, tail, 7);
    insertatfront(head, tail, 4);
    insertatfront(head, tail, 5);

    printLL(head);
    bubblesort(head);
    printLL(head);
    return 0;
}